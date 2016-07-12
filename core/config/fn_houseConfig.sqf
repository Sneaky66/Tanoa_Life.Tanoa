/*
    File: fn_houseConfig.sqf
    Author: Bryan "Tonic" Boardwine

    Description:
    Master config file for buyable houses?
*/
private["_house"];
_house = [_this,0,"",[""]] call BIS_fnc_param;
if (_house isEqualTo "") exitWith {[]};

/*
    Return Format:
    [price,# of containers allowed]
*/
switch (true) do {
    case (_house in ["Land_House_Big_04_F","Land_House_Big_01_F","Land_House_Big_03_F"]): {[250000,2]};
    case (_house in ["Land_House_Small_06_F","Land_House_Small_02_F","Land_House_Small_05_F","Land_House_Small_03_F","Land_House_Small_04_F"]): {[150000,1]};
    default {[]};
};