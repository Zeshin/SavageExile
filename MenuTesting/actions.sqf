_tar1 = _this select 0;
_tar2 = _this select 1;

_tar1 addAction ["Restrain","captive.sqf",[_tar1,_tar2]] call BIS_fnc_mp;
sleep 0.1;
_tar1 addAction ["Pat Down","dropitems.sqf",[_tar1]] call BIS_fnc_MP;
sleep 0.1;
_tar1 addAction ["Move","move.sqf",[_tar1,_tar2]] call BIS_fnc_MP;
sleep 0.1;
_tar1 addAction ["Put in Vehicle","vehicle.sqf",[_tar1,_tar2]] call BIS_fnc_MP;
sleep 0.1;