_tar1 = cursorTarget;

restrained = true;

_tar1 setVariable ["restrained",true, true];

test = [_tar1] execVM "restrain.sqf";
