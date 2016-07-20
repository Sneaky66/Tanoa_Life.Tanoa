/*
	File: fn_blindfolded.sqf
	Author: John "Paratus" VanderZwet

	Description:
	Blinds the player when he's restrained
*/
private "_bf";
_unit = param [0,Objnull,[Objnull]];
if (!(player getVariable ["restrained",false])) exitWith {};

systemChat format["Deine Augen wurden von %1 verbunden.", name _unit];
player setVariable ["blindfolded", true, true];
cutText["Du bist blind und kannst nichts sehen.","BLACK FADED"];
0 cutFadeOut 9999999;

_bf = "Land_Bucket_F" createVehicle (getPos player);
_bf attachTo [player,[0,-0.05,0],"Head"];
_bf setVectorUp [0,0,-1];
_bf setVariable ["owner",player,true];
player setVariable ["blindfold", _bf, true];

waitUntil {!(player getVariable ["blindfolded",false])};

player setVariable ["blindfold",nil,true];
deleteVehicle _bf;
0 cutFadeOut 1;