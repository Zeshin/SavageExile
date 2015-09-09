execVM "blckClient.sqf";
[] execVM "R3F_LOG\init.sqf";


if (isServer) then {
//[] execVM "vehicleMarkers.sqf";
["Spawn1"] execVM "addons\Scripts\randomVehicle.sqf";			//starter vehicles
["Spawn2"] execVM "addons\Scripts\randomVehicle.sqf"; 			//starter vehicles
["Spawn3"] execVM "addons\Scripts\randomVehicle.sqf"; 			//starter vehicles
["Spawn4"] execVM "addons\Scripts\randomVehicle.sqf"; 			//starter vehicles
["Spawn5"] execVM "addons\Scripts\randomVehicle.sqf"; 			//starter vehicles
[] execVM "addons\Scripts\time.sqf";			 							 // Time
[] execVM "addons\eos\OpenMe.sqf";											// EOS SYSTEM
[] execVM "\q\addons\custom_server\init.sqf"; 									// Missions
[] execVM "addons\Buildings\initBuildings.sqf";								// Trader posts and bases
// [] execVM "addons\scripts\jump.sqf"; //Jump using c double tap script (turned off for now)
};


