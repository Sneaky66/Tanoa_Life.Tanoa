/*
	File: fn_restrainAction.sqf
	Author: Bryan "Tonic" Boardwine

	Description:
	Retrains the target.
*/
private["_unit", "_ziptied"];
_unit = cursorTarget;
if(isNull _unit) exitWith {}; //Not valid
if((_unit getVariable "restrained")) exitWith {};
if(player isEqualTo _unit) exitWith {};
if (side player isEqualTo civilian) then
{
	if(life_inv_handcuffs < 1) then
	{
		_ziptied = false;
	}
	else
	{
		_ziptied = true;
		life_inv_handcuffs = life_inv_handcuffs - 1;
		_unit setVariable["ziptied",true,true];
		hint "You have Cuffed the Civ";
	}
};

if( (!_ziptied) && (side player isEqualTo civilian) ) exitWith { hint "You have no Cuffs."; };
if(!isPlayer _unit) exitWith {};
//Broadcast!
player say3D "cuff";

_unit setVariable["restrained",true,true];
[player] remoteExec ["life_fnc_restrain", _unit];
[0,format["%1 was Cuffed by %2",_unit getVariable["realname", name _unit], profileName]] remoteExec ["life_fnc_broadcast",0];