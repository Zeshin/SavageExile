_tar1 = _this select 0;

if(vehicle player == player) exitWith {};
if(player getVariable "restrainted") then
{
    detach player;
};
player action ["Eject", vehicle player];
