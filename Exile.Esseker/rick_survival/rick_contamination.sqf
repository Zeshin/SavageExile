// rickB´s contamination Zone script - playable units not wearing proper Gasmasks (M50 and M40´s - from HiddenIdentity Pack II) receive damage every 10 seconds
// put this in invisible helipad (found in editor under signs) to be center of desired contamiationzone: null = [this, 100, 80, 10] execVM "rick_survival\rick_contamination.sqf"
// playableunits being inside the contamiation zone (this) (inside radius 100m and under height 80m) will receive damage every 10 seconds
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

if (isserver OR isdedicated) then				{

_contaminationcenter = _this select 0;
_conrad = _this select 1; 
_height = _this select 2;
_time = _this select 3;

//wait until unit inside contaminated zone

waituntil {({(_contaminationcenter distance _x) < _conrad AND getposATL _x select 2 < _height } count switchableUnits) > 0 OR ({(_contaminationcenter distance _x) < _conrad AND getposATL _x select 2 < _height} count playableUnits) > 0};

_allplayers = switchableunits + playableunits;

{_allplayers = switchableunits + playableunits; if (_x distance _contaminationcenter < _conrad AND goggles _x != "Mask_M50" AND goggles _x != "Mask_M40" AND goggles _x != "Mask_M40_OD" AND getposATL _x select 2 < 80) then {hint format ["_%1, you should wear a gasmask here!",_x]; _x setdammage ((getdammage _x)+0.2)} } foreach _allplayers;


sleep _time;

null = [_contaminationcenter,_conrad, _height, _time] execVM "rick_survival\rick_contamination.sqf";


							};
