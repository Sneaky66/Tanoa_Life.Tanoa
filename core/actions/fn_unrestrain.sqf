#include "..\..\script_macros.hpp"
/*
    File: fn_unrestrain.sqf
    Author:

    Description:

*/
private["_unit"];
_unit = param [0,objNull,[objNull]];
if (isNull _unit || !(_unit getVariable ["restrained",false])) exitWith {}; //Error check?

switch (playerSide) do 
{
    case west:
	{
	    _unit setVariable ["restrained",false,true];
		_unit setVariable ["Escorting",false,true];
		_unit setVariable ["transporting",false,true];
		detach _unit;
		[0,"STR_NOTF_Unrestrain",true,[_unit getVariable ["realname",name _unit], profileName]] remoteExecCall ["life_fnc_broadcast",west];
	};
	
	case civilian:
	{
	    if(life_inv_handcuffs > 0) then 
        {
            life_inv_handcuffs = life_inv_handcuffs + 0;
        } else {
            [true,"handcuffs",0] call life_fnc_handleInv;
	        _unit setVariable["restrained",FALSE,TRUE];
            _unit setVariable["Escorting",FALSE,TRUE];
            _unit setVariable["transporting",FALSE,TRUE];
            detach _unit;
			[0,"STR_NOTF_Unrestrain",true,[_unit getVariable ["realname",name _unit], profileName]] remoteExecCall ["life_fnc_broadcast",west];
		};
    };
	
	case independent: {};
};