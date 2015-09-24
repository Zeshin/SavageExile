// rickB´s Breathing for HiddenIdentity Gasmasks M40 & M50
// put this in units init to make breathing sound while wearing one of the listed Gasmasks ->  null = [this] execVM "rick_survival\rick_mask_breathe.sqf";
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

_player = _this select 0;

if (isdedicated) exitwith {};

waituntil {goggles _player == "Mask_M50" OR goggles _player == "Mask_M40" OR goggles _player == "Mask_M40_OD"};

while {alive _player AND (goggles _player == "Mask_M50" OR goggles _player == "Mask_M40" OR goggles _player == "Mask_M40_OD")} do	{ 
playsound3d ["A3\sounds_f\characters\human-sfx\other\diver-breath-2.wss", _player,false,getposASL _player, 0.8,1,15];
sleep 5;

			};

null = [_player] execVM "rick_survival\rick_mask_breathe.sqf";

