////////////////////////////////
//// Author: SBUserhy ////
//// native-gamer.net ////
//// Altis Life ////
////////////////////////////////

private["_lightL","_lightR","_lightcolor"];
if(vest player != "V_TacVest_blk_POLICE") exitWith {life_LightisON = false;};
life_LightisON = true;
_lightcolor = [255, 255, 255];
_lightL = "#lightpoint" createVehicle getpos player;
sleep 0.2;
_lightL setLightColor _lightcolor; 
_lightL setLightBrightness 0.1; 
_lightL attachTo [player, [0,0,0],"LeftFoot"];
_lightL setVectorDirAndUp [[1,0,0],[0,1,0]];
_lightL setLightFlareMaxDistance 50;
_lightL setLightUseFlare true;

_lightR = "#lightpoint" createVehicle getpos player;
sleep 0.2;
_lightR setLightColor _lightcolor; 
_lightR setLightBrightness 0.1; 
_lightR attachTo [player, [0,0,0],"RightFoot"];
_lightR setVectorDirAndUp [[1,0,0],[0,1,0]];
_lightR setLightFlareMaxDistance 50;
_lightR setLightUseFlare true;


sleep 60;
deleteVehicle _lightL;
deleteVehicle _lightR;
life_LightisON = false;