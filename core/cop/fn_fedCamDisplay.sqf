#include "..\..\script_macros.hpp"
/*
    File: fn_fedCamDisplay.sqf
    Author: Bryan "Tonic" Boardwine

    Description:
    Turns on and displays a security cam like feed via PiP to the laptop display.
*/
_laptop = _this select 0;
_mode = _this select 3;

if (!isPiPEnabled) exitWith {hint localize "STR_Cop_EnablePiP";};
if (isNil "life_fed_scam") then {
    life_fed_scam = "camera" camCreate [0,0,0];
    life_fed_scam camSetFov 0.5;
    life_fed_scam camCommit 0;
    "rendertarget0" setPiPEffect [0];
    life_fed_scam cameraEffect ["INTERNAL", "BACK", "rendertarget0"];
    _laptop setObjectTexture [0,"#(argb,256,256,1)r2t(rendertarget0,1.0)"];
};

switch (_mode) do {
    case "side": {
        life_fed_scam camSetPos [7361.89,7574.58,4.55742];
        life_fed_scam camSetTarget [7382.86,7579.15,-0.00294828];
        life_fed_scam camCommit 0;
    };

    case "vault": {
        life_fed_scam camSetPos [7378.63,7578.07,9.97826];
        life_fed_scam camSetTarget [7359.7,7574.6,0.00143862];
        life_fed_scam camCommit 0;
    };

    case "front": {
        life_fed_scam camSetPos [7325.53,7633.74,26.1153] ;
        life_fed_scam camSetTarget [7358,7603.06,-0.00160408];
        life_fed_scam camCommit 0;
    };

    case "back": {
        life_fed_scam camSetPos [7353.46,7524.03,16.1656];
        life_fed_scam camSetTarget [7372.05,7548.45,0.0016017];
        life_fed_scam camCommit 0;
    };

    case "off" :{
        life_fed_scam cameraEffect ["terminate", "back"];
        camDestroy life_fed_scam;
        _laptop setObjectTexture [0,""];
        life_fed_scam = nil;
    };
};
