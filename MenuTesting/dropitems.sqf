/*weaponCheckFunction = compile preprocessFile "weaponcheck.sqf"

_tar1 = _this select 0;

if ([_tar] call weaponCheckFunction) then {
	_tar1 action["dropWeapon", _tar1, ]
}*/

_tar1 = cursorTarget;
_ida = _this select 2;

//_tar1 removeAction _ida;

_myStuff = weapons _tar1;
_myMags = magazines _tar1;


// Drop all your stuff on ground.
if (count (_myStuff+_myMags)>0) then
{
_box = createVehicle ["groundWeaponHolder", _tar1 modelToWorld [0,0.8,0], [], 0.5, "CAN_COLLIDE"];
_box setDir floor (random 360);


{
_box addWeaponCargoGlobal [_x, 1];
_tar1 removeWeapon _x;
} forEach _myStuff;
{
_box addMagazineCargoGlobal [_x, 1];
_tar1 removeItem _x;
} forEach _myMags;


_tar1 reveal _box;
};
