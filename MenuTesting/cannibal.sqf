_damage = 0;
_target = cursorTarget;

_distance = _target distance player;

if((alive cursorTarget) && (_distance < 2) && (_target getVariable "restrained") && (_target getVariable "ready")) then {
    player playMove "AmovPercMstpSnonWnonDnon_Scared";
    sleep 10;
    _damage = _damage + 0.2;
    _target setVariable ["hurt",((_target getVariable "hurt") + _damage), true];
    _target setDamage (_target getVariable "hurt");
    player addItem "sc_human_flesh";
};
