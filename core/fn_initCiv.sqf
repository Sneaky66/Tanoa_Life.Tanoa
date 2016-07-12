#include "..\script_macros.hpp"
/*
    File: fn_initCiv.sqf
    Author: Bryan "Tonic" Boardwine

    Description:
    Initializes the civilian.
*/
private["_spawnPos"];
civ_spawn_1 = nearestObjects[getMarkerPos  "civ_spawn_1", ["Land_School_01_F","Land_Shop_City_01_F","Land_Shop_City_02_F","Land_Shop_Town_01_F","Land_Shop_Town_03_F","Land_Shop_City_04_F","Land_Shop_City_05_F"],250];
civ_spawn_2 = nearestObjects[getMarkerPos  "civ_spawn_2", ["Land_School_01_F","Land_Shop_City_01_F","Land_Shop_City_02_F","Land_Shop_Town_01_F","Land_Shop_Town_03_F","Land_Shop_City_04_F","Land_Shop_City_05_F"],250];
civ_spawn_3 = nearestObjects[getMarkerPos  "civ_spawn_3", ["Land_School_01_F","Land_Shop_City_01_F","Land_Shop_City_02_F","Land_Shop_Town_01_F","Land_Shop_Town_03_F","Land_Shop_City_04_F","Land_Shop_City_05_F"],250];
civ_spawn_4 = nearestObjects[getMarkerPos  "civ_spawn_4", ["Land_School_01_F","Land_Shop_City_01_F","Land_Shop_City_02_F","Land_Shop_Town_01_F","Land_Shop_Town_03_F","Land_Shop_City_04_F","Land_Shop_City_05_F"],250];
waitUntil {!(isNull (findDisplay 46))};
if (life_is_alive && !life_is_arrested) then {
    /* Spawn at our last position */
    player setVehiclePosition [life_civ_position, [], 0, "CAN_COLLIDE"];
} else {
    if (!life_is_alive && !life_is_arrested) then {
        if (LIFE_SETTINGS(getNumber,"save_civilian_positionStrict") isEqualTo 1) then {
            _handle = [] spawn life_fnc_civLoadout;
            waitUntil {scriptDone _handle};
            CASH = 0;
            [0] call SOCK_fnc_updatePartial;
        };
        [] call life_fnc_spawnMenu;
        waitUntil{!isNull (findDisplay 38500)}; //Wait for the spawn selection to be open.
        waitUntil{isNull (findDisplay 38500)}; //Wait for the spawn selection to be done.
    } else {
        if (life_is_arrested) then {
            life_is_arrested = false;
            [player,true] spawn life_fnc_jail;
        };
    };
};
life_is_alive = true;
//Donator Pay
if ((FETCH_CONST(life_donorlevel) > 0) && (FETCH_CONST(life_donorlevel) < 7)) then
{
	//systemChat "*Pay Based On your Rank*";
	life_paycheck = life_paycheck + 1000 + (FETCH_CONST(life_donorlevel)*1000);
};
player addRating 9999999;