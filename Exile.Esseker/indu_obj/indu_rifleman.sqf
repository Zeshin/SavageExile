_rifleman = _this select 0;

comment "Exported from Arsenal by Alex Burdin";

comment "Remove existing items";
removeAllWeapons _rifleman;
removeAllItems _rifleman;
removeAllAssignedItems _rifleman;
removeUniform _rifleman;
removeVest _rifleman;
removeBackpack _rifleman;
removeHeadgear _rifleman;
removeGoggles _rifleman;

comment "Add containers";
_rifleman forceAddUniform "MNP_CombatUniform_Rebel_A";
for "_i" from 1 to 12 do {_rifleman addItemToUniform "30Rnd_mas_545x39_mag";};
_rifleman addVest "TRYK_V_tacv10LC_OD";
for "_i" from 1 to 2 do {_rifleman addItemToVest "FirstAidKit";};
for "_i" from 1 to 15 do {_rifleman addItemToVest "30Rnd_mas_545x39_mag";};
for "_i" from 1 to 6 do {_rifleman addItemToVest "SmokeShell";};
for "_i" from 1 to 2 do {_rifleman addItemToVest "HandGrenade";};
_rifleman addHeadgear "TRYK_Kio_Balaclava";
_rifleman addGoggles "Mask_M50";

comment "Add weapons";
_rifleman addWeapon "arifle_mas_ak_74m_sf_c";
_rifleman addPrimaryWeaponItem "RH_compm4s";

comment "Add items";
_rifleman linkItem "TRYK_HRPIGEAR_NV";

comment "Set identity";
_rifleman setFace "WhiteHead_11";
_rifleman setSpeaker "Male01ENG";
