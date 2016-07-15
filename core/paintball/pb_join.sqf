if (joinmode==0) then {    
_PUID = getPlayerUID player;    
hint "A request has been sent to the server, please wait a moment";    
[_PUID] remoteExec ["TON_fnc_paintball",2];    
joinmode = 1;
} else {    
hint "You're already joined the lobby, please try again later!";};
