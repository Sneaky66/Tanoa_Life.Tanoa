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

// Clean Up Players
[
	5*60, // seconds to delete dead bodies (0 means don't delete) 
	5*60, // seconds to delete dead vehicles (0 means don't delete)
	0, // seconds to delete dropped weapons (0 means don't delete)
	0, // seconds to deleted planted explosives (0 means don't delete)
	0 // seconds to delete dropped smokes/chemlights (0 means don't delete)
] execVM "sc\repetitive_cleanup.sqf";