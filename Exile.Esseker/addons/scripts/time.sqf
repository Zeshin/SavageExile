// Time Multiplier
// CRE4MPIE
// GamersInc.NET
// Creds to A3W, LouD for help

if (!isServer) exitWith {};

while {true} do
{
	if (daytime >= 19 || daytime < 5) then
	{
		30 setFog [0.9,0.05,20];
		setTimeMultiplier 24;
	}
	else
	{
	//	30 setFog [0,0,0];
		setTimeMultiplier 12;
	};

	uiSleep 30;
};