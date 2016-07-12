/* 
	Author: DeadP4xel für SealDrop.de
*/

while {true} do {
	uiSleep 1800;
	[] call SOCK_fnc_updateRequest;
	hintSilent "Your player information is automatically saved to the server. Next autosave in 30 minutes"
};