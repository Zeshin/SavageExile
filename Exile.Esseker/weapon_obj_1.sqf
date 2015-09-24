//This file was generated by Map Builder
//To load this objects copy this script to your mission and put
// nil = [] execVM "weapon_obj_1.sqf";
//in your init.sqf or a trigger-activation.

blugroup = createGroup opfor;
blugroup2 = createGroup opfor;

private["_obj"];
_obj = "CamoNet_INDP_open_F" createvehicle [8610.55957,5712.0297852,0.00340366];
_obj setposATL [8610.55957,5712.0297852,0.00340366];
_obj setVectorDirAndUp [[0,1,0],[0,0,1]];
_obj setposATL [8610.55957,5712.0297852,0.00340366];
_weapmark = createMarker ["Weap", getPos _obj];
"Weap" setMarkerShape "ELLIPSE";
"Weap" setMarkerColor "ColorYellow";
"Weap" setMarkerBrush "Grid";
"Weap" setMarkerSize [80,80];
_dot1 = createMarker ["dot", getMarkerPos "Weap"];
"dot" setMarkerShape "ICON";
"dot" setMarkerType "hd_dot";
"dot" setMarkerText "Weapon Camp";
_obj = "CamoNet_INDP_open_F" createvehicle [8610.0800781,5701.589844,0.00240517];
_obj setposATL [8610.0800781,5701.589844,0.00240517];
_obj setVectorDirAndUp [[0,1,0],[0,0,1]];
_obj setposATL [8610.0800781,5701.589844,0.00240517];
_obj = "I_CargoNet_01_ammo_F" createvehicle [8612.849609,5702.509766,7.05719e-005];
_obj setposATL [8612.849609,5702.509766,7.05719e-005];
_obj setVectorDirAndUp [[0,1,0],[0,0,1]];
_obj setposATL [8612.849609,5702.509766,7.05719e-005];
[_obj] execVM "weap_obj\Exile_Weapon_Crates2.sqf";
_obj = "I_CargoNet_01_ammo_F" createvehicle [8608.900391,5699.779785,5.91278e-005];
_obj setposATL [8608.900391,5699.779785,5.91278e-005];
_obj setVectorDirAndUp [[0,1,0],[0,0,1]];
_obj setposATL [8608.900391,5699.779785,5.91278e-005];
[_obj] execVM "weap_obj\Exile_Weapon_Crates2.sqf";
_obj = "Box_mas_us_rifle_Wps_F" createvehicle [8612.0400391,5712.0800781,9.63211e-005];
_obj setposATL [8612.0400391,5712.0800781,9.63211e-005];
_obj setVectorDirAndUp [[0,1,0],[0,0,1]];
_obj setposATL [8612.0400391,5712.0800781,9.63211e-005];
[_obj] execVM "weap_obj\Exile_Weapon_Crates.sqf";
_obj = "Box_mas_us_rifle_Wps_F" createvehicle [8608.540039,5711.580078,8.67844e-005];
_obj setposATL [8608.540039,5711.580078,8.67844e-005];
_obj setVectorDirAndUp [[0.715778,0.698328,0],[0,0,1]];
_obj setposATL [8608.540039,5711.580078,8.67844e-005];
[_obj] execVM "weap_obj\Exile_Weapon_Crates.sqf";
_obj = "Land_WoodenTable_large_F" createvehicle [8609.370117,5702.790039,3.71933e-005];
_obj setposATL [8609.370117,5702.790039,3.71933e-005];
_obj setVectorDirAndUp [[0.771681,0.63601,0],[0,0,1]];
_obj setposATL [8609.370117,5702.790039,3.71933e-005];
_obj = "Land_MapBoard_F" createvehicle [8611.290039,5700.490234,7.9155e-005];
_obj setposATL [8611.290039,5700.490234,7.9155e-005];
_obj setVectorDirAndUp [[0.604573,-0.796548,0.00183341],[0.00776581,0.00819572,0.999936]];
_obj setposATL [8611.290039,5700.490234,7.9155e-005];
_obj = "Campfire_burning_F" createvehicle [8602.400391,5704.740234,-0.0360231];
_obj setposATL [8602.400391,5704.740234,-0.0360231];
_obj setVectorDirAndUp [[0,1,0],[0,0,1]];
_obj setposATL [8602.400391,5704.740234,-0.0360231];
_obj = "Campfire_burning_F" createvehicle [8617.900391,5707.390137,-0.0339575];
_obj setposATL [8617.900391,5707.390137,-0.0339575];
_obj setVectorDirAndUp [[0,1,0],[0,0,1]];
_obj setposATL [8617.900391,5707.390137,-0.0339575];
_obj = "Land_BagFence_Round_F" createvehicle [8600.530273,5719.939941,0.0144644];
_obj setposATL [8600.530273,5719.939941,0.0144644];
_obj setVectorDirAndUp [[0.141412,-0.989945,0.00343407],[-0.00740163,0.00241154,0.99997]];
_obj setposATL [8600.530273,5719.939941,0.0144644];
_obj = "Land_BagFence_Round_F" createvehicle [8599.0302734,5718.259766,0.00949097];
_obj setposATL [8599.0302734,5718.259766,0.00949097];
_obj setVectorDirAndUp [[0.998711,0.0502659,0.00711366],[-0.00740135,0.00553964,0.999957]];
_obj setposATL [8599.0302734,5718.259766,0.00949097];
_obj = "Land_BagFence_Round_F" createvehicle [8596.429688,5698.350098,0.0144644];
_obj setposATL [8596.429688,5698.350098,0.0144644];
_obj setVectorDirAndUp [[0.972627,-0.232347,0.00343407],[-0.00496325,-0.00599715,0.99997]];
_obj setposATL [8596.429688,5698.350098,0.0144644];
_obj = "Land_BagFence_Round_F" createvehicle [8597.450195,5696.339844,0.00949097];
_obj setposATL [8597.450195,5696.339844,0.00949097];
_obj setVectorDirAndUp [[0.320345,0.947274,0.00711366],[-0.00787234,-0.00484705,0.999957]];
_obj setposATL [8597.450195,5696.339844,0.00949097];
_obj = "Land_BagFence_Round_F" createvehicle [8622.849609,5696.189941,0.0144644];
_obj setposATL [8622.849609,5696.189941,0.0144644];
_obj setVectorDirAndUp [[-0.33286,0.94297,0.00343407],[0.00773088,-0.000912719,0.99997]];
_obj setposATL [8622.849609,5696.189941,0.0144644];
_obj = "Land_BagFence_Round_F" createvehicle [8623.980469,5698.129883,0.00949097];
_obj setposATL [8623.980469,5698.129883,0.00949097];
_obj setVectorDirAndUp [[-0.969445,-0.245206,0.00711366],[0.00834425,-0.00398009,0.999957]];
_obj setposATL [8623.980469,5698.129883,0.00949097];
_obj = "Land_BagFence_Round_F" createvehicle [8624.410156,5715.399902,0.0144644];
_obj setposATL [8624.410156,5715.399902,0.0144644];
_obj setVectorDirAndUp [[-0.905546,0.424235,0.00343407],[0.00607347,0.00486956,0.99997]];
_obj setposATL [8624.410156,5715.399902,0.0144644];
_obj = "Land_BagFence_Round_F" createvehicle [8623.774414,5717.541992,0.00949097];
_obj setposATL [8623.774414,5717.541992,0.00949097];
_obj setVectorDirAndUp [[-0.505277,-0.862928,0.00711366],[0.00868984,0.00315504,0.999957]];
_obj setposATL [8623.774414,5717.541992,0.00949097];
_obj = "EWK_m1151_m2_deployment_Jtac" createvehicle [8590.820313,5711.120117,-0.0906076];
_obj setposATL [8590.820313,5711.120117,-0.0906076];
_obj setVectorDirAndUp [[-0.970127,-0.242599,0],[-0,0,1]];
_obj setposATL [8590.820313,5711.120117,-0.0906076];
[_obj] execVM "weap_obj\vehicle_gunners3.sqf";
_obj = "EWK_m1151_m240_deployment" createvehicle [8624.860352,5705.899902,-0.0905943];
_obj setposATL [8624.860352,5705.899902,-0.0905943];
_obj setVectorDirAndUp [[0.879366,-0.476146,0],[0,-0,1]];
_obj setposATL [8624.860352,5705.899902,-0.0905943];
[_obj] execVM "weap_obj\vehicle_gunners4.sqf";
_obj = "MNP_RO3_Soldier_F" createvehicle [8600.701172,5719.365723,0];
_obj setposATL [8600.701172,5719.365723,0];
_obj setVectorDirAndUp [[-0.442482,0.896777,0],[0,0,1]];
_obj setposATL [8600.701172,5719.365723,0];
[_obj] execVM "weap_obj\weapon_auto.sqf";
_obj = "MNP_RO3_Soldier_F" createvehicle [8599.858398,5718.15918,0];
_obj setposATL [8599.858398,5718.15918,0];
_obj setVectorDirAndUp [[-0.982589,0.18579,0],[0,0,1]];
_obj setposATL [8599.858398,5718.15918,0];
[_obj] execVM "weap_obj\weapon_rifleman.sqf";
_obj = "MNP_RO3_Soldier_F" createvehicle [8597.120117,5698.330078,9.53674e-007];
_obj setposATL [8597.120117,5698.330078,9.53674e-007];
_obj setVectorDirAndUp [[-0.9762,-0.21687,0],[-0,0,1]];
_obj setposATL [8597.120117,5698.330078,9.53674e-007];
[_obj] execVM "weap_obj\weapon_rifleman.sqf";
_obj = "MNP_RO3_Soldier_F" createvehicle [8597.887695,5697.151367,0];
_obj setposATL [8597.887695,5697.151367,0];
_obj setVectorDirAndUp [[-0.348638,-0.937257,0],[-0,0,1]];
_obj setposATL [8597.887695,5697.151367,0];
[_obj] execVM "weap_obj\weapon_auto.sqf";
_obj = "MNP_RO3_Soldier_F" createvehicle [8622.3125,5696.861328,-9.53674e-007];
_obj setposATL [8622.3125,5696.861328,-9.53674e-007];
_obj setVectorDirAndUp [[0.816617,-0.57718,0],[0,-0,1]];
_obj setposATL [8622.3125,5696.861328,-9.53674e-007];
[_obj] execVM "weap_obj\weapon_rifleman.sqf";
_obj = "MNP_RO3_Soldier_F" createvehicle [8623.0126953,5697.970215,0];
_obj setposATL [8623.0126953,5697.970215,0];
_obj setVectorDirAndUp [[0.962419,0.271568,0],[0,0,1]];
_obj setposATL [8623.0126953,5697.970215,0];
[_obj] execVM "weap_obj\weapon_rifleman.sqf";
_obj = "MNP_RO3_Soldier_F" createvehicle [8623.56543,5715.479004,9.53674e-007];
_obj setposATL [8623.56543,5715.479004,9.53674e-007];
_obj setVectorDirAndUp [[0.999888,0.0149845,0],[0,0,1]];
_obj setposATL [8623.56543,5715.479004,9.53674e-007];
[_obj] execVM "weap_obj\weapon_auto.sqf";
_obj = "MNP_RO3_Soldier_F" createvehicle [8622.876953,5716.853027,9.53674e-007];
_obj setposATL [8622.876953,5716.853027,9.53674e-007];
_obj setVectorDirAndUp [[0.644811,0.764342,0],[0,0,1]];
_obj setposATL [8622.876953,5716.853027,9.53674e-007];
[_obj] execVM "weap_obj\weapon_rifleman.sqf";
_obj = "MNP_RO3_Soldier_F" createvehicle [8608.0761719,5704.184082,0];
_obj setposATL [8608.0761719,5704.184082,0];
_obj setVectorDirAndUp [[0.727374,-0.686241,0],[0,-0,1]];
_obj setposATL [8608.0761719,5704.184082,0];
[_obj] execVM "weap_obj\weapon_rifleman.sqf";
_obj = "MNP_RO3_Soldier_F" createvehicle [8606.792969,5703.418945,0];
_obj setposATL [8606.792969,5703.418945,0];
_obj setVectorDirAndUp [[0.999439,-0.0334899,0],[0,-0,1]];
_obj setposATL [8606.792969,5703.418945,0];
[_obj] execVM "weap_obj\weapon_rifleman.sqf";
_obj = "Land_BagFence_Round_F" createvehicle [8700.338867,5703.194824,0.0144644];
_obj setposATL [8700.338867,5703.194824,0.0144644];
_obj setVectorDirAndUp [[-0.668059,0.744101,0.00343407],[0.0074926,0.00211199,0.99997]];
_obj setposATL [8700.338867,5703.194824,0.0144644];
_obj = "Land_BagFence_Round_F" createvehicle [8700.645508,5705.48291,0.00949097];
_obj setposATL [8700.645508,5705.48291,0.00949097];
_obj setVectorDirAndUp [[-0.820112,-0.572158,0.00711366],[0.00921254,-0.000772458,0.999957]];
_obj setposATL [8700.645508,5705.48291,0.00949097];
_obj = "MNP_RO3_Soldier_F" createvehicle [8699.584961,5703.696289,9.53674e-007];
_obj setposATL [8699.584961,5703.696289,9.53674e-007];
_obj setVectorDirAndUp [[0.914332,-0.404964,0],[0,-0,1]];
_obj setposATL [8699.584961,5703.696289,9.53674e-007];
[_obj] execVM "weap_obj\weapon_auto.sqf";
_obj = "MNP_RO3_Soldier_F" createvehicle [8699.537109,5705.233398,9.53674e-007];
_obj setposATL [8699.537109,5705.233398,9.53674e-007];
_obj setVectorDirAndUp [[0.905561,0.424216,0],[0,0,1]];
_obj setposATL [8699.537109,5705.233398,9.53674e-007];
[_obj] execVM "weap_obj\weapon_rifleman.sqf";
_obj = "Land_BagFence_Round_F" createvehicle [8515.547852,5642.720703,0.0144644];
_obj setposATL [8515.547852,5642.720703,0.0144644];
_obj setVectorDirAndUp [[0.435333,-0.900263,0.00343407],[-0.00778441,5.01599e-005,0.99997]];
_obj setposATL [8515.547852,5642.720703,0.0144644];
_obj = "MNP_RO3_Soldier_F" createvehicle [8516.133789,5642.0322266,9.53674e-007];
_obj setposATL [8516.133789,5642.0322266,9.53674e-007];
_obj setVectorDirAndUp [[-0.766044,0.642789,0],[0,0,1]];
_obj setposATL [8516.133789,5642.0322266,9.53674e-007];
[_obj] execVM "weap_obj\weapon_auto.sqf";
_obj = "MNP_RO3_Soldier_F" createvehicle [8515.754883,5640.541992,9.53674e-007];
_obj setposATL [8515.754883,5640.541992,9.53674e-007];
_obj setVectorDirAndUp [[-0.987716,-0.156259,0],[-0,0,1]];
_obj setposATL [8515.754883,5640.541992,9.53674e-007];
[_obj] execVM "weap_obj\weapon_rifleman.sqf";
_obj = "Land_BagFence_Round_F" createvehicle [8514.623047,5640.60791,0.00949097];
_obj setposATL [8514.623047,5640.60791,0.00949097];
_obj setVectorDirAndUp [[0.946677,0.322105,0.00711366],[-0.00863637,0.00329861,0.999957]];
_obj setposATL [8514.623047,5640.60791,0.00949097];
_obj = "MNP_RO3_Soldier_F" createvehicle [8613.774414,5714.413574,0];
_obj setposATL [8613.774414,5714.413574,0];
_obj setVectorDirAndUp [[0,1,0],[0,0,1]];
_obj setposATL [8613.774414,5714.413574,0];
[_obj] execVM "weap_obj\weapon_rifleman.sqf";
_obj = "MNP_RO3_Soldier_F" createvehicle [8606.328125,5709.612793,0];
_obj setposATL [8606.328125,5709.612793,0];
_obj setVectorDirAndUp [[-0.919607,-0.392839,0],[-0,0,1]];
_obj setposATL [8606.328125,5709.612793,0];
[_obj] execVM "weap_obj\weapon_auto.sqf";
_obj = "MNP_RO3_Soldier_F" createvehicle [8612.983398,5699.407715,0];
_obj setposATL [8612.983398,5699.407715,0];
_obj setVectorDirAndUp [[0.478475,-0.878101,0],[0,-0,1]];
_obj setposATL [8612.983398,5699.407715,0];
[_obj] execVM "weap_obj\weapon_rifleman.sqf";
