_target = cursorTarget;

if (_target getVariable "restrained") then {
    //_target action ["SitDown", _target];
    _target setVariable ["ready", true, true];
    _target setVariable ["hurt",0, true];
};
