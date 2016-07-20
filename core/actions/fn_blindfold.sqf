/*
	File: fn_blindfold.sqf
	Author: John "Paratus" VanderZwet

	Description:
	Apply a blindfold to the player
*/
_unit = cursorTarget;
if(!isPlayer _unit || !alive _unit || !(_unit getVariable ["restrained",false])) exitWith {hint "The person is not bound! You can not blindfold them.";};
if(!([false,"blindfold",1] call life_fnc_handleInv)) exitWith {};

systemChat format["You have %1 blindfolded.", name _unit];
[player] remoteExec ["life_fnc_blindfolded",_unit];
