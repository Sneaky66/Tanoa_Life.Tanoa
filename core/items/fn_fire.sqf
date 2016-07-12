/*
Authur: Lugnutz Studios
*/


// check to see if it is a vehicle
private["_curTarget","_distance","_isVehicle","_FR"];
_curTarget = cursorTarget;
if(isNull _curTarget) exitWith {}; //Bad type
_distance = ((boundingBox _curTarget select 1) select 0) + 6;
if(player distance _curTarget > _distance) exitWith {}; //Too far
//_isVehicle = if((_curTarget isKindOf "LandVehicle") OR (_curTarget isKindOf "Ship") OR (_curTarget isKindOf "Air")) then {true} else {false};
//More error checks
if(!_isVehicle && !isPlayer _curTarget) exitWith {};
if(!_isVehicle && !(_curTarget getVariable["restrained",false])) exitWith {};

//adds the FireExtinguisher to the players left hand
fireext = {
_FR = "Land_FireExtinguisher_f" createVehicle position player;  
_FR attachTo [player, [0, 0,-.25], "LeftHand"]; 
_FR setVectorDirAndUp[[1,0,0],[0,0,1]];
};





if(!alive _curTarget) then{

call fireext;
sleep 0.5;

sleep 5.5;
deleteVehicle _FR;
deleteVehicle _curTarget;

}

