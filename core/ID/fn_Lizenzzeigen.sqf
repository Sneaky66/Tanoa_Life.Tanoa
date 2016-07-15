//Author: PierreAmyf
if(isServer)exitWith{};
private["_ziel", "_rang", "_marke", "_org", "_message"];
if(vehicle player != player )exitWith{};
_ziel = cursorTarget;
if(isNull _ziel) then {_ziel = player;}; 
if(!(_ziel isKindOf "Man")) then {_ziel = player;}; 
if(!(alive _ziel)) then {_ziel = player;};

switch(playerSide)do{
case civilian:{
	 if(playerSide == civilian)then{
	 _rang = "Civilian";
	 _marke = "marke_ziv";
	 _org = "Rebel Of Tanoa";
	 }else{
	 _rang = "Civilian";
	 _marke = "marke_abi";
	 _org = " Rebel Of Tanoa";
		}; 
	};
};
_message = format["<img size='10' color='#FFFFFF' image='icons\%1.paa'/><br/><br/><t size='2.5'>%2</t><br/><t size='1.8'>%3</t><br/><t size='1'>%4</t>",_marke, name player, _rang, _org];
[player, _message] remoteExec ["life_fnc_Lizenzsehen",_ziel];
