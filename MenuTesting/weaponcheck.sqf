#define LEGAL_WEAPON_TYPES [4096,131072]

// place this function into a variable, ex:  weaponCheckFunction = compile preprocessFile "thisscript.sqf"
// then for checking if soldier1 has weapons use: [soldier1] call weaponCheckFunction;

_target = _this select 0;
_weapons = weapons _target;

_hasWeapon = false;

if ((count _weapons) > 0) then
	{
		{
		if !(getNumber(configFile >> "CfgWeapons" >> _x >> "type") in LEGAL_WEAPON_TYPES) exitWith
		{
			_hasWeapon = true;
		};
	} forEach _weapons;
};

// check if grenade is selected (since it is a magazine and not a weapon it will not be detected by the above part)

if (currentWeapon _target == "Throw") then
{
	_hasWeapon = true;
};

// check if target is in a combat vehicle, so vehicle weapons will count too! Combat vehicle here is a vehicle that has a gunner seat.

if (((vehicle _target) != _target) && (vehicle _target emptyPositions "gunner" > 0 || (!isNull (gunner (vehicle _target))))) then
{
	_hasWeapon = true;
};

_hasWeapon