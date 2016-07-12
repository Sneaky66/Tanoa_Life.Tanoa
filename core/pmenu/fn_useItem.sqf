#include "..\..\script_macros.hpp"
/*
    File: fn_useItem.sqf
    Author: Bryan "Tonic" Boardwine

    Description:
    Main function for item effects and functionality through the player menu.
*/
private "_item";
disableSerialization;
if ((lbCurSel 2005) isEqualTo -1) exitWith {hint localize "STR_ISTR_SelectItemFirst";};
_item = CONTROL_DATA(2005);

switch (true) do {
    case (_item in ["waterBottle","coffee","redgull"]): {
        if ([false,_item,1] call life_fnc_handleInv) then {
            life_thirst = 100;
            if (LIFE_SETTINGS(getNumber,"enable_fatigue") isEqualTo 1) then {player setFatigue 0;};
            if (_item isEqualTo "redgull" && {LIFE_SETTINGS(getNumber,"enable_fatigue") isEqualTo 1}) then {
                [] spawn {
                    life_redgull_effect = time;
                    titleText[localize "STR_ISTR_RedGullEffect","PLAIN"];
                    player enableFatigue false;
                    waitUntil {!alive player || ((time - life_redgull_effect) > (3 * 60))};
                    player enableFatigue true;
                };
            };
        };
    };

    case (_item isEqualTo "boltcutter"): {
        [cursorObject] spawn life_fnc_boltcutter;
        closeDialog 0;
    };

    case (_item isEqualTo "blastingcharge"): {
        player reveal fed_bank;
        (group player) reveal fed_bank;
        [cursorObject] spawn life_fnc_blastingCharge;
        closeDialog 0;
    };

    case (_item isEqualTo "defusekit"): {
        [cursorObject] spawn life_fnc_defuseKit;
        closeDialog 0;
    };

    case (_item isEqualTo "storagesmall"): {
        [false] call life_fnc_storageBox;
    };

    case (_item isEqualTo "storagebig"): {
        [true] call life_fnc_storageBox;
    };

    case (_item isEqualTo "weddingring"):	{
        if( life_married != "-2" ) then {
        if(([false,_item,1] call life_fnc_handleInv)) then { hint "Awesome! Someone wants to marry you! You get 5000$ from the government - we wish you all the best!";
        life_cash = life_cash + 5000;

        if(life_married == "-1") then {
        life_married = "someone";
        };
        [0,format["%1 just married %2! That is great isn't it? We wish you good luck!",profileName, life_married]] remoteExec ["life_fnc_broadcast",nil];
        life_married = "-2";
        };
        } else {
        hint "You can't marry twice! What do you think who you are?";
	     };
    };

    case (_item isEqualTo "spikeStrip"): {
        if (!isNull life_spikestrip) exitWith {hint localize "STR_ISTR_SpikesDeployment"; closeDialog 0};
        if ([false,_item,1] call life_fnc_handleInv) then {
            [] spawn life_fnc_spikeStrip;
            closeDialog 0;
        };
    };

    case (_item isEqualTo "fuelFull"): {
        if (vehicle player != player) exitWith {hint localize "STR_ISTR_RefuelInVehicle"};
        [] spawn life_fnc_jerryRefuel;
        closeDialog 0;
    };

    case (_item isEqualTo "fuelEmpty"): {
        [] spawn life_fnc_jerryCanRefuel;
        closeDialog 0;
    };

	case (_item isEqualTo "handcuffs"): {
		hint localize "STR_ISTR_handcuff";
	};

    case (_item isEqualTo "lockpick"): {
        [] spawn life_fnc_lockpick;
        closeDialog 0;
    };

	case (_item isEqualTo "marijuana"):
	{
	if ([false,_item,1] call life_fnc_handleInv) then {
        [] spawn life_fnc_weed;
		};
	};

	case (_item isEqualTo "heroin_processed"):
	{
		if ([false,_item,1] call life_fnc_handleInv) then {
			[] spawn life_fnc_heroin;
		};
	};

	case (_item isEqualTo "cocaine_processed"):
	{
		if ([false,_item,1] call life_fnc_handleInv) then {
			[] spawn life_fnc_cocaine;
		};
	};

	case (_item isEqualTo "jaws"):
	{
		if ([false,_item,1] call life_fnc_handleInv) then {
			[] spawn life_fnc_jaws;
		};
	};

	case (_item isEqualTo "fire"):
	{
		if ([false,_item,1] call life_fnc_handleInv) then {
			[] spawn life_fnc_fire;
		};
	};

	case (_item isEqualTo "kidney"):
	{
		if ([false,_item,1] call life_fnc_handleInv) then {
			player setVariable["missingOrgan",false,true];
			life_thirst = 100;
			life_hunger = 100;
			player setFatigue .5;
		};
	};

    case (_item in ["apple","rabbit","salema","ornate","mackerel","tuna","mullet","catshark","turtle_soup","hen","rooster","sheep","goat","donuts","tbacon","peach"]): {
        if (!(M_CONFIG(getNumber,"VirtualItems",_item,"edible") isEqualTo -1)) then {
            if ([false,_item,1] call life_fnc_handleInv) then {
                _val = M_CONFIG(getNumber,"VirtualItems",_item,"edible");
                _sum = life_hunger + _val;
                switch (true) do {
                    case (_val < 0 && _sum < 1): {life_hunger = 5;}; //This adds the ability to set the entry edible to a negative value and decrease the hunger without death
                    case (_sum > 100): {life_hunger = 100;};
                    default {life_hunger = _sum;};
                };
            };
        };
    };

    default {
        hint localize "STR_ISTR_NotUsable";
    };
};

[] call life_fnc_p_updateMenu;
[] call life_fnc_hudUpdate;
