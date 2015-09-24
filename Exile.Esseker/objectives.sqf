//_obj = [1,2,3,4,5,6];

_loc = ["1","2","3"];

_random = _loc call BIS_fnc_selectRandom;

sleep random 7200;

switch (_random) do
{
	case "1":
	{
		nul = [] execVM "weapon_obj_1.sqf";
		//hint "it worked1";
	};
	case "2":
	{
		nul = [] execVM "industrial_obj_1.sqf";
		//hint "it worked2";
	};
	case "3":
	{
		nul = [] execVM "med/med_obj.sqf";
		//hint "it worked2";
	};
};

