menu_key = {
	switch (_this) do {

                //Left windows
		case 219: {
        if ((!isnull finddisplay 46) && (player getVariable "menu")) then {
            closeDialog 46;
            player setVariable ["menu", false, true];
        } else {
            nul = [] execVM "script.sqf";
        };

		};
	};
};

waituntil {!isnull (finddisplay 46)};
(findDisplay 46) displayAddEventHandler ["KeyDown","_this select 1 call menu_key;false;"];
