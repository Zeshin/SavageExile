///////////////////////////////////////////////////////////////////////////////
// Static Objects
///////////////////////////////////////////////////////////////////////////////
#include "initServer.sqf"
[] execVM "addons\statusBar\statusbar.sqf";
[] execVM "addons\scripts\playerMarkers.sqf";

// debuggin stuff
setTerrainGrid 25;
setObjectViewDistance 1500;
setViewDistance 2500;



if (!hasInterface || isServer) exitWith {};


///////////////////////////////////////////////////////////////////////////
// Hardware Trader Airport
///////////////////////////////////////////////////////////////////////////
	
_workBench = "Land_Workbench_01_F" createVehicleLocal [0,0,0];
_workBench setDir 31;
_workBench setPosATL [9434.81,4786.51,0.00145766];

[
    "Exile_Trader_Hardware",
    "WhiteHead_17",
    ["InBaseMoves_sitHighUp1"],
    [0.1, 0.1, -0.5],
    170,
    _workBench
]
call ExileClient_object_trader_create;


///////////////////////////////////////////////////////////////////////////
// Fast Food Trader Airport
///////////////////////////////////////////////////////////////////////////

_cashDesk = "Land_CashDesk_F" createVehicleLocal [0,0,0];
_cashDesk setPosATL [9419.76,4804.33,-1.23978e-005]; 
_cashDesk setVectorDirAndUp [[-0.792077,0.609903,-0.025152], [-0.0218133,0.0128973,0.999679]];

_microwave = "Land_Microwave_01_F" createVehicleLocal [0,0,0];
_cashDesk disableCollisionWith _microwave;         
_microwave disableCollisionWith _cashDesk; 
_microwave attachTo [_cashDesk, [-0.6, 0.2, 1.1]];

_ketchup = "Land_Ketchup_01_F" createVehicleLocal [0,0,0];
_cashDesk disableCollisionWith _ketchup;         
_ketchup disableCollisionWith _cashDesk; 
_ketchup attachTo [_cashDesk, [-0.6, 0, 1.1]];

_mustard = "Land_Mustard_01_F" createVehicleLocal [0,0,0];
_cashDesk disableCollisionWith _mustard;         
_mustard disableCollisionWith _cashDesk; 
_mustard attachTo [_cashDesk, [-0.5, -0.05, 1.1]];

[
    "Exile_Trader_Food",
    "GreekHead_A3_01",
    ["InBaseMoves_table1"],
    [0.1, 0.5, 0.2],
    170,
    _cashDesk
]
call ExileClient_object_trader_create;



///////////////////////////////////////////////////////////////////////////
// Armory Trader Airport
///////////////////////////////////////////////////////////////////////////

_chair = "Land_CampingChair_V2_F" createVehicleLocal [0,0,0];
_chair setPosATL [9453.79,4780.19,6.000144958]; 
_chair setVectorDirAndUp [[-0.998843,0.0455372,0.0154622], [0.0153858,-0.00202871,0.999879]];

[
    "Exile_Trader_Armory",
    "PersianHead_A3_02",
    ["InBaseMoves_SittingRifle1"],
    [0, -0.15, -0.45],
    180,
    _chair
]
call ExileClient_object_trader_create;


///////////////////////////////////////////////////////////////////////////
// Equipment Trader Airport
///////////////////////////////////////////////////////////////////////////
[
    "Exile_Trader_Equipment",
    "WhiteHead_19",
    ["HubStanding_idle1", "HubStanding_idle2", "HubStanding_idle3"],
    [9390.23,4793.68,0.00135231],
    138
]
call ExileClient_object_trader_create;


///////////////////////////////////////////////////////////////////////////
// Specops Trader Airport
///////////////////////////////////////////////////////////////////////////
[
    "Exile_Trader_SpecialOperations",
    "AfricanHead_02",
    ["HubStanding_idle1", "HubStanding_idle2", "HubStanding_idle3"],
    [9478.75,4820.66,0.00138664],
    250
]
call ExileClient_object_trader_create;


///////////////////////////////////////////////////////////////////////////
// Office Trader Airport
///////////////////////////////////////////////////////////////////////////
[
    "Exile_Trader_Office",
    "GreekHead_A3_04",
    ["HubBriefing_scratch", "HubBriefing_stretch", "HubBriefing_think", "HubBriefing_lookAround1", "HubBriefing_lookAround2"],
	[9474.51,4789.46,0.00143576],
    289
]
call ExileClient_object_trader_create;



///////////////////////////////////////////////////////////////////////////
// Waste Dump Trader Airport
///////////////////////////////////////////////////////////////////////////
[
    "Exile_Trader_WasteDump",
    "GreekHead_A3_01",
    ["HubStandingUA_move1", "HubStandingUA_move2", "HubStandingUA_idle1", "HubStandingUA_idle2", "HubStandingUA_idle3"],
    [9428,4826.46,0.00146198],
    108
]
call ExileClient_object_trader_create;



///////////////////////////////////////////////////////////////////////////
// Aircraft Trader
///////////////////////////////////////////////////////////////////////////
[
    "Exile_Trader_Aircraft",
    "WhiteHead_17",
    ["LHD_krajPaluby"],
    [9376.53,4724.6,0.0489688],
    133
]
call ExileClient_object_trader_create;


///////////////////////////////////////////////////////////////////////////
// Aircraft Customs Trader
///////////////////////////////////////////////////////////////////////////
[
    "Exile_Trader_AircraftCustoms",
    "GreekHead_A3_07",
    ["HubStandingUC_idle1", "HubStandingUC_idle2", "HubStandingUC_idle3", "HubStandingUC_move1", "HubStandingUC_move2"],
    [9427.6,4729.4,0.00142193],
    233
]
call ExileClient_object_trader_create;



///////////////////////////////////////////////////////////////////////////
// Vehicle Trader
///////////////////////////////////////////////////////////////////////////

_trader = 
[
    "Exile_Trader_Vehicle",
    "WhiteHead_11",
    ["LHD_krajPaluby"],
    [9376.01,4705.08,0.0489693],
    1.873
]
call ExileClient_object_trader_create;



///////////////////////////////////////////////////////////////////////////
// Vehicle Customs Trader Airport
///////////////////////////////////////////////////////////////////////////
[
    "Exile_Trader_VehicleCustoms",
    "WhiteHead_11",
    ["AidlPercMstpSnonWnonDnon_G01", "AidlPercMstpSnonWnonDnon_G02", "AidlPercMstpSnonWnonDnon_G03", "AidlPercMstpSnonWnonDnon_G04", "AidlPercMstpSnonWnonDnon_G05", "AidlPercMstpSnonWnonDnon_G06"],
    [9425.94,4695.64,0.0014329],
    316
]
call ExileClient_object_trader_create;



///////////////////////////////////////////////////////////////////////////
// Guard 01
///////////////////////////////////////////////////////////////////////////
[
    "Exile_Guard_01",
    "WhiteHead_17",
    ["InBaseMoves_patrolling1"],
	[9495.64,4829.14,0.00148058],
    77
]
call ExileClient_object_trader_create;

///////////////////////////////////////////////////////////////////////////
// Guard 02
///////////////////////////////////////////////////////////////////////////
[
    "Exile_Guard_02",
    "WhiteHead_03",
    ["InBaseMoves_patrolling2"],
    [9411.09,4746.92,0.00144291],
    14
]
call ExileClient_object_trader_create;

///////////////////////////////////////////////////////////////////////////
// Guard 03
///////////////////////////////////////////////////////////////////////////
[
    "Exile_Guard_03",
    "AfricanHead_03",
    ["InBaseMoves_patrolling1"],
    [9451.39,4776.02,0.00144196],
    323
]
call ExileClient_object_trader_create;

///////////////////////////////////////////////////////////////////////////
// Guard 04
///////////////////////////////////////////////////////////////////////////
[
    "Exile_Guard_03",
    "AfricanHead_03",
    ["InBaseMoves_patrolling1"],
    [9411.81,4805.8,0.00134754],
    136
]
call ExileClient_object_trader_create;

///////////////////////////////////////////////////////////////////////////
// Guard 05
///////////////////////////////////////////////////////////////////////////
[
    "Exile_Guard_02",
    "AfricanHead_03",
    ["InBaseMoves_patrolling1"],
   [9443.85,4853.61,0.00151682],
    186
]
call ExileClient_object_trader_create;



///////////////////////////////////////////////////////////////////////////////////////////////////
// BLACK MARKET  BASE STARTS HERE
///////////////////////////////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////
// Hardware Trader BLACK MARKET
///////////////////////////////////////////////////////////////////////////
	
_workBench = "Land_Workbench_01_F" createVehicleLocal [0,0,0];
_workBench setDir 94;
_workBench setPosATL [1004.88,2836.89,0.00140381];

[
    "Exile_Trader_Hardware",
    "WhiteHead_17",
    ["InBaseMoves_sitHighUp1"],
    [0.1, 0.1, -0.5],
    170,
    _workBench
]
call ExileClient_object_trader_create;


///////////////////////////////////////////////////////////////////////////
// Fast Food Trader BLACK MARKET
///////////////////////////////////////////////////////////////////////////

_cashDesk = "Land_CashDesk_F" createVehicleLocal [0,0,0];
_cashDesk setPosATL [1051.37,2828.46,-9.15527e-005]; 
_cashDesk setVectorDirAndUp [[0.997124,-0.00799154,-0.0753674], [0.0747382,-0.0614033,0.995311]];

_microwave = "Land_Microwave_01_F" createVehicleLocal [0,0,0];
_cashDesk disableCollisionWith _microwave;         
_microwave disableCollisionWith _cashDesk; 
_microwave attachTo [_cashDesk, [-0.6, 0.2, 1.1]];

_ketchup = "Land_Ketchup_01_F" createVehicleLocal [0,0,0];
_cashDesk disableCollisionWith _ketchup;         
_ketchup disableCollisionWith _cashDesk; 
_ketchup attachTo [_cashDesk, [-0.6, 0, 1.1]];

_mustard = "Land_Mustard_01_F" createVehicleLocal [0,0,0];
_cashDesk disableCollisionWith _mustard;         
_mustard disableCollisionWith _cashDesk; 
_mustard attachTo [_cashDesk, [-0.5, -0.05, 1.1]];

[
    "Exile_Trader_Food",
    "GreekHead_A3_01",
    ["InBaseMoves_table1"],
    [0.1, 0.5, 0.2],
    170,
    _cashDesk
]
call ExileClient_object_trader_create;



///////////////////////////////////////////////////////////////////////////
// Armory Trader BLACK MARKET
///////////////////////////////////////////////////////////////////////////

_chair = "Land_CampingChair_V2_F" createVehicleLocal [0,0,0];
_chair setPosATL [1002.66,2863.53,0.00144958]; 
_chair setDir 127;


[
    "Exile_Trader_Armory",
    "PersianHead_A3_02",
    ["InBaseMoves_SittingRifle1"],
    [0, -0.15, -0.45],
    180,
    _chair
]
call ExileClient_object_trader_create;


///////////////////////////////////////////////////////////////////////////
// Equipment Trader ES PETRO
///////////////////////////////////////////////////////////////////////////
[
    "Exile_Trader_Equipment",
    "WhiteHead_19",
    ["HubStanding_idle1", "HubStanding_idle2", "HubStanding_idle3"],
	[1035.33,2811.63,0.00138855],
    348
]
call ExileClient_object_trader_create;


///////////////////////////////////////////////////////////////////////////
// Specops Trader BLACK MARKET
///////////////////////////////////////////////////////////////////////////
[
    "Exile_Trader_SpecialOperations",
    "AfricanHead_02",
    ["HubStanding_idle1", "HubStanding_idle2", "HubStanding_idle3"],
    [989.879,2799.86,0.00141907],
    78
]
call ExileClient_object_trader_create;


///////////////////////////////////////////////////////////////////////////
// Waste Dump Trader BLACK MARKET
///////////////////////////////////////////////////////////////////////////
[
    "Exile_Trader_WasteDump",
    "GreekHead_A3_01",
    ["HubStandingUA_move1", "HubStandingUA_move2", "HubStandingUA_idle1", "HubStandingUA_idle2", "HubStandingUA_idle3"],
    [1056.88,2879.54,0.00158691],
    108
]
call ExileClient_object_trader_create;


///////////////////////////////////////////////////////////////////////////
// Vehicle Trader ES PETRO
///////////////////////////////////////////////////////////////////////////

_trader = 
[
    "Exile_Trader_Vehicle",
    "WhiteHead_11",
    ["LHD_krajPaluby"],
   [955.965,2842.25,0.508118],
    30
]
call ExileClient_object_trader_create;




///////////////////////////////////////////////////////////////////////////////////////////////////
// ES PETROL BASE STARTS HERE
///////////////////////////////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////
// Hardware Trader ES PETRO
///////////////////////////////////////////////////////////////////////////
	
_workBench = "Land_Workbench_01_F" createVehicleLocal [0,0,0];
_workBench setDir 30;
_workBench setPosATL [3911.51,9291.28,0.00138855];

[
    "Exile_Trader_Hardware",
    "WhiteHead_17",
    ["InBaseMoves_sitHighUp1"],
    [0.1, 0.1, -0.5],
    170,
    _workBench
]
call ExileClient_object_trader_create;


///////////////////////////////////////////////////////////////////////////
// Fast Food Trader ES PETRO
///////////////////////////////////////////////////////////////////////////

_cashDesk = "Land_CashDesk_F" createVehicleLocal [0,0,0];
_cashDesk setPosATL [3956.51,9309.73,-3.05176e-005]; 
_cashdesk setDir 39.9628;

_microwave = "Land_Microwave_01_F" createVehicleLocal [0,0,0];
_cashDesk disableCollisionWith _microwave;         
_microwave disableCollisionWith _cashDesk; 
_microwave attachTo [_cashDesk, [-0.6, 0.2, 1.1]];

_ketchup = "Land_Ketchup_01_F" createVehicleLocal [0,0,0];
_cashDesk disableCollisionWith _ketchup;         
_ketchup disableCollisionWith _cashDesk; 
_ketchup attachTo [_cashDesk, [-0.6, 0, 1.1]];

_mustard = "Land_Mustard_01_F" createVehicleLocal [0,0,0];
_cashDesk disableCollisionWith _mustard;         
_mustard disableCollisionWith _cashDesk; 
_mustard attachTo [_cashDesk, [-0.5, -0.05, 1.1]];

[
    "Exile_Trader_Food",
    "GreekHead_A3_01",
    ["InBaseMoves_table1"],
    [0.1, 0.5, 0.2],
    170,
    _cashDesk
]
call ExileClient_object_trader_create;



///////////////////////////////////////////////////////////////////////////
// Armory Trader ES PETRO
///////////////////////////////////////////////////////////////////////////

_chair = "Land_CampingChair_V2_F" createVehicleLocal [0,0,0];
_chair setPosATL [3958.6,9233.24,0];
_chair setDir 189.43;

[
    "Exile_Trader_Armory",
    "PersianHead_A3_02",
    ["InBaseMoves_SittingRifle1"],
    [0, -0.15, -0.45],
    180,
    _chair
]
call ExileClient_object_trader_create;


///////////////////////////////////////////////////////////////////////////
// Equipment Trader ES PETRO
///////////////////////////////////////////////////////////////////////////
[
    "Exile_Trader_Equipment",
    "WhiteHead_19",
    ["HubStanding_idle1", "HubStanding_idle2", "HubStanding_idle3"],
	[3942.35,9312.02,0.00141907],
    173
]
call ExileClient_object_trader_create;


///////////////////////////////////////////////////////////////////////////
// Specops Trader ES PETRO
///////////////////////////////////////////////////////////////////////////
[
    "Exile_Trader_SpecialOperations",
    "AfricanHead_02",
    ["HubStanding_idle1", "HubStanding_idle2", "HubStanding_idle3"],
    [4010.84,9255.26,0.00143433],
    254
]
call ExileClient_object_trader_create;


///////////////////////////////////////////////////////////////////////////
// Office Trader ES PETRO
///////////////////////////////////////////////////////////////////////////
[
    "Exile_Trader_Office",
    "GreekHead_A3_04",
    ["HubBriefing_scratch", "HubBriefing_stretch", "HubBriefing_think", "HubBriefing_lookAround1", "HubBriefing_lookAround2"],
	[4021.56,9221.52,0.00143433],
	314
]
call ExileClient_object_trader_create;



///////////////////////////////////////////////////////////////////////////
// Waste Dump Trader ES PETRO
///////////////////////////////////////////////////////////////////////////
[
    "Exile_Trader_WasteDump",
    "GreekHead_A3_01",
    ["HubStandingUA_move1", "HubStandingUA_move2", "HubStandingUA_idle1", "HubStandingUA_idle2", "HubStandingUA_idle3"],
    [4028.75,9242.51,0.00143433],
    216
]
call ExileClient_object_trader_create;


///////////////////////////////////////////////////////////////////////////
// Vehicle Trader ES PETRO
///////////////////////////////////////////////////////////////////////////

_trader = 
[
    "Exile_Trader_Vehicle",
    "WhiteHead_11",
    ["LHD_krajPaluby"],
    [3970.54,9285.55,0.25141907],
    251
]
call ExileClient_object_trader_create;



///////////////////////////////////////////////////////////////////////////
// Vehicle Customs Trader ES PETRO
///////////////////////////////////////////////////////////////////////////
[
    "Exile_Trader_VehicleCustoms",
    "WhiteHead_11",
    ["AidlPercMstpSnonWnonDnon_G01", "AidlPercMstpSnonWnonDnon_G02", "AidlPercMstpSnonWnonDnon_G03", "AidlPercMstpSnonWnonDnon_G04", "AidlPercMstpSnonWnonDnon_G05", "AidlPercMstpSnonWnonDnon_G06"],
    [3978.64,9287.92,0.25143433],
    269
]
call ExileClient_object_trader_create;



