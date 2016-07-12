/*
*    Format:
*        level: ARRAY (This is for limiting items to certain things)
*            0: Variable to read from
*            1: Variable Value Type (SCALAR / BOOL / EQUAL)
*            2: What to compare to (-1 = Check Disabled)
*            3: Custom exit message (Optional)
*
*    items: { Classname, Itemname, BuyPrice, SellPrice }
*
*    Itemname only needs to be filled if you want to rename the original object name.
*
*    Weapon classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Weapons
*    Item classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Items
*
*/
class WeaponShops {
    //Armory Shops
    class gun {
        name = "Billy Joe's Firearms";
        side = "civ";
        license = "gun";
        level[] = { "", "", -1, "" };
        items[] = {
            { "hgun_Rook40_F", "", 6500, 3500 },
			{ "hgun_Pistol_01_F", "", 6500, 3500 },
            { "hgun_Pistol_heavy_02_F", "", 9850, 3850 },
            { "hgun_ACPC2_F", "", 11500, 5500 },
            { "hgun_PDW2000_F", "", 20000, 10000 },
			{ "arifle_AKS_F", "", 40000, 30000 },
			{ "arifle_Mk20_F", "", 20000, 10000 },
			{ "SMG_05_F", "", 15000, 10000 },
			{ "arifle_SPAR_01_blk_F", "", 45000, 35000 },
			{ "arifle_SPAR_01_khk_F", "", 45000, 35000 },
			{ "arifle_SPAR_01_snd_F", "", 45000, 35000 },
			{ "arifle_SPAR_02_blk_F", "", 65000, 45000 },
			{ "arifle_SPAR_02_khk_F", "", 65000, 45000 },
			{ "arifle_SPAR_02_snd_F", "", 65000, 45000 }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 25 },
            { "6Rnd_45ACP_Cylinder", "", 50 },
            { "9Rnd_45ACP_Mag", "", 45 },
            { "30Rnd_9x21_Mag", "", 75 },
			{ "30Rnd_545x39_Mag_F", "", 75 },
			{ "30Rnd_556x45_Stanag", "", 75 },
			{ "30Rnd_9x21_Mag_SMG_02", "", 75 },
			{ "150Rnd_556x45_Drum_Mag_F", "", 75 }
        };
        accs[] = {
            { "optic_ACO_grn_smg", "", 2500 },
			{ "optic_Aco_smg", "", 2500 },
			{ "optic_Arco_blk_F", "", 2500 },
			{ "optic_Arco_ghex_F", "", 2500 },
			{ "optic_ERCO_blk_F", "", 2500 },
			{ "optic_ERCO_khk_F", "", 2500 },
			{ "optic_ERCO_snd_F", "", 2500 },
			{ "optic_Holosight", "", 2500 },
			{ "optic_Holosight_blk_F", "", 2500 },
			{ "optic_Holosight_khk_F", "", 2500 },
			{ "optic_SOS", "", 2500 },
			{ "optic_SOS_khk_F", "", 2500 },
			{ "optic_MRCO", "", 2500 },
			{ "optic_Hamr", "", 2500 },
			{ "optic_Hamr_khk_F", "", 2500 },
			{ "muzzle_snds_M", "", 6500 },
			{ "muzzle_snds_m_khk_F", "", 6500 },
			{ "muzzle_snds_m_snd_F", "", 6500 },
			{ "muzzle_snds_L", "", 6500 }
        };
    };

    class rebel {
        name = "Mohammed's Jihadi Shop";
        side = "civ";
        license = "rebel";
        level[] = { "", "", -1, "" };
        items[] = {
            { "arifle_TRG20_F", "", 25000, 2500 },
            { "arifle_Katiba_F", "", 30000, 5000 },
            { "srifle_DMR_01_F", "", 50000, -1 },
            { "arifle_SDAR_F", "", 20000, 7500 },
            { "arifle_AK12_F", "", 20000, 7500 },
            { "arifle_AKM_F", "", 20000, 7500 },
            { "srifle_DMR_04_F", "", 50000, 7500 },
            { "srifle_DMR_07_blk_F", "", 40000, 7500 },
            { "srifle_DMR_07_ghex_F", "", 40000, 7500 },
            { "srifle_DMR_07_hex_F", "", 40000, 7500 },
            { "srifle_DMR_05_blk_F", "", 30000, 7500 },
            { "srifle_DMR_05_hex_F", "", 30000, 7500 },
            { "srifle_DMR_05_tan_f", "", 30000, 7500 },
            { "srifle_DMR_02_F", "", 30000, 7500 },
            { "srifle_DMR_02_camo_F", "", 30000, 7500 },
            { "srifle_DMR_02_sniper_F", "", 30000, 7500 },
            { "srifle_DMR_03_F", "", 30000, 7500 },
            { "srifle_DMR_03_multicam_F", "", 30000, 7500 },
            { "srifle_DMR_03_khaki_F", "", 30000, 7500 },
            { "srifle_DMR_03_tan_F", "", 30000, 7500 },
            { "srifle_DMR_03_woodland_F", "", 30000, 7500 },
            { "srifle_DMR_06_camo_F", "", 40000, 7500 },
            { "srifle_DMR_06_olive_F", "", 40000, 7500 },
            { "arifle_SPAR_03_blk_F", "", 40000, 7500 },
            { "arifle_SPAR_03_khk_F", "", 40000, 7500 },
            { "arifle_SPAR_03_snd_F", "", 40000, 7500 }
        };
        mags[] = {
            { "30Rnd_556x45_Stanag", "", 300 },
            { "30Rnd_65x39_caseless_green", "", 275 },
            { "10Rnd_762x54_Mag", "", 500 },
            { "20Rnd_556x45_UW_mag", "", 125 },
            { "30Rnd_762x39_Mag_F", "", 125 },
            { "10Rnd_127x54_Mag", "", 125 },
            { "20Rnd_650x39_Cased_Mag_F", "", 125 },
            { "10Rnd_93x64_DMR_05_Mag", "", 125 },
            { "10Rnd_338_Mag", "", 125 },
            { "20Rnd_762x51_Mag", "", 125 },
            { "20Rnd_762x51_Mag", "", 125 }
        };
        accs[] = {
            { "optic_ACO_grn_smg", "", 2500 },
			{ "optic_Aco_smg", "", 2500 },
			{ "optic_Arco_blk_F", "", 2500 },
			{ "optic_Arco_ghex_F", "", 2500 },
			{ "optic_ERCO_blk_F", "", 2500 },
			{ "optic_ERCO_khk_F", "", 2500 },
			{ "optic_ERCO_snd_F", "", 2500 },
			{ "optic_Holosight", "", 2500 },
			{ "optic_Holosight_blk_F", "", 2500 },
			{ "optic_Holosight_khk_F", "", 2500 },
			{ "optic_SOS", "", 2500 },
			{ "optic_SOS_khk_F", "", 2500 },
			{ "optic_MRCO", "", 2500 },
			{ "optic_Hamr", "", 2500 },
			{ "optic_Hamr_khk_F", "", 2500 },
			{ "muzzle_snds_M", "", 6500 },
			{ "muzzle_snds_m_khk_F", "", 6500 },
			{ "muzzle_snds_m_snd_F", "", 6500 },
			{ "muzzle_snds_L", "", 6500 }
        };
    };

    class gang {
        name = "Hideout Armament";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "hgun_Rook40_F", "", 1500, 500 },
            { "hgun_Pistol_heavy_02_F", "", 2500, -1 },
            { "hgun_ACPC2_F", "", 4500, -1 },
            { "hgun_PDW2000_F", "", 9500, -1 }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 25 },
            { "6Rnd_45ACP_Cylinder", "", 50 },
            { "9Rnd_45ACP_Mag", "", 45 },
            { "30Rnd_9x21_Mag", "", 75 }
        };
        accs[] = {
            { "optic_ACO_grn_smg", "", 950 }
        };
    };

    //Basic Shops
    class genstore {
        name = "Altis General Store";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "Binocular", "", 150, -1 },
            { "ItemGPS", "", 100, 45 },
            { "ItemMap", "", 50, 35 },
            { "ItemCompass", "", 50, 25 },
            { "ItemWatch", "", 50, -1 },
            { "FirstAidKit", "", 150, 65 },
            { "O_NVGoggles_ghex_F", "", 2000, 980 },
            { "O_NVGoggles_hex_F", "", 2000, 980 },
            { "O_NVGoggles_urb_F", "", 2000, 980 },
            { "NVGogglesB_blk_F", "", 2000, 980 },
            { "NVGogglesB_grn_F", "", 2000, 980 },
            { "NVGogglesB_gry_F", "", 2000, 980 },
            { "NVGoggles_tna_F", "", 2000, 980 },
            { "NVGoggles", "", 2000, 980 },
            { "Chemlight_red", "", 300, -1 },
            { "Chemlight_yellow", "", 300, 50 },
            { "Chemlight_green", "", 300, 50 },
            { "Chemlight_blue", "", 300, 50 }
        };
        mags[] = {};
        accs[] = {};
    };

    class f_station_store {
        name = "Altis Fuel Station Store";
        side = "";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "Binocular", "", 750, -1 },
            { "ItemGPS", "", 500, 45 },
            { "ItemMap", "", 250, 35 },
            { "ItemCompass", "", 250, 25 },
            { "FirstAidKit", "", 750, 65 },
            { "NVGoggles", "", 10000, 980 },
            { "Chemlight_red", "", 1500, -1 },
            { "Chemlight_yellow", "", 1500, 50 },
            { "Chemlight_green", "", 1500, 50 },
            { "Chemlight_blue", "", 1500, 50 }
        };
        mags[] = {};
        accs[] = {};
    };

    //Cop Shops
    class cop_basic {
        name = "Altis Pub Cop Shop";
        side = "cop";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "arifle_sdar_F", "Taser Rifle", 20000, 7500 },
            { "hgun_P07_snds_F", "Stun Pistol", 2000, 650 },
            { "Binocular", "", 150, -1 },
			{ "Rangefinder", "", 150, -1 },
            { "ItemGPS", "", 100, 45 },
            { "ToolKit", "", 250, 75 },
            { "muzzle_snds_L", "", 650, -1 },
            { "FirstAidKit", "", 150, 65 },
            { "Medikit", "", 1000, 450 },
            { "NVGoggles", "", 2000, 980 },
			{ "NVGoggles_OPFOR", "", 2000, 980 },
			{ "NVGoggles_OPFOR", "", 2000, 980 },
            { "NVGoggles_INDEP", "", 300, -1 }
        };
        mags[] = {
            { "20Rnd_556x45_UW_mag", "Taser Rifle Magazine", 125, -1 },
            { "16Rnd_9x21_Mag", "Stun Ammo", 50, -1 }
        };
    };

	class officer {
        name = "Altis Officer Shop";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 1, "You must be Officer Rank!" };
        items[] = {
        	{ "arifle_MX_F", "", 3500 },
			{ "SMG_02_ACO_F", "", 3000 },
			{ "hgun_PDW2000_F", "", 3000 },
			{ "acc_flashlight", "", 750 },
			{ "optic_Holosight", "", 1200 },
			{ "optic_Arco", "", 2500 },
			{ "Medikit", "", 1000 },
			{ "ToolKit", "", 250 },
			{ "NVGoggles", "", 1200 }
        };
        mags[] = {
			{ "30Rnd_65x39_caseless_mag", "", 130 },
			{ "30Rnd_9x21_Mag", "", 250 }
        };
    };

	class corporal {
        name = "Altis Corporal Shop";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 2, "You must be Corporal Rank!" };
        items[] = {
            { "arifle_MXC_F", "", 3500 },
			{ "srifle_EBR_F", "", 3500 },
			{ "SMG_02_ACO_F", "", 3000 },
			{ "hgun_PDW2000_F", "", 3000 },
			{ "acc_flashlight", "", 750 },
			{ "optic_Holosight", "", 1200 },
			{ "optic_Arco", "", 2500 },
			{ "optic_NVS", "(10x) NVS", 8000 },
			{ "HandGrenade_Stone", "Flashbang", 1700 },
			{ "SmokeShellBlue", "Teargas", 1700 },
			{ "Medikit", "", 1000 },
			{ "ToolKit", "", 250 },
			{ "NVGoggles", "", 1200 }
        };
        mags[] = {
			{ "30Rnd_65x39_caseless_mag", "", 130 },
			{ "20Rnd_762x51_Mag", "", 130 },
			{ "30Rnd_9x21_Mag", "", 250 }
        };
    };

	class Sergeant {
        name = "Altis Sergeant Shop";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 3, "You must be Sergeant Rank!" };
        items[] = {
            { "arifle_MXC_F", "", 3000 },
			{ "srifle_EBR_F", "", 3500 },
			{ "SMG_02_ACO_F", "", 3000 },
			{ "hgun_PDW2000_F", "", 3000 },
			{ "srifle_DMR_03_F", "", 3000 },
			{ "LMG_Mk200_F", "", 3000 },
			{ "SMG_01_F", "", 75 },
			{ "muzzle_snds_acp", "", 50 },
			{ "optic_Aco", "", 50 },
            { "optic_ACO_grn", "", 75 },
			{ "optic_Hamr", "", 75 },
			{ "acc_flashlight", "", 750 },
			{ "optic_Holosight", "", 1200 },
			{ "optic_Arco", "", 2500 },
			{ "optic_NVS", "(10x) NVS", 8000 },
			{ "HandGrenade_Stone", "Flashbang", 1700 },
			{ "SmokeShellBlue", "Teargas", 1700 },
			{ "Medikit", "", 1000 },
			{ "ToolKit", "", 250 },
			{ "NVGoggles", "", 1200 }
        };
        mags[] = {
			{ "30Rnd_45ACP_Mag_SMG_01", "", 25 },
			{ "30Rnd_65x39_caseless_mag", "", 130 },
			{ "20Rnd_762x51_Mag", "", 130 },
			{ "30Rnd_9x21_Mag", "", 250 },
			{ "20Rnd_762x51_Mag", "", 250 },
			{ "200Rnd_65x39_cased_Box", "", 250 }
        };
    };

	class Lieutenant {
        name = "Altis Lieutenant Shop";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 4, "You must be Lieutenant Rank!" };
        items[] = {
			{ "arifle_MXC_F", "", 3500 },
			{ "srifle_GM6_F", "GM6 Lynx 12.7 mm", 6500 },
			{ "srifle_EBR_F", "", 3500 },
			{ "arifle_MX_SW_F", "", 3000 },
			{ "acc_flashlight", "", 750 },
			{ "optic_Holosight", "", 1200 },
			{ "optic_MRCO", "", 2500 },
			{ "optic_Arco", "", 2500 },
			{ "optic_tws", "", 2500 },
			{ "optic_Hamr", "", 75 },
			{ "optic_ACO_grn", "", 75 },
			{ "optic_NVS", "(10x) NVS", 8000 },,
			{ "HandGrenade_Stone", "Flashbang", 1700 },
			{ "SmokeShellBlue", "Teargas", 1700 },
			{ "Medikit", "", 1000 },
			{ "ToolKit", "", 250 },
			{ "NVGoggles", "", 1200 }
        };
        mags[] = {
			{ "5Rnd_127x108_Mag", "", 200 },
			{ "30Rnd_9x21_Mag", "", 250 },
			{ "30Rnd_556x45_Stanag", "", 130 },
			{ "30Rnd_65x39_caseless_mag", "", 130 },
			{ "20Rnd_762x51_Mag", "", 130 },
			{ "100Rnd_65x39_caseless_mag", "", 250 }
        };
    };

	class Captain {
        name = "Altis Captain Shop";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 5, "You must be Captain Rank!" };
        items[] = {
			{ "arifle_MXC_F", "", 3500 },
			{ "srifle_GM6_F", "GM6 Lynx 12.7 mm", 6500 },
			{ "srifle_EBR_F", "", 3500 },
			{ "arifle_MX_SW_F", "", 3000 },
			{ "acc_flashlight", "", 750 },
			{ "optic_Holosight", "", 1200 },
			{ "optic_MRCO", "", 2500 },
			{ "optic_Arco", "", 2500 },
			{ "optic_tws", "", 2500 },
			{ "optic_Hamr", "", 75 },
			{ "optic_ACO_grn", "", 75 },
			{ "optic_NVS", "(10x) NVS", 8000 },
			{ "HandGrenade_Stone", "Flashbang", 1700 },
			{ "SmokeShellBlue", "Teargas", 1700 },
			{ "Medikit", "", 1000 },
			{ "ToolKit", "", 250 },
			{ "NVGoggles", "", 1200 }
        };
        mags[] = {
			{ "5Rnd_127x108_Mag", "", 200 },
			{ "30Rnd_9x21_Mag", "", 250 },
			{ "30Rnd_556x45_Stanag", "", 130 },
			{ "30Rnd_65x39_caseless_mag", "", 130 },
			{ "20Rnd_762x51_Mag", "", 130 },
			{ "100Rnd_65x39_caseless_mag", "", 250 }
        };
    };

	class Major {
        name = "Altis Major Shop";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 6, "You must be Major Rank!" };
        items[] = {
			{ "arifle_MXC_F", "", 3500 },
			{ "srifle_GM6_F", "GM6 Lynx 12.7 mm", 6500 },
			{ "srifle_EBR_F", "", 3500 },
			{ "arifle_MX_SW_F", "", 3000 },
			{ "acc_flashlight", "", 750 },
			{ "optic_Holosight", "", 1200 },
			{ "optic_MRCO", "", 2500 },
			{ "optic_Arco", "", 2500 },
			{ "optic_tws", "", 2500 },
			{ "optic_Hamr", "", 75 },
			{ "optic_ACO_grn", "", 75 },
			{ "optic_NVS", "(10x) NVS", 8000 },
			{ "HandGrenade_Stone", "Flashbang", 1700 },
			{ "SmokeShellBlue", "Teargas", 1700 },
			{ "Medikit", "", 1000 },
			{ "ToolKit", "", 250 },
			{ "NVGoggles", "", 1200 }
        };
        mags[] = {
			{ "5Rnd_127x108_Mag", "", 200 },
			{ "30Rnd_9x21_Mag", "", 250 },
			{ "30Rnd_556x45_Stanag", "", 130 },
			{ "30Rnd_65x39_caseless_mag", "", 130 },
			{ "20Rnd_762x51_Mag", "", 130 },
			{ "100Rnd_65x39_caseless_mag", "", 250 }
        };
    };

	class Assistant_Chief {
        name = "Altis Assistant Chief Shop";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 7, "You must be Assistant Chief Rank!" };
        items[] = {
			{ "arifle_MXC_F", "", 3500 },
			{ "srifle_DMR_05_DMS_snds_F", "Desmin's Gun", 3500 },
			{ "srifle_GM6_F", "GM6 Lynx 12.7 mm", 6500 },
			{ "srifle_EBR_F", "", 3500 },
			{ "srifle_LRR_F", "", 3500 },
			{ "srifle_DMR_02_DMS_F", "", 3500 },
			{ "srifle_DMR_03_DMS_snds_F", "", 3500 },
			{ "arifle_MXM_RCO_pointer_snds_F", "", 3500 },
			{ "arifle_Katiba_ARCO_pointer_snds_F", "", 3500 },
			{ "srifle_EBR_ARCO_pointer_snds_F", "", 3500 },
			{ "arifle_MXM_Hamr_pointer_F", "", 3500 },
			{ "MMG_02_black_F", "", 3500 },
			{ "srifle_DMR_06_camo_khs_F", "", 3500 },
			{ "srifle_DMR_01_DMS_F", "", 3500 },
			{ "arifle_MX_SW_F", "", 3000 },
      { "hgun_Pistol_Signal_F", "", 3000 },
			{ "acc_flashlight", "", 750 },
			{ "optic_Nightstalker", "", 1000 },
			{ "optic_Holosight", "", 1200 },
			{ "optic_MRCO", "", 2500 },
			{ "optic_Arco", "", 2500 },
			{ "optic_tws", "", 2500 },
			{ "optic_Hamr", "", 75 },
			{ "optic_ACO_grn", "", 75 },
			{ "HandGrenade_Stone", "Flashbang", 1700 },
			{ "SmokeShellBlue", "Teargas", 1700 },
			{ "Medikit", "", 1000 },
			{ "ToolKit", "", 250 },
			{ "NVGoggles", "", 1200 }
        };
        mags[] = {
			{ "5Rnd_127x108_Mag", "", 200 },
			{ "30Rnd_9x21_Mag", "", 250 },
			{ "30Rnd_556x45_Stanag", "", 130 },
			{ "30Rnd_65x39_caseless_mag", "", 130 },
			{ "7Rnd_408_Mag", "", 130 },
			{ "10Rnd_93x64_DMR_05_Mag", "", 130 },
			{ "20Rnd_762x51_Mag", "", 130 },
			{ "10Rnd_338_Mag", "", 130 },
			{ "130Rnd_338_Mag", "", 130 },
			{ "100Rnd_65x39_caseless_mag", "", 250 },
			{ "6Rnd_GreenSignal_F", "", 250 }
        };
    };

	class Chief {
        name = "Altis Chief Shop";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 8, "You must be Chief Rank!" };
        items[] = {
			{ "B_UavTerminal", "Drone Control", 35000, -1 },
            { "srifle_DMR_05_blk_F", "", 3500 },
			{ "srifle_GM6_F", "GM6 Lynx 12.7 mm", 6500 },
			{ "arifle_TRG21_F", "", 3500 },
			{ "arifle_MXC_F", "", 3500 },
			{ "arifle_MX_SW_F", "", 3000 },
			{ "acc_flashlight", "", 750 },
			{ "optic_Holosight", "", 1200 },
			{ "optic_Arco", "", 2500 },
			{ "optic_MRCO", "", 2500 },
			{ "optic_AMS", "", 2500 },
			{ "optic_tws", "", 2500 },
			{ "optic_NVS", "(10x) NVS", 8000 },
			{ "HandGrenade_Stone", "Flashbang", 1700 },
			{ "SmokeShellBlue", "Teargas", 1700 },
			{ "Medikit", "", 1000 },
			{ "ToolKit", "", 250 },
			{ "NVGoggles", "", 1200 }
        };
        mags[] = {
			{ "10Rnd_93x64_DMR_05_Mag", "", 130 },
			{ "30Rnd_556x45_Stanag", "", 130 },
			{ "30Rnd_65x39_caseless_mag", "", 250 },
			{ "30Rnd_65x39_caseless_mag", "", 250 },
			{ "5Rnd_127x108_Mag", "", 250 }
        };
    };

    //Medic Shops
    class med_basic {
        name = "store";
        side = "med";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "ItemGPS", "", 100, 45 },
            { "Binocular", "", 150, -1 },
            { "FirstAidKit", "", 150, 65 },
            { "NVGoggles", "", 1200, 980 }
        };
        mags[] = {};
        accs[] = {};
    };
};