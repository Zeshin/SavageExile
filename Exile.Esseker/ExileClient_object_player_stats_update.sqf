/**
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_timeElapsed","_hungerFactor","_thirstFactor","_bloodAlcohol","_effectAttribute","_effectValue","_effectDuration","_effectStartTime","_effectValueRemaining","_endEffect","_effectToApply","_hunger","_thirst"];
if (isNil "ExileLastStatUpdate") then 
{ 
	ExileLastStatUpdate = diag_tickTime; 
};
_timeElapsed = diag_tickTime - ExileLastStatUpdate;
ExileClientPlayerLoad = loadAbs player;
ExileClientPlayerOxygen = getOxygenRemaining player * 100;
ExileClientPlayerAttributes set [0, (1 - damage player) * 100];
ExileClientPlayerAttributes set [1, (1 - getFatigue player) * 100];
ExileClientPlayerIsAbleToBreathe = isAbleToBreathe player;
ExileClientPlayerIsInfantry = vehicle player == player;
ExileClientPlayerVelocity = player call BIS_fnc_absSpeed;
ExileClientPlayerIsBleeding = isBleeding player;
ExileClientPlayerIsBurning = isBurning player;
ExileClientPlayerIsOverburdened = ExileClientPlayerLoad > 900; 
ExileClientPlayerIsDrowning = ExileClientPlayerOxygen < 50;
ExileClientPlayerIsInjured = (ExileClientPlayerAttributes select 0) < 50;
ExileClientPlayerIsHungry = (ExileClientPlayerAttributes select 2) < 25;
ExileClientPlayerIsThirsty = (ExileClientPlayerAttributes select 3) < 25;
ExileClientPlayerIsExhausted = (ExileClientPlayerAttributes select 1) < 40;
if (ExileClientIsAutoRunning) then
{
	call ExileClient_system_autoRun_update;
};
if( ExileClientPlayerIsInCombat ) then
{
	if( diag_tickTime - ExileClientPlayerLastCombatAt >= 30 ) then
	{
		ExileClientPlayerIsInCombat = false;
		false call ExileClient_gui_hud_toggleCombatIcon;
		call ExileClient_system_rating_balance;		
	};
};
_hungerFactor = 1;
_thirstFactor = 1;
if (ExileClientPlayerIsInfantry) then 
{
	if (ExileClientPlayerVelocity > 0) then 
	{
		_hungerFactor = 1 + ExileClientPlayerVelocity / 150 * _timeElapsed; 
		_thirstFactor = 1 + ExileClientPlayerVelocity / 120 * _timeElapsed; 
	};
};
ExileClientPlayerAttributes set [2, ((((ExileClientPlayerAttributes select 2) - (100 / 5400 * _hungerFactor * _timeElapsed)) min 100) max 0)];
ExileClientPlayerAttributes set [3, ((((ExileClientPlayerAttributes select 3) - (100 / 3600 * _thirstFactor * _timeElapsed)) min 100) max 0)];
if (ExileClientPlayerIsOverburdened) then
{
	ExileClientPlayerAttributes set [1, ((((ExileClientPlayerAttributes select 1) - 5 * _timeElapsed) min 100) max 0)];
};
if ((ExileClientPlayerAttributes select 2) == 0 || (ExileClientPlayerAttributes select 3) == 0 || ExileClientPlayerIsBleeding) then
{
	ExileClientPlayerAttributes set [0, ((((ExileClientPlayerAttributes select 0) - 5 * _timeElapsed) min 100) max 0)];
};
_bloodAlcohol = (ExileClientPlayerAttributes select 4);
if (_bloodAlcohol > 0) then
{
	ExileClientPlayerAttributes set [1, linearConversion [0, 3, _bloodAlcohol, 100, 0, true]];
};
{
	_effectAttribute = _x select 0;
	_effectValue = _x select 1;
	_effectDuration = _x select 2;
	_effectStartTime = _x select 3;
	_effectValueRemaining = _x select 4;
	_endEffect = time - _effectStartTime >= _effectDuration; 
	if( _effectValue > 0 ) then 
	{
		if (_effectDuration == 0) then 
		{
			_effectToApply = _effectValue;
		}
		else 
		{
			_effectToApply = (_effectValue / _effectDuration * _timeElapsed) min _effectValueRemaining;
		};
		_x set [4, _effectValueRemaining - _effectToApply];
		ExileClientPlayerAttributes set [_effectAttribute, ((((ExileClientPlayerAttributes select _effectAttribute) + _effectToApply) min 100) max 0)];
	}
	else 
	{
		if (_effectDuration == 0) then 
		{
			_effectToApply = abs _effectValue;
		}
		else 
		{
			_effectToApply = ((abs _effectValue) / _effectDuration * _timeElapsed) max _effectValueRemaining;
		};
		_x set [4, _effectValueRemaining + _effectToApply];
		ExileClientPlayerAttributes set [_effectAttribute, (((ExileClientPlayerAttributes select _effectAttribute) - (abs _effectToApply) min 100) max 0)];
	};
	if( (ExileClientPlayerAttributes select _effectAttribute) == 0 || (ExileClientPlayerAttributes select _effectAttribute) == 100 ) then
	{
		_endEffect = true;
	};
	if( _endEffect ) then
	{
		ExileClientPlayerEffects deleteAt _forEachIndex;
	};
}
 foreach ExileClientPlayerEffects;
player setDamage (1 - (ExileClientPlayerAttributes select 0) / 100);
_hunger = ExileClientPlayerAttributes select 2;
_thirst = ExileClientPlayerAttributes select 3;
if (diag_tickTime - ExileClientPlayerLastHpRegenerationAt >= 60) then
{
	if (_hunger >= 90) then
	{
		if (_thirst >= 90) then
		{
			player setDamage (((damage player) - 0.02) max 0);
			ExileClientPlayerLastHpRegenerationAt = diag_tickTime;
		};	
	};
};
ExileLastStatUpdate = diag_tickTime;
true