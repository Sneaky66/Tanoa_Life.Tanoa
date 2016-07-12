#include "..\..\script_macros.hpp"
/*
 File: fn_craftCfg.sqf
 Author: EdgeKiller
 Description:
 Master configuration file for the crafting menu.
*/
private["_craft","_return"];
_craft = [_this,0,"",[""]] call BIS_fnc_param;
if(_craft == "") exitWith {closeDialog 0}; //Bad shop type passed.

switch(_craft) do {
 case "weapon": {
 _return = [
	["hgun_ACPC2_F", ["iron_refined",2,"oil_processed",1],["pGunsmith",1]],
	["arifle_TRG21_F", ["iron_refined",4,"oil_processed",1,"copper_refined",2],["pGunsmith",3]],
	["arifle_SPAR_01_blk_F", ["iron_refined",4,"oil_processed",1,"copper_refined",2],["pGunsmith",3]],
	["arifle_SPAR_02_blk_F", ["iron_refined",4,"oil_processed",1,"copper_refined",2],["pGunsmith",3]],
	["SMG_05_F", ["iron_refined",4,"oil_processed",1,"copper_refined",2],["pGunsmith",3]],
	["30Rnd_9x21_Mag_SMG_02", ["oil_processed",1,"copper_refined",2],["pGunsmith",3]],
	["30Rnd_545x39_Mag_F", ["oil_processed",1,"copper_refined",2],["pGunsmith",3]],
	["30Rnd_556x45_Stanag", ["oil_processed",1,"copper_refined",2],["pGunsmith",3]],
	["9Rnd_45ACP_Mag", ["oil_processed",1,"copper_refined",2],["pGunsmith",3]],
	["150Rnd_556x45_Drum_Mag_F", ["oil_processed",1,"copper_refined",2],["pGunsmith",3]]
	];
};
 
 case "uniform": {
 _return = [
	["U_O_CombatUniform_oucamo", ["cotton_refined",7,"oil_processed",2]],
	["U_O_FullGhillie_ard", ["cotton_refined",7,"oil_processed",2]],
	["U_O_FullGhillie_sard", ["cotton_refined",7,"oil_processed",2]],
	["U_O_FullGhillie_lsh", ["cotton_refined",7,"oil_processed",2]]
	];
 };
 
 case "backpack": {
 _return = [
	["B_Carryall_oli", ["cotton_refined",2,"oil_processed",3]],
	["B_Carryall_khk", ["cotton_refined",2,"oil_processed",3]]
	];
 };
 
 case "item": {
 _return = [
	["pickaxe", ["iron_refined",2,"copper_refined",1],["pCrafting",1]]
	];
  };
};
_return;