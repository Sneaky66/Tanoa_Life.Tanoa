/*
	File: fn_blindfoldRemove.sqf
	Author: John "Paratus" VanderZwet

	Description:
	Removes blindfold from the target
*/
_unit = [_this,3,Objnull,[Objnull]] call BIS_fnc_param;

_unit setVariable ["blindfolded",false];
cursorTarget setVariable ["blindfolded",false];
[true,"blindfold",1] call life_fnc_handleInv;