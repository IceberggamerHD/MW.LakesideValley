#include <macro.h>
/*
	File: fn_p_openMenu.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Opens the players virtual inventory menu
*/
if(!alive player || dialog || vehicle player == player) exitWith {}; //Prevent them from opening this for exploits while dead. Check if player isn't in the vehicle
createDialog "vehicleMenu";
disableSerialization;
