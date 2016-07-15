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

//Disable Comand view
sleep 0.5;
dokeyCheck={ private ["_r"] ; 
_r = false ; 
if ((_this select 1) in (actionKeys "TacticalView")) then { hint "Command mode disabled" ; _r=true; }; _r;} ;(FindDisplay 46) displaySetEventHandler [ "keydown", "_this call dokeyCheck" ];
