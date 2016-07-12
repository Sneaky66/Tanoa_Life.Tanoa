#include "..\..\script_macros.hpp"
/*
    File: fn_p_openMenu.sqf
    Author: Bryan "Tonic" Boardwine

    Description:
    Opens the players virtual inventory menu
*/
if (!alive player || dialog) exitWith {}; //Prevent them from opening this for exploits while dead.
createDialog "playerSettings";
disableSerialization;

switch (playerSide) do {
    case west: {
        //ctrlShow[2011,false];
       // ctrlShow[1290,false];
       // ctrlShow[2038,false];
       // ctrlShow[1221,false];
       // ctrlShow[1209,false];
       // ctrlShow[1203,false];
       ctrlShow[11290,false];
       ctrlShow[21038,false];
    };

    case civilian: {
	
    };

    case independent: {
        ctrlShow[2012,false];
        ctrlShow[2011,false];
    };
};

if (FETCH_CONST(life_adminlevel) < 1) then {
    ctrlShow[2020,false];
    ctrlShow[2021,false];
};

[] call life_fnc_p_updateMenu;