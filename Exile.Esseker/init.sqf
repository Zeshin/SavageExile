execVM "blckClient.sqf";
[] execVM "R3F_LOG\init.sqf";


if (isServer) then {
[] execVM "addons\Scripts\time.sqf";			 							 // Time
[] execVM "addons\eos\OpenMe.sqf";											// EOS SYSTEM
[] execVM "\q\addons\custom_server\init.sqf"; 									// Missions
[] execVM "addons\Buildings\initBuildings.sqf";								// Trader posts and bases
};