//////////////////////////////////////////////////////////////////
// Function file for ArmA 2: Operation Arrowhead
// Created by: kylania, Edited by: 42nd|Bigshot
//////////////////////////////////////////////////////////////////

// Array of available aircraft.  Simply add or remove classnames to adjust the available pool.
_westvehicle = ["Exile_Bike_QuadBike_Black","Exile_Bike_MountainBike","Exile_Bike_QuadBike_Red","Exile_Bike_OldBike"];

// Marker where aircraft will spawn.
_spawnPoint = _this select 0; 

// Customize hint colors.
//_westColor = "#3366FF";

// Grab winning side from argument.
//_winningSide = _this select 0;

// Prepare variables.
private ["_reward"];

if (isServer) then {
	// Spawn vehicle and choose hint color based on winning side.
			_reward = _westvehicle select floor(random count _westvehicle) createVehicle getMarkerPos _spawnPoint;
			//_color = _westColor;
		
	};

	// Grab friendly name and image of vehicle.
	//_name = getText (configFile >> "cfgVehicles" >> typeOf _reward >> "displayName");
	//_picture = getText (configFile >> "cfgVehicles" >> typeOf _reward >> "picture");


};