EOS_Spawn = compile preprocessfilelinenumbers "addons\eos\core\eos_launch.sqf";Bastion_Spawn=compile preprocessfilelinenumbers "addons\eos\core\b_launch.sqf";null=[] execVM "addons\eos\core\spawn_fnc.sqf";
// onplayerConnected {[] execVM "addons\eos\Functions\EOS_Markers.sqf";};
/* EOS 1.98 by BangaBob 
GROUP SIZES
 0 = 1
 1 = 2,4
 2 = 4,8
 3 = 8,12
 4 = 12,16
 5 = 16,20

EXAMPLE CALL - EOS
 null = [["MARKERNAME","MARKERNAME2"],[2,1,70],[0,1],[1,2,30],[2,60],[2],[1,0,10],[1,0,250,WEST]] call EOS_Spawn;
 null=[["M1","M2","M3"],[HOUSE GROUPS,SIZE OF GROUPS,PROBABILITY],[PATROL GROUPS,SIZE OF GROUPS,PROBABILITY],[LIGHT VEHICLES,SIZE OF CARGO,PROBABILITY],[ARMOURED VEHICLES,PROBABILITY], [STATIC VEHICLES,PROBABILITY],[HELICOPTERS,SIZE OF HELICOPTER CARGO,PROBABILITY],[FACTION,MARKERTYPE,DISTANCE,SIDE,HEIGHTLIMIT,DEBUG]] call EOS_Spawn;

EXAMPLE CALL - BASTION
 null = [["BAS_zone_1"],[3,1],[2,1],[2],[0,0],[0,0,EAST,false,false],[10,2,120,TRUE,TRUE]] call Bastion_Spawn;
 null=[["M1","M2","M3"],[PATROL GROUPS,SIZE OF GROUPS],[LIGHT VEHICLES,SIZE OF CARGO],[ARMOURED VEHICLES],[HELICOPTERS,SIZE OF HELICOPTER CARGO],[FACTION,MARKERTYPE,SIDE,HEIGHTLIMIT,DEBUG],[INITIAL PAUSE, NUMBER OF WAVES, DELAY BETWEEN WAVES, INTEGRATE EOS, SHOW HINTS]] call Bastion_Spawn;
*/
VictoryColor="colorGreen";	// Colour of marker after completion
hostileColor="colorRed";	// Default colour when enemies active
bastionColor="colorOrange";	// Colour for bastion marker
EOS_DAMAGE_MULTIPLIER=1;	// 1 is default
EOS_KILLCOUNTER=true;		// Counts killed units

null = [["EOSinf_1","EOSinf_2","EOSinf_3","EOSinf_4","EOSinf_5","EOSinf_6"],[2,1],[2,2,100],[0,0],[0],[0],[0,0],[2,1,200,CIVILIAN,TRUE]] call EOS_Spawn;
null = [["EOSrapt_1","EOSrapt_2","EOSrapt_3","EOSrapt_4","EOSrapt_5","EOSrapt_6","EOSrapt_7","EOSrapt_8","EOSrapt_9","EOSrapt_10"],[0,0],[4,0,100],[0,0],[0],[0],[0,0],[5,1,200,CIVILIAN,TRUE]] call EOS_Spawn;
null = [["EOSraptPack_1","EOSraptPack_2","EOSraptPack_3","EOSraptPack_4","EOSraptPack_5","EOSraptPack_6"],[0,0],[5,2,100],[0,0],[0],[0],[0,0],[5,1,200,CIVILIAN,TRUE]] call EOS_Spawn;
//null = [["EOSmot_1","EOSmot_2"],[0,0],[0,0],[3,1,90],[2,60],[0],[1,0,90],[0,0,350,EAST,FALSE]] call EOS_Spawn;
//null = [["BAS_zone_1"],[0,1],[0,2],[0],[1,2],[0,0,EAST,TRUE],[0,2,120,TRUE,FALSE]] call Bastion_Spawn;

