While{true} do
{
    "dynamicBlur" ppEffectEnable true;
    "dynamicBlur" ppEffectAdjust [0];
    "dynamicBlur" ppEffectCommit 15;
    resetCamShake;
    20 fadeSound 1;


    waituntil
	{
		((nearestObject [getpos player, "SmokeShellBlue"]) distance player < 15) and (getpos (nearestObject [getpos player, "SmokeShellBlue"]) select 2 < 0.5)
	};

    if (headgear player != "H_CrewHelmetHeli_B" && headgear player != "H_PilotHelmetFighter_O") then
    {

		noesckey = (findDisplay 46) displayAddEventHandler ["KeyDown", "if ((_this select 1) == 1) then { true }"];

        "dynamicBlur" ppEffectEnable true;
        "dynamicBlur" ppEffectAdjust [20];
        "dynamicBlur" ppEffectCommit 3;
        enableCamShake true;
        addCamShake [10, 45, 10];
        player setFatigue 1;
        5 fadeSound 0.1;

    };

    sleep 5;

	(findDisplay 46) displayRemoveEventHandler ["KeyDown", noesckey];
};