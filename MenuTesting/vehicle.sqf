_tar1 = cursorTarget;

_dist = nearestObjects	[_tar1, ["LandVehicle","Air","Ship"], 5];

_vehicle = _dist select 0;

detach _tar1;

hint format ["%1",_vehicle];

sleep 0.1;

_tar1 moveInCargo _vehicle;

player setVariable ["restrained",true, true];
