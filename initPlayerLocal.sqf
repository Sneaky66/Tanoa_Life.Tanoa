#include "script_macros.hpp"
/*
    File: initPlayerLocal.sqf
    Author:

    Description:
    Starts the initialization of the player.
*/
if (!hasInterface && !isServer) exitWith {
    [] call compile PreprocessFileLineNumbers "\life_hc\initHC.sqf";
}; //This is a headless client.

#define CONST(var1,var2) var1 = compileFinal (if (var2 isEqualType "") then {var2} else {str(var2)})
#define LIFE_SETTINGS(TYPE,SETTING) TYPE(missionConfigFile >> "Life_Settings" >> SETTING)

CONST(BIS_fnc_endMission,BIS_fnc_endMission);
if (LIFE_SETTINGS(getNumber,"spyGlass_toggle") isEqualTo 1) then {[] execVM "SpyGlass\fn_initSpy.sqf";};

[] execVM "core\init.sqf";
pb_positionen = [[12196.7,13975.8,0.00143433],[12150.5,13954.4,0.00146484],[12166.4,13962.4,0.00144482],[12191.8,13957.1,0.00143909],[12176.6,13976.9,0.00143909],[12185.1,13992.6,0.00143909],[12206.5,13957.9,0.00142097],[12163.2,13943.2,0.0014267],[12149.5,13963.7,0.00142097],[12165.2,13978.9,0.00143528]];
joinmode = 0;
