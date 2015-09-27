[] execVM "blckClient.sqf";
[] execVM "R3F_LOG\init.sqf";




if (isServer) then {
[] execVM "addons\Scripts\time.sqf";			 							 // Time
//[] execVM "addons\eos\OpenMe.sqf";											// EOS SYSTEM
//[] execVM "\q\addons\custom_server\init.sqf"; 									// Missions
[] execVM "addons\Buildings\initBuildings.sqf";								// Trader posts and bases
[] spawn {
		while {true} do
		{
			onPlayerConnected {
				[_uid, _name] call ExileServer_system_network_event_onPlayerConnected;
				if(!isNil'fnc_infiSTAR_PlayerLog')then {
					[_uid,_name] call fnc_infiSTAR_PlayerLog;
					_mytime = call fnc_getserverTime;
					_log = _mytime + format['Connected: %1(%2) - time: %3 - serverFPS: %4',call fnc_getSteamNameIfSaved,_uid,time,diag_fps];
					_log call FNC_A3_CONNECTLOG;
				};
			};
			if(time > 360)exitWith{'should be enough to readd this 5minutes?! ^^'};
			uiSleep 1;
		};
	};
[] execVM "building/.sqf";
[] execVM "objectives.sqf";
[] execVM "passToHC.sqf";
//[] execVM "addons\Scripts\zombies.sqf";
//[] execVM "addons\Scripts\zombies2.sqf";
};

