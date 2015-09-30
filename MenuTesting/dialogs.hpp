class savage_dialog
{
	idd=-1;
	movingenable=false;

	class controls
	{
		////////////////////////////////////////////////////////
		// GUI EDITOR OUTPUT START (by Alex Burdin, v1.063, #Xyvile)
		////////////////////////////////////////////////////////

		class savage_frame: RscFrame
		{
			idc = 1800;
			x = 0;
			y = 13.5;
			w = 20;
			h = 11.5;
			colorBackground[] = {0,0,0,0.5};
			colorActive[] = {0,0,0,0.5};
		};
		class savage_background: Box
		{
			idc = 1;
			text = "";
			x = 0;
			y = 13;
			w = 20;
			h = 11.5;
		 colorBackground[] = {0,0,0,0.5};
		};
		class savage_close: RscButton
		{
			idc = 1600;
			text = "Close"; //--- ToDo: Localize;
			x = 0;
			y = 1;
			w = 0.15;
			h = 0.04;
			colorText[] = {123,0,0,0.6};
			colorBackground[] = {0,0,0,0.5};
			colorActive[] = {0,0,0,0.5};
			action = "closeDialog 46";
		};
		class savage_restrain: RscButton
		{
			idc = 1601;
			text = "Retrain";
			x = 0.0125;
			y = 0.56;
			w = 0.15;
			h = 0.04;
			colorText[] = {123,0,0,0.6};
			colorBackground[] = {0,0,0,0.5};
			colorActive[] = {0,0,0,0.5};
			action = "execVM 'captive.sqf'";
		};
		class savage_patdown: RscButton
		{
			idc = 1602;
			text = "Unrestrain";
			x = 0.0125;
			y = 0.62;
			w = 0.15;
			h = 0.04;
			colorText[] = {123,0,0,0.6};
			colorBackground[] = {0,0,0,0.5};
			colorActive[] = {0,0,0,0.5};
			action = "execVM 'unrestrain.sqf'";
		};
		class savage_move: RscButton
		{
			idc = 1603;
			text = "Pat Down";
			x = 0.0125;
			y = 0.68;
			w = 0.15;
			h = 0.04;
			colorText[] = {123,0,0,0.6};
			colorBackground[] = {0,0,0,0.5};
			colorActive[] = {0,0,0,0.5};
			action = "execVM 'dropitems.sqf'";
		};
		class savage_stopmoving: RscButton
		{
			idc = 1604;
			text = "Move";
			x = 0.0125;
			y = 0.74;
			w = 0.15;
			h = 0.04;
			colorText[] = {123,0,0,0.6};
			colorBackground[] = {0,0,0,0.5};
			colorActive[] = {0,0,0,0.5};
			action = "execVM 'move.sqf'";
		};
		class savage_putinvehicle: RscButton
		{
			idc = 1605;
			text = "Stop Moving";
			x = 0.0125;
			y = 0.8;
			w = 0.15;
			h = 0.04;
			colorText[] = {123,0,0,0.6};
			colorBackground[] = {0,0,0,0.5};
			colorActive[] = {0,0,0,0.5};
			action = "execVM 'detach.sqf'";
		};
		class savage_pullout: RscButton
		{
			idc = 1606;
			text = "Put in Vehicle";
			x = 0.0125;
			y = 0.86;
			w = 0.15;
			h = 0.04;
			colorText[] = {123,0,0,0.6};
			colorBackground[] = {0,0,0,0.5};
			colorActive[] = {0,0,0,0.5};
			action = "execVM 'vehicle.sqf'";
		};
		class savage_one: RscButton
		{
			idc = 1607;
			text = "Pull Out";
			x = 0.0125;
			y = 0.92;
			w = 0.15;
			h = 0.04;
			colorText[] = {123,0,0,0.6};
			colorBackground[] = {0,0,0,0.5};
			colorActive[] = {0,0,0,0.5};
			action = "execVM 'pullout.sqf'";
		};
		class savage_two: RscButton
		{
			idc = 1608;
			text = "Prep Collection";
			x = 0.175;
			y = 0.56;
			w = 0.15;
			h = 0.04;
			colorText[] = {123,0,0,0.6};
			colorBackground[] = {0,0,0,0.5};
			colorActive[] = {0,0,0,0.5};
			action = "execVM 'dmg_fnc.sqf'";
		};
		class savage_three: RscButton
		{
			idc = 1609;
			text = "Collect Meat";
			x = 0.175;
			y = 0.62;
			w = 0.15;
			h = 0.04;
			colorText[] = {123,0,0,0.6};
			colorBackground[] = {0,0,0,0.5};
			colorActive[] = {0,0,0,0.5};
			action = "execVM 'cannibal.sqf'";
		};
		class savage_four: RscButton
		{
			idc = 1610;
			x = 0.175;
			y = 0.68;
			w = 0.15;
			h = 0.04;
			colorText[] = {123,0,0,0.6};
			colorBackground[] = {0,0,0,0.5};
			colorActive[] = {0,0,0,0.5};
		};
		class savage_five: RscButton
		{
			idc = 1611;
			x = 0.175;
			y = 0.74;
			w = 0.15;
			h = 0.04;
			colorText[] = {123,0,0,0.6};
			colorBackground[] = {0,0,0,0.5};
			colorActive[] = {0,0,0,0.5};
		};
		class savage_six: RscButton
		{
			idc = 1612;
			x = 0.175;
			y = 0.8;
			w = 0.15;
			h = 0.04;
			colorText[] = {123,0,0,0.6};
			colorBackground[] = {0,0,0,0.5};
			colorActive[] = {0,0,0,0.5};
		};
		class savage_seven: RscButton
		{
			idc = 1613;
			x = 0.175;
			y = 0.86;
			w = 0.15;
			h = 0.04;
			colorText[] = {123,0,0,0.6};
			colorBackground[] = {0,0,0,0.5};
			colorActive[] = {0,0,0,0.5};
		};
		class savage_eight: RscButton
		{
			idc = 1614;
			x = 0.175;
			y = 0.92;
			w = 0.15;
			h = 0.04;
			colorText[] = {123,0,0,0.6};
			colorBackground[] = {0,0,0,0.5};
			colorActive[] = {0,0,0,0.5};
		};
		class savage_nine: RscButton
		{
			idc = 1615;
			x = 0.3375;
			y = 0.56;
			w = 0.15;
			h = 0.04;
			colorText[] = {123,0,0,0.6};
			colorBackground[] = {0,0,0,0.5};
			colorActive[] = {0,0,0,0.5};
		};
		class savage_ten: RscButton
		{
			idc = 1616;
			x = 0.3375;
			y = 0.62;
			w = 0.15;
			h = 0.04;
			colorText[] = {123,0,0,0.6};
			colorBackground[] = {0,0,0,0.5};
			colorActive[] = {0,0,0,0.5};
		};
		class savage_eleven: RscButton
		{
			idc = 1617;
			x = 0.3375;
			y = 0.68;
			w = 0.15;
			h = 0.04;
			colorText[] = {123,0,0,0.6};
			colorBackground[] = {0,0,0,0.5};
			colorActive[] = {0,0,0,0.5};
		};
		class savage_twelve: RscButton
		{
			idc = 1618;
			x = 0.3375;
			y = 0.74;
			w = 0.15;
			h = 0.04;
			colorText[] = {123,0,0,0.6};
			colorBackground[] = {0,0,0,0.5};
			colorActive[] = {0,0,0,0.5};
		};
		class savage_thirteen: RscButton
		{
			idc = 1619;
			x = 0.3375;
			y = 0.8;
			w = 0.15;
			h = 0.04;
			colorText[] = {123,0,0,0.6};
			colorBackground[] = {0,0,0,0.5};
			colorActive[] = {0,0,0,0.5};
		};
		class savage_fourteen: RscButton
		{
			idc = 1620;
			x = 0.3375;
			y = 0.86;
			w = 0.15;
			h = 0.04;
			colorText[] = {123,0,0,0.6};
			colorBackground[] = {0,0,0,0.5};
			colorActive[] = {0,0,0,0.5};
		};
		class savage_fifteen: RscButton
		{
			idc = 1621;
			x = 0.3375;
			y = 0.92;
			w = 0.15;
			h = 0.04;
			colorText[] = {123,0,0,0.6};
			colorBackground[] = {0,0,0,0.5};
			colorActive[] = {0,0,0,0.5};
		};
		////////////////////////////////////////////////////////
		// GUI EDITOR OUTPUT END
		////////////////////////////////////////////////////////

};
};
