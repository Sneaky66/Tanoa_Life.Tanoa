class CarShops {
    /*
    *    ARRAY FORMAT:
    *        0: STRING (Classname)
    *        1: ARRAY (This is for limiting items to certain things)
    *            0: Variable to read from
    *            1: Variable Value Type (SCALAR / BOOL /EQUAL)
    *            2: What to compare to (-1 = Check Disabled)
    *
    *   BLUFOR Vehicle classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgVehicles_WEST
    *   OPFOR Vehicle classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgVehicles_EAST
    *   Independent Vehicle classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgVehicles_GUER
    *   Civilian Vehicle classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgVehicles_CIV
    */
    class civ_car {
        side = "civ";
        vehicles[] = {
            { "B_Quadbike_01_F", { "", "", -1 } },
            { "C_Offroad_02_unarmed_F", { "", "", -1 } },
            { "B_T_LSV_01_unarmed_F", { "", "", -1 } },
            { "O_T_LSV_02_unarmed_F", { "", "", -1 } },
            { "C_Hatchback_01_F", { "", "", -1 } },
            { "C_Offroad_01_F", { "", "", -1 } },
            { "C_SUV_01_F", { "", "", -1 } },
            { "C_Hatchback_01_sport_F", { "", "", -1 } },
            { "C_Van_01_transport_F", { "", "", -1 } }
        };
    };

    class kart_shop {
        side = "civ";
        vehicles[] = {
            { "C_Kart_01_Blu_F", { "", "", -1 } },
            { "C_Kart_01_Fuel_F", { "", "", -1 } },
            { "C_Kart_01_Red_F", { "", "", -1 } },
            { "C_Kart_01_Vrana_F", { "", "", -1 } }
        };
    };

    class civ_truck {
        side = "civ";
        vehicles[] = {
            { "C_Van_01_box_F", { "", "", -1 } },
            { "I_Truck_02_transport_F", { "", "", -1 } },
            { "I_Truck_02_covered_F", { "", "", -1 } },
            { "B_Truck_01_transport_F", { "", "", -1 } },
            { "O_Truck_03_transport_F", { "", "", -1 } },
            { "O_Truck_03_covered_F", { "", "", -1 } },
            { "B_Truck_01_box_F", { "", "", -1 } },
            { "O_Truck_03_device_F", { "", "", -1 } },
            { "C_Van_01_fuel_F", { "", "", -1 } },
            { "I_Truck_02_fuel_F", { "", "", -1 } },
            { "B_Truck_01_fuel_F", { "", "", -1 } }
        };
    };

    class civ_air {
        side = "civ";
        vehicles[] = {
            { "C_Heli_Light_01_civil_F", { "", "", -1 } },
            { "B_Heli_Light_01_F", { "", "", -1 } },
			{ "C_Plane_Civil_01_F", { "", "", -1 } },
            { "O_Heli_Light_02_unarmed_F", { "", "", -1 } },
			{ "O_T_VTOL_02_infantry_F", { "", "", -1 } },
			{ "B_T_VTOL_01_infantry_F", { "", "", -1 } }
        };
    };

     class civ_ship {
        side = "civ";
        vehicles[] = {
            { "C_Rubberboat", { "", "", -1 } },
            { "C_Boat_Civil_01_F", { "", "", -1 } },
            { "C_Boat_Civil_01_rescue_F", { "", "", -1 } },
            { "B_SDV_01_F", { "", "", -1 } },
			{ "I_C_Boat_Transport_02_F", { "", "", -1 } },
			{ "C_Scooter_Transport_01_F", { "", "", -1 } }
        };
    };

    class reb_car {
        side = "civ";
        vehicles[] = {
            { "B_Quadbike_01_F", { "", "", -1 } },
            { "B_G_Offroad_01_F", { "", "", -1 } },
            { "O_MRAP_02_F", { "", "", -1 } },
            { "B_Heli_Light_01_stripped_F", { "", "", -1 } },
            { "B_G_Offroad_01_armed_F", { "", "", -1 } },
            { "B_T_LSV_01_armed_F", { "", "", -1 } },
            { "O_T_LSV_02_armed_F", { "", "", -1 } }
        };
    };

    class med_shop {
        side = "med";
        vehicles[] = {
            { "C_Offroad_01_F", { "", "", -1 } },
            { "C_Offroad_02_unarmed_F", { "", "", -1 } },
            { "C_SUV_01_F", { "", "", -1 } },
            { "C_Van_01_box_F", { "", "", -1 } },
            { "I_MRAP_03_F", { "", "", -1 } }
        };
    };

    class med_air_hs {
        side = "med";
        vehicles[] = {
            { "B_Heli_Light_01_F", { "", "", -1 } },
            { "O_Heli_Light_02_unarmed_F", { "", "", -1 } }
        };
    };

    class cop_car {
        side = "cop";
        vehicles[] = {
            { "C_Offroad_01_F", { "", "", -1 } },
            { "B_Quadbike_01_F", { "", "", -1 } },
			{ "C_Offroad_02_unarmed_F", { "", "", -1 } },
            { "C_SUV_01_F", { "", "", -1 } },
            { "C_Hatchback_01_sport_F", { "life_coplevel", "SCALAR", 2 } },
            { "B_MRAP_01_F", { "life_coplevel", "SCALAR", 3 } },
            { "B_MRAP_01_hmg_F", { "life_coplevel", "SCALAR", 5 } }
        };
    };

    class cop_air {
        side = "cop";
        vehicles[] = {
            { "B_Heli_Light_01_F", { "", "", -1 } },
            { "I_Heli_light_03_unarmed_F", { "life_coplevel", "SCALAR", 3 } }
        };
    };

    class cop_ship {
        side = "cop";
        vehicles[] = {
            { "B_Boat_Transport_01_F", { "", "", -1 } },
            { "C_Boat_Civil_01_police_F", { "", "", -1 } },
            { "B_Boat_Armed_01_minigun_F", { "life_coplevel", "SCALAR", 3 } },
            { "B_SDV_01_F", { "", "", -1 } }
        };
    };
};

class LifeCfgVehicles {
    /*
    *    Vehicle Configs (Contains textures and other stuff)
    *
    *    "price" is the price before any multipliers set in Master_Config are applied.
    *
    *    Default Multiplier Values & Calculations:
    *       Civilian [Purchase, Sell]: [1.0, 0.5]
    *       Cop [Purchase, Sell]: [0.5, 0.5]
    *       Medic [Purchase, Sell]: [0.75, 0.5]
    *       ChopShop: Payout = price * 0.25
    *       GarageSell: Payout = price * [0.5, 0.5, 0.5, -1]
    *       Cop Impound: Payout = price * 0.1
    *       Pull Vehicle from Garage: Cost = price * [1, 0.5, 0.75, -1] * [0.5, 0.5, 0.5, -1]
    *           -- Pull Vehicle & GarageSell Array Explanation = [civ,cop,medic,east]
    *
    *       1: ARRAY (license required)
    *         Ex: { "driver", "" , "" , "" } //civilian, west, independent, east
    *         licenses[] = { {"CIV"}, {"COP"}, {"MEDIC"}, {"EAST"} };
    *    Textures config follows { Texture Name, side, {texture(s)path}}
    *    Texture(s)path follows this format:
    *    INDEX 0: Texture Layer 0
    *    INDEX 1: Texture Layer 1
    *    INDEX 2: Texture Layer 2
    *    etc etc etc
    *
    */

    class Default {
        vItemSpace = -1;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = -1;
        textures[] = {};
    };

    class I_Truck_02_medical_F {
        vItemSpace = 150;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 25000;
        textures[] = {};
    };

    class O_Truck_03_medical_F {
        vItemSpace = 200;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 45000;
        textures[] = {};
    };

    class B_Truck_01_medical_F {
        vItemSpace = 250;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 60000;
        textures[] = {};
    };

    class C_Rubberboat {
        vItemSpace = 45;
        licenses[] = { {"boat"}, {""}, {""}, {""} };
        price = 10000;
        textures[] = { };
    };
	
	class C_Scooter_Transport_01_F {
        vItemSpace = 45;
        licenses[] = { {"boat"}, {""}, {""}, {""} };
        price = 3000;
        textures[] = {
			{ "Blanc", "civ", {"\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_CO.paa","\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_CO.paa"} },
            { "Noir", "civ", {"\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_Black_CO.paa","\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_Black_CO.paa"} },
            { "Bleue", "civ", {"\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_Blue_co.paa","\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_Blue_co.paa"} },
            { "Gris", "civ", {"\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_Grey_co.paa","\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_Grey_co.paa"} },
            { "Citron vert", "civ", {"\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_Lime_co.paa","\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_Lime_co.paa"} },
            { "Rouge", "civ", {"\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_Red_CO.paa","\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_CO.paa"} },
            { "Jaune", "civ", {"\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_Yellow_CO.paa","\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_Yellow_CO.paa"} }
		};
    };
	
	class I_C_Boat_Transport_02_F {
        vItemSpace = 550;
        licenses[] = { {"boat"}, {""}, {""}, {""} };
        price = 25000;
        textures[] = { };
    };
	
	class I_Heli_light_03_unarmed_F {
        vItemSpace = 200;
        licenses[] = { {""}, {"cAir"}, {""}, {""} };
        price = 200000;
        textures[] = {
            { "Police", "cop", {
                "textures\CopV\hellcat.jpg"
            } }
        };
    };

    class B_MRAP_01_hmg_F {
        vItemSpace = 100;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 750000;
        textures[] = {
            { "Black", "cop", {
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)",
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)",
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)"
            } }
        };
    };

    class B_Boat_Armed_01_minigun_F {
        vItemSpace = 175;
        licenses[] = { {""}, {"cg"}, {""}, {""} };
        price = 75000;
        textures[] = { };
    };

    class B_Boat_Transport_01_F {
        vItemSpace = 45;
        licenses[] = { {""}, {"cg"}, {""}, {""} };
        price = 3000;
        textures[] = { };
    };

    class O_Truck_03_transport_F {
        vItemSpace = 285;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 200000;
        textures[] = { };
    };

    class O_Truck_03_device_F {
        vItemSpace = 350;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 450000;
        textures[] = { };
    };

    class Land_CargoBox_V1_F {
        vItemSpace = 5000;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = -1;
        textures[] = {};
    };

    class Box_IND_Grenades_F {
        vItemSpace = 350;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = -1;
        textures[] = {};
    };

    class B_supplyCrate_F {
        vItemSpace = 700;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = -1;
        textures[] = {};
    };

    class B_G_Offroad_01_F {
        vItemSpace = 65;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 12500;
        textures[] = { };
    };

    class B_G_Offroad_01_armed_F {
        vItemSpace = 65;
        licenses[] = { {"rebel"}, {""}, {""}, {""} };
        price = 750000;
        textures[] = { };
    };
	
	class B_T_LSV_01_armed_F {
        vItemSpace = 65;
        licenses[] = { {"rebel"}, {""}, {""}, {""} };
        price = 750000;
        textures[] = { };
    };
	
	class O_T_LSV_02_armed_F {
        vItemSpace = 65;
        licenses[] = { {"rebel"}, {""}, {""}, {""} };
        price = 750000;
        textures[] = { };
    };

    class C_Boat_Civil_01_F {
        vItemSpace = 700;
        licenses[] = { {"boat"}, {""}, {""}, {""} };
        price = 45000;
        textures[] = {};
    };
	
	class C_Boat_Civil_01_rescue_F {
        vItemSpace = 700;
        licenses[] = { {"boat"}, {""}, {""}, {""} };
        price = 45000;
        textures[] = {};
    };

    class C_Boat_Civil_01_police_F {
        vItemSpace = 85;
        licenses[] = { {""}, {"cg"}, {""}, {""} };
        price = 20000;
        textures[] = { };
    };

    class B_Truck_01_box_F {
        vItemSpace = 450;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 350000;
        textures[] = { };
    };

    class B_Truck_01_transport_F {
        vItemSpace = 325;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 275000;
        textures[] = { };
    };

    class O_MRAP_02_F {
        vItemSpace = 60;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 150000;
        textures[] = { };
    };

    class C_Offroad_01_F {
        vItemSpace = 65;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 12500;
        textures[] = {
            { "Red", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa"
            } },
            { "Yellow", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa"
            } },
            { "White", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE02_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE02_CO.paa"
            } },
            { "Blue", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE03_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE03_CO.paa"
            } },
            { "Dark Red", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE04_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE04_CO.paa"
            } },
            { "Blue / White", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE05_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE05_CO.paa"
            } },
            { "Taxi", "civ", {
                "textures\CivV\offroad\taxi.jpg"
            } },
			{ "Manga", "civ", {
                "textures\CivV\offroad\manga.jpg"
            } },
            { "Fed", "fed", {
                "#(ai,64,64,1)Fresnel(0.3,3)"
            } },
            { "Police", "cop", {
                "textures\CopV\offroad.jpg"
            } },
			{ "White EMS", "med", {
                "textures\MedV\pickup.jpg"
            } }
        };
    };

    class C_Kart_01_Blu_F {
        vItemSpace = 20;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 15000;
        textures[] = {};
    };
/*
To edit another information in this classes you can use this exemple.
class C_Kart_01_Fuel_F : C_Kart_01_Blu_F{
    vItemSpace = 40;
    price = ;
};

will modify the virtual space and the price of the vehicle, but other information such as license and textures will pick up the vehicle declare at : Vehicle {};
*/
    class C_Kart_01_Fuel_F : C_Kart_01_Blu_F{}; // Get all information of C_Kart_01_Blu_F
    class C_Kart_01_Red_F  : C_Kart_01_Blu_F{};
    class C_Kart_01_Vrana_F : C_Kart_01_Blu_F{};

    class C_Hatchback_01_sport_F {
        vItemSpace = 45;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 40000;
        textures[] = {
            { "Red", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport01_co.paa"
            } },
            { "Dark Blue", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport02_co.paa"
            } },
            { "Orange", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport03_co.paa"
            } },
            { "Black / White", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport04_co.paa"
            } },
            { "Beige", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport05_co.paa"
            } },
            { "Green", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport06_co.paa"
            } },
            { "Police", "cop", {
                "textures\CopV\sport.jpg"
            } }
        };
    };

    class B_Quadbike_01_F {
        vItemSpace = 25;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 2500;
        textures[] = {
            { "Police", "cop", {
                "textures\CopV\quadbike.paa"
            } },
            { "Digi Desert", "reb", {
                "\A3\Soft_F\Quadbike_01\Data\quadbike_01_opfor_co.paa"
            } },
            { "Black", "civ", {
                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_black_co.paa"
            } },
            { "Blue", "civ", {
                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_blue_co.paa"
            } },
            { "Red", "civ", {
                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_red_co.paa"
            } },
            { "White", "civ", {
                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_white_co.paa"
            } },
            { "Digi Green", "civ", {
                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_indp_co.paa"
            } },
            { "Hunter Camo", "civ", {
                "\a3\soft_f_gamma\Quadbike_01\data\quadbike_01_indp_hunter_co.paa"
            } },
            { "Rebel Camo", "reb", {
                "\a3\soft_f_gamma\Quadbike_01\data\quadbike_01_indp_hunter_co.paa"
            } }
        };
    };

    class I_Truck_02_covered_F {
        vItemSpace = 250;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 100000;
        textures[] = {
            { "Orange", "civ", {
                "\A3\Soft_F_Beta\Truck_02\data\truck_02_kab_co.paa",
                "\a3\soft_f_beta\Truck_02\data\truck_02_kuz_co.paa"
            } },
            { "Black", "cop", {
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)"
            } }
        };
    };

    class I_Truck_02_transport_F {
        vItemSpace = 200;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 75000;
        textures[] = {
            { "Orange", "civ", {
                "\A3\Soft_F_Beta\Truck_02\data\truck_02_kab_co.paa",
                "\a3\soft_f_beta\Truck_02\data\truck_02_kuz_co.paa"
            } },
            { "Black", "cop", {
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)"
            } }
        };
    };

    class O_Truck_03_covered_F {
        vItemSpace = 300;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 250000;
        textures[] = {};
    };

    class C_Hatchback_01_F {
        vItemSpace = 40;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 9500;
        textures[] = {
            { "Beige", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base01_co.paa"
            } },
            { "Green", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base02_co.paa"
            } },
            { "Blue", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base03_co.paa"
            } },
            { "Dark Blue", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base04_co.paa"
            } },
            { "Yellow", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base06_co.paa"
            } },
            { "White", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base07_co.paa"
            } },
            { "Grey", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base08_co.paa"
            } },
            { "Black", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base09_co.paa"
            } }
        };
    };

    class C_SUV_01_F {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 30000;
        textures[] = {
            { "Dark Red", "civ", {
                "\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_co.paa"
            } },
			{ "BattleField", "civ", {
                "textures\CivV\SUV\Battlefield_LowTexture.jpg"
            } },
			{ "Warframe", "civ", {
                "textures\CivV\SUV\Warframe_LowTexture.jpg"
            } },
			{ "Wolfenstein", "civ", {
                "textures\CivV\SUV\Wolfenstein_LowTexture.jpg.jpg"
            } },
            { "Police", "cop", {
                "textures\CopV\suv.jpg"
            } },
			{ "White Medic", "med", {
                "textures\MedV\SUV.jpg"
            } },
			{ "Taxi", "civ", {
                "textures\CivV\SUV\Taxi.jpg"
            } },
			{ "Moster", "civ", {
                "textures\CivV\SUV\monstersuv.jpg"
            } }
        };
    };
	
	class C_Offroad_02_unarmed_F {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 45000;
        textures[] = {
			{ "Zombie", "civ", {
                "textures\CivV\Jeep\zombie.jpg"
            } },
			{ "monster", "civ", {
                "textures\CivV\Jeep\monster.jpg"
            } },
			{ "Police", "cop", {
                "textures\CopV\police.jpg"
            } },
			{ "Noir", "civ", {
            "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_black_co.paa",
            "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_black_co.paa",
            "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_black_co.paa",
            "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_black_co.paa"
            } },
            { "Bleu", "civ", {
            "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_blue_co.paa",
            "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_blue_co.paa",
            "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_blue_co.paa",
            "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_blue_co.paa"
            } },
            { "Vert", "civ", {
            "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_green_co.paa",
            "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_green_co.paa",
            "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_green_co.paa",
            "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_green_co.paa"
            } },
            { "Orange", "civ", {
            "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_orange_co.paa",
            "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_orange_co.paa",
            "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_orange_co.paa",
            "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_orange_co.paa"
            } },
            { "Rouge", "civ", {
            "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_red_co.paa",
            "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_red_co.paa",
            "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_red_co.paa",
            "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_red_co.paa"
            } },
            { "Blanc", "civ", {
            "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_white_co.paa",
            "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_white_co.paa",
            "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_white_co.paa",
            "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_white_co.paa"
            } },
            { "Marron", "civ", {
            "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_brown_co.paa",
            "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_brown_co.paa",
            "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_brown_co.paa",
            "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_brown_co.paa"
            } },
            { "Olive", "civ", {
            "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_olive_co.paa",
            "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_olive_co.paa",
            "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_olive_co.paa",
            "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_olive_co.paa"
            } }
        };
    };
	
	class B_T_LSV_01_unarmed_F {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 60000;
        textures[] = {};
    };
	
	class O_T_LSV_02_unarmed_F {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 60000;
        textures[] = {};
    };

    class C_Van_01_transport_F {
        vItemSpace = 100;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 45000;
        textures[] = {
            { "White", "civ", {
                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_co.paa"
            } },
            { "Red", "civ", {
                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_red_co.paa"
            } }
        };
    };

    class C_Van_01_box_F {
        vItemSpace = 150;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 60000;
        textures[] = {
            { "White", "civ", {
                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_co.paa"
            } },
            { "Red", "civ", {
                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_red_co.paa"
            } },
			{ "Ambulance ", "med", {
                "textures\MedV\box_front.jpg",
				"textures\MedV\box_back.jpg"
            } },
			{ "IceCream", "civ", {
                "textures\CivV\boxtruck\ice1.jpg",
				"textures\CivV\boxtruck\ice2.jpg"
            } }
        };
    };

    class B_MRAP_01_F {
        vItemSpace = 65;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 30000;
        textures[] = {
            { "Police", "cop", {
                "textures\CopV\hunter.jpg"
            } }
       };
    };
	
	class I_MRAP_03_F {
        vItemSpace = 65;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 5000;
        textures[] = {
            { "EMS", "med", {
                "textures\MedV\strider.jpg"
            } }
       };
    };

     class B_Heli_Light_01_stripped_F {
        vItemSpace = 90;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 275000;
        textures[] = {
            { "Rebel Digital", "reb", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_digital_co.paa"
            } }
        };
    };
	
	class O_T_VTOL_02_infantry_F {
        vItemSpace = 1000;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 300000;
        textures[] = {};
    };
	
	class B_T_VTOL_01_armed_F {
        vItemSpace = 400;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 500000;
        textures[] = {};
    };

    class B_Heli_Light_01_F {
        vItemSpace = 90;
        licenses[] = { {"pilot"}, {"cAir"}, {"mAir"}, {""} };
        price = 245000;
        textures[] = {
            { "Police", "cop", {
                "textures\CopV\heli.jpg"
            } },
            { "Black", "fed", {
                "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_ion_co.paa"
            } },
            { "Civ Blue", "civ", {
                "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_blue_co.paa"
            } },
            { "Civ Red", "civ", {
                "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_co.paa"
            } },
            { "Digi Green", "civ", {
                "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_indp_co.paa"
            } },
            { "Blueline", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_blueline_co.paa"
            } },
            { "Elliptical", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_elliptical_co.paa"
            } },
            { "Furious", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_furious_co.paa"
            } },
            { "Jeans Blue", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_jeans_co.paa"
            } },
            { "Speedy Redline", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_speedy_co.paa"
            } },
            { "Sunset", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_sunset_co.paa"
            } },
            { "Vrana", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_vrana_co.paa"
            } },
            { "Waves Blue", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_wave_co.paa"
            } },
            { "Rebel Digital", "reb", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_digital_co.paa"
            } },
            { "EMS", "med", {
                "textures\MedV\littlebird.jpg"
            } }
        };
    };

    class C_Heli_Light_01_civil_F : B_Heli_Light_01_F {
        vItemSpace = 75;
        price = 245000;
    };

    class O_Heli_Light_02_unarmed_F {
        vItemSpace = 800;
        licenses[] = { {"pilot" }, {""}, {"mAir"}, {""} };
        price = 750000;
        textures[] = {
            { "Black", "cop", {
                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_co.paa"
            } },
            { "White / Blue", "civ", {
                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_civilian_co.paa"
            } },
            { "Digi Green", "civ", {
                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_indp_co.paa"
            } },
            { "Desert Digi", "reb", {
                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_opfor_co.paa"
            } },
            { "EMS", "med", {
                "textures\MedV\Heli.jpg"
            } }
        };
    };

    class B_SDV_01_F {
        vItemSpace = 50;
        licenses[] = { {"boat"}, {"cg"}, {""}, {""} };
        price = 150000;
        textures[] = {};
    };

        class C_Van_01_fuel_F {
        vItemSpace = 20;
        vFuelSpace = 19500;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 120000;
        textures[] = {
            { "White", "civ", {
                "\A3\soft_f_gamma\Van_01\data\van_01_ext_co.paa",
                "\A3\soft_f_gamma\Van_01\data\van_01_tank_co.paa"
            } },
            { "Red", "civ", {
                "\A3\soft_f_gamma\Van_01\data\van_01_ext_red_co.paa",
                "\A3\soft_f_gamma\Van_01\data\van_01_tank_red_co.paa"
            } }
        };
    };

    class I_Truck_02_fuel_F {
        vItemSpace = 40;
        vFuelSpace = 42000;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 200000;
        textures[] = {
            { "White", "civ", {
                "\A3\Soft_F_Beta\Truck_02\data\truck_02_kab_co.paa",
                "\A3\Soft_F_Beta\Truck_02\data\truck_02_fuel_co.paa"
            } }
        };
    };

    class B_Truck_01_fuel_F {
        vItemSpace = 50;
        vFuelSpace = 50000;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 250000;
        textures[] = {};
    };
	
	class B_T_VTOL_01_infantry_F {
        vItemSpace = 2000;
        vFuelSpace = 50000;
        licenses[] = { {"pilot"}, {"cAir"}, {"mAir"}, {""} };
        price = 1500000;
        textures[] = {};
    };
	
	class C_Plane_Civil_01_F {
        vItemSpace = 300;
        vFuelSpace = 50000;
        licenses[] = { {"pilot"}, {"cAir"}, {"mAir"}, {""} };
        price = 500000;
        textures[] = {
            { "Course", "civ", {
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_Racer_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_Racer_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_co.paa"
            } },
            { "Ligne Rouge", "civ", {
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_RedLine_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_RedLine_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_co.paa"
            } },
            { "Vague Bleue", "civ", {
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_Wave_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_Wave_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_co.paa"
            } },
            { "Tribal", "civ", {
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_Tribal_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_Tribal_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_co.paa"
            } }
		};
    };
};