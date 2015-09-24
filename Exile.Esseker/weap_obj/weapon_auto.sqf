_autorifleman = _this select 0;

removeAllWeapons _autorifleman;
removeAllItems _autorifleman;
removeAllAssignedItems _autorifleman;
removeUniform _autorifleman;
removeVest _autorifleman;
removeBackpack _autorifleman;
removeHeadgear _autorifleman;
removeGoggles _autorifleman;

comment "Add containers";
_autorifleman forceAddUniform "MNP_CombatUniform_Rebel_A";
for "_i" from 1 to 3 do {_autorifleman addItemToUniform "100Rnd_mas_762x54_mag";};
_autorifleman addVest "TRYK_V_tacv10LC_OD";
for "_i" from 1 to 2 do {_autorifleman addItemToVest "FirstAidKit";};
for "_i" from 1 to 6 do {_autorifleman addItemToVest "SmokeShell";};
for "_i" from 1 to 2 do {_autorifleman addItemToVest "HandGrenade";};
for "_i" from 1 to 4 do {_autorifleman addItemToVest "100Rnd_mas_762x54_mag";};
_autorifleman addBackpack "TRYK_B_Carryall_JSDF";
for "_i" from 1 to 2 do {_autorifleman addItemToBackpack "FirstAidKit";};
for "_i" from 1 to 9 do {_autorifleman addItemToBackpack "100Rnd_mas_762x54_mag";};
for "_i" from 1 to 2 do {_autorifleman addItemToBackpack "SmokeShell";};
for "_i" from 1 to 2 do {_autorifleman addItemToBackpack "HandGrenade";};
_autorifleman addHeadgear "TRYK_Kio_Balaclava";
_autorifleman addGoggles "Mask_M50";

comment "Add weapons";
_autorifleman addWeapon "LMG_mas_pech_F";

comment "Add items";
_autorifleman linkItem "ItemMap";
_autorifleman linkItem "ItemCompass";
_autorifleman linkItem "ItemWatch";
_autorifleman linkItem "tf_anprc152_1";
_autorifleman linkItem "TRYK_HRPIGEAR_NV";

comment "Set identity";
_autorifleman setFace "WhiteHead_11";
_autorifleman setSpeaker "Male01ENG";
