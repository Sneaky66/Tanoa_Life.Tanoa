/*
    File: fn_civLoadout.sqf
    Author: Tobias 'Xetoxyc' Sittenauer
    
    Description:
    Loads the civs out with the default gear, with randomized clothing.
*/
private["_handle"];
_handle = [] spawn life_fnc_stripDownPlayer;
waitUntil {scriptDone _handle};

_clothings = ["U_C_Man_casual_2_F","U_C_Man_casual_3_F","U_C_Man_casual_1_F","U_C_man_sport_1_F","U_C_man_sport_3_F","U_C_man_sport_2_F","U_C_Man_casual_4_F"];
player addUniform (selectRandom _clothings);

/* ITEMS */
player addItem "ItemMap";
player assignItem "ItemMap";
player addItem "ItemCompass";
player assignItem "ItemCompass";

[] call life_fnc_playerSkins;
[] call life_fnc_saveGear;