/*
	Author:LDG Dev Team
*/
private["_PS","_OBJ"];

closeDialog 0;
hint "Winners don't use drugs !";
sleep 3;

<<<<<<< HEAD
_PS = _this select 0;
_OBJ = _this select 1;
=======
//Activate ppEffects we need
"chromAberration" ppEffectEnable true;
"radialBlur" ppEffectEnable true;
enableCamShake true;
_smoke = "SmokeShellGreen" createVehicle position player;
if (vehicle player != player) then
    {
        _smoke attachTo [vehicle player, [-0.6,-1,0]];
    }
    else
    {
        _smoke attachTo [player, [0,-0.1,1.5]];
    };
    
//Let's go for 45secs of effetcs
for "_i" from 0 to 44 do
{
    "chromAberration" ppEffectAdjust [random 0.25,random 0.25,true];
    "chromAberration" ppEffectCommit 1;   
    "radialBlur" ppEffectAdjust  [random 0.02,random 0.02,0.15,0.15];
    "radialBlur" ppEffectCommit 1;
    addcamShake[random 3, 1, random 3];
    sleep 1;
};

//Stop effects
"chromAberration" ppEffectAdjust [0,0,true];
"chromAberration" ppEffectCommit 5;
"radialBlur" ppEffectAdjust  [0,0,0,0];
"radialBlur" ppEffectCommit 5;
sleep 6;
>>>>>>> origin/master

_PS setParticleCircle [0, [0, 0, 0]];
_PS setParticleRandom [0, [0.25, 0.25, 0], [0.175, 0.175, 0], 0, 0.25, [0, 0, 0, 0.1], 0, 0];
_PS setParticleParams [["\A3\data_f\missileSmoke", 1, 0, 1], "", "Billboard", 1, 2, [0, 0, 2], [0, 0.1, 0.2], 0, 0.006, 0.005, 0.005, [1.2, 2, 4], [[0.1, 0.1, 0.1, 1], [0.25, 0.25, 0.25, 0.5], [0.5, 0.5, 0.5, 0]], [0.08], 1, 0, "", "", _OBJ];
_PS setDropInterval 0.05;