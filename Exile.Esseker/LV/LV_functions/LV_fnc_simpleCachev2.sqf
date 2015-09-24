/*ARMA3 function LV_fnc_simpleCachev2 v0.2 - by Na_Palm
initial version by SPUn / lostvar

		This script caches fillHouse & militarize scripts.

	nul = [[script parameter list], distance, keep count] execVM "LV\LV_functions\LV_fnc_simpleCache.sqf";
	
	script parameter list	=	array of [scriptID, [parameter]]
								scriptID = 1: militarize, 2: fillHouse
								parameter = array of required parameters for the script
								the same as you would use for them direcly
	distance				=	distance between player(s) and militarize/fillHouse on where scripts will be activated
	keep count				=	true = script will count & save AI amounts, false = AI amount will be reseted on each time it activates again
	
	For server admins, the loop can be switched off with command on server: {swAI_Run = false;}
	
	example 1 (for use in GameLogic):
	nul = [[[1, [<parameter for 1>]], [2, [<parameter for 2>]]], 500, true] execVM "LV\LV_functions\LV_fnc_simpleCachev2.sqf";

	example 2 (for use in init.sqf or initServer.sqf):
	LV_fnc_simpleCachev2 = compileFinal preProcessFileLineNumbers "LV\LV_functions\LV_fnc_simpleCachev2.sqf";
	[[[1, [<parameter for 1>]], [2, [<parameter for 2>]]], 500, true] spawn LV_fnc_simpleCachev2;

	example 3 (for use in init.sqf or initServer.sqf):
	LV_fnc_simpleCachev2 = compileFinal preProcessFileLineNumbers "LV\LV_functions\LV_fnc_simpleCachev2.sqf";
	_sCscript_list =[
						[1, [<parameter for 1>]],
						[2, [<parameter for 2>]]
					];
	[_sCscript_list, 500, true] spawn LV_fnc_simpleCachev2;

*/
if (!isServer)exitWith{};
if(isNil {LV_fnc_removeGroupv2}) then {LV_fnc_removeGroupv2 = compileFinal preProcessFileLineNumbers "LV\LV_functions\LV_fnc_removeGroupv2.sqf";};
if(isNil {NP_fnc_isPlayernear}) then {NP_fnc_isPlayernear = compileFinal preProcessFileLineNumbers "LV\LV_functions\NP_fnc_isPlayernear.sqf";};
if(isNil {LV_militarize}) then {LV_militarize = compileFinal preProcessFileLineNumbers "LV\militarize.sqf";};
if(isNil {LV_fillHouse}) then {LV_fillHouse = compileFinal preProcessFileLineNumbers "LV\fillHouse.sqf";};

private ["_distance","_grpname","_hndl","_keepCount","_MenCount","_needDespwn","_needSpwn",
"_posOfScriptMrkr","_scrptPara_list","_spwndSciptIdx_list","_VehCount"];

_scrptPara_list = [_this, 0, [], [[]]] call BIS_fnc_param;
_distance = [_this, 1, 1000, [0]] call BIS_fnc_param;
_keepCount = [_this, 2, false, [true]] call BIS_fnc_param;

//vars it needs
_spwndSciptIdx_list = [];
swAI_Run = true;
diag_log format["---- starting simpleCacheV2 now ------------------"];

while{((count _scrptPara_list) > 0) && swAI_Run} do {
	//check if to keep count
	if (_keepCount) then {
		{
			_grpname = grpNull;
			//is it already spawned?
			if (_forEachIndex in _spwndSciptIdx_list) then {
				_MenCount = 0;
				_VehCount = 0;
				//get groupname
				if ((_x select 0) == 1) then {
					call compile format["_grpname = LVgroup%1",(_x select 1 select 11)];
				} else {
					call compile format["_grpname = LVgroup%1",(_x select 1 select 9)];
				};
				//get unit/vehicle count in group
				_MenCount = ({alive _x} count units _grpname);
				if ((_x select 0) == 1) then {
					{
						if (vehicle _x != _x) then {
							if ((canMove (vehicle _x)) && (alive _x)) then {
								_VehCount = _VehCount + 1;
								_MenCount = _MenCount - 1;
							};
						};
						sleep 0.001;
					}forEach units _grpname;
				};
				if ((_MenCount == 0) && (_VehCount == 0)) then {
					//script has no units left, so delete it from _scrptPara_list and DESPAWN
					if ((_x select 0) == 1) then {
						call compile format["_grpname = LVgroup%1",(_x select 1 select 11)];
					} else {
						call compile format["_grpname = LVgroup%1",(_x select 1 select 9)];
					};
					[_grpname] call LV_fnc_removeGroupv2;
					_spwndSciptIdx_list = _spwndSciptIdx_list - [_forEachIndex];
					_scrptPara_list set [_forEachIndex, 999999];
					_scrptPara_list = _scrptPara_list - [999999];
				} else {
					//change parameter array according to new counts
					if ((_x select 0) == 1) then {
						//militarize
						(_x select 1) set [6, [_MenCount, 0]];
						(_x select 1) set [7, [_VehCount, 0]];
					} else {
						//fillHouse
						(_x select 1) set [4, [_MenCount, 0]];
					};
				};
			};
			sleep 0.001;
		}forEach _scrptPara_list;
	};
	
	//check if a spawned script needs to DESPAWN, then do it
	{
		_needDespwn = true;
		//is it already spawned?
		if (_forEachIndex in _spwndSciptIdx_list) then {
			//get position in accordance to type
			if ((_x select 1 select 0) in allMapMarkers) then {
				_posOfScriptMrkr = getMarkerPos (_x select 1 select 0);
			} else {
				if (typeName (_x select 1 select 0) == "ARRAY") then {
					_posOfScriptMrkr = (_x select 1 select 0);
				} else {
					_posOfScriptMrkr = getPos (_x select 1 select 0);
				};
			};
			//check if player near
			_needDespwn = !([_posOfScriptMrkr, _distance] call NP_fnc_isPlayernear);
		} else {
			_needDespwn	= false;
		};
		//despawn it
		if (_needDespwn) then {
			if ((_x select 0) == 1) then {
				call compile format["_grpname = LVgroup%1",(_x select 1 select 11)];
				//check if vehicle got hijacked
				//thanks Meatball for reminding me!
				{
					if (vehicle _x != _x) then {
						_hijacked = false;
						_hijGroup = grpNull;
						{
							if (alive _x) then {
								if !(_x in (units _grpname)) exitWith {_hijGroup = (group _x); _hijacked = true;};
							};
							if (_hijacked) exitWith {};
							sleep 0.001;
						}forEach crew _x;
						if (_hijacked) then {
							[_x] joinSilent _hijGroup;
						};
					};
					sleep 0.001;
				}forEach units _grpname;
			} else {
				call compile format["_grpname = LVgroup%1",(_x select 1 select 9)];
			};
			[_grpname] call LV_fnc_removeGroupv2;
			_spwndSciptIdx_list = _spwndSciptIdx_list - [_forEachIndex];
		};
		sleep 0.001;
	}forEach _scrptPara_list;
	
	//check if a script needs to SPAWN, then do it
	{
		_needSpwn = false;
		//is it already spawned?
		if !(_forEachIndex in _spwndSciptIdx_list) then {
			//get position in accordance to type
			if ((_x select 1 select 0) in allMapMarkers) then {
				_posOfScriptMrkr = getMarkerPos (_x select 1 select 0);
			} else {
				if (typeName (_x select 1 select 0) == "ARRAY") then {
					_posOfScriptMrkr = (_x select 1 select 0);
				} else {
					_posOfScriptMrkr = getPos (_x select 1 select 0);
				};
			};
			//check if player near
			_needSpwn = [_posOfScriptMrkr, _distance] call NP_fnc_isPlayernear;
		};
		//spawn it
		if (_needSpwn) then {
			if ((_x select 0) == 1) then {
				_hndl = (_x select 1) spawn LV_militarize;
				waitUntil {scriptDone _hndl};
			} else {
				_hndl = (_x select 1) spawn LV_fillHouse;
				waitUntil {scriptDone _hndl};
			};
			_spwndSciptIdx_list set [count _spwndSciptIdx_list, _forEachIndex];
		};
		sleep 0.001;
	}forEach _scrptPara_list;
	
	sleep 0.001;
};
diag_log format ["-%1-!!LV_simpleCachev2 SHOTDOWN!!--"];
