/*
    File: init.sqf
    Author: 
    
    Description:
    
*/
StartProgress = false;

[] execVM "briefing.sqf"; //Load Briefing
[] execVM "KRON_Strings.sqf";

StartProgress = true;

introSpawn = nil;
[] spawn life_fnc_autoMessages;

[] execVM "sc\fn_StatusBar.sqf";
[] execVM "sc\fn_intro.sqf";
[] execVM "core\cop\fn_teargas.sqf";



//Access Points
[
    true, /* _useMissionTriggers */
    true, /* _isTravelDelayEnabled */
    10, /* _travelSpeed */
    20 /* _maxTravelDuration */
] execVM "core\ap\fn_init.sqf";
