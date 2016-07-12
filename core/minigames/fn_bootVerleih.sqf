/*
  File: fn_bootVerleih.sqf
  Author: DeadP4xel for SealDrop

  Description:
  Titel :]
*/
private["_price","_boote","_duration","_className","_verleihAction","_player","_vPlayer","_spawnPoint","_timeKeeper"];

// CONFIG & VARIABLEN \\
_price = 5000;
_boote = ["C_Boat_Civil_01_rescue_F","C_Boat_Civil_01_F"];
_duration = (15 * 60);
_className = _boote select floor random count _boote;
_player = player;
_vPlayer = vehicle player;
_spawnPoint = "bootVerleih_spawn";
_timeKeeper = 1;

// Error checks
if(playerSide != civilian) exitWith {hintSilent "You're not a civilian!"};
if(!alive player) exitWith {};
if(_price > life_cash) exitWith {hintSilent format["You have not enough money with you ! You are missing : %1 Cash",_price - life_cash]};
if(license_civ_boat) exitWith {hintSilent "You have no license!"};
if(life_bootVerleihInUse) exitWith {hintSilent "You can simultaneously only have one boat rental!"};

_verleihAction = [format["Do you want to rent a boat for %1 minutes ? This will cost you %2",[(_duration),"MM"] call BIS_fnc_secondsToString,_price],"Boat rentals Tanoa",localize "STR_Global_YES",localize "STR_Global_NO"] call BIS_fnc_guiMessage;
if(_verleihAction) then {
  hintSilent "The purchase was successful your boat is Loading!";
  life_bootVerleihInUse = true;
  uiSleep 2;
  // Start Boat spawn
  life_cash = life_cash - _price;
  _vehicle = createVehicle [_className, (getMarkerPos _spawnPoint), [], 0, "NONE"];
  waitUntil {!isNil "_vehicle"};
  _vehicle allowDamage false; // Temp no damage
  _vehicle setPos (getMarkerPos _spawnPoint);
  _vehicle setDir (markerDir _spawnPoint);
  _vehicle engineOn true;
  _vehicle lock 2;
  _vehicle allowDamage true; // Can take damage now
  // Prepare the Player now
  _player allowDamage false; // Temp no damage
  _player moveInDriver _vehicle;
  _player allowDamage true; // Can take damage
  _player setDamage 0;
  hintSilent format["Your boat is now ready! You now have %1 minutes of Boating time! We wish you a lot of fun!",[(_duration),"MM"] call BIS_fnc_secondsToString];
  // Danke an KiloSwiss für den "TimeKeeper" <3
  if(_timeKeeper == 1) then {
    _timeKeeper = 0;
    _wait = time + _duration;
    waitUntil {uiSleep 5; time >= _wait};
    _timeKeeper = 1;
    life_bootVerleihDone = true;
    life_bootVerleihInUse = false;
  };
  // The time is over..
  if(life_bootVerleihDone) then {
    _vPlayer allowDamage false; // Temp no damage
    uiSleep 0.2;
    deleteVehicle _vPlayer;
    _player setPos (getMarkerPos "boatrentTimeOver");
    uiSleep 1;
    _player allowDamage true; // Can take damage
    _player setDamage 0; // Just for case
    hintSilent "We hope you had fun with your boat! We look forward to your next visit!";
  };
};