/*
	File: intro.sqf
	lol
*/

_onScreenTime = 4;

sleep 2; //Wait in seconds before the credits start after player is in-game
 
_role1 = "Welcome To Lethal Dosage Gaming";
_role1names = ["Edited By LDG Dev Team"];
//AKA AlaskaVet :3 :3 :3 :3
_role2 = "Thanks For Joining The Server";
_role2names = ["Lethal Dosage Gaming Welcomes",ProfileName];
_role3 = "Join Our Website";
_role3names = ["lethaldosagegaming.com"];
_role4 = "Teamspeak Server";
_role4names = ["192.223.29.114 or lethaldosagegaming.xyz"];
_role5 = "NEWS!!";
_role5names = ["Updates as soon as we have them!"];
_role6 = "Need Support?";
_role6names = ["Contact The Staff Team."];
{
sleep 2;
_memberFunction = _x select 0;
_memberNames = _x select 1;
_finalText = format ["<t size='0.55' color='#CC0000' align='right'>%1<br /></t>", _memberFunction];
_finalText = _finalText + "<t size='0.70' color='#ffffff' align='right'>";
{_finalText = _finalText + format ["%1<br />", _x]} forEach _memberNames;
_finalText = _finalText + "</t>";
_onScreenTime + (((count _memberNames) - 1) * 0.9);
[
_finalText,
[safezoneX + safezoneW - 0.8,0.50], //DEFAULT: 0.5,0.35
[safezoneY + safezoneH - 0.8,0.7], //DEFAULT: 0.8,0.7
_onScreenTime,
0.5
] spawn BIS_fnc_dynamicText;
sleep (_onScreenTime);
} forEach [
//The list below should have exactly the same amount of roles as the list above
[_role1, _role1names],
[_role2, _role2names],
[_role3, _role3names],
[_role4, _role4names],
[_role5, _role5names],
[_role6, _role6names]
];