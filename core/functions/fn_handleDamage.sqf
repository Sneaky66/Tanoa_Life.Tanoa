#include "..\..\script_macros.hpp"
/*
    File: fn_handleDamage.sqf
    Author: Bryan "Tonic" Boardwine

    Description:
    Handles damage, specifically for handling the 'tazer' pistol and nothing else.
*/
params [
    ["_unit",objNull,[objNull]],
    ["_part","",[""]],
    ["_damage",0,[0]],
    ["_source",objNull,[objNull]],
    ["_projectile","",[""]],
    ["_index",0,[0]]
];

//Handle the tazer first (Top-Priority).
if (!isNull _source) then {
    if (_source != _unit) then {
        if (currentWeapon _source in ["hgun_P07_snds_F","arifle_SDAR_F"] && _projectile in ["B_9x21_Ball","B_556x45_dual"]) then {
            if (side _source isEqualTo west && playerSide isEqualTo civilian) then {
                _damage = 0;
                if (alive player && !life_istazed && !life_isknocked && !(_unit getVariable ["restrained",false])) then {
                    private["_distance"];
                    _distance = 35;
                    if (_projectile == "B_556x45_dual") then {_distance = 100;};
                    if (_unit distance _source < _distance) then {
                        if (vehicle player != player) then {
                            if (typeOf (vehicle player) == "B_Quadbike_01_F") then {
                                player action ["Eject",vehicle player];
                                [_unit,_source] spawn life_fnc_tazed;
                            };
                        } else {
                            [_unit,_source] spawn life_fnc_tazed;
                        };
                    };
                };
            };

            //Temp fix for super tasers on cops.
            if (side _source isEqualTo west && (playerSide isEqualTo west || playerSide isEqualTo independent)) then {
                _damage = 0;
            };
        };
		//Rubber bullets
		if(!isNull _source) then {
		if(_source != _unit) then {
		_curMag = currentMagazine _source;
		if (_curMag in ["10Rnd_50BW_Mag_F"] && _projectile in ["B_50BW_Ball_F"]) then {
		if((side _source == west && playerSide != west)) then {
		private["_isVehicle","_isQuad"];	
		_isVehicle = if(vehicle player != player) then {true} else {false};
		_isQuad = if(_isVehicle) then {if(typeOf(vehicle player) == "B_Quadbike_01_F") then {true} else {false}} else {false};
		_damage = false;
		if(_isVehicle || _isQuad) then {
		player action ["Eject",vehicle player];
		[_unit,_source] spawn life_fnc_handleDowned;
		} else {
		[_unit,_source] spawn life_fnc_handleDowned;
			};
		};
		if(side _source == west && playerSide == west) then {
		_damage = false;
					};
				};
			};
		};
    };
};
	//VDM Report And ADD
	if ((isPlayer _source) && (vehicle _source != _source)) then {
	if(_part == "body" && (player getVariable["limit",true]) && (side _source == civilian)) then {
	player setVariable ["limit",false];
	[_source] spawn {
	_driver = _this select 0;
	[0,format["%1 just ran over %2!", name _driver, name player]] remoteExec ["life_fnc_broadcast",0];
	sleep(10);
	player setVariable ["limit",true];
		};
	};				
	_damage = getDammage player;
};

[] spawn life_fnc_hudUpdate;
_damage;
