#include "script_macros.hpp"
waitUntil {!(isNull (findDisplay 46))};
disableSerialization;
/*
	File: fn_statusBar.sqf
	Author: Some French Guy named Osef I presume, given the variable on the status bar
	Edited by: [midgetgrimm]
	Description: Puts a small bar in the bottom right of screen to display in-game information
*/
4 cutRsc ["osefStatusBarAdmin","PLAIN"];

[] spawn {
	sleep 5;
	_counter = 240;
	_timeSinceLastUpdate = 0;
	Server_Session = 14400;
	_statusText = "192.223.29.114";
	_gangName = "";
	while {true} do
	{
		TimeTillRestart = Server_Session - ServerTime;
		sleep 1;
		if(isNull ((uiNamespace getVariable "osefStatusBarAdmin")displayCtrl 55554)) then
		{
			diag_log "Statusbar Loaded";
			disableSerialization;
			_rscLayer = "osefStatusBarAdmin" call BIS_fnc_rscLayer;
			_rscLayer cutRsc["osefStatusBarAdmin","PLAIN"];
		};
		if(!isNil {group player getVariable "gang_name"}) then 
		{ 
			_gangName = format["%1",group player getVariable "gang_name"]; 
		}
		else
		{
			_gangName = "";
		};
		_counter = _counter - 1;
		((uiNamespace getVariable "osefStatusBarAdmin")displayCtrl 55554)ctrlSetStructuredText parseText format["<img size='1.0' image='icons\cop.paa'/><t color='#0075FF'>Cops %1</t> | <img size='1.0' image='icons\civ.paa'/><t color='#FFDB00'>Civ %2</t> | <img size='1.0' image='icons\med.paa'/><t color='#008000'>Med %3</t> | <img size='1.0' image='icons\money.paa'/><t color='#56FF00'> %4</t> | <img size='1.0' image='icons\bank.paa'/><t color='#0DB410'> %5</t> | <t color='#FF0000' size='1' font='PuristaSemibold'>Restart: %6</t> | <img size='1.0' image='icons\ts.paa'/><t color='#ffff00'> %7</t> | <img size='1.0' image='icons\gang.paa'/><t color='#9401E7'> %8</t>", west countSide playableUnits, civilian countSide playableUnits, independent countSide playableUnits,[CASH] call life_fnc_numberText,[BANK] call life_fnc_numberText, [TimeTillRestart, "HH:MM:SS"] call BIS_fnc_secondsToString, _statusText,_gangname, _counter];
	}; 
};