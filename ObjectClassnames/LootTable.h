/**
  /////////////////////////////////////////////////////////////////////////////
  Exile Mod Loot Table Template
  /////////////////////////////////////////////////////////////////////////////

  Format of this file is the following:

  > LootTableName
  Spawn Chance %, Item Class Name

  You can add one item to multiple loot tables.

  Be careful with spawn chance values! They do not define how common an item is
  in general, but how common it is in relation to all the other items of that
  loot table. Values from 0..100 are allowed. The higher the chance, the more
  often will it spawn.
*/

///////////////////////////////////////////////////////////////////////////////
// Slums/Ghetto, Farms, Village Houses, Castle etc.
// Spawn Guerilla things :)
///////////////////////////////////////////////////////////////////////////////
> CivillianLowerClass

// Food
200, Exile_Item_PlasticBottleEmpty
50, Exile_Item_PlasticBottleFreshWater
30, Exile_Item_Energydrink
40, Exile_Item_Beer
150, Exile_Item_GloriousKnakworst
170, Exile_Item_SausageGravy
170, Exile_Item_ChristmasTinner
170, Exile_Item_BBQSandwich
190, Exile_Item_Surstromming
200, Exile_Item_Catfood
50, FirstAidKit
20, Exile_Item_ChristmasTinner_Cooked
20, Exile_Item_BBQSandwich_Cooked
20, Exile_Item_GloriousKnakworst_Cooked
20, Exile_Item_SausageGravy_Cooked
20, Exile_Item_Surstromming_Cooked
20, Exile_Item_Catfood_Cooked

// Pistols
60, RH_cz75
50, RH_sw659
40, RH_usp
60, RH_mak
30, RH_m1911
30, RH_kimber
30, RH_kimber_nw
40, RH_uspm
60, RH_m9
30, RH_vz61
40, RH_g18
50, RH_g17
50, RH_tt33
70, RH_mk2
50, RH_p226
50, RH_p226s
50, RH_g19
50, RH_g19t
60, RH_vp70
20, RH_mateba
20, RH_python
20, RH_mp412
20, RH_bull
20, RH_bullb
20, RH_ttracker
20, RH_ttracker_g
40, RH_fnp45
40, RH_fnp45t
40, RH_fn57
40, RH_fn57_g
40, RH_fn57_t
45, RH_gsh18
10, RH_tec9
10, RH_muzi
15, RH_deagle
15, RH_deagleg
15, RH_deagles
15, RH_deaglem

// Pistol Magazines
60, RH_16Rnd_9x19_cz
50, RH_14Rnd_9x19_sw
50, RH_12Rnd_45cal_usp
60, RH_8Rnd_9x18_Mak
50, RH_7Rnd_45cal_m1911
50, RH_16Rnd_40cal_usp
70, RH_15Rnd_9x19_M9
40, RH_20Rnd_32cal_vz61
60, RH_33Rnd_9x19_g18
60, RH_17Rnd_9x19_g17
50, RH_8Rnd_762_tt33
70, RH_10Rnd_22LR_mk2
60, RH_15Rnd_9x19_SIG
60, RH_18Rnd_9x19_VP
35, RH_6Rnd_44_Mag
35, RH_6Rnd_357_Mag
35, RH_6Rnd_454_Mag
50, RH_6Rnd_45ACP_Mag
50, RH_15Rnd_45cal_fnp
50, RH_20Rnd_57x28_FN
60, RH_18Rnd_9x19_gsh
40, RH_32Rnd_9x19_tec
40, RH_30Rnd_9x19_UZI
20, RH_7Rnd_50_AE

// Pistol Items
30, RH_gemtech9
60, RH_A26
30, RH_suppr9
30, RH_aacusp
25, RH_gemtech45
25, RH_osprey
30, RH_fhusp
60, RH_x2
60, RH_m6x
60, RH_x300
30, RH_pmsd
50, RH_pmir
30, RH_matchsd
30, RH_m9qd
70, RH_vp70stock
60, optic_MRD
30, RH_tecsd
30, RH_muzisd
20, RH_demz
50, RH_Deflash
60, optic_Yorris

// SMG Ammo
40, 30Rnd_mas_9x21_Stanag

// SMGs
40, arifle_mas_mp40_o
40, arifle_mas_mp40


// SMG Items
50, optic_Holosight_smg
50, optic_ACO_grn_smg
50, optic_Aco_smg
50, optic_ACO_grn
50, optic_Aco


// Backpacks
75, B_OutdoorPack_blk
75, B_OutdoorPack_tan
75, B_OutdoorPack_blu
70, B_HuntingBackpack
60, B_AssaultPack_khk
60, B_AssaultPack_dgtl
60, B_AssaultPack_rgr
60, B_AssaultPack_sgg
60, B_AssaultPack_blk
60, B_AssaultPack_cbr
60, B_AssaultPack_mcamo
60, B_Kitbag_mcamo
60, B_Kitbag_sgg
60, B_Kitbag_cbr
50, B_FieldPack_blk
50, B_FieldPack_ocamo
50, B_FieldPack_oucamo
50, B_FieldPack_cbr
50, B_Bergen_sgg
50, B_Bergen_mcamo
50, B_Bergen_rgr
50, B_Bergen_blk

// Rifles
40, RH_m16a1
20, RH_m16a1gl
40, RH_m4
20, RH_m4_m203
15, RH_ar10
60, arifle_mas_lee

// Rifle Items
50, RH_SFM952V
50, RH_SFM952V_tan
30, optic_Holosight

// Rifle Ammo
50, RH_30Rnd_556x45_M855A1
50, RH_20Rnd_556x45_M855A1
30, RH_20Rnd_762x51_AR10
50, 5Rnd_mas_762x51_Stanag

// Items
15, Binocular
10, Exile_Item_CamoTentKit
65, Exile_Item_CookingPot
40, Exile_Item_DuctTape
40, Exile_Item_LightBulb
40, Exile_Item_Matches
25, ItemGPS

// Chem lights
100, Chemlight_blue
100, Chemlight_green
100, Chemlight_red
100, Chemlight_yellow

// Road flares
80, FlareGreen_F
80, FlareRed_F
80, FlareWhite_F
80, FlareYellow_F

// Uniforms
50, U_C_Poor_1
50, U_C_Poor_2
50, U_C_Poor_shorts_1
50, U_C_HunterBody_grn

40, U_C_Poloshirt_salmon
40, U_C_Poloshirt_tricolour
40, U_C_Poloshirt_stripped
40, U_C_Poloshirt_burgundy
40, U_C_Poloshirt_blue

//TRYK Jeans
30, TRYK_U_B_RED_T_BG_BR
30, TRYK_U_B_BLK_T_BG_WH
30, TRYK_U_B_BLK_T_BK
30, TRYK_U_B_RED_T_BR
30, TRYK_U_B_BLK_T_WH
30, TRYK_U_B_Denim_T_BG_BK
30, TRYK_U_B_Denim_T_BG_WH
30, TRYK_U_B_Denim_T_BK
30, TRYK_U_B_Denim_T_WH
30, TRYK_shirts_DENIM_BK
30, TRYK_shirts_DENIM_BL
30, TRYK_shirts_DENIM_BWH
30, TRYK_shirts_DENIM_od
30, TRYK_shirts_DENIM_R
30, TRYK_shirts_DENIM_RED2
30, TRYK_shirts_DENIM_WH
30, TRYK_shirts_DENIM_WHB
30, TRYK_shirts_DENIM_ylb
30, TRYK_shirts_DENIM_od_Sleeve
30, TRYK_shirts_DENIM_ylb_Sleeve
30, TRYK_shirts_DENIM_BK_Sleeve
30, TRYK_shirts_DENIM_BL_Sleeve
30, TRYK_shirts_DENIM_BWH_Sleeve
30, TRYK_shirts_DENIM_R_Sleeve
30, TRYK_shirts_DENIM_RED2_Sleeve
30, TRYK_shirts_DENIM_WH_Sleeve
30, TRYK_shirts_DENIM_WHB_Sleeve
30, TRYK_U_B_PCUGs_OD
30, TRYK_U_B_PCUGs_gry
30, TRYK_U_B_PCUGs_BLK
30, TRYK_U_B_PCUGs_OD_R
30, TRYK_U_B_PCUGs_gry_R
30, TRYK_U_B_PCUGs_BLK_R
30, TRYK_U_denim_jersey_blu
30, TRYK_U_denim_jersey_blk
30, TRYK_U_denim_hood_nc
30, TRYK_U_denim_hood_mc
30, TRYK_U_denim_hood_blk
30, TRYK_U_denim_hood_3c
30, TRYK_U_taki_G_BL
30, TRYK_U_taki_G_BLK
30, TRYK_U_taki_G_COY
30, TRYK_U_taki_G_WH
30, TRYK_SUITS_BLK_F
30, TRYK_SUITS_BR_F

// Guerilla Headgear
30, H_Booniehat_khk
30, H_Booniehat_indp
30, H_Booniehat_mcamo
30, H_Booniehat_grn
30, H_Booniehat_tan
30, H_Booniehat_dirty
30, H_Booniehat_dgtl
30, H_Booniehat_khk_hs

20, H_Bandanna_khk
20, H_Bandanna_khk_hs
20, H_Bandanna_cbr
20, H_Bandanna_sgg
20, H_Bandanna_gry
20, H_Bandanna_camo
20, H_Bandanna_mcamo
20, H_BandMask_blk

10, H_Beret_blk
10, H_Beret_red
10, H_Beret_grn
10, H_Beret_grn_SF
10, H_Beret_brn_SF
10, H_Beret_ocamo
10, H_Beret_02
10, H_Beret_Colonel

15, H_Hat_camo
15, H_Cap_brn_SPECOPS
15, H_Cap_tan_specops_US
15, H_Cap_khaki_specops_UK
15, H_Watchcap_blk
15, H_Watchcap_khk
15, H_Watchcap_camo
15, H_Watchcap_sgg
15, H_TurbanO_blk

10, H_Shemag_khk
10, H_Shemag_tan
10, H_Shemag_olive
10, H_Shemag_olive_hs
10, H_ShemagOpen_khk
10, H_ShemagOpen_tan

// Guerilla Vests
15, V_BandollierB_khk
15, V_BandollierB_cbr
15, V_BandollierB_rgr
15, V_BandollierB_blk
15, V_BandollierB_oli
10, V_Chestrig_khk
10, V_Chestrig_rgr
10, V_Chestrig_blk
10, V_Chestrig_oli
15, V_HarnessO_brn
15, V_HarnessOGL_brn
15, V_HarnessO_gry
15, V_HarnessOGL_gry
15, V_HarnessOSpec_brn
15, V_HarnessOSpec_gry

5, V_I_G_resistanceLeader_F

// Guerilla Uniforms
40, U_IG_Guerilla1_1
40, U_IG_Guerilla2_1
40, U_IG_Guerilla2_2
40, U_IG_Guerilla2_3
40, U_IG_Guerilla3_1
40, U_IG_Guerilla3_2

10, U_IG_leader
5, U_I_G_resistanceLeader_F

30, TRYK_H_Bandana_H
30, TRYK_H_Bandana_wig
30, TRYK_H_Bandana_wig_g
30, TRYK_ESS_CAP
30, TRYK_ESS_CAP_OD
30, TRYK_ESS_CAP_tan
30, TRYK_H_headsetcap_Glasses
30, TRYK_H_headsetcap_blk_Glasses
30, TRYK_H_headsetcap_od_Glasses
30, TRYK_H_pakol2
30, TRYK_H_pakol
30, TRYK_R_CAP_BLK
30, TRYK_R_CAP_TAN
30, TRYK_R_CAP_OD_US
30, TRYK_r_cap_blk_Glasses
30, TRYK_r_cap_od_Glasses
30, TRYK_r_cap_tan_Glasses
30, TRYK_H_wig
30, TRYK_H_woolhat
30, TRYK_H_woolhat_br
30, TRYK_H_woolhat_cu
30, TRYK_H_woolhat_CW
30, TRYK_H_woolhat_tan
30, TRYK_H_woolhat_WH

///////////////////////////////////////////////////////////////////////////////
// Apartments, Offices etc.
///////////////////////////////////////////////////////////////////////////////
> CivillianUpperClass

200, Exile_Item_PlasticBottleEmpty
50, Exile_Item_PlasticBottleFreshWater
30, Exile_Item_Energydrink
40, Exile_Item_Beer
150, Exile_Item_GloriousKnakworst
170, Exile_Item_SausageGravy
170, Exile_Item_ChristmasTinner
170, Exile_Item_BBQSandwich
190, Exile_Item_Surstromming
200, Exile_Item_Catfood
20, Exile_Item_ChristmasTinner_Cooked
20, Exile_Item_BBQSandwich_Cooked
20, Exile_Item_GloriousKnakworst_Cooked
20, Exile_Item_SausageGravy_Cooked
20, Exile_Item_Surstromming_Cooked
20, Exile_Item_Catfood_Cooked
50, FirstAidKit

// Pistols
60, RH_cz75
50, RH_sw659
40, RH_usp
60, RH_mak
30, RH_m1911
30, RH_kimber
30, RH_kimber_nw
40, RH_uspm
60, RH_m9
30, RH_vz61
40, RH_g18
50, RH_g17
50, RH_tt33
70, RH_mk2
50, RH_p226
50, RH_p226s
50, RH_g19
50, RH_g19t
60, RH_vp70
20, RH_mateba
20, RH_python
20, RH_mp412
20, RH_bull
20, RH_bullb
20, RH_ttracker
20, RH_ttracker_g
40, RH_fnp45
40, RH_fnp45t
40, RH_fn57
40, RH_fn57_g
40, RH_fn57_t
45, RH_gsh18
10, RH_tec9
10, RH_muzi
15, RH_deagle
15, RH_deagleg
15, RH_deagles
15, RH_deaglem

// Pistol Magazines
60, RH_16Rnd_9x19_cz
50, RH_14Rnd_9x19_sw
50, RH_12Rnd_45cal_usp
60, RH_8Rnd_9x18_Mak
50, RH_7Rnd_45cal_m1911
50, RH_16Rnd_40cal_usp
70, RH_15Rnd_9x19_M9
40, RH_20Rnd_32cal_vz61
60, RH_33Rnd_9x19_g18
60, RH_17Rnd_9x19_g17
50, RH_8Rnd_762_tt33
70, RH_10Rnd_22LR_mk2
60, RH_15Rnd_9x19_SIG
60, RH_18Rnd_9x19_VP
35, RH_6Rnd_44_Mag
35, RH_6Rnd_357_Mag
35, RH_6Rnd_454_Mag
50, RH_6Rnd_45ACP_Mag
50, RH_15Rnd_45cal_fnp
50, RH_20Rnd_57x28_FN
60, RH_18Rnd_9x19_gsh
40, RH_32Rnd_9x19_tec
40, RH_30Rnd_9x19_UZI
20, RH_7Rnd_50_AE

// Pistol Items
30, RH_gemtech9
60, RH_A26
30, RH_suppr9
30, RH_aacusp
25, RH_gemtech45
25, RH_osprey
30, RH_fhusp
60, RH_x2
60, RH_m6x
60, RH_x300
30, RH_pmsd
50, RH_pmir
30, RH_matchsd
30, RH_m9qd
70, RH_vp70stock
60, optic_MRD
30, RH_tecsd
30, RH_muzisd
20, RH_demz
50, RH_Deflash
60, optic_Yorris

// SMG Ammo
40, 30Rnd_mas_9x21_Stanag

// SMGs
40, arifle_mas_mp40_o
40, arifle_mas_mp40

// SMG Items
50, optic_Holosight_smg
50, optic_ACO_grn_smg
50, optic_Aco_smg
50, optic_ACO_grn
50, optic_Aco

// Rifles
40, RH_m16a1
20, RH_m16a1gl
40, RH_m4
20, RH_m4_m203
15, RH_ar10
60, arifle_mas_lee

// Rifle Items
50, RH_SFM952V
50, RH_SFM952V_tan
30, optic_Holosight

// Rifle Ammo
50, RH_30Rnd_556x45_M855A1
50, RH_20Rnd_556x45_M855A1
30, RH_20Rnd_762x51_AR10
50, 5Rnd_mas_762x51_Stanag

// Backpacks
85, B_OutdoorPack_blk
85, B_OutdoorPack_tan
85, B_OutdoorPack_blu
70, B_HuntingBackpack

// Uniforms
100, U_C_Poloshirt_salmon
100, U_C_Poloshirt_tricolour
100, U_C_Poloshirt_stripped
100, U_C_Poloshirt_burgundy
100, U_C_Poloshirt_blue

50, U_C_Journalist
50, U_C_Scientist
50, U_Rangemaster

5, U_OrestesBody
5, U_NikosBody
5, U_NikosAgedBody

// Vests
50, V_Rangemaster_belt
50, V_Press_F
50, V_TacVest_blk_POLICE

// Headgear
60, H_Bandanna_surfer
60, H_Beret_blk_POLICE
60, H_Cap_blk
60, H_Cap_blk_Raven
60, H_Cap_blu
60, H_Cap_grn
60, H_Cap_headphones
60, H_Cap_oli
60, H_Cap_press
60, H_Cap_red
60, H_Cap_tan
60, H_Hat_blue
60, H_Hat_brown
60, H_Hat_checker
60, H_Hat_grey
60, H_Hat_tan
60, H_StrawHat
60, H_StrawHat_dark

//TRYK Jeans
30, TRYK_U_B_RED_T_BG_BR
30, TRYK_U_B_BLK_T_BG_WH
30, TRYK_U_B_BLK_T_BK
30, TRYK_U_B_RED_T_BR
30, TRYK_U_B_BLK_T_WH
30, TRYK_U_B_Denim_T_BG_BK
30, TRYK_U_B_Denim_T_BG_WH
30, TRYK_U_B_Denim_T_BK
30, TRYK_U_B_Denim_T_WH
30, TRYK_shirts_DENIM_BK
30, TRYK_shirts_DENIM_BL
30, TRYK_shirts_DENIM_BWH
30, TRYK_shirts_DENIM_od
30, TRYK_shirts_DENIM_R
30, TRYK_shirts_DENIM_RED2
30, TRYK_shirts_DENIM_WH
30, TRYK_shirts_DENIM_WHB
30, TRYK_shirts_DENIM_ylb
30, TRYK_shirts_DENIM_od_Sleeve
30, TRYK_shirts_DENIM_ylb_Sleeve
30, TRYK_shirts_DENIM_BK_Sleeve
30, TRYK_shirts_DENIM_BL_Sleeve
30, TRYK_shirts_DENIM_BWH_Sleeve
30, TRYK_shirts_DENIM_R_Sleeve
30, TRYK_shirts_DENIM_RED2_Sleeve
30, TRYK_shirts_DENIM_WH_Sleeve
30, TRYK_shirts_DENIM_WHB_Sleeve
30, TRYK_U_B_PCUGs_OD
30, TRYK_U_B_PCUGs_gry
30, TRYK_U_B_PCUGs_BLK
30, TRYK_U_B_PCUGs_OD_R
30, TRYK_U_B_PCUGs_gry_R
30, TRYK_U_B_PCUGs_BLK_R
30, TRYK_U_denim_jersey_blu
30, TRYK_U_denim_jersey_blk
30, TRYK_U_denim_hood_nc
30, TRYK_U_denim_hood_mc
30, TRYK_U_denim_hood_blk
30, TRYK_U_denim_hood_3c
30, TRYK_U_taki_G_BL
30, TRYK_U_taki_G_BLK
30, TRYK_U_taki_G_COY
30, TRYK_U_taki_G_WH
30, TRYK_SUITS_BLK_F
30, TRYK_SUITS_BR_F

//Headgear
30, TRYK_H_Bandana_H
30, TRYK_H_Bandana_wig
30, TRYK_H_Bandana_wig_g
30, TRYK_ESS_CAP
30, TRYK_ESS_CAP_OD
30, TRYK_ESS_CAP_tan
30, TRYK_H_headsetcap_Glasses
30, TRYK_H_headsetcap_blk_Glasses
30, TRYK_H_headsetcap_od_Glasses
30, TRYK_H_pakol2
30, TRYK_H_pakol
30, TRYK_R_CAP_BLK
30, TRYK_R_CAP_TAN
30, TRYK_R_CAP_OD_US
30, TRYK_r_cap_blk_Glasses
30, TRYK_r_cap_od_Glasses
30, TRYK_r_cap_tan_Glasses
30, TRYK_H_wig
30, TRYK_H_woolhat
30, TRYK_H_woolhat_br
30, TRYK_H_woolhat_cu
30, TRYK_H_woolhat_CW
30, TRYK_H_woolhat_tan
30, TRYK_H_woolhat_WH

///////////////////////////////////////////////////////////////////////////////
// Kiosks, Supermarkets etc.
///////////////////////////////////////////////////////////////////////////////
/*> Shop

// Smoke Nades
50, SmokeShell
50, SmokeShellRed
50, SmokeShellGreen
50, SmokeShellYellow
50, SmokeShellPurple
50, SmokeShellBlue
50, SmokeShellOrange

// Pistols
60, RH_cz75
50, RH_sw659
40, RH_usp
60, RH_mak
30, RH_m1911
30, RH_kimber
30, RH_kimber_nw
40, RH_uspm
60, RH_m9
30, RH_vz61
40, RH_g18
50, RH_g17
50, RH_tt33
70, RH_mk2
50, RH_p226
50, RH_p226s
50, RH_g19
50, RH_g19t
60, RH_vp70
20, RH_mateba
20, RH_python
20, RH_mp412
20, RH_bull
20, RH_bullb
20, RH_ttracker
20, RH_ttracker_g
40, RH_fnp45
40, RH_fnp45t
40, RH_fn57
40, RH_fn57_g
40, RH_fn57_t
45, RH_gsh18
10, RH_tec9
10, RH_muzi
15, RH_deagle
15, RH_deagleg
15, RH_deagles
15, RH_deaglem

// Pistol Magazines
60, RH_16Rnd_9x19_cz
50, RH_14Rnd_9x19_sw
50, RH_12Rnd_45cal_usp
60, RH_8Rnd_9x18_Mak
50, RH_7Rnd_45cal_m1911
50, RH_16Rnd_40cal_usp
70, RH_15Rnd_9x19_M9
40, RH_20Rnd_32cal_vz61
60, RH_33Rnd_9x19_g18
60, RH_17Rnd_9x19_g17
50, RH_8Rnd_762_tt33
70, RH_10Rnd_22LR_mk2
60, RH_15Rnd_9x19_SIG
60, RH_18Rnd_9x19_VP
35, RH_6Rnd_44_Mag
35, RH_6Rnd_357_Mag
35, RH_6Rnd_454_Mag
50, RH_6Rnd_45ACP_Mag
50, RH_15Rnd_45cal_fnp
50, RH_20Rnd_57x28_FN
60, RH_18Rnd_9x19_gsh
40, RH_32Rnd_9x19_tec
40, RH_30Rnd_9x19_UZI
20, RH_7Rnd_50_AE

// Pistol Items
30, RH_gemtech9
60, RH_A26
30, RH_suppr9
30, RH_aacusp
25, RH_gemtech45
25, RH_osprey
30, RH_fhusp
60, RH_x2
60, RH_m6x
60, RH_x300
30, RH_pmsd
50, RH_pmir
30, RH_matchsd
30, RH_m9qd
70, RH_vp70stock
60, optic_MRD
30, RH_tecsd
30, RH_muzisd
20, RH_demz
50, RH_Deflash
60, optic_Yorris

200, Exile_Item_PlasticBottleEmpty
50, Exile_Item_PlasticBottleFreshWater
30, Exile_Item_Energydrink
40, Exile_Item_Beer
150, Exile_Item_GloriousKnakworst
170, Exile_Item_SausageGravy
170, Exile_Item_ChristmasTinner
170, Exile_Item_BBQSandwich
190, Exile_Item_Surstromming
200, Exile_Item_Catfood

20, Exile_Item_ChristmasTinner_Cooked
20, Exile_Item_BBQSandwich_Cooked
20, Exile_Item_GloriousKnakworst_Cooked
20, Exile_Item_SausageGravy_Cooked
20, Exile_Item_Surstromming_Cooked
20, Exile_Item_Catfood_Cooked

15, Binocular
10, Exile_Item_CamoTentKit
65, Exile_Item_CookingPot
40, Exile_Item_DuctTape
80, Exile_Item_LightBulb
40, Exile_Item_Matches
50, FirstAidKit
25, ItemGPS

///////////////////////////////////////////////////////////////////////////////
// Factories, Construction Sites, Warehouses, Research etc.
///////////////////////////////////////////////////////////////////////////////
> Industrial

10, Exile_Item_DuctTape
30, Exile_Item_ExtensionCord
5, Exile_Item_FloodLightKit
50, Exile_Item_FuelCanisterEmpty
40, Exile_Item_FuelCanisterFull
25, Exile_Item_JunkMetal
20, Exile_Item_LightBulb
10, Exile_Item_MetalBoard
5, Exile_Item_PortableGeneratorKit
10, Exile_Item_Rope
10, Exile_Magazine_Battery
50, Exile_Melee_Axe

///////////////////////////////////////////////////////////////////////////////
// Fuel Stations, Garages, Workshops etc.
///////////////////////////////////////////////////////////////////////////////
> VehicleService

10, Exile_Item_DuctTape
50, Exile_Item_FuelCanisterEmpty
40, Exile_Item_FuelCanisterFull
25, Exile_Item_JunkMetal
20, Exile_Item_LightBulb
10, Exile_Item_MetalBoard
10, Exile_Magazine_Battery

///////////////////////////////////////////////////////////////////////////////
// Towers, Barracks, Hangars etc.
///////////////////////////////////////////////////////////////////////////////
> Military

//SMG
50, arifle_mas_mp5

//SMG Items
20, muzzle_mas_snds_C

//SMG Mags
40, 30Rnd_mas_9x21_Stanag

// LMGs
50, LMG_mas_M249a_F
50, LMG_mas_pkm_F

// LMG Ammo
30, 200Rnd_mas_556x45_Stanag
30, 100Rnd_mas_762x54_mag

30, RH_HBLM

// Rifles
40, RH_m16a1
20, RH_m16a1gl
40, RH_m4
20, RH_m4_m203
15, RH_ar10
40, arifle_mas_ak74.
20, arifle_mas_m1014
30, arifle_mas_g3
30, arifle_mas_m14

// Rifle Items
50, RH_SFM952V
50, RH_SFM952V_tan
30, optic_Holosight
20, RH_peq15
20, RH_peq15_top
20, RH_peq15b
20, RH_peq15b_top
20, RH_peq2
20, RH_peq2_top
30, optic_mas_kobra
20, RH_fa556
20, RH_fa762
20, RH_spr_mbs
20, RH_tundra
20, RH_Delft
20, RH_qdss_nt4
20, RH_saker

// Rifle Ammo
50, RH_30Rnd_556x45_M855A1
30, RH_20Rnd_762x51_AR10/3GL
50, 30Rnd_mas_545x39_mag
30, 7Rnd_mas_12Gauge_Slug
30, 7Rnd_mas_12Gauge_Pellets
30, 20Rnd_mas_762x51_Stanag

// Snipers
25, RH_Mk12mod1

// Sniper Ammo


// Sniper Items
30, optic_mas_DMS

// Noob Tube Nades
30, 1Rnd_HE_Grenade_shell
15, 3Rnd_HE_Grenade_shell

// Smoke Nades
35, SmokeShell
35, SmokeShellRed
35, SmokeShellGreen
35, SmokeShellYellow
35, SmokeShellPurple
35, SmokeShellBlue
35, SmokeShellOrange

// Noob Tube Flares
15, 3Rnd_UGL_FlareGreen_F
15, 3Rnd_UGL_FlareRed_F
15, 3Rnd_UGL_FlareWhite_F
15, 3Rnd_UGL_FlareYellow_F
35, UGL_FlareGreen_F
35, UGL_FlareRed_F
35, UGL_FlareWhite_F
35, UGL_FlareYellow_F

// No Infrared for now
//UGL_FlareCIR_F
//3Rnd_UGL_FlareCIR_F

// Noob Tube Smokes
35, 1Rnd_Smoke_Grenade_shell
35, 1Rnd_SmokeBlue_Grenade_shell
35, 1Rnd_SmokeGreen_Grenade_shell
35, 1Rnd_SmokeOrange_Grenade_shell
35, 1Rnd_SmokePurple_Grenade_shell
35, 1Rnd_SmokeRed_Grenade_shell
35, 1Rnd_SmokeYellow_Grenade_shell
15, 3Rnd_Smoke_Grenade_shell
15, 3Rnd_SmokeBlue_Grenade_shell
15, 3Rnd_SmokeGreen_Grenade_shell
15, 3Rnd_SmokeOrange_Grenade_shell
15, 3Rnd_SmokePurple_Grenade_shell
15, 3Rnd_SmokeRed_Grenade_shell
15, 3Rnd_SmokeYellow_Grenade_shell

// Items
70, Binocular
50, ItemRadio
40, ItemGPS

// Backpacks
70, B_OutdoorPack_blk
70, B_OutdoorPack_tan
70, B_OutdoorPack_blu
60, B_HuntingBackpack

50, B_AssaultPack_khk
50, B_AssaultPack_dgtl
50, B_AssaultPack_rgr
50, B_AssaultPack_sgg
50, B_AssaultPack_blk
50, B_AssaultPack_cbr
50, B_AssaultPack_mcamo

40, B_Kitbag_mcamo
40, B_Kitbag_sgg
40, B_Kitbag_cbr

20, B_FieldPack_blk
20, B_FieldPack_ocamo
20, B_FieldPack_oucamo
20, B_FieldPack_cbr

15, B_Bergen_sgg
15, B_Bergen_mcamo
15, B_Bergen_rgr
15, B_Bergen_blk

// Headgear
70, H_MilCap_ocamo
70, H_MilCap_mcamo
70, H_MilCap_oucamo
70, H_MilCap_blue
70, H_MilCap_rucamo
70, H_MilCap_dgtl

// Does not exist in ARMA anymore?
//  H_HelmetB_plain_mcamo

70, H_HelmetB
70, H_HelmetB_paint
70, H_HelmetB_light
70, H_HelmetB_plain_blk
70, H_HelmetSpecB
70, H_HelmetSpecB_paint1
70, H_HelmetSpecB_paint2
70, H_HelmetSpecB_blk
70, H_HelmetIA
70, H_HelmetIA_net
70, H_HelmetIA_camo
70, H_HelmetB_grass
70, H_HelmetB_snakeskin
70, H_HelmetB_desert
70, H_HelmetB_black
70, H_HelmetB_sand
70, H_HelmetB_light_grass
70, H_HelmetB_light_snakeskin
70, H_HelmetB_light_desert
70, H_HelmetB_light_black
70, H_HelmetB_light_sand

40, H_HelmetCrew_B
40, H_HelmetCrew_O
40, H_HelmetCrew_I

30, H_PilotHelmetFighter_B
30, H_PilotHelmetFighter_O
30, H_PilotHelmetFighter_I

30, H_PilotHelmetHeli_B
30, H_PilotHelmetHeli_O
30, H_PilotHelmetHeli_I

25, H_HelmetB_camo

30, H_CrewHelmetHeli_B
30, H_CrewHelmetHeli_O
30, H_CrewHelmetHeli_I

25, H_BandMask_khk
25, H_BandMask_reaper
25, H_BandMask_demon

10, H_HelmetO_oucamo
10, H_HelmetLeaderO_oucamo
10, H_HelmetSpecO_ocamo
10, H_HelmetSpecO_blk
10, H_HelmetO_ocamo
10, H_HelmetLeaderO_ocamo

// Vests
70, V_Rangemaster_belt
70, V_PlateCarrier1_blk
70, V_PlateCarrier1_rgr
70, V_PlateCarrier2_rgr
70, V_PlateCarrier3_rgr
70, V_PlateCarrierGL_rgr
70, V_PlateCarrierIA1_dgtl
70, V_PlateCarrierIA2_dgtl
70, V_PlateCarrierIAGL_dgtl
70, V_PlateCarrierSpec_rgr

50, V_TacVest_blk
50, V_TacVest_brn
50, V_TacVest_camo
50, V_TacVest_khk
50, V_TacVest_oli
50, V_TacVestCamo_khk
50, V_TacVestIR_blk

30, V_RebreatherB
30, V_RebreatherIR
30, V_RebreatherIA

10, V_PlateCarrierL_CTRG
10, V_PlateCarrierH_CTRG

// Uniforms
70, U_B_CTRG_1             // CTRG Combat Uniform (UBACS)
70, U_B_CTRG_2             // CTRG Combat Uniform (UBACS2)
70, U_B_CTRG_3             // CTRG Combat Uniform (Tee)
50, U_B_CombatUniform_mcam       // Combat Fatigues (MTP)
70, U_B_CombatUniform_mcam_tshirt  // Combat Fatigues (MTP) (Tee)
70, U_B_CombatUniform_mcam_vest  // Recon Fatigues (MTP)
90, U_B_CombatUniform_mcam_worn  // Worn Combat Fatigues (MTP)
30, U_B_SpecopsUniform_sgg       // Specop Fatigues (Sage)
20, U_O_OfficerUniform_ocamo     // Officer Fatigues (Hex)
20, U_I_OfficerUniform         // Combat Fatigues [AAF] (Tee)
35, U_I_CombatUniform        // Combat Fatigues [AAF]
35, U_I_CombatUniform_tshirt     // Combat Fatigues [AAF] (Tee)
35, U_I_CombatUniform_shortsleeve  // Combat Fatigues [AAF]

15, U_B_GhillieSuit        // Ghillie Suit [NATO]
15, U_O_GhillieSuit        // Ghillie Suit [CSAT]
15, U_I_GhillieSuit        // Ghillie Suit [AAF]

35, U_B_HeliPilotCoveralls       // Heli Pilot Coveralls
35, U_O_PilotCoveralls         // Pilot Coveralls [CSAT]
35, U_B_PilotCoveralls         // Pilot Coveralls [NATO]
35, U_I_pilotCoveralls         // Pilot Coveralls [AAF]
35, U_I_HeliPilotCoveralls       // Heli Pilot Coveralls

25, U_B_Wetsuit          // Wetsuit [NATO]
25, U_O_Wetsuit          // Wetsuit [CSAT]
25, U_I_Wetsuit          // Wetsuit [AAF]

15, U_O_CombatUniform_ocamo    // Heli Pilot Coveralls
15, U_O_CombatUniform_oucamo     // Fatigues (Urban) [CSAT]
15, U_O_SpecopsUniform_ocamo     // Recon Fatigues (Hex)
15, U_O_SpecopsUniform_blk       // Recon Fatigues (Black)

20, TRYK_U_B_ARO2_CombatUniform
20, TRYK_U_B_ARO2R_CombatUniform
20, TRYK_U_B_AOR2_BLK_CombatUniform
20, TRYK_U_B_AOR2_BLK_R_CombatUniform
20, TRYK_U_B_AOR2_GRY_CombatUniform
20, TRYK_U_B_AOR2_GRY_R_CombatUniform
20, TRYK_U_B_AOR2_OD_CombatUniform
20, TRYK_U_B_AOR2_OD_R_CombatUniform
20, TRYK_U_B_PCUHsW3nh
20, TRYK_U_B_PCUHsW3
20, TRYK_U_B_BLKBLK_CombatUniform
20, TRYK_U_B_BLKBLK_R_CombatUniform
20, TRYK_U_B_BLKOCP_CombatUniform
20, TRYK_U_B_BLKOCP_R_CombatUniformTshirt
20, TRYK_U_B_BLOD_T
20, TRYK_U_B_BLKTAN_CombatUniform
20, TRYK_U_B_BLKTANR_CombatUniformTshirt
20, TRYK_U_B_C01_Tsirt
20, TRYK_U_B_BLK
20, TRYK_U_B_BLK_Tshirt
20, TRYK_U_B_BLK_OD_Tshirt
20, TRYK_U_B_BLK_OD
20, TRYK_U_B_OD_BLK_2
20, TRYK_U_B_OD_BLK
20, TRYK_U_B_fleece
20, TRYK_U_B_GRYOCP_CombatUniform
20, TRYK_U_B_GRYOCP_R_CombatUniformTshirt
20, TRYK_U_B_MARPAT_Wood_Tshirt
20, TRYK_U_B_MARPAT_Wood
20, TRYK_U_B_MARPAT_WOOD_CombatUniform
20, TRYK_U_B_MARPAT_WOOD_CombatUniformTshirt
20, TRYK_U_B_MTP_CombatUniform
20, TRYK_U_B_MTP_R_CombatUniform
20, TRYK_U_B_MTP_BLK_CombatUniform
20, TRYK_U_B_MTP_BLK_R_CombatUniform
20, TRYK_U_Bts_PCUs
20, TRYK_U_Bts_PCUGs
20, TRYK_U_Bts_PCUODs
20, TRYK_U_B_PCUHs
20, TRYK_U_B_PCUGHs
20, TRYK_U_B_PCUODHs
20, TRYK_U_B_PCUGs_BLK_R
20, TRYK_U_B_PCUGs_gry_R
20, TRYK_U_B_PCUGs_OD_R
20, TRYK_U_B_PCUs_R
20, TRYK_U_B_PCUs
20, TRYK_U_B_PCUGs_BLK
20, TRYK_U_B_PCUGs
20, TRYK_U_B_PCUGs_gry
20, TRYK_U_B_Wood_PCUs_R
20, TRYK_U_B_Wood_PCUs
20, TRYK_U_B_PCUODs
20, TRYK_U_B_PCUGs_OD
20, TRYK_U_B_AOR2_Rollup_CombatUniform
20, TRYK_shirts_DENIM_BK
20, TRYK_shirts_DENIM_BL
20, TRYK_shirts_DENIM_BWH
20, TRYK_shirts_DENIM_od
20, TRYK_shirts_DENIM_R
20, TRYK_shirts_DENIM_RED2
20, TRYK_shirts_DENIM_WH
20, TRYK_shirts_DENIM_WHB
20, TRYK_shirts_DENIM_ylb
20, TRYK_shirts_DENIM_od_Sleeve
20, TRYK_shirts_DENIM_ylb_Sleeve
20, TRYK_shirts_DENIM_BK_Sleeve
20, TRYK_shirts_DENIM_BL_Sleeve
20, TRYK_shirts_DENIM_BWH_Sleeve
20, TRYK_shirts_DENIM_R_Sleeve
20, TRYK_shirts_DENIM_RED2_Sleeve
20, TRYK_shirts_DENIM_WH_Sleeve
20, TRYK_shirts_DENIM_WHB_Sleeve
20, TRYK_U_denim_hood_3c
20, TRYK_U_denim_hood_blk
20, TRYK_U_denim_hood_mc
20, TRYK_U_denim_hood_nc
20, TRYK_U_denim_jersey_blk
20, TRYK_U_denim_jersey_blu
20, TRYK_U_B_RED_T_BG_BR
20, TRYK_U_B_BLK_T_BG_WH
20, TRYK_U_B_BLK_T_BK
20, TRYK_U_B_RED_T_BR
20, TRYK_U_B_BLK_T_WH
20, TRYK_U_B_Denim_T_BG_BK
20, TRYK_U_B_Denim_T_BG_WH
20, TRYK_U_B_Denim_T_BK
20, TRYK_U_B_Denim_T_WH
20, TRYK_U_B_JSDF_CombatUniform
20, TRYK_U_B_JSDF_CombatUniformTshirt



///////////////////////////////////////////////////////////////////////////////
// Hospital, Medevac etc.
///////////////////////////////////////////////////////////////////////////////
> Medical

200, FirstAidKit

///////////////////////////////////////////////////////////////////////////////
// Light Houses + Life Guard Towers + Castles
///////////////////////////////////////////////////////////////////////////////
> Tourist

// The ONLY place to find the BEST backpacks :)
10, B_Carryall_ocamo
10, B_Carryall_oucamo
10, B_Carryall_mcamo
10, B_Carryall_oli
10, B_Carryall_khk
10, B_Carryall_cbr

// Snipers
25, RH_Mk12mod1

// Sniper Ammo
30, RH_30Rnd_556x45_M855A1

// Sniper Items
30, optic_mas_DMS

80, Binocular
50, Laserdesignator
50, ItemRadio
40, ItemGPS
50, FirstAidKit */