//	Name: NP_fnc_isPlayernear.sqf
//	Version: 1.0
//	Author: Na_Palm
//	Description: returns true if a player is near the position, else false
//-------------------------------------------------------------------------------------
private["_players","_position","_distance","_isNear"];

_position = [_this, 0, [0,0,0], [[]], [2,3]] call BIS_fnc_param;
_distance = [_this, 1, 1000, [0]] call BIS_fnc_param;

if (isMultiplayer) then {
	_players = playableUnits;
}else{
	_players = switchableUnits;
};

_isNear = false;
{
	if ((isPlayer _x) && (alive _x)) then {
		if ((_x distance _position)< _distance) exitWith {
			_isNear = true;
		};
	};
	if _isNear exitWith {};
	sleep 0.001;
}forEach _players;
//return
_isNear;
