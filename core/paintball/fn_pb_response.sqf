private["_respondmode","_message"];
_respondmode = param [0,0,[0]];
_displaystats = param [3,0,[0]];

if (_respondmode==1) then {
	_message = param [1,"",[""]];
	hint format ["%1",_message];
};

if (_respondmode==2) then {
	_randomSuits = ["U_I_Protagonist_VR","U_O_Protagonist_VR","U_B_Protagonist_VR"];
	_randomweps = ["hgun_PDW2000_F","SMG_02_F"];
	_suit = _randomSuits select (floor (random (count _randomSuits)));
	_weaponr = _randomweps select (floor (random (count _randomweps)));
	player setVariable["paintballstats",true];
	paintstats = [["K",0,[]],["D",0,[]],["S",0],["P",[]]];
	mysavedgroup = group player;
	[player] joinSilent (createGroup civilian);
	paintrespawn = 0;
	player addEventHandler ["handleDamage", {false}];
	playMusic "LeadTrack02_F_Bootcamp";
	hint "Welcome to the Airsoft Arena! The upcoming game is 5 minutes walk, enjoy!";
	meinePos = getPosATL player;
	[] call kbs_fnc_saveGear;
	meingear = life_gear;
	life_gear set [16,[]];
	RemoveAllWeapons player;
	{player removeMagazine _x;} foreach (magazines player);
	removeUniform player;
	removeVest player;
	removeBackpack player;
	removeGoggles player;
	removeHeadGear player;
	player forceAddUniform _suit;
	player addWeaponGlobal _weaponr;
	player addGoggles "G_Goggles_VR";
	player addMagazines ["30Rnd_9x21_Mag",20];
	{
		player unassignItem _x;
		player removeItem _x;
	} foreach (assignedItems player);
	player allowDamage false;
	_position = pb_positionen select (floor (random (count pb_positionen)));
	player setPos _position;

	tode = 0;
	player addEventHandler ["Hit", {
		if (paintrespawn == 1) exitwith {};
		paintrespawn = 1;
		_shooter = getPlayerUID (_this select 1);
		_shootername = name (_this select 1);
		_playername = name player;
		paintstats select 1 set [1,(paintstats select 1 select 1) + 1];
		paintstats select 1 select 2 pushBack _shootername;
		systemChat format ["Taken from %1.",_shootername];
[7,_playername] remoteExec ["kbs_fnc_pb_response",_shooter];		
		[] spawn{
		_position = pb_positionen select (floor (random (count pb_positionen)));
		player setPos _position;
		tode = tode+1;
		_maxGeld = 25000;
		_grenzeAusz = 30;
		_geldTod = _maxGeld/_grenzeAusz;
		_punkte = _grenzeAusz-tode;
		hintSilent parseText format ["<t align='center' color='#00E500' size='1.3'>Statistical</t><br/><br/><t align='left'>Death</t><t align='right'>%1</t><br/><t align='left'>Points</t><t align='right'>%2</t>",tode,_punkte];
		uisleep 0.5;
		paintrespawn = 0;
		};
	}];
};

if (_respondmode==3) then {
	life_gear = meingear;
	[] spawn kbs_fnc_Loadgear;
	player setPosATL meinePos;
	[] spawn { uisleep 2; player allowDamage true;};
	player removeAllEventHandlers "Hit";
	player addEventHandler["handleDamage",{_this call kbs_fnc_handleDamage;}];
	player enableFatigue true;
	[player] joinSilent mysavedgroup;
	_grenzeAusz = 30;
	if (tode>=_grenzeAusz) then {
		hint "The game has ended. Unfortunately, you have not earned enough points to receive a cash prize!";
	} else {
		_maxGeld = 15000;
		_geldTod = _maxGeld/_grenzeAusz;
		_punkte = _grenzeAusz-tode;
		_geldMin= _geldTod*tode;
		_gesamt = _maxGeld-_geldMin;
		kblisfe_kcbassh = kblisfe_kcbassh + _gesamt;
		hint format ["The game has ended. You have a total %1 Points earned and prize money (%2$) received. Congratulation!",_punkte,_gesamt];
	};
};

if (_respondmode==4) then {playMusic "LeadTrack06_F";};

if (_respondmode==5) then {
	_message = [_this,1,"",[""]] call BIS_fnc_param;
	hint format ["%1",_message];
	kblisfe_kcbassh = kblisfe_kcbassh - 5000;
};

if (_respondmode==7) then {
	if ((_this select 1) == (name player)) then {
		systemChat "Suicide, haha you NOOB";
		paintstats select 2 set [1,(paintstats select 2 select 1) + 1];
	}else{
		systemChat format ["HIT! %1.",_this select 1];
		paintstats select 0 set [1,(paintstats select 0 select 1) + 1];
		paintstats select 0 select 2 pushBack (_this select 1);
	};
};

if (_respondmode==8) then {
	paintstats select 3 set [1,(_this select 1)];
};

if (_displaystats==9 || _respondmode==9) then {
	Title="<t underline='true' size='1.3' color='#FFD700'>Airsoft Arena final result</t><br/><br/>";
	Spacer="<t align='center'>---------------------------</t><br/>";
	OverallTitle = "<t underline='true' align='left' color='#FFD700'>Performance statistics<br/></t>";
	Kills= "<t align='left'>Kills:</t><t align='right'><t color='#008000'>%1</t></t><br/>";
	Deaths="<t align='left'>Deaths:</t><t align='right'><t color='#FF0000'>%2</t></t><br/>";
	VsPlayerTitle = "<t underline='true' align='left' color='#FFD700'>Du VS Each Player Stats</t><br/>";
	KD="<t align='right'><t color='#008000'>K</t> | <t color='#FF0000'>D</t></t><br/>";
	finaltext = Format [Title + Spacer+OverallTitle+ Kills + Deaths + Spacer +VsPlayerTitle+ KD,(paintstats select 0) select 1,(paintstats select 1) select 1 ];
	{
		pname = _x;
		killzz = {_x == pname} count ((paintstats select 0) select 2);
		deathzz = {_x == pname} count ((paintstats select 1) select 2);
		if (name player != pname) then {
		
			if (killzz > deathzz) then {
				PKD = format["<t align='left'><t color='#00ff00'>%1</t></t><t align='right'><t color='#008000' size='1.2'>%2</t> | <t color='#FF0000'>%3</t></t><br/>",pname,killzz,deathzz];
			};
			
			if (killzz < deathzz) then {
				PKD = format["<t align='left'><t color='#FF0066'>%1</t></t><t align='right'><t color='#008000'>%2</t> | <t color='#FF0000' size='1.2'>%3</t></t><br/>",pname,killzz,deathzz];
			};
			
			if (killzz == deathzz) then {
				PKD = format["<t align='left'><t color='#FF9900'>%1</t></t><t align='right'><t color='#008000'>%2</t> | <t color='#FF0000'>%3</t></t><br/>",pname,killzz,deathzz];
			};
			finaltext = finaltext + PKD;
		};
	} foreach ((paintstats select 3) select 1);

	hintSilent parseText finaltext;	
};