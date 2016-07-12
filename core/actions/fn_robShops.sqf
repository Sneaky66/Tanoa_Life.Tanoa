/*
file: fn_robShops.sqf
Author: MrKraken
Made from MrKrakens bare-bones shop robbing tutorial on www.altisliferpg.com forums
Description:
Executes the rob shob action!
Idea developed by PEpwnzya v1.0
*/
private["_robber","_shop","_kassa","_ui","_progress","_pgText","_cP","_rip","_pos"];
_shop = [_this,0,ObjNull,[ObjNull]] call BIS_fnc_param; //The object that has the action attached to it is _this. ,0, is the index of object, ObjNull is the default should there be nothing in the parameter or it's broken
_robber = [_this,1,ObjNull,[ObjNull]] call BIS_fnc_param; //Can you guess? Alright, it's the player, or the "caller". The object is 0, the person activating the object is 1
_action = [_this,2] call BIS_fnc_param;//Action name

if(side _robber != civilian) exitWith { hint "You can not rob this station!" };
if(_robber distance _shop > 5) exitWith { hint "You need to be within 5m of the cashier to rob him!" };

if (vehicle player != _robber) exitWith { hint "Get out of your vehicle!" };

if !(alive _robber) exitWith {};
if (currentWeapon _robber == "") exitWith { hint "HaHa, you do not threaten me! Get out of here you hobo!" };

_rip = true;
_kassa = 3000 + round(random 12000);
//remove the ability to rob this shop again for x seconds for all civilians
[_shop,_action,300] remoteExec ["life_fnc_shopRobbed",civilian];
_chance = random(100);
if(_chance >= 85) then {[1,format["ALARM! - Gasstation: %1 is being robbed!", _shop]] remoteExec ["life_fnc_broadcast",west]; };


_cops = (west countSide playableUnits);
if(_cops < 1) exitWith{[[_vault,-1],"disableSerialization;",false,false] spawn life_fnc_MP; hint "There isnt enough Police to rob gas station!";};
//Setup our progress bar.
disableSerialization;
5 cutRsc ["life_progress","PLAIN"];
_ui = uiNameSpace getVariable "life_progress";
_progress = _ui displayCtrl 38201;
_pgText = _ui displayCtrl 38202;
_pgText ctrlSetText format["Robbery in Progress, stay close (3m) (1%1)...","%"];
_progress progressSetPosition 0.01;
_cP = 0.01;

if(_rip) then
{
	while{true} do
	{
		sleep 0.85;
		_cP = _cP + 0.01;
		_progress progressSetPosition _cP;
		_pgText ctrlSetText format["Robbery in Progress, stay close (3m) (%1%2)...",round(_cP * 100),"%"];

		if(_cP >= 1) exitWith {};
		if(_robber distance _shop > 3.5) exitWith { };
		if!(alive _robber) exitWith {};
	};
	if!(alive _robber) exitWith { _rip = false; };
	if(_robber distance _shop > 3.5) exitWith {
		_shop switchMove "";
		hint "You need to stay within 3m to Rob registry! - Now the registry is locked.";
		5 cutText ["","PLAIN"];
		_rip = false;
		[getPlayerUID _robber,_robber getVariable ["realname",name _robber],"211"] remoteExecCall ["life_fnc_wantedAdd",RSERV];
	};
	5 cutText ["","PLAIN"];

	titleText[format["You have stolen $%1, now get away before the cops arrive!",[_kassa] call life_fnc_numberText],"PLAIN"];
	life_cash = life_cash + _kassa;
[1,format["911 - Gasstation: %1 was just robbed by %2 for a total of $%3", _shop, _robber getVariable["realname",name _robber], [_kassa] call life_fnc_numberText]] remoteExec ["life_fnc_broadcast",west];
	_rip = false;
	life_use_atm = false;
	sleep (10);
	life_use_atm = true;
	if!(alive _robber) exitWith {};
[1,format["NEWS: Gasstation: %1 was just robbed for a total of $%2", _shop, [_kassa] call life_fnc_numberText]] remoteExec ["life_fnc_broadcast",civilian];
[getPlayerUID _robber,_robber getVariable ["realname",name _robber],"211"] remoteExecCall ["life_fnc_wantedAdd",RSERV];
call SOCK_fnc_updatePartial;
};
