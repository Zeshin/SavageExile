/*
				***		ARMA3Alpha MILITARIZE AREA SCRIPT v2.1 - by SPUn / lostvar	***

			Calling the script:

		default: 	nul = [this] execVM "LV\militarize.sqf";

		custom:		nul = [target, side, radius, spawn men, spawn vehicles, still, men ratio, vehicle ratio,
							skills, group, custom init, ID] execVM "LV\militarize.sqf";

		Parameters:

	target 		=	center point (name of marker or object or unit which is the center point of militarized area,
									or position array)
	side 		=	(0 = civilian, 1 = blue, 2 = red, 3 = green) 													DEFAULT: 2
	radius 		=	(from center position) 																			DEFAULT: 150
	spawn men 	= 	[spawn land units, spawn water units]															DEFAULT: [true,false]
					(both values are true or false)
	spawn vehicles =[spawn land vehicles, spawn water vehicles, spawn air vehicles] 								DEFAULT: [true,false,false]
					(all values are true or false)
	still 		= 	true or false 	(if false, then units will patrol in radius, checkin also buildings) 			DEFAULT: false
	men ratio 	=	(amount of spawning men is radius * men ratio, ie: 250 * 0.2 = 50 units) 						DEFAULT: 0.3
					NOTE: Array - you can also use following syntax: [amount,random amount] for example:
					[10,5] will spawn at least 10 units + random 1-5 units
	vehicle ratio= 	(amount of spawning vehicles is radius * vehicle ratio, ie: 250 * 0.1 = 25 vehicles) 			DEFAULT: 0.1
					NOTE: Same array syntax as in "men ratio" works here too!
	skills 		= 	"default" 	(default AI skills) 																DEFAULT: "default"
				or	number	=	0-1.0 = this value will be set to all AI skills, ex: 0.8
				or	array	=	all AI skills invidiually in array, values 0-1.0, order:
		[aimingAccuracy, aimingShake, aimingSpeed, spotDistance, spotTime, courage, commanding, general, endurance, reloadSpeed]
		ex: 	[0.75,0.5,0.6,0.85,0.9,1,1,0.75,1,1]
	group 		= 	group name or nil (if you want units in existing group, set it here. if nil, new group is made) DEFAULT: nil
					EXAMPLE: (group player)
	custom init = 	"init commands" (if you want something in init field of units, put it here) 					DEFAULT: nil
				NOTE: Keep it inside quotes, and if you need quotes in init commands, you MUST use ' or "" instead of ".
				EXAMPLE: "hint 'this is hint';"
	ID 			= 	number (if you want to delete units this script creates, you'll need ID number for them) 		DEFAULT: nil

EXAMPLE: nul = [this,2,50,[true,true],[true,false,true],false,[10,0],0.1,[0.2,0.2,0.2,0.85,0.9,0.75,0.1,0.6,1,1],nil,nil,13] execVM "LV\militarize.sqf";
*/
if (!isServer)exitWith{};
private ["_greenMenArray","_grpId","_customInit","_cPos","_skls","_skills","_dir","_range","_unitType","_unit","_radius","_men","_vehicles","_still","_centerPos","_menAmount","_vehAmount","_milHQ","_milGroup","_menArray","_blueMenArray","_redMenArray","_yellowMenArray","_side","_pos","_yellowCarArray","_allUnitsArray","_menRatio","_vehRatio","_diveArray","_validPos","_side","_driver","_whichOne","_vehicle","_crew","_thisArray","_smokesAndChems","_doorHandling","_BLUdivers","_OPFdivers","_INDdivers"];

//Extra options:
_smokesAndChems = true;
_doorHandling = true;
//

_cPos = if(count _this > 0)then{_this select 0;};
_side = if (count _this > 1) then { _this select 1; }else{2;};
_radius = if (count _this > 2) then { _this select 2; }else{150;};
_men = if (count _this > 3) then { _this select 3; }else{[true,false];};
_vehicles = if (count _this > 4) then { _this select 4; }else{[true,false,false];};
_still = if (count _this > 5) then { _this select 5; }else{false;};
_menRatio = if (count _this > 6) then { _this select 6; }else{0.3;};
_vehRatio = if (count _this > 7) then { _this select 7; }else{0.02;};
_skills = if (count _this > 8) then { _this select 8; }else{"default";};
_milGroup = if (count _this > 9) then { _this select 9; }else{nil;}; if(!isNil("_milGroup"))then{if(_milGroup == "nil0")then{_milGroup = nil;};};
_customInit = if (count _this > 10) then { _this select 10; }else{nil;}; if(!isNil("_customInit"))then{if(_customInit == "nil0")then{_customInit = nil;};};
_grpId = if (count _this > 11) then { _this select 11; }else{nil;};

if(_cPos in allMapMarkers)then{
	_centerPos = getMarkerPos _cPos;
}else{
	if (typeName _cPos == "ARRAY") then{
		_centerPos = _cPos;
	}else{
		_centerPos = getPos _cPos;
	};
};

if(isNil("LV_ACskills"))then{LV_ACskills = compile preprocessFile "LV\LV_functions\LV_fnc_ACskills.sqf";};
if(isNil("LV_vehicleInit"))then{LV_vehicleInit = compile preprocessFile "LV\LV_functions\LV_fnc_vehicleInit.sqf";};

if(isNil("LV_fullLandVehicle"))then{LV_fullLandVehicle = compile preprocessFile "LV\LV_functions\LV_fnc_fullLandVehicle.sqf";};
if(isNil("LV_fullAirVehicle"))then{LV_fullAirVehicle = compile preprocessFile "LV\LV_functions\LV_fnc_fullAirVehicle.sqf";};
if(isNil("LV_fullWaterVehicle"))then{LV_fullWaterVehicle = compile preprocessFile "LV\LV_functions\LV_fnc_fullWaterVehicle.sqf";};

if(typeName _menRatio == "ARRAY")then{
	_menAmount = (_menRatio select 0) + (random (_menRatio select 1));
}else{
	_menAmount = round (_radius * _menRatio);
};
if(typeName _vehRatio == "ARRAY")then{
	_vehAmount = (_vehRatio select 0) + (random (_vehRatio select 1));
}else{
	_vehAmount = round (_radius * _vehRatio);
};
_allUnitsArray = [];

_blueMenArray = ["RyanZombieB_RangeMaster_FslowOpfor",
"RyanZombieB_Soldier_lite_F_1slowOpfor",
"RyanZombieB_Soldier_lite_FslowOpfor",
"RyanZombieB_Soldier_05_fslowOpfor",
"RyanZombieB_Soldier_04_f_1_1slowOpfor",
"RyanZombieB_Soldier_04_f_1slowOpfor",
"RyanZombieB_Soldier_04_fslowOpfor",
"RyanZombieB_Soldier_03_f_1_1slowOpfor",
"RyanZombieB_Soldier_03_f_1slowOpfor",
"RyanZombieB_Soldier_03_fslowOpfor",
"RyanZombieB_Soldier_02_f_1_1slowOpfor",
"RyanZombieB_Soldier_02_f_1slowOpfor",
"RyanZombieB_Soldier_02_fslowOpfor",
"RyanZombieC_NikosslowOpfor",
"RyanZombieC_OrestesslowOpfor",
"RyanZombieC_journalist_FslowOpfor",
"RyanZombieC_man_pilot_FslowOpfor",
"RyanZombieC_man_hunter_1_FslowOpfor",
"RyanZombieC_scientist_FslowOpfor",
"RyanZombieC_man_w_worker_FslowOpfor",
"RyanZombieC_man_p_fugitive_FslowOpfor",
"RyanZombieC_man_polo_6_FslowOpfor",
"RyanZombieC_man_polo_5_FslowOpfor",
"RyanZombieC_man_polo_4_FslowOpfor",
"RyanZombieC_man_polo_2_FslowOpfor",
"RyanZombieC_man_polo_1_FslowOpfor",
"RyanZombieC_man_1slowOpfor"];
_redMenArray = ["RyanZombieSpider14Opfor",
"RyanZombieSpider13Opfor",
"RyanZombieSpider12Opfor",
"RyanZombieSpider11Opfor",
"RyanZombieSpider10Opfor",
"RyanZombieSpider9Opfor",
"RyanZombieSpider8Opfor",
"RyanZombieSpider7Opfor",
"RyanZombieSpider6Opfor",
"RyanZombieSpider5Opfor",
"RyanZombieSpider4Opfor",
"RyanZombieSpider3Opfor",
"RyanZombieSpider2Opfor",
"RyanZombieSpider1Opfor",
"RyanZombieboss14Opfor",
"RyanZombieboss13Opfor",
"RyanZombieboss12Opfor",
"RyanZombieboss11Opfor",
"RyanZombieboss10Opfor",
"RyanZombieboss9Opfor",
"RyanZombieboss8Opfor",
"RyanZombieboss7Opfor",
"RyanZombieboss6Opfor",
"RyanZombieboss5Opfor",
"RyanZombieboss4Opfor",
"RyanZombieboss3Opfor",
"RyanZombieboss2Opfor",
"RyanZombieboss1Opfor",
"RyanZombieB_RangeMaster_FmediumOpfor",
"RyanZombieB_Soldier_lite_F_1mediumOpfor",
"RyanZombieB_Soldier_lite_FmediumOpfor",
"RyanZombieB_Soldier_05_fmediumOpfor",
"RyanZombieB_Soldier_04_f_1_1mediumOpfor",
"RyanZombieB_Soldier_04_fmediumOpfor",
"RyanZombieB_Soldier_03_f_1_1mediumOpfor",
"RyanZombieB_Soldier_03_f_1mediumOpfor",
"RyanZombieB_Soldier_03_fmediumOpfor",
"RyanZombieB_Soldier_02_f_1_1mediumOpfor",
"RyanZombieB_Soldier_02_f_1mediumOpfor",
"RyanZombieB_Soldier_02_fmediumOpfor",
"RyanZombieC_NikosmediumOpfor",
"RyanZombieC_OrestesmediumOpfor",
"RyanZombieC_journalist_FmediumOpfor",
"RyanZombieC_man_pilot_FmediumOpfor",
"RyanZombieC_man_hunter_1_FmediumOpfor",
"RyanZombieC_scientist_FmediumOpfor",
"RyanZombieC_man_w_worker_FmediumOpfor",
"RyanZombieC_man_p_fugitive_FmediumOpfor",
"RyanZombieC_man_polo_6_FmediumOpfor",
"RyanZombieC_man_polo_5_FmediumOpfor",
"RyanZombieC_man_polo_4_FmediumOpfor",
"RyanZombieC_man_polo_2_FmediumOpfor",
"RyanZombieC_man_polo_1_FmediumOpfor",
"RyanZombieC_man_1mediumOpfor",
"RyanZombieB_RangeMaster_FslowOpfor",
"RyanZombieB_Soldier_lite_F_1slowOpfor",
"RyanZombieB_Soldier_lite_FslowOpfor",
"RyanZombieB_Soldier_05_fslowOpfor",
"RyanZombieB_Soldier_04_f_1_1slowOpfor",
"RyanZombieB_Soldier_04_f_1slowOpfor",
"RyanZombieB_Soldier_04_fslowOpfor",
"RyanZombieB_Soldier_03_f_1_1slowOpfor",
"RyanZombieB_Soldier_03_f_1slowOpfor",
"RyanZombieB_Soldier_03_fslowOpfor",
"RyanZombieB_Soldier_02_f_1_1slowOpfor",
"RyanZombieB_Soldier_02_f_1slowOpfor",
"RyanZombieB_Soldier_02_fslowOpfor",
"RyanZombieC_NikosslowOpfor",
"RyanZombieC_OrestesslowOpfor",
"RyanZombieC_journalist_FslowOpfor",
"RyanZombieC_man_pilot_FslowOpfor",
"RyanZombieC_man_hunter_1_FslowOpfor",
"RyanZombieC_scientist_FslowOpfor",
"RyanZombieC_man_w_worker_FslowOpfor",
"RyanZombieC_man_p_fugitive_FslowOpfor",
"RyanZombieC_man_polo_6_FslowOpfor",
"RyanZombieC_man_polo_5_FslowOpfor",
"RyanZombieC_man_polo_4_FslowOpfor",
"RyanZombieC_man_polo_2_FslowOpfor",
"RyanZombieC_man_polo_1_FslowOpfor",
"RyanZombieC_man_1slowOpfor",
"RyanZombieB_RangeMaster_FOpfor",
"RyanZombieB_Soldier_lite_F_1Opfor",
"RyanZombieB_Soldier_lite_FOpfor",
"RyanZombieB_Soldier_05_fOpfor",
"RyanZombieB_Soldier_04_f_1_1Opfor",
"RyanZombieB_Soldier_04_f_1Opfor",
"RyanZombieB_Soldier_04_fOpfor",
"RyanZombieB_Soldier_03_f_1_1Opfor",
"RyanZombieB_Soldier_03_f_1Opfor",
"RyanZombieB_Soldier_03_fOpfor",
"RyanZombieB_Soldier_02_f_1_1Opfor",
"RyanZombieB_Soldier_02_f_1Opfor",
"RyanZombieB_Soldier_02_fOpfor",
"RyanZombieC_OrestesOpfor",
"RyanZombieC_journalist_FOpfor",
"RyanZombieC_man_pilot_FOpfor",
"RyanZombieC_man_hunter_1_FOpfor",
"RyanZombieC_scientist_FOpfor",
"RyanZombieC_man_w_worker_FOpfor",
"RyanZombieC_man_p_fugitive_FOpfor",
"RyanZombieC_man_polo_6_FOpfor",
"RyanZombieC_man_polo_5_FOpfor",
"RyanZombieC_man_polo_4_FOpfor",
"RyanZombieC_man_polo_2_FOpfor",
"RyanZombieC_man_1Opfor"];
_greenMenArray = ["I_Soldier_A_F","I_soldier_AR_F","I_medic_F","I_engineer_F","I_soldier_exp_F","I_Soldier_GL_F","I_soldier_M_F","I_soldier_AA_F","I_soldier_AT_F","I_officer_F","I_soldier_repair_F","I_Soldier_F","I_soldier_LAT_F","I_Soldier_lite_F","I_Soldier_SL_F","I_Soldier_TL_F","I_soldier_AAR_F","I_soldier_AAA_F","I_soldier_AAT_F"];
_yellowMenArray = ["C_man_p_beggar_F","C_man_1","C_man_polo_2_F","C_man_polo_3_F","C_man_polo_4_F","C_man_polo_5_F","C_man_polo_6_F",
"C_man_shorts_1_F","C_man_1_1_F","C_man_1_2_F","C_man_1_3_F","C_man_p_fugitive_F","C_man_p_shorts_1_F","C_man_hunter_1_F",
"C_man_pilot_F","C_man_shorts_2_F","C_man_shorts_3_F","C_man_shorts_4_F","C_man_w_worker_F",
"C_man_p_beggar_F_euro","C_man_1_euro","C_man_polo_2_F_euro","C_man_polo_3_F_euro","C_man_polo_4_F_euro","C_man_polo_5_F_euro","C_man_polo_6_F_euro",
"C_man_shorts_1_F_euro","C_man_p_fugitive_F_euro","C_man_p_shorts_1_F_euro","C_man_shorts_2_F_euro","C_man_shorts_3_F_euro","C_man_shorts_4_F_euro",
"C_man_p_beggar_F_afro","C_man_1_afro","C_man_polo_2_F_afro","C_man_polo_3_F_afro","C_man_polo_4_F_afro","C_man_polo_5_F_afro","C_man_polo_6_F_afro",
"C_man_shorts_1_F_afro","C_man_p_fugitive_F_afro","C_man_p_shorts_1_F_afro","C_man_shorts_2_F_afro","C_man_shorts_3_F_afro","C_man_shorts_4_F_afro",
"C_man_p_beggar_F_asia","C_man_1_asia","C_man_polo_2_F_asia","C_man_polo_3_F_asia","C_man_polo_4_F_asia","C_man_polo_5_F_asia","C_man_polo_6_F_asia",
"C_man_shorts_1_F_asia","C_man_p_fugitive_F_asia","C_man_p_shorts_1_F_asia","C_man_shorts_2_F_asia","C_man_shorts_3_F_asia","C_man_shorts_4_F_asia"];

_BLUdivers = ["B_diver_F","B_diver_exp_F","B_diver_TL_F"];
_OPFdivers = ["O_diver_F","O_diver_exp_F","O_diver_TL_F"];
_INDdivers = ["I_diver_F","I_diver_exp_F","I_diver_TL_F"];

_yellowCarArray = ["C_Offroad_01_F","C_Quadbike_01_F","C_Hatchback_01_F","C_Hatchback_01_sport_F","C_SUV_01_F","C_Van_01_transport_F","C_Van_01_box_F"];

switch (_side) do {
    case 1: {
        _milHQ = createCenter west;
		if(isNil("_milGroup"))then{_milGroup = createGroup west;}else{_milGroup = _milGroup;};
        _menArray = _blueMenArray;
		_diveArray = _BLUdivers;
    };
    case 2: {
        _milHQ = createCenter east;
        if(isNil("_milGroup"))then{_milGroup = createGroup east;}else{_milGroup = _milGroup;};
        _menArray = _redMenArray;
		_diveArray = _OPFdivers;
    };
	case 3: {
        _milHQ = createCenter resistance;
        if(isNil("_milGroup"))then{_milGroup = createGroup resistance;}else{_milGroup = _milGroup;};
        _menArray = _greenMenArray;
		_diveArray = _INDdivers;
    };
    default {
        _milHQ = createCenter civilian;
        if(isNil("_milGroup"))then{_milGroup = createGroup civilian;}else{_milGroup = _milGroup;};
        _menArray = _yellowMenArray;
    };
};


if((_men select 0)||(_men select 1))then{
	for "_i" from 1 to _menAmount do{
		_validPos = false;
		while{!_validPos}do{
			_dir = random 360;
			_range = random _radius;
			_pos = [(_centerPos select 0) + (sin _dir) * _range, (_centerPos select 1) + (cos _dir) * _range, 0];

			if(_side > 0)then{
				if(surfaceIsWater _pos)then{
					if(_men select 1)then{
						_unitType = _diveArray select (floor(random(count _diveArray)));
						_validPos = true;
					};
				}else{
					if(_men select 0)then{
						_unitType = _menArray select (floor(random(count _menArray)));
						_validPos = true;
					};
				};
			}else{
				if(!surfaceIsWater _pos)then{
					_unitType = _menArray select (floor(random(count _menArray)));
					_validPos = true;
				};
			};
		};
		_unit = _milGroup createUnit [_unitType, _pos, [], 0, "NONE"];
		_unit setPos _pos;

		if(!_still)then{
			if(_unitType in _menArray)then{
				nul = [_unit,_cPos,_radius,_doorHandling] execVM "LV\patrol-vD.sqf";
			}else{
				nul = [_unit,_pos] execVM 'LV\patrol-vH.sqf';
			};
		};
		_unit allowDamage false;
		_allUnitsArray set [(count _allUnitsArray), _unit];

		_unit addMagazine "SmokeShell";
		_unit addMagazine ["Chemlight_green","Chemlight_red","Chemlight_yellow","Chemlight_blue"] call BIS_fnc_selectRandom;
	};
};

_milGroup setBehaviour "SAFE";

if((_vehicles select 0)||(_vehicles select 1)||(_vehicles select 2))then{
    for "_i" from 1 to _vehAmount do{

		_validPos = false;
		while{!_validPos}do{

			_dir = random 360;
			_range = random _radius;
			_pos = [(_centerPos select 0) + (sin _dir) * _range, (_centerPos select 1) + (cos _dir) * _range, 0];

			if(_side > 0)then{
				if(surfaceIsWater _pos)then{
					if(_vehicles select 1)then{
						_driver = [_pos, (_side - 1)] call LV_fullWaterVehicle;
						if(!_still)then{nul = [vehicle _driver,_pos] execVM 'LV\patrol-vH.sqf';};
						_validPos = true;
					};
				}else{
					if((_vehicles select 0)&&(_vehicles select 2))then{
						_whichOne = floor(random 10);
						if(_whichOne < 3)then{
							_driver = [_pos, (_side - 1)] call LV_fullAirVehicle;
							if(!_still)then{nul = [_driver,_pos,[200,200]] execVM 'LV\patrol-vE.sqf';};
							vehicle _driver flyInHeight 10;
							_validPos = true;
						}else{
							_driver = [_pos, (_side - 1)] call LV_fullLandVehicle;
							if(!_still)then{nul = [vehicle _driver,_pos] execVM 'LV\patrol-vE.sqf';};
							_validPos = true;
						};
					}else{
						if(_vehicles select 0)then{
							_driver = [_pos, (_side - 1)] call LV_fullLandVehicle;
							if(!_still)then{nul = [vehicle _driver,_pos] execVM 'LV\patrol-vE.sqf';};
							_validPos = true;
						}else{
							if(_vehicles select 2)then{
								_driver = [_pos, (_side - 1)] call LV_fullAirVehicle;
								if(!_still)then{nul = [_driver,_pos,[200,200]] execVM 'LV\patrol-vE.sqf';};
								vehicle _driver flyInHeight 10;
								_validPos = true;
							};
						};
					};
				};
			}else{
				if(!surfaceIsWater _pos)then{
					_unitType = _yellowCarArray select (floor(random(count _yellowCarArray)));
					_vehicle = createVehicle [_unitType, _pos, [], 0, "NONE"];
					_crew = [_vehicle, _milGroup] call BIS_fnc_spawnCrew;
					_driver = driver _vehicle;
					if(!_still)then{nul = [_driver,_pos] execVM 'LV\patrol-vE.sqf';};
					_validPos = true;
				};
			};

		};

		_vehicle = vehicle _driver;
        _vehicle allowDamage false;

        _allUnitsArray set [(count _allUnitsArray), _vehicle];

		(units(group _driver)) joinSilent _milGroup;
    };
};

	{
		if((typeName _skills != "STRING")&&((side _x) != civilian))then{ _skls = [_x,_skills] call LV_ACskills; };
		if(!isNil("_customInit"))then{
			[_x,_customInit] spawn LV_vehicleInit;
		};
	} forEach units _milGroup;


sleep 3;
{
    _x allowDamage true;
}forEach _allUnitsArray;

if(!isNil("_grpId"))then{
	call compile format ["LVgroup%1 = _milGroup",_grpId];
	call compile format["LVgroup%1spawned = true;", _grpId];
	_thisArray = [];
	{
		if(isNil("_x"))then{
			_thisArray set[(count _thisArray),"nil0"];
		}else{
			_thisArray set[(count _thisArray),_x];
		};
	}forEach _this;
	call compile format["LVgroup%1CI = ['militarize',%2]",_grpId,_thisArray];
};

if(_smokesAndChems)then{
[_milGroup] spawn {
	private ["_grp","_chance"];
	_grp = _this select 0;
	while{(count units _grp) > 0}do{
			{
				if((behaviour _x) == "COMBAT")then{
					if(daytime > 23 || daytime < 5)then{
						_chance = floor(random 100);
						if(_chance < 3)exitWith{
							if("Chemlight_green" in (magazines _x))exitWith{
								_x fire ["ChemlightGreenMuzzle","ChemlightGreenMuzzle","Chemlight_green"];
							};
							if("Chemlight_red" in (magazines _x))exitWith{
								_x fire ["ChemlightRedMuzzle","ChemlightRedMuzzle","Chemlight_red"];
							};
							if("Chemlight_yellow" in (magazines _x))exitWith{
								_x fire ["ChemlightYellowMuzzle","ChemlightYellowMuzzle","Chemlight_yellow"];
							};
							if("Chemlight_blue" in (magazines _x))exitWith{
								_x fire ["ChemlightBlueMuzzle","ChemlightBlueMuzzle","Chemlight_blue"];
							};
						};
					};
					if("SmokeShell" in (magazines _x))exitWith{
						_chance = floor(random 100);
						if(_chance < 3)exitWith{
							_x fire ["SmokeShellMuzzle","SmokeShellMuzzle","SmokeShell"];
						};
					};
				};
			}forEach units _grp;
		sleep 10;
	};
};
};
