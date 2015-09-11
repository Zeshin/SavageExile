/**
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License.
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */


class CfgClans
{
	/*
		Defines the amount of pop tabs needed to register a new clan

		Default: 20,000
	*/
	registrationFee = 20000;

	/*
		A list of all characters allowed in a clan *name*
	*/
	clanNameAlphabet = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789 -!";
};
class Exile_AbstractCraftingRecipe
{
	name = "";
	pictureItem = "";
	returnedItems[] = {};
	components[] = {}; // Required components
	tools[] = {}; // Required tools (matches, gas cooker etc.)
	requiredInteractionModelGroup = ""; // See CfgInteractionModels
	requiresOcean = 0; // isSurfaceWater test
	requiresFire = 0; // inflamed object nearby
};

class CfgCraftingRecipes
{

class CookBBQSandwich: Exile_AbstractCraftingRecipe
{
	name = "Cook BBQ Sandwich";
	pictureItem = "Exile_Item_BBQSandwich_Cooked";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_BBQSandwich_Cooked"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] =
	{
		{1, "Exile_Item_BBQSandwich"}
	};
};

class CookCatfood: Exile_AbstractCraftingRecipe
{
	name = "Cook Cat Food";
	pictureItem = "Exile_Item_Catfood_Cooked";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_Catfood_Cooked"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] =
	{
		{1, "Exile_Item_Catfood"}
	};
};

class CookChristmasTinner: Exile_AbstractCraftingRecipe
{
	name = "Cook Christmas Tinner";
	pictureItem = "Exile_Item_ChristmasTinner_Cooked";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_ChristmasTinner_Cooked"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] =
	{
		{1, "Exile_Item_ChristmasTinner"}
	};
};
class CookGloriousKnakworst: Exile_AbstractCraftingRecipe
{
	name = "Cook Glorious Knakworst";
	pictureItem = "Exile_Item_GloriousKnakworst_Cooked";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_GloriousKnakworst_Cooked"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] =
	{
		{1, "Exile_Item_GloriousKnakworst"}
	};
};

class CookPlasticBottleDirtyWater: Exile_AbstractCraftingRecipe
{
	name = "Cook Dirty Water";
	pictureItem = "Exile_Item_PlasticBottleFreshWater";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_PlasticBottleFreshWater"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] =
	{
		{1, "Exile_Item_PlasticBottleDirtyWater"}
	};
};
class CookPlasticBottleSaltWater: Exile_AbstractCraftingRecipe
{
	name = "Cook Salt Water";
	pictureItem = "Exile_Item_PlasticBottleFreshWater";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_PlasticBottleFreshWater"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] =
	{
		{1, "Exile_Item_PlasticBottleSaltWater"}
	};
};

class CookSausageGravy: Exile_AbstractCraftingRecipe
{
	name = "Cook Sausage Gravy";
	pictureItem = "Exile_Item_SausageGravy_Cooked";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_SausageGravy_Cooked"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] =
	{
		{1, "Exile_Item_SausageGravy"}
	};
};

class CookSurstromming: Exile_AbstractCraftingRecipe
{
	name = "Cook Surströmming";
	pictureItem = "Exile_Item_Surstromming_Cooked";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_Surstromming_Cooked"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] =
	{
		{1, "Exile_Item_Surstromming"}
	};
};

class CraftFirePlace: Exile_AbstractCraftingRecipe
{
	name = "Craft Fire Place";
	pictureItem = "Exile_Item_CampFireKit";
	returnedItems[] =
	{
		{1, "Exile_Item_CampFireKit"}
	};
	components[] =
	{
		{2, "Exile_Item_WoodLog"}
	};
};
class CraftFloodLight: Exile_AbstractCraftingRecipe
{
	name = "Craft Flood Light";
	pictureItem = "Exile_Item_FloodLightKit";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_FloodLightKit"}
	};
	components[] =
	{
		{1, "Exile_Item_MetalPole"},
		{1, "Exile_Item_LightBulb"},
		{1, "Exile_Item_ExtensionCord"}
	};
};
class CraftFortificationUpgrade: Exile_AbstractCraftingRecipe
{
	name = "Craft Fortification Upgrade";
	pictureItem = "Exile_Item_MetalBoard"; //<< CHANGE IT
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] =
	{
		{1, "Exile_Item_FortificationUpgrade"}
	};
	components[] =
	{
		{2, "Exile_Item_MetalPole"},
		{4, "Exile_Item_MetalBoard"}
	};
};
class CraftMetalBoard: Exile_AbstractCraftingRecipe
{
	name = "Craft Metal Board";
	pictureItem = "Exile_Item_MetalBoard";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_MetalBoard"}
	};
	components[] =
	{
		{2, "Exile_Item_JunkMetal"}
	};
};
class CraftMetalPole: Exile_AbstractCraftingRecipe
{
	name = "Craft Metal Pole";
	pictureItem = "Exile_Item_MetalPole";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_MetalPole"}
	};
	components[] =
	{
		{4, "Exile_Item_JunkMetal"}
	};
};
class CraftPortableGenerator: Exile_AbstractCraftingRecipe
{
	name = "Craft Portable Generator";
	pictureItem = "Exile_Item_PortableGeneratorKit";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_PortableGeneratorKit"}
	};
	components[] =
	{
		{4, "Exile_Item_MetalBoard"},
		{1, "Exile_Item_FuelCanisterFull"},
		{1, "Exile_Item_ExtensionCord"}
	};
};
class CraftStorageCrate: Exile_AbstractCraftingRecipe
{
	name = "Craft Storage Crate";
	pictureItem = "Exile_Item_StorageCrateKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] =
	{
		{1, "Exile_Item_StorageCrateKit"}
	};
	components[] =
	{
		{5, "Exile_Item_WoodPlank"}
	};
};
class CraftWoodDoorWay: Exile_AbstractCraftingRecipe
{
	name = "Craft Wood Doorway";
	pictureItem = "Exile_Item_WoodDoorwayKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] =
	{
		{1, "Exile_Item_WoodDoorwayKit"}
	};
	components[] =
	{
		{6, "Exile_Item_WoodPlank"}
	};
};
/*
class CraftWoodDrawBridge: Exile_AbstractCraftingRecipe
{
	name = "Craft Wood Draw-Bridge";
	pictureItem = "Exile_Item_WoodDrawBridgeKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] =
	{
		{1, "Exile_Item_WoodDrawBridgeKit"}
	};
	components[] =
	{
		{4, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_Rope"}
	};
};
*/
class CraftWoodFloor: Exile_AbstractCraftingRecipe
{
	name = "Craft Wood Floor";
	pictureItem = "Exile_Item_WoodFloorKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] =
	{
		{1, "Exile_Item_WoodFloorKit"}
	};
	components[] =
	{
		{4, "Exile_Item_WoodPlank"}
	};
};
class CraftWoodFloorPort: Exile_AbstractCraftingRecipe
{
	name = "Craft Wood Floor Port";
	pictureItem = "Exile_Item_WoodFloorPortKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] =
	{
		{1, "Exile_Item_WoodFloorPortKit"}
	};
	components[] =
	{
		{6, "Exile_Item_WoodPlank"}
	};
};
class CraftWoodGate: Exile_AbstractCraftingRecipe
{
	name = "Craft Wood Gate";
	pictureItem = "Exile_Item_WoodGateKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] =
	{
		{1, "Exile_Item_WoodGateKit"}
	};
	components[] =
	{
		{8, "Exile_Item_WoodPlank"}
	};
};
class CraftWoodPlank: Exile_AbstractCraftingRecipe
{
	name = "Craft Wood Plank";
	pictureItem = "Exile_Item_WoodPlank";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] =
	{
		{1, "Exile_Item_WoodPlank"}
	};
	components[] =
	{
		{2, "Exile_Item_WoodLog"}
	};
};
class CraftWoodStairs: Exile_AbstractCraftingRecipe
{
	name = "Craft Wood Stairs";
	pictureItem = "Exile_Item_WoodStairsKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] =
	{
		{1, "Exile_Item_WoodStairsKit"}
	};
	components[] =
	{
		{6, "Exile_Item_WoodPlank"}
	};
};
class CraftWoodSupport: Exile_AbstractCraftingRecipe
{
	name = "Craft Wood Support";
	pictureItem = "Exile_Item_WoodSupportKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] =
	{
		{1, "Exile_Item_WoodSupportKit"}
	};
	components[] =
	{
		{6, "Exile_Item_WoodPlank"}
	};
};
class CraftWoodWall: Exile_AbstractCraftingRecipe
{
	name = "Craft Wood Wall";
	pictureItem = "Exile_Item_WoodWallKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] =
	{
		{1, "Exile_Item_WoodWallKit"}
	};
	components[] =
	{
		{4, "Exile_Item_WoodPlank"}
	};
};
class CraftWoodWallHalf: Exile_AbstractCraftingRecipe
{
	name = "Craft 1/2 Wood Wall";
	pictureItem = "Exile_Item_WoodWallHalfKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] =
	{
		{1, "Exile_Item_WoodWallHalfKit"}
	};
	components[] =
	{
		{2, "Exile_Item_WoodPlank"}
	};
};
class CraftWoodWindow: Exile_AbstractCraftingRecipe
{
	name = "Craft Wood Window";
	pictureItem = "Exile_Item_WoodWindowKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] =
	{
		{1, "Exile_Item_WoodWindowKit"}
	};
	components[] =
	{
		{6, "Exile_Item_WoodPlank"}
	};
};
class CraftWorkBench: Exile_AbstractCraftingRecipe
{
	name = "Craft Work Bench";
	pictureItem = "Exile_Item_WorkBenchKit";
	returnedItems[] =
	{
		{1, "Exile_Item_WorkBenchKit"}
	};
	components[] =
	{
		{4, "Exile_Item_WoodLog"}
	};
};
class FillEmptyPlasticBottleWithDirtyWater: Exile_AbstractCraftingRecipe
{
	name = "Fill Dirty Water";
	pictureItem = "Exile_Item_PlasticBottleDirtyWater";
	requiredInteractionModelGroup = "WaterSource";
	returnedItems[] =
	{
		{1, "Exile_Item_PlasticBottleDirtyWater"}
	};
	components[] =
	{
		{1, "Exile_Item_PlasticBottleEmpty"}
	};
};
class FillEmptyPlasticBottleWithSaltWater: Exile_AbstractCraftingRecipe
{
	name = "Fill Salt Water";
	pictureItem = "Exile_Item_PlasticBottleSaltWater";
	requiresOcean = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_PlasticBottleSaltWater"}
	};
	components[] =
	{
		{1, "Exile_Item_PlasticBottleEmpty"}
	};
};
class FillFuelCanister: Exile_AbstractCraftingRecipe
{
	name = "Fill Fuel Canister";
	pictureItem = "Exile_Item_FuelCanisterFull";
	requiredInteractionModelGroup = "FuelSource";
	returnedItems[] =
	{
		{1, "Exile_Item_FuelCanisterFull"}
	};
	components[] =
	{
		{1, "Exile_Item_FuelCanisterEmpty"}
	};
};
class UpgradeToWoodDoor: Exile_AbstractCraftingRecipe
{
	name = "Upgrade to Wood Door";
	pictureItem = "Exile_Item_WoodDoorKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] =
	{
		{1, "Exile_Item_WoodDoorKit"}
	};
	components[] =
	{
		{1, "Exile_Item_WoodDoorwayKit"},
		{2, "Exile_Item_WoodPlank"}
	};
};
class UpgradeToWoodFloorPort: Exile_AbstractCraftingRecipe
{
	name = "Upgrade to Wood Floor Port";
	pictureItem = "Exile_Item_WoodFloorPortKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] =
	{
		{1, "Exile_Item_WoodFloorPortKit"}
	};
	components[] =
	{
		{1, "Exile_Item_WoodFloorKit"},
		{2, "Exile_Item_WoodPlank"}
	};
};
class UpgradeToWoodGate: Exile_AbstractCraftingRecipe
{
	name = "Upgrade to Wood Gate";
	pictureItem = "Exile_Item_WoodGateKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] =
	{
		{1, "Exile_Item_WoodGateKit"}
	};
	components[] =
	{
		{1, "Exile_Item_WoodWallKit"},
		{4, "Exile_Item_WoodPlank"}
	};
};
class UpgradeToWoodWall: Exile_AbstractCraftingRecipe
{
	name = "Upgrade to Wood Wall";
	pictureItem = "Exile_Item_WoodWallHalfKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] =
	{
		{1, "Exile_Item_WoodWallKit"}
	};
	components[] =
	{
		{2, "Exile_Item_WoodWallHalfKit"}
	};
};
class UpgradeToWoodWindow: Exile_AbstractCraftingRecipe
{
	name = "Upgrade to Wood Window";
	pictureItem = "Exile_Item_WoodWindowKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] =
	{
		{1, "Exile_Item_WoodWindowKit"}
	};
	components[] =
	{
		{1, "Exile_Item_WoodWallKit"},
		{2, "Exile_Item_WoodPlank"}
	};
};
};
class CfgExileArsenal
{
	class Exile_Uniform_BambiOverall				{ quality = 1; price = 2; };

	///////////////////////////////////////////////////////////////////////////////
	// Civillian Clothing
	///////////////////////////////////////////////////////////////////////////////
	class U_C_Journalist 							{ quality = 1; price = 20; };
	class U_C_Poloshirt_blue 						{ quality = 1; price = 20; };
	class U_C_Poloshirt_burgundy 					{ quality = 1; price = 20; };
	class U_C_Poloshirt_salmon 						{ quality = 1; price = 20; };
	class U_C_Poloshirt_stripped 					{ quality = 1; price = 20; };
	class U_C_Poloshirt_tricolour 					{ quality = 1; price = 20; };
	class U_C_Poor_1 								{ quality = 1; price = 20; };
	class U_C_Poor_2 								{ quality = 1; price = 20; };
	class U_C_Poor_shorts_1 						{ quality = 1; price = 20; };
	class U_C_Scientist 							{ quality = 1; price = 20; };
	class U_OrestesBody 							{ quality = 3; price = 40; };
	class U_Rangemaster 							{ quality = 1; price = 40; };
	class U_NikosAgedBody 							{ quality = 3; price = 40; };
	class U_NikosBody 								{ quality = 3; price = 40; };
	class U_Competitor 								{ quality = 1; price = 40; };

	///////////////////////////////////////////////////////////////////////////////
	// Soldier Uniforms
	///////////////////////////////////////////////////////////////////////////////
	class U_B_CombatUniform_mcam 					{ quality = 2; price = 40; };
	class U_B_CombatUniform_mcam_tshirt 			{ quality = 1; price = 40; };
	class U_B_CombatUniform_mcam_vest 				{ quality = 1; price = 40; };
	class U_B_CombatUniform_mcam_worn 				{ quality = 1; price = 40; };
	class U_B_CTRG_1 								{ quality = 2; price = 40; };
	class U_B_CTRG_2 								{ quality = 2; price = 40; };
	class U_B_CTRG_3								{ quality = 2; price = 40; };
	class U_I_CombatUniform 						{ quality = 1; price = 40; };
	class U_I_CombatUniform_shortsleeve				{ quality = 1; price = 40; };
	class U_I_CombatUniform_tshirt					{ quality = 1; price = 40; };
	class U_I_OfficerUniform						{ quality = 1; price = 40; };
	class U_O_CombatUniform_ocamo 					{ quality = 1; price = 40; };
	class U_O_CombatUniform_oucamo 					{ quality = 1; price = 40; };
	class U_O_OfficerUniform_ocamo 					{ quality = 3; price = 80; };
	class U_B_SpecopsUniform_sgg 					{ quality = 3; price = 80; };
	class U_O_SpecopsUniform_blk 					{ quality = 3; price = 80; };
	class U_O_SpecopsUniform_ocamo 					{ quality = 3; price = 80; };
	class U_I_G_Story_Protagonist_F 				{ quality = 3; price = 100; };
	class TRYK_U_B_ARO2_CombatUniform  				{ quality = 3; price = 100; };
	class TRYK_U_B_ARO2R_CombatUniform 				{ quality = 3; price = 100; };
	class TRYK_U_B_AOR2_BLK_CombatUniform           { quality = 3; price = 100; };
	class TRYK_U_B_AOR2_BLK_R_CombatUniform	 		{ quality = 3; price = 100; };
	class TRYK_U_B_AOR2_GRY_CombatUniform 			{ quality = 3; price = 100; };
	class TRYK_U_B_AOR2_GRY_R_CombatUniform			{ quality = 3; price = 100; };
	class TRYK_U_B_AOR2_OD_CombatUniform 			{ quality = 3; price = 100; };
	class TRYK_U_B_AOR2_OD_R_CombatUniform 			{ quality = 3; price = 100; };
	class TRYK_U_B_PCUHsW3nh						{ quality = 3; price = 100; };
	class TRYK_U_B_PCUHsW3 							{ quality = 3; price = 100; };
	class TRYK_U_B_BLKBLK_CombatUniform 			{ quality = 3; price = 100; };
	class TRYK_U_B_BLKBLK_R_CombatUniform 			{ quality = 3; price = 100; };
	class TRYK_U_B_BLKOCP_CombatUniform 			{ quality = 3; price = 100; };
	class TRYK_U_B_BLKOCP_R_CombatUniformTshirt 	{ quality = 3; price = 100; };
	class TRYK_U_B_BLOD_T 							{ quality = 3; price = 100; };
	class TRYK_U_B_BLKTAN_CombatUniform 	    	{ quality = 3; price = 100; };
	class TRYK_U_B_BLKTANR_CombatUniformTshirt	 	{ quality = 3; price = 100; };
	class TRYK_U_B_C01_Tsirt 						{ quality = 3; price = 100; };
	class TRYK_U_B_BLK 								{ quality = 3; price = 100; };
	class TRYK_U_B_BLK_Tshirt 						{ quality = 3; price = 100; };
	class TRYK_U_B_BLK_OD_Tshirt 					{ quality = 3; price = 100; };
	class TRYK_U_B_BLK_OD 							{ quality = 3; price = 100; };
	class TRYK_U_B_OD_BLK_2 						{ quality = 3; price = 100; };
	class TRYK_U_B_OD_BLK 							{ quality = 3; price = 100; };
	class TRYK_U_B_fleece 							{ quality = 3; price = 100; };
	class TRYK_U_B_GRYOCP_CombatUniform 			{ quality = 3; price = 100; };
	class TRYK_U_B_GRYOCP_R_CombatUniformTshirt 	{ quality = 3; price = 100; };
	class TRYK_U_B_MARPAT_Wood_Tshirt 				{ quality = 3; price = 100; };
	class TRYK_U_B_MARPAT_Wood 						{ quality = 3; price = 100; };
	class TRYK_U_B_MARPAT_WOOD_CombatUniform 		{ quality = 3; price = 100; };
	class TRYK_U_B_MARPAT_WOOD_CombatUniformTshirt 	{ quality = 3; price = 100; };
	class TRYK_U_B_MTP_CombatUniform 				{ quality = 3; price = 100; };
	class TRYK_U_B_MTP_R_CombatUniform 				{ quality = 3; price = 100; };
	class TRYK_U_B_MTP_BLK_CombatUniform 			{ quality = 3; price = 100; };
	class TRYK_U_B_MTP_BLK_R_CombatUniform 			{ quality = 3; price = 100; };
	class TRYK_U_Bts_PCUs 							{ quality = 3; price = 100; };
	class TRYK_U_Bts_PCUGs 							{ quality = 3; price = 100; };
	class TRYK_U_Bts_PCUODs 						{ quality = 3; price = 100; };
	class TRYK_U_B_PCUHs 							{ quality = 3; price = 100; };
	class TRYK_U_B_PCUGHs 							{ quality = 3; price = 100; };
	class TRYK_U_B_PCUODHs 							{ quality = 3; price = 100; };
	class TRYK_U_B_PCUGs_BLK_R 						{ quality = 3; price = 100; };
	class TRYK_U_B_PCUGs_gry_R 						{ quality = 3; price = 100; };
	class TRYK_U_B_PCUGs_OD_R 						{ quality = 3; price = 100; };
	class TRYK_U_B_PCUs_R 							{ quality = 3; price = 100; };
	class TRYK_U_B_PCUs 							{ quality = 3; price = 100; };
	class TRYK_U_B_PCUGs_BLK 						{ quality = 3; price = 100; };
	class TRYK_U_B_PCUGs 							{ quality = 3; price = 100; };
	class TRYK_U_B_PCUGs_gry 						{ quality = 3; price = 100; };
	class TRYK_U_B_Wood_PCUs_R 						{ quality = 3; price = 100; };
	class TRYK_U_B_Wood_PCUs 						{ quality = 3; price = 100; };
	class TRYK_U_B_PCUODs 							{ quality = 3; price = 100; };
	class TRYK_U_B_PCUGs_OD 						{ quality = 3; price = 100; };
	class TRYK_U_B_AOR2_Rollup_CombatUniform 		{ quality = 3; price = 100; };
	class TRYK_shirts_DENIM_BK 						{ quality = 3; price = 100; };
	class TRYK_shirts_DENIM_BL 						{ quality = 3; price = 100; };
	class TRYK_shirts_DENIM_BWH 					{ quality = 3; price = 100; };
	class TRYK_shirts_DENIM_od 						{ quality = 3; price = 100; };
	class TRYK_shirts_DENIM_R 						{ quality = 3; price = 100; };
	class TRYK_shirts_DENIM_RED2 					{ quality = 3; price = 100; };
	class TRYK_shirts_DENIM_WH 						{ quality = 3; price = 100; };
	class TRYK_shirts_DENIM_WHB 					{ quality = 3; price = 100; };
	class TRYK_shirts_DENIM_ylb 					{ quality = 3; price = 100; };
	class TRYK_shirts_DENIM_od_Sleeve 				{ quality = 3; price = 100; };
	class TRYK_shirts_DENIM_ylb_Sleeve 				{ quality = 3; price = 100; };
	class TRYK_shirts_DENIM_BK_Sleeve 				{ quality = 3; price = 100; };
	class TRYK_shirts_DENIM_BL_Sleeve				{ quality = 3; price = 100; };
	class TRYK_shirts_DENIM_BWH_Sleeve 				{ quality = 3; price = 100; };
	class TRYK_shirts_DENIM_R_Sleeve 				{ quality = 3; price = 100; };
	class TRYK_shirts_DENIM_RED2_Sleeve				{ quality = 3; price = 100; };
	class TRYK_shirts_DENIM_WH_Sleeve 				{ quality = 3; price = 100; };
	class TRYK_shirts_DENIM_WHB_Sleeve 				{ quality = 3; price = 100; };
	class TRYK_U_denim_hood_3c 						{ quality = 3; price = 100; };
	class TRYK_U_denim_hood_blk 					{ quality = 3; price = 100; };
	class TRYK_U_denim_hood_mc	 					{ quality = 3; price = 100; };
	class TRYK_U_denim_hood_nc 						{ quality = 3; price = 100; };
	class TRYK_U_denim_jersey_blk 					{ quality = 3; price = 100; };
	class TRYK_U_denim_jersey_blu					{ quality = 3; price = 100; };
	class TRYK_U_B_RED_T_BG_BR						{ quality = 3; price = 100; };
	class TRYK_U_B_BLK_T_BG_WH						{ quality = 3; price = 100; };
	class TRYK_U_B_BLK_T_BK							{ quality = 3; price = 100; };
	class TRYK_U_B_RED_T_BR 						{ quality = 3; price = 100; };
	class TRYK_U_B_BLK_T_WH 						{ quality = 3; price = 100; };
	class TRYK_U_B_Denim_T_BG_BK 					{ quality = 3; price = 100; };
	class TRYK_U_B_Denim_T_BG_WH 					{ quality = 3; price = 100; };
	class TRYK_U_B_Denim_T_BK 						{ quality = 3; price = 100; };
	class TRYK_U_B_Denim_T_WH 						{ quality = 3; price = 100; };
	class TRYK_U_B_JSDF_CombatUniform 				{ quality = 3; price = 100; };
	class TRYK_U_B_JSDF_CombatUniformTshirt 		{ quality = 3; price = 100; };

	///////////////////////////////////////////////////////////////////////////////
	// Guerilla Uniforms
	///////////////////////////////////////////////////////////////////////////////
	class U_C_HunterBody_grn						{ quality = 1; price = 40; };
	class U_IG_Guerilla1_1							{ quality = 1; price = 40; };
	class U_IG_Guerilla2_1							{ quality = 2; price = 60; };
	class U_IG_Guerilla2_2							{ quality = 1; price = 40; };
	class U_IG_Guerilla2_3							{ quality = 1; price = 40; };
	class U_IG_Guerilla3_1							{ quality = 1; price = 40; };
	class U_BG_Guerilla2_1							{ quality = 1; price = 40; };
	class U_IG_Guerilla3_2							{ quality = 1; price = 40; };
	class U_BG_Guerrilla_6_1						{ quality = 2; price = 60; };
	class U_BG_Guerilla1_1							{ quality = 1; price = 40; };
	class U_BG_Guerilla2_2							{ quality = 1; price = 40; };
	class U_BG_Guerilla2_3							{ quality = 1; price = 40; };
	class U_BG_Guerilla3_1							{ quality = 1; price = 40; };
	class U_BG_leader								{ quality = 1; price = 40; };
	class U_IG_leader								{ quality = 1; price = 40; };
	class U_I_G_resistanceLeader_F					{ quality = 3; price = 100; };

	///////////////////////////////////////////////////////////////////////////////
	// Ghillie Suits
	///////////////////////////////////////////////////////////////////////////////
	class U_B_FullGhillie_ard						{ quality = 3; price = 250; };
	class U_B_FullGhillie_lsh						{ quality = 3; price = 250; };
	class U_B_FullGhillie_sard						{ quality = 3; price = 250; };
	class U_B_GhillieSuit							{ quality = 2; price = 200; };
	class U_I_FullGhillie_ard						{ quality = 3; price = 250; };
	class U_I_FullGhillie_lsh						{ quality = 3; price = 250; };
	class U_I_FullGhillie_sard						{ quality = 3; price = 250; };
	class U_I_GhillieSuit							{ quality = 2; price = 200; };
	class U_O_FullGhillie_ard						{ quality = 3; price = 250; };
	class U_O_FullGhillie_lsh						{ quality = 3; price = 250; };
	class U_O_FullGhillie_sard						{ quality = 3; price = 250; };
	class U_O_GhillieSuit							{ quality = 2; price = 200; };

	///////////////////////////////////////////////////////////////////////////////
	// Wet Suits
	///////////////////////////////////////////////////////////////////////////////
	class U_I_Wetsuit								{ quality = 3; price = 80; };
	class U_O_Wetsuit								{ quality = 3; price = 80; };
	class U_B_Wetsuit								{ quality = 3; price = 80; };
	class U_B_survival_uniform						{ quality = 3; price = 80; };

	///////////////////////////////////////////////////////////////////////////////
	// Bandolliers
	///////////////////////////////////////////////////////////////////////////////
	class V_BandollierB_blk							{ quality = 1; price = 30; };
	class V_BandollierB_cbr							{ quality = 1; price = 30; };
	class V_BandollierB_khk							{ quality = 1; price = 30; };
	class V_BandollierB_oli							{ quality = 1; price = 30; };
	class V_BandollierB_rgr							{ quality = 1; price = 30; };

	///////////////////////////////////////////////////////////////////////////////
	// Chestrigs
	///////////////////////////////////////////////////////////////////////////////
	class V_Chestrig_blk 							{ quality = 1; price = 40; };
	class V_Chestrig_khk 							{ quality = 1; price = 40; };
	class V_Chestrig_oli 							{ quality = 1; price = 40; };
	class V_Chestrig_rgr 							{ quality = 1; price = 40; };

	///////////////////////////////////////////////////////////////////////////////
	// Vests
	///////////////////////////////////////////////////////////////////////////////
	class V_Press_F									{ quality = 1; price = 10; };
	class V_Rangemaster_belt						{ quality = 1; price = 6; };
	class V_TacVest_blk								{ quality = 2; price = 50; };
	class V_TacVest_blk_POLICE						{ quality = 3; price = 300; };
	class V_TacVest_brn								{ quality = 2; price = 100; };
	class V_TacVest_camo							{ quality = 2; price = 100; };
	class V_TacVest_khk								{ quality = 2; price = 100; };
	class V_TacVest_oli								{ quality = 2; price = 100; };
	class V_TacVestCamo_khk							{ quality = 2; price = 100; };
	class V_TacVestIR_blk							{ quality = 2; price = 100; };
	class V_I_G_resistanceLeader_F					{ quality = 2; price = 100; };

	///////////////////////////////////////////////////////////////////////////////
	// Harnesses
	///////////////////////////////////////////////////////////////////////////////
	class V_HarnessO_brn							{ quality = 1; price = 40; };
	class V_HarnessO_gry							{ quality = 1; price = 40; };
	class V_HarnessOGL_brn							{ quality = 1; price = 30; };
	class V_HarnessOGL_gry							{ quality = 1; price = 30; };
	class V_HarnessOSpec_brn						{ quality = 1; price = 40; };
	class V_HarnessOSpec_gry						{ quality = 1; price = 40; };

	///////////////////////////////////////////////////////////////////////////////
	// Plate Carriers
	///////////////////////////////////////////////////////////////////////////////
	class TRYK_V_ArmorVest_AOR2_2					{ quality = 3; price = 400; };
	class TRYK_V_ArmorVest_Brown2					{ quality = 3; price = 400; };
	class TRYK_V_ArmorVest_khk2						{ quality = 3; price = 400; };
	//class TRYK_V_ArmorVest_Ranger2					{ quality = 3; price = 400; };
	class TRYK_V_ArmorVest_AOR1_2					{ quality = 3; price = 400; };
	class TRYK_V_ArmorVest_coyo2					{ quality = 3; price = 400; };
	class TRYK_V_ArmorVest_Delta2					{ quality = 3; price = 400; };
	class TRYK_V_ArmorVest_green2					{ quality = 3; price = 400; };
	class TRYK_V_ArmorVest_Ranger2					{ quality = 3; price = 400; };
	class TRYK_V_ArmorVest_tan2						{ quality = 3; price = 400; };
	class TRYK_V_PlateCarrier_wood					{ quality = 3; price = 400; };
	class TRYK_V_PlateCarrier_blk					{ quality = 3; price = 400; };
	class TRYK_V_PlateCarrier_JSDF					{ quality = 3; price = 400; };
	class TRYK_V_tacv10LC_TN						{ quality = 3; price = 400; };
	class TRYK_V_tacv10LC_OD						{ quality = 3; price = 400; };
	class TRYK_V_tacv10LC_BK						{ quality = 3; price = 400; };
	class TRYK_V_tacv1_SHERIFF_BK					{ quality = 3; price = 400; };
	class TRYK_V_tacv1LSRF_BK  						{ quality = 3; price = 400; };
	class TRYK_V_tacv1LC_SRF2_OD 					{ quality = 3; price = 400; };
	class TRYK_V_tacv1LC_SRF_OD 					{ quality = 3; price = 400; };
	class TRYK_V_tacv1LC_SRF2_BK					{ quality = 3; price = 400; };
	class TRYK_V_tacv1LC_SRF_BK                     { quality = 3; price = 400; };
	class TRYK_V_tacv1LP_BK           				{ quality = 3; price = 400; };
	class TRYK_V_tacv1LC_P2_BK          			{ quality = 3; price = 400; };
	class TRYK_V_tacv1LC_P_BK                       { quality = 3; price = 400; };
	class TRYK_V_tacv1_P_BK        					{ quality = 3; price = 400; };
	class TRYK_V_tacv1_MSL_NV 						{ quality = 3; price = 400; };
	class TRYK_V_tacv1_MSL_BK 						{ quality = 3; price = 400; };
	class TRYK_V_tacv1LMSL_NV 						{ quality = 3; price = 400; };
	class TRYK_V_tacv1LMSL_BK 						{ quality = 3; price = 400; };
	class TRYK_V_tacv1LC_MSL_NV 					{ quality = 3; price = 400; };
	class TRYK_V_tacv1LC_MSL_BK 					{ quality = 3; price = 400; };
	class TRYK_V_tacv1_FBI_BK 						{ quality = 3; price = 400; };
	class TRYK_V_tacv1LC_FBI2_BK					{ quality = 3; price = 400; };
	class TRYK_V_tacv1LC_FBI_BK 					{ quality = 3; price = 400; };
	class TRYK_V_tacv1L_OD 							{ quality = 3; price = 400; };
	class TRYK_V_tacv1L_CY 							{ quality = 3; price = 400; };
	class TRYK_V_tacv1L_BK 							{ quality = 3; price = 400; };
	class TRYK_V_tacv1LC_OD 						{ quality = 3; price = 400; };
	class TRYK_V_tacv1LC_CY 						{ quality = 3; price = 400; };
	class TRYK_V_tacv1LC_BK                         { quality = 3; price = 400; };
	class TRYK_V_tacv1MLC_BK                 		{ quality = 3; price = 400; };

	///////////////////////////////////////////////////////////////////////////////
	// Caps
	///////////////////////////////////////////////////////////////////////////////
	class H_Cap_blk 								{ quality = 1; price = 6; };
	class H_Cap_blk_Raven 							{ quality = 1; price = 6; };
	class H_Cap_blu 								{ quality = 1; price = 6; };
	class H_Cap_brn_SPECOPS 						{ quality = 1; price = 6; };
	class H_Cap_grn 								{ quality = 1; price = 6; };
	class H_Cap_headphones 							{ quality = 1; price = 6; };
	class H_Cap_khaki_specops_UK 					{ quality = 1; price = 6; };
	class H_Cap_oli 								{ quality = 1; price = 6; };
	class H_Cap_press 								{ quality = 1; price = 6; };
	class H_Cap_red 								{ quality = 1; price = 6; };
	class H_Cap_tan 								{ quality = 1; price = 6; };
	class H_Cap_tan_specops_US 						{ quality = 1; price = 6; };

	///////////////////////////////////////////////////////////////////////////////
	// Military Caps
	///////////////////////////////////////////////////////////////////////////////
	class H_MilCap_blue 							{ quality = 1; price = 8; };
	class H_MilCap_dgtl 							{ quality = 1; price = 8; };
	class H_MilCap_mcamo 							{ quality = 1; price = 8; };
	class H_MilCap_ocamo 							{ quality = 1; price = 8; };
	class H_MilCap_oucamo 							{ quality = 1; price = 8; };
	class H_MilCap_rucamo 							{ quality = 1; price = 8; };

	///////////////////////////////////////////////////////////////////////////////
	// Beanies
	///////////////////////////////////////////////////////////////////////////////
	class H_Watchcap_blk 							{ quality = 1; price = 6; };
	class H_Watchcap_camo 							{ quality = 1; price = 6; };
	class H_Watchcap_khk 							{ quality = 1; price = 6; };
	class H_Watchcap_sgg 							{ quality = 1; price = 6; };

	///////////////////////////////////////////////////////////////////////////////
	// Bandannas
	///////////////////////////////////////////////////////////////////////////////
	class H_Bandanna_camo							{ quality = 1; price = 4; };
	class H_Bandanna_cbr							{ quality = 1; price = 4; };
	class H_Bandanna_gry							{ quality = 1; price = 4; };
	class H_Bandanna_khk							{ quality = 1; price = 4; };
	class H_Bandanna_khk_hs							{ quality = 1; price = 4; };
	class H_Bandanna_mcamo							{ quality = 1; price = 4; };
	class H_Bandanna_sgg							{ quality = 1; price = 4; };
	class H_Bandanna_surfer							{ quality = 1; price = 4; };

	///////////////////////////////////////////////////////////////////////////////
	// Boonie Hats
	///////////////////////////////////////////////////////////////////////////////
	class H_Booniehat_dgtl							{ quality = 1; price = 6; };
	class H_Booniehat_dirty							{ quality = 1; price = 6; };
	class H_Booniehat_grn							{ quality = 1; price = 6; };
	class H_Booniehat_indp							{ quality = 1; price = 6; };
	class H_Booniehat_khk							{ quality = 1; price = 6; };
	class H_Booniehat_khk_hs						{ quality = 1; price = 6; };
	class H_Booniehat_mcamo							{ quality = 1; price = 6; };
	class H_Booniehat_tan							{ quality = 1; price = 6; };

	///////////////////////////////////////////////////////////////////////////////
	// Hats
	///////////////////////////////////////////////////////////////////////////////
	class H_Hat_blue								{ quality = 1; price = 6; };
	class H_Hat_brown								{ quality = 1; price = 6; };
	class H_Hat_camo								{ quality = 1; price = 6; };
	class H_Hat_checker								{ quality = 1; price = 6; };
	class H_Hat_grey								{ quality = 1; price = 6; };
	class H_Hat_tan									{ quality = 1; price = 6; };
	class H_StrawHat								{ quality = 1; price = 6; };
	class H_StrawHat_dark							{ quality = 1; price = 6; };

	///////////////////////////////////////////////////////////////////////////////
	// Berets
	///////////////////////////////////////////////////////////////////////////////
	class H_Beret_02								{ quality = 1; price = 6; };
	class H_Beret_blk								{ quality = 1; price = 6; };
	class H_Beret_blk_POLICE						{ quality = 1; price = 6; };
	class H_Beret_brn_SF							{ quality = 1; price = 6; };
	class H_Beret_Colonel							{ quality = 3; price = 8; };
	class H_Beret_grn								{ quality = 1; price = 6; };
	class H_Beret_grn_SF							{ quality = 1; price = 6; };
	class H_Beret_ocamo								{ quality = 1; price = 6; };
	class H_Beret_red								{ quality = 1; price = 6; };

	///////////////////////////////////////////////////////////////////////////////
	// Shemags
	///////////////////////////////////////////////////////////////////////////////
	class H_Shemag_khk								{ quality = 1; price = 10; };
	class H_Shemag_olive							{ quality = 1; price = 10; };
	class H_Shemag_olive_hs							{ quality = 1; price = 10; };
	class H_Shemag_tan								{ quality = 1; price = 10; };
	class H_ShemagOpen_khk							{ quality = 1; price = 10; };
	class H_ShemagOpen_tan							{ quality = 1; price = 10; };
	class H_TurbanO_blk								{ quality = 1; price = 10; };

	///////////////////////////////////////////////////////////////////////////////
	// Light Helmets
	///////////////////////////////////////////////////////////////////////////////
	class H_HelmetB_light							{ quality = 1; price = 20; };
	class H_HelmetB_light_black						{ quality = 1; price = 20; };
	class H_HelmetB_light_desert					{ quality = 1; price = 20; };
	class H_HelmetB_light_grass						{ quality = 1; price = 20; };
	class H_HelmetB_light_sand						{ quality = 1; price = 20; };
	class H_HelmetB_light_snakeskin					{ quality = 1; price = 20; };

	///////////////////////////////////////////////////////////////////////////////
	// Helmets
	///////////////////////////////////////////////////////////////////////////////
	class H_HelmetIA								{ quality = 1; price = 200; };
	class H_HelmetIA_camo							{ quality = 1; price = 200; };
	class H_HelmetIA_net							{ quality = 1; price = 200; };
	class H_HelmetB									{ quality = 2; price = 200; };
	class H_HelmetB_black							{ quality = 2; price = 200; };
	class H_HelmetB_camo							{ quality = 3; price = 200; }; // This one is awesome!
	class H_HelmetB_desert							{ quality = 2; price = 200; };
	class H_HelmetB_grass							{ quality = 2; price = 200; };
	class H_HelmetB_paint							{ quality = 2; price = 200; };
	class H_HelmetB_plain_blk						{ quality = 2; price = 200; };
	class H_HelmetB_sand							{ quality = 2; price = 200; };
	class H_HelmetB_snakeskin						{ quality = 2; price = 200; };
	class TRYK_H_PASGT_BLK 							{ quality = 2; price = 200; };
	class TRYK_H_PASGT_COYO 						{ quality = 2; price = 200; };
	class TRYK_H_PASGT_OD 							{ quality = 2; price = 200; };
	class TRYK_H_PASGT_TAN 							{ quality = 2; price = 200; };
	class TRYK_H_DELTAHELM_NV 						{ quality = 2; price = 200; };
	class TRYK_r_cap_blk_Glasses 					{ quality = 2; price = 60; };
	class TRYK_r_cap_od_Glasses 					{ quality = 2; price = 60; };
	class TRYK_r_cap_tan_Glasses 					{ quality = 2; price = 60; };
	class TRYK_H_TACEARMUFF_H 						{ quality = 2; price = 60; };
	class TRYK_H_Helmet_JSDF 						{ quality = 2; price = 200; };
	class TRYK_H_woolhat 							{ quality = 2; price = 60; };
	class TRYK_H_woolhat_br 						{ quality = 2; price = 60; };
	class TRYK_H_woolhat_cu 						{ quality = 2; price = 60; };
	class TRYK_H_woolhat_CW 						{ quality = 2; price = 60; };
	class TRYK_H_woolhat_tan 						{ quality = 2; price = 60; };
	class TRYK_H_woolhat_WH 						{ quality = 2; price = 60; };
	class TRYK_H_pakol 								{ quality = 2; price = 200; };
	class TRYK_H_Helmet_WOOD 						{ quality = 2; price = 200; };
	class TRYK_H_Helmet_MARPAT_Wood 				{ quality = 2; price = 200; };
	class TRYK_H_GR 								{ quality = 2; price = 200; };
	class TRYK_H_AOR2 								{ quality = 2; price = 200; };
	class TRYK_H_headsetcap_od 						{ quality = 2; price = 60; };
	class TRYK_H_headsetcap 						{ quality = 2; price = 60; };
	class TRYK_H_headsetcap_blk 					{ quality = 2; price = 60; };
	class TRYK_H_headsetcap_od_Glasses 				{ quality = 2; price = 60; };
	class TRYK_H_headsetcap_blk_Glasses 			{ quality = 2; price = 60; };
	class TRYK_H_headsetcap_Glasses 				{ quality = 2; price = 60; };
	class TRYK_H_ghillie_top_headless3 				{ quality = 2; price = 100; };
	class TRYK_H_ghillie_over_green 				{ quality = 2; price = 100; };
	class TRYK_H_ghillie_top_green 					{ quality = 2; price = 100; };
	class TRYK_H_ghillie_top_headless_green 		{ quality = 2; price = 100; };
	class TRYK_H_ghillie_over 						{ quality = 2; price = 100; };
	class TRYK_H_ghillie_top 						{ quality = 2; price = 100; };
	class TRYK_H_ghillie_top_headless 				{ quality = 2; price = 100; };
	class TRYK_ESS_CAP_tan 							{ quality = 2; price = 60; };
	class TRYK_ESS_CAP_OD 							{ quality = 2; price = 60; };
	class TRYK_ESS_CAP 								{ quality = 2; price = 60; };
	class TRYK_H_EARMUFF 							{ quality = 2; price = 60; };
	class TRYK_H_Booniehat_WOOD 					{ quality = 2; price = 60; };
	class TRYK_H_Booniehat_JSDF 					{ quality = 2; price = 60; };
	class TRYK_H_Booniehat_MARPAT_WOOD 				{ quality = 2; price = 60; };
	class TRYK_H_Booniehat_AOR2 					{ quality = 2; price = 60; };
	class TRYK_H_Bandana_wig_g 						{ quality = 2; price = 60; };
	class TRYK_H_Bandana_H 							{ quality = 2; price = 60; };
	class TRYK_Kio_Balaclava 						{ quality = 2; price = 60; };

	///////////////////////////////////////////////////////////////////////////////
	// Spec Ops Helmets
	///////////////////////////////////////////////////////////////////////////////
	class H_HelmetSpecB								{ quality = 2; price = 200; };
	class H_HelmetSpecB_blk							{ quality = 2; price = 200; };
	class H_HelmetSpecB_paint1						{ quality = 2; price = 200; };
	class H_HelmetSpecB_paint2						{ quality = 2; price = 200; };

	///////////////////////////////////////////////////////////////////////////////
	// Super Helmets
	///////////////////////////////////////////////////////////////////////////////
	class H_HelmetO_ocamo							{ quality = 3; price = 300; };
	class H_HelmetO_oucamo							{ quality = 3; price = 300; };
	class H_HelmetSpecO_blk							{ quality = 3; price = 300; };
	class H_HelmetSpecO_ocamo						{ quality = 3; price = 300; };
	class H_HelmetLeaderO_ocamo						{ quality = 3; price = 300; };
	class H_HelmetLeaderO_oucamo					{ quality = 3; price = 300; };

	///////////////////////////////////////////////////////////////////////////////
	// Pointer Attachments
	///////////////////////////////////////////////////////////////////////////////
	class acc_flashlight 							{ quality = 1; price = 4; };
	class acc_pointer_IR 							{ quality = 1; price = 10; };
	class RH_peq15 									{ quality = 2; price = 50; };
	class RH_peq15_top 								{ quality = 2; price = 50; };
	class RH_peq15b 								{ quality = 2; price = 50; };
	class RH_peq15b_top 							{ quality = 2; price = 50; };
	class RH_peq2 									{ quality = 2; price = 50; };
	class RH_peq2_top 								{ quality = 2; price = 50; };
	class RH_SFM952V 								{ quality = 2; price = 50; };
	class RH_SFM952V_tan							{ quality = 2; price = 50; };

	///////////////////////////////////////////////////////////////////////////////
	// Bitpod Attachments
	///////////////////////////////////////////////////////////////////////////////
	class bipod_01_F_blk	 						{ quality = 1; price = 10; };
	class bipod_01_F_mtp	 						{ quality = 1; price = 10; };
	class bipod_01_F_snd	 						{ quality = 1; price = 10; };
	class bipod_02_F_blk	 						{ quality = 1; price = 10; };
	class bipod_02_F_hex	 						{ quality = 1; price = 10; };
	class bipod_02_F_tan	 						{ quality = 1; price = 10; };
	class bipod_03_F_blk	 						{ quality = 1; price = 10; };
	class bipod_03_F_oli	 						{ quality = 1; price = 10; };
	class RH_HBLM 									{ quality = 2; price = 10; };
  	class RH_HBLM_tg 								{ quality = 2; price = 10; };
	class RH_HBLM_des 								{ quality = 2; price = 10; };
	class RH_HBLM_wdl 								{ quality = 2; price = 10; };
	class RH_TD_ACB 								{ quality = 2; price = 10; };
	class RH_TD_ACB_g 								{ quality = 2; price = 10; };
	class RH_TD_ACB_b 								{ quality = 2; price = 10; };

	///////////////////////////////////////////////////////////////////////////////
	// Muzzle Attachments
	///////////////////////////////////////////////////////////////////////////////
	class muzzle_snds_338_black 					{ quality = 2; price = 50; };
	class muzzle_snds_338_green 					{ quality = 2; price = 50; };
	class muzzle_snds_338_sand 						{ quality = 2; price = 50; };
	class muzzle_snds_93mmg 						{ quality = 2; price = 50; };
	class muzzle_snds_93mmg_tan 					{ quality = 2; price = 50; };
	class muzzle_snds_acp 							{ quality = 1; price = 10; };
	class muzzle_snds_B 							{ quality = 1; price = 20; };
	class muzzle_snds_H 							{ quality = 2; price = 20; };
	class muzzle_snds_H_MG 							{ quality = 2; price = 20; };
	class muzzle_snds_H_SW 							{ quality = 2; price = 20; };
	class muzzle_snds_L 							{ quality = 1; price = 10; };
	class muzzle_snds_M 							{ quality = 1; price = 10; };
	class RH_qdss_nt4 								{ quality = 2; price = 30; };
	class RH_qdss_nt4_tg 							{ quality = 2; price = 30; };
	class RH_qdss_nt4_des 							{ quality = 2; price = 30; };
	class RH_qdss_nt4_wdl 							{ quality = 2; price = 30; };
	class RH_saker 									{ quality = 2; price = 30; };
	class RH_saker_tg 								{ quality = 2; price = 30; };
	class RH_saker_des 								{ quality = 2; price = 30; };
	class RH_saker_wdl 								{ quality = 2; price = 30; };
	class RH_Saker762 								{ quality = 2; price = 30; };
	class RH_Saker762_tg 							{ quality = 2; price = 30; };
	class RH_Saker762_des 							{ quality = 2; price = 30; };
	class RH_Saker762_wdl 							{ quality = 2; price = 30; };
	class RH_fa556 									{ quality = 2; price = 30; };
	class RH_fa556_tg								{ quality = 2; price = 30; };
	class RH_fa556_des 								{ quality = 2; price = 30; };
	class RH_fa556_wdl 								{ quality = 2; price = 30; };
	class RH_fa762 									{ quality = 2; price = 30; };
	class RH_fa762_tg 								{ quality = 2; price = 30; };
	class RH_fa762_des 								{ quality = 2; price = 30; };
	class RH_fa762_wdl 								{ quality = 2; price = 30; };
	class RH_spr_mbs 								{ quality = 2; price = 30; };
	class RH_spr_mbs_tg 							{ quality = 2; price = 30; };
	class RH_spr_mbs_des 							{ quality = 2; price = 30; };
	class RH_spr_mbs_wdl 							{ quality = 2; price = 30; };
	class RH_tundra 								{ quality = 2; price = 30; };
	class RH_tundra_tg 								{ quality = 2; price = 30; };
	class RH_tundra_des 							{ quality = 2; price = 30; };
	class RH_tundra_wdl 							{ quality = 2; price = 30; };
	class RH_m110sd 								{ quality = 2; price = 30; };
	class RH_m110sd_t 								{ quality = 2; price = 30; };
	class hlc_muzzle_Agendasix 						{ quality = 2; price = 30; };
	class hlc_muzzle_Agendasix10mm  				{ quality = 2; price = 30; };
	class hlc_muzzle_Tundra 						{ quality = 2; price = 30; };
	class rhs_acc_tgpa 								{ quality = 2; price = 30; };
	class hlc_muzzle_545SUP_AK						{ quality = 2; price = 30; };
	class hlc_muzzle_762SUP_AK 						{ quality = 2; price = 30; };
	class hlc_muzzle_snds_fal 						{ quality = 2; price = 30; };


	///////////////////////////////////////////////////////////////////////////////
	// UAVS
	///////////////////////////////////////////////////////////////////////////////
	class I_UavTerminal								{ quality = 3; price = 750; };
	class I_UAV_01_backpack_F						{ quality = 3; price = 3000; };

	///////////////////////////////////////////////////////////////////////////////
	// Static MGs
	///////////////////////////////////////////////////////////////////////////////
	class O_HMG_01_weapon_F 						{ quality = 3; price = 5000; };
	class O_HMG_01_support_F 						{ quality = 3; price = 1000; };
	// Does not seem to work with HMG01, only the lower version does
	//class O_HMG_01_support_high_F 					{ quality = 3; price = 5000; };

	///////////////////////////////////////////////////////////////////////////////
	// Optic Attachments
	///////////////////////////////////////////////////////////////////////////////
	class optic_Aco									{ quality = 1; price = 70; };
	class optic_ACO_grn								{ quality = 1; price = 70; };
	class optic_ACO_grn_smg							{ quality = 1; price = 70; };
	class optic_Aco_smg								{ quality = 1; price = 70; };
	class optic_AMS									{ quality = 3; price = 300; };
	class optic_AMS_khk								{ quality = 3; price = 300; };
	class optic_AMS_snd								{ quality = 3; price = 300; };
	class optic_Arco								{ quality = 1; price = 100; };
	class optic_DMS									{ quality = 1; price = 150; };
	class optic_Hamr								{ quality = 3; price = 200; };
	class optic_Holosight							{ quality = 1; price = 50; };
	class optic_Holosight_smg						{ quality = 1; price = 50; };
	class optic_KHS_blk								{ quality = 3; price = 300; };
	class optic_KHS_hex								{ quality = 3; price = 300; };
	class optic_KHS_old								{ quality = 3; price = 300; };
	class optic_KHS_tan								{ quality = 3; price = 300; };
	class optic_LRPS								{ quality = 2; price = 300; };
	class optic_MRCO								{ quality = 1; price = 100; };
	class optic_MRD									{ quality = 1; price = 10; };
	//class optic_Nightstalker						{ quality = 3; price = 1000; };
	class optic_NVS									{ quality = 2; price = 500; };
	class optic_SOS									{ quality = 2; price = 200; };
	//class optic_tws									{ quality = 3; price = 1500; };
	//class optic_tws_mg								{ quality = 3; price = 1500; };
	class optic_Yorris								{ quality = 1; price = 10; };
	class RH_eotech553 								{ quality = 1; price = 100; };
	class RH_eotech553mag 							{ quality = 1; price = 120; };
	class RH_eotech553_tan 							{ quality = 1; price = 100; };
	class RH_eotech553mag_tan 						{ quality = 1; price = 120; };
	class RH_eotexps3 								{ quality = 1; price = 100; };
	class RH_eotexps3_tan 							{ quality = 1; price = 100; };
	class RH_eothhs1 								{ quality = 1; price = 100; };
	class RH_eothhs1_tan 							{ quality = 1; price = 120; };
	class RH_compm4s								{ quality = 1; price = 120; };
	class RH_compm2 								{ quality = 1; price = 80; };
	class RH_compm2l 								{ quality = 1; price = 80; };
	class RH_compm2_tan 							{ quality = 1; price = 80; };
	class RH_compm2l_tan							{ quality = 1; price = 80; };
	class RH_t1 									{ quality = 1; price = 80; };
	class RH_t1_tan 								{ quality = 1; price = 80; };
	class RH_reflex 								{ quality = 1; price = 80; };
	class RH_shortdot 								{ quality = 1; price = 100; };
	class RH_m3lr 									{ quality = 1; price = 100; };
	class RH_ta01nsn 								{ quality = 1; price = 100; };
	class RH_ta01nsn_2D 							{ quality = 1; price = 100; };
	class RH_ta31rco 								{ quality = 1; price = 100; };
	class RH_ta31rco_2D 							{ quality = 1; price = 100; };
	class RH_ta31rmr 								{ quality = 1; price = 100; };
	class RH_ta31rmr_2D 							{ quality = 1; price = 100; };
	class RH_ta01nsn_tan 							{ quality = 1; price = 100; };
	class RH_ta01nsn_tan_2D 						{ quality = 1; price = 100; };
	class RH_ta31rco_tan 							{ quality = 1; price = 100; };
	class RH_ta31rco_tan_2D 						{ quality = 1; price = 100; };
	class RH_ta31rmr_tan 							{ quality = 1; price = 100; };
	class RH_ta31rmr_tan_2D 						{ quality = 1; price = 100; };
	class RH_ta648 									{ quality = 1; price = 200; };
	class RH_accupoint 								{ quality = 1; price = 150; };
	class RH_leu_mk4 								{ quality = 1; price = 200; };
	class RH_c79 									{ quality = 1; price = 80; };
	class RH_c79_2D 								{ quality = 1; price = 80; };
	class RH_m145 									{ quality = 1; price = 100; };
	class RH_barska_rds 							{ quality = 1; price = 100; };
	class RH_cmore 									{ quality = 1; price = 100; };
	class RH_LTdocter 								{ quality = 1; price = 100; };
	class RH_LTdocterl 								{ quality = 1; price = 100; };
	class RH_zpoint 								{ quality = 1; price = 50; };
	//class RH_anpvs4 								{ quality = 1; price = 100; };
	class RH_anpvs10 								{ quality = 1; price = 100; };
	//class RH_pas13cl 								{ quality = 1; price = 100; };
	//class RH_pas13cm 								{ quality = 1; price = 100; };
	//class RH_pas13cmg 								{ quality = 1; price = 100; };
	//class RH_pas13ch 								{ quality = 1; price = 100; };
	class HLC_Optic_PSO1 							{ quality = 1; price = 100; };
	class HLC_Optic_1p29 							{ quality = 1; price = 100; };
	class hlc_optic_kobra 							{ quality = 1; price = 50; };
	class hlc_optic_goshawk 						{ quality = 1; price = 100; };
	class hlc_optic_suit							{ quality = 1; price = 100; };
	class hlc_optic_PVS4FAL 						{ quality = 1; price = 100; };

	///////////////////////////////////////////////////////////////////////////////
	// Hardware
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Item_Rope							{ quality = 1; price = 20; };
	class Exile_Item_DuctTape						{ quality = 1; price = 300; };
	class Exile_Item_ExtensionCord					{ quality = 1; price = 40; };
	class Exile_Item_FuelCanisterEmpty				{ quality = 1; price = 40; };
	class Exile_Item_JunkMetal						{ quality = 1; price = 400; };
	class Exile_Item_LightBulb						{ quality = 1; price = 20; };
	class Exile_Item_MetalBoard						{ quality = 1; price = 600; };
	class Exile_Item_SafeKit						{ quality = 3; price = 10000; };
	class Exile_Item_CodeLock						{ quality = 2; price = 5000; };
	class Exile_Item_CamoTentKit					{ quality = 1; price = 250; };
	class Exile_Item_MetalPole						{ quality = 1; price = 800; };

	///////////////////////////////////////////////////////////////////////////////
	// Food
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Item_GloriousKnakworst				{ quality = 1; price = 40; };
	class Exile_Item_Surstromming					{ quality = 1; price = 30; };
	class Exile_Item_SausageGravy					{ quality = 1; price = 30; };
	class Exile_Item_ChristmasTinner				{ quality = 1; price = 20; };
	class Exile_Item_BBQSandwich					{ quality = 1; price = 20; };
	class Exile_Item_Catfood						{ quality = 1; price = 20; };

	///////////////////////////////////////////////////////////////////////////////
	// Drinks
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Item_PlasticBottleFreshWater 		{ quality = 2; price = 40; };
	class Exile_Item_Beer 							{ quality = 1; price = 50; };
	class Exile_Item_Energydrink					{ quality = 1; price = 70; };

	///////////////////////////////////////////////////////////////////////////////
	// Tools
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Item_Matches 						{ quality = 1; price = 60; };
	class Exile_Item_CookingPot						{ quality = 2; price = 80; };
	class Exile_Item_InstaDoc                       { quality = 1; price = 250; };
	class Exile_Melee_Axe							{ quality = 1; price = 100; };

	///////////////////////////////////////////////////////////////////////////////
	// Navigation
	///////////////////////////////////////////////////////////////////////////////
	class ItemWatch									{ quality = 1; price = 6; };
	class ItemGPS									{ quality = 1; price = 40; };
	class ItemMap									{ quality = 1; price = 6; };
	class ItemCompass								{ quality = 1; price = 6; };
	class ItemRadio									{ quality = 1; price = 40; };
	class Binocular									{ quality = 1; price = 40; };
	class Rangefinder								{ quality = 2; price = 200; };
	class Laserdesignator							{ quality = 3; price = 750; };
	class Laserdesignator_02						{ quality = 3; price = 750; };
	class Laserdesignator_03						{ quality = 3; price = 750; };
	class NVGoggles									{ quality = 2; price = 300; };
	class NVGoggles_INDEP							{ quality = 2; price = 300; };
	class NVGoggles_OPFOR							{ quality = 2; price = 300; };
	class TRYK_balaclava_BLACK_NV 					{ quality = 2; price = 300; };
	class TRYK_balaclava_NV 						{ quality = 2; price = 300; };
	class TRYK_balaclava_BLACK_EAR_NV 				{ quality = 2; price = 300; };
	class TRYK_balaclava_EAR_NV 					{ quality = 2; price = 300; };
	class TRYK_G_bala_ess_NV 						{ quality = 2; price = 300; };
	class TRYK_Headphone_NV 						{ quality = 2; price = 300; };
	class TRYK_Shemagh_MESH_NV 						{ quality = 2; price = 300; };
	class TRYK_Shemagh_G_NV 						{ quality = 2; price = 300; };
	class TRYK_Shemagh_TAN_NV 						{ quality = 2; price = 300; };
	class TRYK_Shemagh_WH_NV 						{ quality = 2; price = 300; };
	class TRYK_Shemagh_EAR_G_NV 					{ quality = 2; price = 300; };
	class TRYK_Shemagh_EAR_NV 						{ quality = 2; price = 300; };
	class TRYK_ShemaghESSWH_NV 						{ quality = 2; price = 300; };
	class TRYK_ShemaghESSOD_NV 						{ quality = 2; price = 300; };
	class TRYK_ShemaghESSTAN_NV 					{ quality = 2; price = 300; };
	class TRYK_Shemagh_EAR_WH_NV 					{ quality = 2; price = 300; };
	class TRYK_Shemagh_shade_MESH 					{ quality = 2; price = 300; };
	class TRYK_Shemagh_shade_G_N 					{ quality = 2; price = 300; };
	class TRYK_Shemagh_shade_N 						{ quality = 2; price = 300; };
	class TRYK_Shemagh_shade_WH_N 					{ quality = 2; price = 300; };
	class TRYK_SPgearG_NV 							{ quality = 2; price = 300; };
	class TRYK_SPgear_PHC1_NV 						{ quality = 2; price = 300; };
	class TRYK_SPgear_PHC2_NV 						{ quality = 2; price = 300; };
	class TRYK_HRPIGEAR_NV 							{ quality = 2; price = 300; };
	class TRYK_TAC_boonie_SET_NV 					{ quality = 2; price = 300; };
	class TRYK_NOMIC_TAC_EARMUFF 					{ quality = 2; price = 300; };
	class TRYK_TAC_EARMUFF 							{ quality = 2; price = 300; };
	class TRYK_TAC_EARMUFF_SHADE 					{ quality = 2; price = 300; };
	class TRYK_TAC_SET_NV_MESH_2 					{ quality = 2; price = 300; };
	class TRYK_TAC_SET_NV_OD_2 						{ quality = 2; price = 300; };
	class TRYK_TAC_SET_NV_TAN_2 					{ quality = 2; price = 300; };
	class TRYK_TAC_SET_NV_WH_2 						{ quality = 2; price = 300; };
	class TRYK_TAC_SET_NV_MESH 						{ quality = 2; price = 300; };
	class TRYK_TAC_SET_NV_OD 						{ quality = 2; price = 300; };
	class TRYK_TAC_SET_NV_TAN 						{ quality = 2; price = 300; };
	class TRYK_TAC_SET_NV_WH 						{ quality = 2; price = 300; };
    class tf_rf7800str_1 							{ quality = 3; price = 300; };
    class tf_anprc148jem 							{ quality = 2; price = 200; };

	///////////////////////////////////////////////////////////////////////////////
	// Rebreather
	///////////////////////////////////////////////////////////////////////////////
	class V_RebreatherB								{ quality = 2; price = 250; };
	class V_RebreatherIA							{ quality = 2; price = 250; };
	class V_RebreatherIR							{ quality = 2; price = 250; };
	class G_I_Diving								{ quality = 2; price = 50; };

	///////////////////////////////////////////////////////////////////////////////
	// Pilot Stuff
	///////////////////////////////////////////////////////////////////////////////
	class B_Parachute								{ quality = 3; price = 150; };
	class H_CrewHelmetHeli_B						{ quality = 2; price = 150; };
	class H_CrewHelmetHeli_I						{ quality = 2; price = 150; };
	class H_CrewHelmetHeli_O						{ quality = 2; price = 150; };
	class H_HelmetCrew_I							{ quality = 1; price = 100; };
	class H_HelmetCrew_B							{ quality = 1; price = 100; };
	class H_HelmetCrew_O							{ quality = 1; price = 100; };
	class H_PilotHelmetHeli_B						{ quality = 3; price = 100; };
	class H_PilotHelmetHeli_I						{ quality = 3; price = 100; };
	class H_PilotHelmetHeli_O						{ quality = 3; price = 100; };
	class U_B_HeliPilotCoveralls					{ quality = 1; price = 80; };
	class U_B_PilotCoveralls						{ quality = 1; price = 60; };
	class U_I_HeliPilotCoveralls					{ quality = 1; price = 60; };
	class U_I_pilotCoveralls						{ quality = 1; price = 60; };
	class U_O_PilotCoveralls						{ quality = 1; price = 60; };
	class H_PilotHelmetFighter_B					{ quality = 2; price = 150; };
	class H_PilotHelmetFighter_I					{ quality = 2; price = 150; };
	class H_PilotHelmetFighter_O					{ quality = 2; price = 150; };

	///////////////////////////////////////////////////////////////////////////////
	// Backpacks
	///////////////////////////////////////////////////////////////////////////////

	class TRYK_B_AssaultPack_MARPAT_Wood			{ quality = 2; price = 150; };
	class TRYK_B_AssaultPack_Type2camo				{ quality = 2; price = 150; };
	class TRYK_B_AssaultPack_UCP					{ quality = 2; price = 150; };
	class TRYK_B_Coyotebackpack_BLK					{ quality = 2; price = 400; };
	class TRYK_B_Coyotebackpack 					{ quality = 2; price = 400; };
	class TRYK_B_Coyotebackpack_OD 					{ quality = 2; price = 400; };
	class TRYK_B_Carryall_JSDF 						{ quality = 2; price = 450; };
	class TRYK_B_Carryall_blk 						{ quality = 2; price = 450; };
	class TRYK_B_Carryall_wood 						{ quality = 2; price = 450; };
	class TRYK_B_Kitbag_aaf 						{ quality = 2; price = 350; };
	class TRYK_B_Kitbag_blk 						{ quality = 2; price = 350; };
	class TRYK_B_Kitbag_Base 						{ quality = 2; price = 350; };
	class TRYK_B_Kitbag_Base_JSDF 					{ quality = 2; price = 350; };
	class TRYK_B_Medbag_BK	       					{ quality = 2; price = 350; };
	class TRYK_B_Medbag_OD 							{ quality = 2; price = 350; };
	class TRYK_B_Medbag_ucp 						{ quality = 2; price = 350; };
	class TRYK_B_BAF_BAG_BLK 						{ quality = 2; price = 350; };
	class TRYK_B_BAF_BAG_CYT 						{ quality = 2; price = 350; };
	class TRYK_B_BAF_BAG_mcamo 						{ quality = 2; price = 350; };
	class TRYK_B_BAF_BAG_OD 						{ quality = 2; price = 350; };
	class TRYK_B_BAF_BAG_rgr 						{ quality = 2; price = 350; };


	///////////////////////////////////////////////////////////////////////////////
	// Ammunition
	///////////////////////////////////////////////////////////////////////////////
	class 100Rnd_65x39_caseless_mag 				{ quality = 1; price = 30; };
	class 100Rnd_65x39_caseless_mag_Tracer 			{ quality = 2; price = 40; };
	class 10Rnd_127x54_Mag 							{ quality = 1; price = 30; };
	// Broken in Arma
	//class 10Rnd_338_Mag 							{ quality = 1; price = 30; };
	class 10Rnd_762x55_Mag 							{ quality = 1; price = 30; };
	class 10Rnd_762x51_Mag 							{ quality = 1; price = 30; };
	class 10Rnd_93x64_DMR_05_Mag 					{ quality = 1; price = 40; };
	class 11Rnd_45ACP_Mag 							{ quality = 1; price = 8; };
	class 150Rnd_762x54_Box 						{ quality = 1; price = 20; };
	class 150Rnd_762x54_Box_Tracer 					{ quality = 2; price = 30; };
	class 16Rnd_9x21_Mag 							{ quality = 1; price = 20; };
	class 200Rnd_65x39_cased_Box 					{ quality = 1; price = 30; };
	class 200Rnd_65x39_cased_Box_Tracer 			{ quality = 2; price = 30; };
	class 150Rnd_93x64_Mag 							{ quality = 2; price = 50; };
	class 130Rnd_338_Mag 							{ quality = 2; price = 40; };
	class 20Rnd_556x45_UW_mag 						{ quality = 1; price = 20; };
	class 20Rnd_762x51_Mag 							{ quality = 1; price = 20; };
	class 30Rnd_45ACP_Mag_SMG_01 					{ quality = 1; price = 10; };
	class 30Rnd_45ACP_Mag_SMG_01_Tracer_Green 		{ quality = 2; price = 10; };
	class 30Rnd_45ACP_Mag_SMG_01_Tracer_Yellow		{ quality = 2; price = 10; };
	class 30Rnd_45ACP_Mag_SMG_01_Tracer_Red			{ quality = 2; price = 10; };
	class 30Rnd_556x45_Stanag 						{ quality = 1; price = 20; };
	class 30Rnd_556x45_Stanag_Tracer_Green 			{ quality = 2; price = 20; };
	class 30Rnd_556x45_Stanag_green  				{ quality = 2; price = 20; };
	class 30Rnd_556x45_Stanag_Tracer_Red 			{ quality = 2; price = 20; };
	class 30Rnd_556x45_Stanag_Tracer_Yellow 		{ quality = 2; price = 20; };
	class 30Rnd_556x45_Stanag_red 					{ quality = 2; price = 20; };
	class 30Rnd_65x39_caseless_green 				{ quality = 1; price = 20; };
	class 30Rnd_65x39_caseless_green_mag_Tracer 	{ quality = 2; price = 30; };
	class 30Rnd_65x39_caseless_mag 					{ quality = 1; price = 20; };
	class 30Rnd_65x39_caseless_mag_Tracer 			{ quality = 2; price = 30; };
	class 30Rnd_9x21_Mag 							{ quality = 1; price = 10; };
	class 5Rnd_127x108_APDS_Mag 					{ quality = 2; price = 50; };
	class 5Rnd_127x108_Mag 							{ quality = 1; price = 40; };
	class 6Rnd_45ACP_Cylinder 						{ quality = 1; price = 8; };
	class 6Rnd_GreenSignal_F 						{ quality = 9000; price = 30; };
	class 6Rnd_RedSignal_F 							{ quality = 9000; price = 30; };
	class 7Rnd_408_Mag 								{ quality = 1; price = 10; };
	class 9Rnd_45ACP_Mag 							{ quality = 1; price = 6; };
	//class rhs_10Rnd_762x54mmR_7N1					{ quality = 1; price = 30; };
	class RH_30Rnd_556x45_Mk262						{ quality = 1; price = 20; };
	class RH_20Rnd_762x51_M80A1						{ quality = 1; price = 30; };
	//class rhsusf_5Rnd_300winmag_xm2010				{ quality = 1; price = 40; };
	//class rhs_30Rnd_545x39_7N22_AK					{ quality = 1; price = 20; };
	//class rhs_100Rnd_762x54mmR						{ quality = 1; price = 30; };
	class rhsusf_100Rnd_762x51						{ quality = 1; price = 30; };
	class RH_60Rnd_556x45_Mk262						{ quality = 1; price = 30; };
	class hlc_30Rnd_545x39_B_AK 					{ quality = 1; price = 30; };
	class hlc_30Rnd_545x39_t_ak 					{ quality = 1; price = 30; };
	class hlc_30Rnd_545x39_S_AK 					{ quality = 1; price = 30; };
	class hlc_45Rnd_545x39_t_rpk 					{ quality = 1; price = 30; };
	class hlc_30Rnd_545x39_EP_ak 					{ quality = 1; price = 30; };
	class hlc_30Rnd_762x39_b_ak 					{ quality = 1; price = 30; };
	class hlc_30Rnd_762x39_t_ak 					{ quality = 1; price = 30; };
	class hlc_45Rnd_762x39_t_rpk 					{ quality = 1; price = 30; };
	class hlc_45Rnd_762x39_m_rpk 					{ quality = 1; price = 30; };
	class hlc_10rnd_12g_buck_S12 					{ quality = 1; price = 30; };
	class hlc_10rnd_12g_slug_S12 					{ quality = 1; price = 30; };
	class hlc_20Rnd_762x51_B_fal 					{ quality = 1; price = 30; };
	class hlc_20Rnd_762x51_mk316_fal 				{ quality = 1; price = 30; };
	class hlc_20Rnd_762x51_barrier_fal 				{ quality = 1; price = 30; };
	class hlc_20Rnd_762x51_t_fal 					{ quality = 1; price = 30; };
	class hlc_50rnd_762x51_M_FAL 					{ quality = 1; price = 30; };
	class hlc_20Rnd_762x51_S_fal 					{ quality = 1; price = 30; };
	class hlc_100Rnd_762x51_B_M60E4 				{ quality = 1; price = 30; };
	class hlc_100Rnd_762x51_T_M60E4 				{ quality = 1; price = 30; };
	class hlc_100Rnd_762x51_M_M60E4 				{ quality = 1; price = 30; };
	class hlc_200rnd_556x45_M_SAW 					{ quality = 1; price = 30; };
	class hlc_200rnd_556x45_T_SAW 					{ quality = 1; price = 30; };
	class hlc_200rnd_556x45_B_SAW 					{ quality = 1; price = 30; };
	class hlc_30Rnd_9x19_B_MP5 						{ quality = 1; price = 30; };
	class hlc_30Rnd_9x19_GD_MP5 					{ quality = 1; price = 30; };
	class hlc_30Rnd_9x19_SD_MP5 					{ quality = 1; price = 30; };
	class hlc_30Rnd_10mm_B_MP5 						{ quality = 1; price = 30; };
	class hlc_30Rnd_10mm_JHP_MP5 					{ quality = 1; price = 30; };
	class prpl_25Rnd_556x45_famas 					{ quality = 1; price = 30; };
	class prpl_25Rnd_556x45_famas_tracer 			{ quality = 1; price = 30; };
	class prpl_25Rnd_556x45_famas_all_tracer 		{ quality = 1; price = 30; };
	class prpl_25Rnd_556x45AP_famas 				{ quality = 1; price = 30; };
	class prpl_25Rnd_556x45_famas_sd 				{ quality = 1; price = 30; };
	class prpl_25Rnd_556x45_famas_sd_tracer 		{ quality = 1; price = 30; };
	class prpl_30Rnd_556x45_famas 					{ quality = 1; price = 30; };
	class prpl_30Rnd_556x45AP_famas 				{ quality = 1; price = 30; };
	class prpl_30Rnd_556x45_famas_tracer 			{ quality = 1; price = 30; };
	class prpl_30Rnd_556x45_famas_all_tracer 		{ quality = 1; price = 30; };
	class prpl_30Rnd_556x45_famas_sd 				{ quality = 1; price = 30; };
	class prpl_30Rnd_556x45_famas_sd_tracer 		{ quality = 1; price = 30; };

	///////////////////////////////////////////////////////////////////////////////
	// Flares
	///////////////////////////////////////////////////////////////////////////////
	class Chemlight_blue							{ quality = 1; price = 2; };
	class Chemlight_green							{ quality = 1; price = 2; };
	class Chemlight_red								{ quality = 1; price = 2; };
	class FlareGreen_F								{ quality = 1; price = 6; };
	class FlareRed_F								{ quality = 1; price = 6; };
	class FlareWhite_F								{ quality = 1; price = 6; };
	class FlareYellow_F								{ quality = 1; price = 6; };
	class UGL_FlareGreen_F							{ quality = 2; price = 8; };
	class UGL_FlareRed_F							{ quality = 2; price = 8; };
	class UGL_FlareWhite_F							{ quality = 2; price = 8; };
	class UGL_FlareYellow_F							{ quality = 2; price = 8; };
	class 3Rnd_UGL_FlareGreen_F						{ quality = 3; price = 8*3; };
	class 3Rnd_UGL_FlareRed_F						{ quality = 3; price = 8*3; };
	class 3Rnd_UGL_FlareWhite_F						{ quality = 3; price = 8*3; };
	class 3Rnd_UGL_FlareYellow_F					{ quality = 3; price = 8*3; };

	///////////////////////////////////////////////////////////////////////////////
	// Smokes
	///////////////////////////////////////////////////////////////////////////////
	class SmokeShell								{ quality = 1; price = 6; };
	class SmokeShellBlue							{ quality = 1; price = 6; };
	class SmokeShellGreen							{ quality = 1; price = 6; };
	class SmokeShellOrange							{ quality = 1; price = 6; };
	class SmokeShellPurple							{ quality = 1; price = 6; };
	class SmokeShellRed								{ quality = 1; price = 6; };
	class SmokeShellYellow							{ quality = 1; price = 6; };
	class 1Rnd_Smoke_Grenade_shell					{ quality = 2; price = 8; };
	class 1Rnd_SmokeBlue_Grenade_shell				{ quality = 2; price = 8; };
	class 1Rnd_SmokeGreen_Grenade_shell				{ quality = 2; price = 8; };
	class 1Rnd_SmokeOrange_Grenade_shell			{ quality = 2; price = 8; };
	class 1Rnd_SmokePurple_Grenade_shell			{ quality = 2; price = 8; };
	class 1Rnd_SmokeRed_Grenade_shell				{ quality = 2; price = 8; };
	class 1Rnd_SmokeYellow_Grenade_shell			{ quality = 2; price = 8; };
	class 3Rnd_Smoke_Grenade_shell					{ quality = 3; price = 8*3; };
	class 3Rnd_SmokeBlue_Grenade_shell				{ quality = 3; price = 8*3; };
	class 3Rnd_SmokeGreen_Grenade_shell				{ quality = 3; price = 8*3; };
	class 3Rnd_SmokeOrange_Grenade_shell			{ quality = 3; price = 8*3; };
	class 3Rnd_SmokePurple_Grenade_shell			{ quality = 3; price = 8*3; };
	class 3Rnd_SmokeRed_Grenade_shell				{ quality = 3; price = 8*3; };
	class 3Rnd_SmokeYellow_Grenade_shell			{ quality = 3; price = 8*3; };
	class hlc_GRD_White 							{ quality = 2; price = 8; };
	class hlc_GRD_red 								{ quality = 2; price = 8; };
	class hlc_GRD_green 							{ quality = 2; price = 8; };
	class hlc_GRD_blue  							{ quality = 2; price = 8; };
	class hlc_GRD_orange 							{ quality = 2; price = 8; };
	class hlc_GRD_purple 							{ quality = 2; price = 8; };

	///////////////////////////////////////////////////////////////////////////////
	// Explosives
	///////////////////////////////////////////////////////////////////////////////
	class HandGrenade								{ quality = 3; price = 40; };
	class MiniGrenade								{ quality = 2; price = 30; };
	class B_IR_Grenade								{ quality = 1; price = 50; };
	class O_IR_Grenade								{ quality = 1; price = 50; };
	class I_IR_Grenade								{ quality = 1; price = 50; };
	class 1Rnd_HE_Grenade_shell						{ quality = 2; price = 70; };
	class 3Rnd_HE_Grenade_shell						{ quality = 3; price = 70*3; };
	class APERSBoundingMine_Range_Mag				{ quality = 3; price = 500; };
	class APERSMine_Range_Mag						{ quality = 3; price = 600; };
	class APERSTripMine_Wire_Mag					{ quality = 3; price = 300; };
	class ClaymoreDirectionalMine_Remote_Mag		{ quality = 3; price = 350; };
	class DemoCharge_Remote_Mag						{ quality = 3; price = 700; };
	class IEDLandBig_Remote_Mag						{ quality = 3; price = 600; };
	class IEDLandSmall_Remote_Mag					{ quality = 3; price = 300; };
	class IEDUrbanBig_Remote_Mag					{ quality = 3; price = 800; };
	class IEDUrbanSmall_Remote_Mag					{ quality = 3; price = 400; };
	class SatchelCharge_Remote_Mag					{ quality = 3; price = 1000; };
	class SLAMDirectionalMine_Wire_Mag				{ quality = 3; price = 700; };
	class prpl_APAVmag 								{ quality = 3; price = 300; };
	class prpl_APAV58mag 							{ quality = 3; price = 300; };
	class prpl_AC58mag 								{ quality = 3; price = 300; };

	///////////////////////////////////////////////////////////////////////////////
	// Pistols
	///////////////////////////////////////////////////////////////////////////////
	class hgun_ACPC2_F 								{ quality = 1; price = 50; };
	class hgun_P07_F 								{ quality = 1; price = 50; };
	class hgun_Pistol_heavy_01_F 					{ quality = 2; price = 80; };
	class hgun_Pistol_heavy_02_F 					{ quality = 2; price = 80; };
	class hgun_Pistol_Signal_F 						{ quality = 9000; price = 100; };
	class hgun_Rook40_F 							{ quality = 1; price = 50; };

	///////////////////////////////////////////////////////////////////////////////
	// Sub Machine Guns
	///////////////////////////////////////////////////////////////////////////////
	class hgun_PDW2000_F 							{ quality = 1; price = 100; };
	class SMG_01_F 									{ quality = 1; price = 150; };
	class SMG_02_F 									{ quality = 1; price = 150; };
	class RH_sbr9                                   { quality = 1; price = 100; };
	class hlc_smg_mp510								{ quality = 2; price = 200; };
	class hlc_smg_mp5a2 							{ quality = 2; price = 200; };
	class hlc_smg_mp5a3                             { quality = 2; price = 200; };
	class hlc_smg_mp5a4                             { quality = 2; price = 200; };
	class hlc_smg_mp5k_PDW							{ quality = 2; price = 200; };
	class hlc_smg_MP5N                              { quality = 2; price = 200; };
	class hlc_smg_9mmar                             { quality = 2; price = 200; };
	class hlc_smg_mp5sd5                            { quality = 2; price = 200; };
	class hlc_smg_mp5sd6                            { quality = 2; price = 200; };

	///////////////////////////////////////////////////////////////////////////////
	// Light Machine Guns
	///////////////////////////////////////////////////////////////////////////////
	class arifle_MX_SW_Black_F						{ quality = 2; price = 250; };
	class arifle_MX_SW_F							{ quality = 2; price = 250; };
	class LMG_Mk200_F								{ quality = 2; price = 300; };
	class LMG_Zafir_F								{ quality = 2; price = 350; };
	class MMG_01_hex_F								{ quality = 3; price = 800; };
	class MMG_01_tan_F								{ quality = 3; price = 800; };
	class MMG_02_black_F							{ quality = 3; price = 450; };
	class MMG_02_camo_F								{ quality = 3; price = 450; };
	class MMG_02_sand_F								{ quality = 3; price = 450; };
	//class rhs_weap_pkp    							{ quality = 3; price = 600; };
	//class rhs_weap_m240B  							{ quality = 3; price = 600; };
	class hlc_m249_SQuantoon                        { quality = 3; price = 500; };
	class hlc_m249_pip1  							{ quality = 3; price = 500; };

	///////////////////////////////////////////////////////////////////////////////
	// Assault Rifles
	///////////////////////////////////////////////////////////////////////////////
	class arifle_Katiba_C_F							{ quality = 1; price = 150; };
	class arifle_Katiba_F							{ quality = 1; price = 150; };
	class arifle_Katiba_GL_F						{ quality = 2; price = 200; };
	class arifle_Mk20_F								{ quality = 1; price = 150; };
	class arifle_Mk20_GL_F							{ quality = 2; price = 200; };
	class arifle_Mk20_GL_plain_F					{ quality = 2; price = 200; };
	class arifle_Mk20_plain_F						{ quality = 1; price = 150; };
	class arifle_Mk20C_F							{ quality = 1; price = 150; };
	class arifle_Mk20C_plain_F						{ quality = 1; price = 150; };
	class arifle_MX_Black_F							{ quality = 1; price = 450; };
	class arifle_MX_F								{ quality = 1; price = 450; };
	class arifle_MX_GL_Black_F						{ quality = 2; price = 450; };
	class arifle_MX_GL_F							{ quality = 2; price = 450; };
	class arifle_MXC_Black_F						{ quality = 1; price = 350; };
	class arifle_MXC_F								{ quality = 1; price = 350; };
	class arifle_SDAR_F								{ quality = 3; price = 650; };
	class arifle_TRG20_F							{ quality = 1; price = 250; };
	class arifle_TRG21_F							{ quality = 1; price = 250; };
	class arifle_TRG21_GL_F							{ quality = 2; price = 350; };
	class RH_Hk416  								{ quality = 2; price = 350; };
	class RH_M16A4gl  								{ quality = 2; price = 350; };
	class RH_M16A4_m  								{ quality = 2; price = 350; };
	class RH_M27IAR  								{ quality = 2; price = 350; };
	class RH_M4_ris_m  								{ quality = 2; price = 350; };
	class RH_M4A1_ris_M203s  						{ quality = 2; price = 350; };
	class hlc_rifle_falosw  						{ quality = 2; price = 350; };
	class hlc_rifle_osw_GL  						{ quality = 2; price = 350; };
	class hlc_rifle_c1A1  							{ quality = 2; price = 350; };
	class hlc_rifle_FAL5061  						{ quality = 2; price = 350; };
	class hlc_rifle_STG58F  						{ quality = 2; price = 350; };
	//class rhs_weap_ak74m  							{ quality = 2; price = 350; };
	//class rhs_weap_ak74m_2mag 						{ quality = 2; price = 350; };
	//class rhs_weap_ak74m_folded 					{ quality = 2; price = 350; };
	//class rhs_weap_ak74m_gp25  						{ quality = 2; price = 350; };
	class hlc_rifle_ak74							{ quality = 2; price = 350; };
	class hlc_rifle_aks74 							{ quality = 2; price = 350; };
	class hlc_rifle_aks74u 							{ quality = 2; price = 350; };
	class hlc_rifle_ak47 							{ quality = 2; price = 350; };
	class hlc_rifle_akm 							{ quality = 2; price = 350; };
	class hlc_rifle_aku12 							{ quality = 2; price = 350; };
	class hlc_rifle_rpk12 							{ quality = 2; price = 350; };
	class hlc_rifle_rpk 							{ quality = 2; price = 350; };
	class hlc_rifle_rpk74n 							{ quality = 2; price = 350; };
	class hlc_rifle_ak12							{ quality = 2; price = 350; };
	class hlc_rifle_ak12gl 							{ quality = 2; price = 350; };
	class hlc_rifle_akmgl 							{ quality = 2; price = 350; };
	class hlc_rifle_aks74_GL 						{ quality = 2; price = 350; };
	class hlc_rifle_saiga12k 						{ quality = 2; price = 350; };
	class hlc_lmg_M60E4 							{ quality = 2; price = 350; };
	class hlc_lmg_M60								{ quality = 2; price = 350; };
	class prpl_famas 										{ quality = 2; price = 350; };
	class prpl_famas_hg 									{ quality = 2; price = 350; };
	class prpl_famas_tan 									{ quality = 2; price = 350; };
	class prpl_famas_hg_tan 								{ quality = 2; price = 350; };
	class prpl_famas_gl 									{ quality = 2; price = 350; };
	class prpl_famas_gl_tan 								{ quality = 2; price = 350; };
	class prpl_famas_g2 									{ quality = 2; price = 350; };
	class prpl_famas_g2_tan								{ quality = 2; price = 350; };
	class prpl_famas_g2_hg 								{ quality = 2; price = 350; };
	class prpl_famas_g2_hg_tan 							{ quality = 2; price = 350; };
	class prpl_famas_g2_gl 								{ quality = 2; price = 350; };
	class prpl_famas_g2_gl_tan 							{ quality = 2; price = 350; };

	///////////////////////////////////////////////////////////////////////////////
	// Sniper Rifles
	///////////////////////////////////////////////////////////////////////////////
	class arifle_MXM_Black_F 						{ quality = 1; price = 550; };
	class arifle_MXM_F 								{ quality = 1; price = 550; };
	class srifle_DMR_01_F 							{ quality = 2; price = 600; };
	class srifle_DMR_02_camo_F 						{ quality = 3; price = 800; };
	class srifle_DMR_02_F 							{ quality = 3; price = 800; };
	class srifle_DMR_02_sniper_F 					{ quality = 3; price = 800; };
	class srifle_DMR_03_F 							{ quality = 3; price = 750; };
	class srifle_DMR_03_khaki_F 					{ quality = 3; price = 750; };
	class srifle_DMR_03_multicam_F 					{ quality = 3; price = 750; };
	class srifle_DMR_03_tan_F 						{ quality = 3; price = 750; };
	class srifle_DMR_03_woodland_F 					{ quality = 3; price = 750; };
	class srifle_DMR_04_F 							{ quality = 3; price = 700; };
	class srifle_DMR_04_Tan_F 						{ quality = 3; price = 700; };
	class srifle_DMR_05_blk_F 						{ quality = 3; price = 850; };
	class srifle_DMR_05_hex_F 						{ quality = 3; price = 850; };
	class srifle_DMR_05_tan_f 						{ quality = 3; price = 850; };
	class srifle_DMR_06_camo_F 						{ quality = 3; price = 800; };
	class srifle_DMR_06_olive_F 					{ quality = 3; price = 800; };
	class srifle_EBR_F 								{ quality = 2; price = 700; };
	class srifle_GM6_camo_F 						{ quality = 3; price = 900; };
	class srifle_GM6_F 								{ quality = 3; price = 900; };
	class srifle_LRR_camo_F 						{ quality = 3; price = 850; };
	class srifle_LRR_F 								{ quality = 3; price = 850; };
	class rhs_weap_svdp  							{ quality = 3; price = 600; };
	class RH_Mk12mod1 								{ quality = 3; price = 600; };
	class RH_Mk11  									{ quality = 3; price = 600; };
	class RH_SAMR  									{ quality = 3; price = 600; };
	class RH_SR25EC  								{ quality = 3; price = 600; };
	class rhs_weap_XM2010    						{ quality = 3; price = 600; };
	class RH_m110  									{ quality = 3; price = 600; };

	///////////////////////////////////////////////////////////////////////////////
	// BIKES
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Bike_OldBike 						{ quality = 1; price = 40; };
	class Exile_Bike_MountainBike 					{ quality = 1; price = 50; };
	class Exile_Bike_Crosser 						{ quality = 1; price = 500; };

	///////////////////////////////////////////////////////////////////////////////
	// QUAD BIKES
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Bike_QuadBike_Black					{ quality = 1; price = 500; };
	class Exile_Bike_QuadBike_Blue					{ quality = 1; price = 500; };
	class Exile_Bike_QuadBike_Red					{ quality = 1; price = 500; };
	class Exile_Bike_QuadBike_White					{ quality = 1; price = 500; };
	class Exile_Bike_QuadBike_Nato					{ quality = 1; price = 500; };
	class Exile_Bike_QuadBike_Csat					{ quality = 1; price = 500; };
	class Exile_Bike_QuadBike_Fia					{ quality = 1; price = 500; };
	class Exile_Bike_QuadBike_Guerilla01			{ quality = 1; price = 500; };
	class Exile_Bike_QuadBike_Guerilla02			{ quality = 1; price = 500; };

	///////////////////////////////////////////////////////////////////////////////
	// MOTOR BOATS
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Boat_MotorBoat_Police				{ quality = 1; price = 700; };
	class Exile_Boat_MotorBoat_Orange				{ quality = 1; price = 700; };
	class Exile_Boat_MotorBoat_White				{ quality = 1; price = 700; };

	///////////////////////////////////////////////////////////////////////////////
	// RUBBER DUCKS
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Boat_RubberDuck_CSAT				{ quality = 1; price = 500; };
	class Exile_Boat_RubberDuck_Digital				{ quality = 1; price = 500; };
	class Exile_Boat_RubberDuck_Orange				{ quality = 1; price = 500; };
	class Exile_Boat_RubberDuck_Blue				{ quality = 1; price = 500; };
	class Exile_Boat_RubberDuck_Black				{ quality = 1; price = 500; };

	///////////////////////////////////////////////////////////////////////////////
	// SDV
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Boat_SDV_CSAT						{ quality = 1; price = 500; };
	class Exile_Boat_SDV_Digital					{ quality = 1; price = 500; };
	class Exile_Boat_SDV_Grey						{ quality = 1; price = 500; };

	///////////////////////////////////////////////////////////////////////////////
	// Hellcat
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Chopper_Hellcat_Green				{ quality = 1; price = 7000; };
	class Exile_Chopper_Hellcat_FIA					{ quality = 1; price = 7000; };

	///////////////////////////////////////////////////////////////////////////////
	// Hummingbird
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Chopper_Hummingbird_Green			{ quality = 1; price = 6500; };

	///////////////////////////////////////////////////////////////////////////////
	// Hummingbird (Civillian)
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Chopper_Hummingbird_Civillian_Blue				{ quality = 1; price = 5000; };
	class Exile_Chopper_Hummingbird_Civillian_Red				{ quality = 1; price = 5000; };
	class Exile_Chopper_Hummingbird_Civillian_ION				{ quality = 1; price = 5000; };
	class Exile_Chopper_Hummingbird_Civillian_BlueLine			{ quality = 1; price = 5000; };
	class Exile_Chopper_Hummingbird_Civillian_Digital			{ quality = 1; price = 5000; };
	class Exile_Chopper_Hummingbird_Civillian_Elliptical		{ quality = 1; price = 5000; };
	class Exile_Chopper_Hummingbird_Civillian_Furious			{ quality = 1; price = 5000; };
	class Exile_Chopper_Hummingbird_Civillian_GrayWatcher		{ quality = 1; price = 5000; };
	class Exile_Chopper_Hummingbird_Civillian_Jeans				{ quality = 1; price = 5000; };
	class Exile_Chopper_Hummingbird_Civillian_Light				{ quality = 1; price = 5000; };
	class Exile_Chopper_Hummingbird_Civillian_Shadow			{ quality = 1; price = 5000; };
	class Exile_Chopper_Hummingbird_Civillian_Sheriff			{ quality = 1; price = 5000; };
	class Exile_Chopper_Hummingbird_Civillian_Speedy			{ quality = 1; price = 5000; };
	class Exile_Chopper_Hummingbird_Civillian_Sunset			{ quality = 1; price = 5000; };
	class Exile_Chopper_Hummingbird_Civillian_Vrana				{ quality = 1; price = 5000; };
	class Exile_Chopper_Hummingbird_Civillian_Wasp				{ quality = 1; price = 5000; };
	class Exile_Chopper_Hummingbird_Civillian_Wave				{ quality = 1; price = 5000; };

	///////////////////////////////////////////////////////////////////////////////
	// Huron
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Chopper_Huron_Black								{ quality = 1; price = 10000; };
	class Exile_Chopper_Huron_Green								{ quality = 1; price = 10000; };

	///////////////////////////////////////////////////////////////////////////////
	// Mohawk
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Chopper_Mohawk_FIA								{ quality = 1; price = 9000; };

	///////////////////////////////////////////////////////////////////////////////
	// Orca
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Chopper_Orca_CSAT								{ quality = 1; price = 7000; };
	class Exile_Chopper_Orca_Black								{ quality = 1; price = 7000; };
	class Exile_Chopper_Orca_BlackCustom						{ quality = 1; price = 7000; };

	///////////////////////////////////////////////////////////////////////////////
	// Taru
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Chopper_Taru_Transport_CSAT						{ quality = 1; price = 8000; };
	class Exile_Chopper_Taru_Transport_Black					{ quality = 1; price = 8000; };

	class Exile_Chopper_Taru_CSAT								{ quality = 1; price = 8200; };
	class Exile_Chopper_Taru_Black								{ quality = 1; price = 8200; };

	class Exile_Chopper_Taru_Covered_CSAT						{ quality = 1; price = 8400; };
	class Exile_Chopper_Taru_Covered_Black						{ quality = 1; price = 8400; };

	///////////////////////////////////////////////////////////////////////////////
	// Cessna
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Plane_Cessna									{ quality = 1; price = 4000; };

	///////////////////////////////////////////////////////////////////////////////
	// Hatchback
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Hatchback_Beige						{ quality = 1; price = 1000; };
	class Exile_Car_Hatchback_Green						{ quality = 1; price = 1000; };
	class Exile_Car_Hatchback_Blue						{ quality = 1; price = 1000; };
	class Exile_Car_Hatchback_BlueCustom				{ quality = 1; price = 1000; };
	class Exile_Car_Hatchback_BeigeCustom				{ quality = 1; price = 1000; };
	class Exile_Car_Hatchback_Yellow					{ quality = 1; price = 1000; };
	class Exile_Car_Hatchback_Grey						{ quality = 1; price = 1000; };
	class Exile_Car_Hatchback_Black						{ quality = 1; price = 1000; };
	class Exile_Car_Hatchback_Dark						{ quality = 1; price = 1000; };
	class Exile_Car_Hatchback_Rusty1					{ quality = 1; price = 900; };
	class Exile_Car_Hatchback_Rusty2					{ quality = 1; price = 900; };
	class Exile_Car_Hatchback_Rusty3					{ quality = 1; price = 900; };

	///////////////////////////////////////////////////////////////////////////////
	// Hatchback (Sport)
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Hatchback_Sport_Red					{ quality = 1; price = 1250; };
	class Exile_Car_Hatchback_Sport_Blue				{ quality = 1; price = 1250; };
	class Exile_Car_Hatchback_Sport_Orange				{ quality = 1; price = 1250; };
	class Exile_Car_Hatchback_Sport_White				{ quality = 1; price = 1250; };
	class Exile_Car_Hatchback_Sport_Beige				{ quality = 1; price = 1250; };
	class Exile_Car_Hatchback_Sport_Green				{ quality = 1; price = 1250; };

	///////////////////////////////////////////////////////////////////////////////
	// HEMMT
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_HEMMT 								{ quality = 1; price = 3000; };

	///////////////////////////////////////////////////////////////////////////////
	// Hunter
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Hunter 								{ quality = 1; price = 6000; };

	///////////////////////////////////////////////////////////////////////////////
	// Ifrit
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Ifrit 								{ quality = 1; price = 5000; };

	///////////////////////////////////////////////////////////////////////////////
	// Offroad
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Offroad_Red							{ quality = 1; price = 2500; };
	class Exile_Car_Offroad_Beige						{ quality = 1; price = 2500; };
	class Exile_Car_Offroad_White						{ quality = 1; price = 2500; };
	class Exile_Car_Offroad_Blue						{ quality = 1; price = 2500; };
	class Exile_Car_Offroad_DarkRed						{ quality = 1; price = 2500; };
	class Exile_Car_Offroad_BlueCustom					{ quality = 1; price = 2500; };
	class Exile_Car_Offroad_Guerilla01					{ quality = 1; price = 2700; };
	class Exile_Car_Offroad_Guerilla02					{ quality = 1; price = 2700; };
	class Exile_Car_Offroad_Guerilla03					{ quality = 1; price = 2700; };
	class Exile_Car_Offroad_Guerilla04					{ quality = 1; price = 2700; };
	class Exile_Car_Offroad_Guerilla05					{ quality = 1; price = 2700; };
	class Exile_Car_Offroad_Guerilla06					{ quality = 1; price = 2700; };
	class Exile_Car_Offroad_Guerilla07					{ quality = 1; price = 2700; };
	class Exile_Car_Offroad_Guerilla08					{ quality = 1; price = 2700; };
	class Exile_Car_Offroad_Guerilla09					{ quality = 1; price = 2700; };
	class Exile_Car_Offroad_Guerilla10					{ quality = 1; price = 2700; };
	class Exile_Car_Offroad_Guerilla11					{ quality = 1; price = 2700; };
	class Exile_Car_Offroad_Guerilla12					{ quality = 1; price = 2700; };
	class Exile_Car_Offroad_Rusty1						{ quality = 1; price = 2000; };
	class Exile_Car_Offroad_Rusty2						{ quality = 1; price = 2000; };
	class Exile_Car_Offroad_Rusty3						{ quality = 1; price = 2000; };

	///////////////////////////////////////////////////////////////////////////////
	// Offroad (Armed)
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Offroad_Armed_Guerilla01 			{ quality = 1; price = 5000; };
	class Exile_Car_Offroad_Armed_Guerilla02 			{ quality = 1; price = 5000; };
	class Exile_Car_Offroad_Armed_Guerilla03 			{ quality = 1; price = 5000; };
	class Exile_Car_Offroad_Armed_Guerilla04 			{ quality = 1; price = 5000; };
	class Exile_Car_Offroad_Armed_Guerilla05 			{ quality = 1; price = 5000; };
	class Exile_Car_Offroad_Armed_Guerilla06 			{ quality = 1; price = 5000; };
	class Exile_Car_Offroad_Armed_Guerilla07 			{ quality = 1; price = 5000; };
	class Exile_Car_Offroad_Armed_Guerilla08 			{ quality = 1; price = 5000; };
	class Exile_Car_Offroad_Armed_Guerilla09 			{ quality = 1; price = 5000; };
	class Exile_Car_Offroad_Armed_Guerilla10 			{ quality = 1; price = 5000; };
	class Exile_Car_Offroad_Armed_Guerilla11 			{ quality = 1; price = 5000; };
	class Exile_Car_Offroad_Armed_Guerilla12 			{ quality = 1; price = 5000; };

	///////////////////////////////////////////////////////////////////////////////
	// Offroad (Repair)
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Offroad_Repair_Civillian 			{ quality = 1; price = 2500; };
	class Exile_Car_Offroad_Repair_Red 					{ quality = 1; price = 2500; };
	class Exile_Car_Offroad_Repair_Beige 				{ quality = 1; price = 2500; };
	class Exile_Car_Offroad_Repair_White 				{ quality = 1; price = 2500; };
	class Exile_Car_Offroad_Repair_Blue 				{ quality = 1; price = 2500; };
	class Exile_Car_Offroad_Repair_DarkRed 				{ quality = 1; price = 2500; };
	class Exile_Car_Offroad_Repair_BlueCustom 			{ quality = 1; price = 2500; };
	class Exile_Car_Offroad_Repair_Guerilla01 			{ quality = 1; price = 2700; };
	class Exile_Car_Offroad_Repair_Guerilla02 			{ quality = 1; price = 2700; };
	class Exile_Car_Offroad_Repair_Guerilla03 			{ quality = 1; price = 2700; };
	class Exile_Car_Offroad_Repair_Guerilla04 			{ quality = 1; price = 2700; };
	class Exile_Car_Offroad_Repair_Guerilla05 			{ quality = 1; price = 2700; };
	class Exile_Car_Offroad_Repair_Guerilla06 			{ quality = 1; price = 2700; };
	class Exile_Car_Offroad_Repair_Guerilla07 			{ quality = 1; price = 2700; };
	class Exile_Car_Offroad_Repair_Guerilla08 			{ quality = 1; price = 2700; };
	class Exile_Car_Offroad_Repair_Guerilla09 			{ quality = 1; price = 2700; };
	class Exile_Car_Offroad_Repair_Guerilla10 			{ quality = 1; price = 2700; };
	class Exile_Car_Offroad_Repair_Guerilla11 			{ quality = 1; price = 2700; };
	class Exile_Car_Offroad_Repair_Guerilla12 			{ quality = 1; price = 2700; };

	///////////////////////////////////////////////////////////////////////////////
	// Strider
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Strider 							{ quality = 1; price = 8000; };

	///////////////////////////////////////////////////////////////////////////////
	// SUV
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_SUV_Red 							{ quality = 1; price = 1500; };
	class Exile_Car_SUV_Black 							{ quality = 1; price = 1500; };
	class Exile_Car_SUV_Grey 							{ quality = 1; price = 1500; };
	class Exile_Car_SUV_Orange 							{ quality = 1; price = 1500; };

	///////////////////////////////////////////////////////////////////////////////
	// Tempest
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Tempest 							{ quality = 1; price = 4000; };

	///////////////////////////////////////////////////////////////////////////////
	// Van
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Van_Black 							{ quality = 1; price = 2000; };
	class Exile_Car_Van_White 							{ quality = 1; price = 2000; };
	class Exile_Car_Van_Red 							{ quality = 1; price = 2000; };
	class Exile_Car_Van_Guerilla01 						{ quality = 1; price = 2300; };
	class Exile_Car_Van_Guerilla02 						{ quality = 1; price = 2300; };
	class Exile_Car_Van_Guerilla03 						{ quality = 1; price = 2300; };
	class Exile_Car_Van_Guerilla04 						{ quality = 1; price = 2300; };
	class Exile_Car_Van_Guerilla05 						{ quality = 1; price = 2300; };
	class Exile_Car_Van_Guerilla06 						{ quality = 1; price = 2300; };
	class Exile_Car_Van_Guerilla07 						{ quality = 1; price = 2300; };
	class Exile_Car_Van_Guerilla08 						{ quality = 1; price = 2300; };

	///////////////////////////////////////////////////////////////////////////////
	// Van (Box)
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Van_Box_Black 						{ quality = 1; price = 1900; };
	class Exile_Car_Van_Box_White 						{ quality = 1; price = 1900; };
	class Exile_Car_Van_Box_Red 						{ quality = 1; price = 1900; };
	class Exile_Car_Van_Box_Guerilla01 					{ quality = 1; price = 2000; };
	class Exile_Car_Van_Box_Guerilla02 					{ quality = 1; price = 2000; };
	class Exile_Car_Van_Box_Guerilla03 					{ quality = 1; price = 2000; };
	class Exile_Car_Van_Box_Guerilla04 					{ quality = 1; price = 2000; };
	class Exile_Car_Van_Box_Guerilla05 					{ quality = 1; price = 2000; };
	class Exile_Car_Van_Box_Guerilla06 					{ quality = 1; price = 2000; };
	class Exile_Car_Van_Box_Guerilla07 					{ quality = 1; price = 2000; };
	class Exile_Car_Van_Box_Guerilla08 					{ quality = 1; price = 2000; };

	///////////////////////////////////////////////////////////////////////////////
	// Van (Fuel)
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Van_Fuel_Black 						{ quality = 1; price = 4500; };
	class Exile_Car_Van_Fuel_White 						{ quality = 1; price = 4500; };
	class Exile_Car_Van_Fuel_Red 						{ quality = 1; price = 4500; };
	class Exile_Car_Van_Fuel_Guerilla01 				{ quality = 1; price = 4500; };
	class Exile_Car_Van_Fuel_Guerilla02 				{ quality = 1; price = 4500; };
	class Exile_Car_Van_Fuel_Guerilla03 				{ quality = 1; price = 4500; };

	///////////////////////////////////////////////////////////////////////////////
	// Zamak
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Zamak 								{ quality = 1; price = 3000; };

	///////////////////////////////////////////////////////////////////////////////
	// RDS
	///////////////////////////////////////////////////////////////////////////////
	class RDS_Ikarus_Civ_01 							{ quality = 1; price = 3000; };
	class RDS_Ikarus_Civ_02 							{ quality = 1; price = 3000; };
	class RDS_Lada_Civ_01 								{ quality = 1; price = 700; };
	class RDS_Lada_Civ_02 								{ quality = 1; price = 700; };
	class RDS_Lada_Civ_03 								{ quality = 1; price = 700; };
	class RDS_Lada_Civ_04 								{ quality = 1; price = 700; };
	class RDS_Lada_Civ_05 								{ quality = 1; price = 700; };
	class RDS_S1203_Civ_01 								{ quality = 1; price = 700; };
	class RDS_S1203_Civ_02 								{ quality = 1; price = 700; };
	class RDS_S1203_Civ_03 								{ quality = 1; price = 700; };
	class RDS_Gaz24_Civ_01 								{ quality = 1; price = 700; };
	class RDS_Gaz24_Civ_02 								{ quality = 1; price = 700; };
	class RDS_Gaz24_Civ_03	 							{ quality = 1; price = 700; };
	class RDS_Golf4_Civ_01 								{ quality = 1; price = 700; };
	class RDS_Octavia_Civ_01 							{ quality = 1; price = 700; };
	class RDS_Hatchback_01_F 							{ quality = 1; price = 700; };
	class RDS_SUV_01_F 									{ quality = 1; price = 1000; };
	class RDS_Van_01_transport_F 						{ quality = 1; price = 3000; };
	class RDS_Van_01_fuel_F 							{ quality = 1; price = 3000; };
	class RDS_Van_01_box_F								{ quality = 1; price = 3000; };

	///////////////////////////////////////////////////////////////////////////////
	// Landrover
	///////////////////////////////////////////////////////////////////////////////
	class BAF_Offroad_D 								{ quality = 1; price = 2000; };
 	class BAF_Offroad_W 								{ quality = 1; price = 2000; };
	class LandRover_CZ_EP1 								{ quality = 1; price = 2000; };
	class LandRover_TK_CIV_EP1 							{ quality = 1; price = 2000; };
	class BAF_Offroad_D_HMG 							{ quality = 1; price = 2000; };
	class BAF_Offroad_W_HMG 							{ quality = 1; price = 2000; };
	class ACR_Offroad_HMG								{ quality = 1; price = 2000; };
	class LandRover_ACR 								{ quality = 1; price = 2000; };
	class ACR_LandRover_AMB 							{ quality = 1; price = 2000; };

	///////////////////////////////////////////////////////////////////////////////
	// EWK
	///////////////////////////////////////////////////////////////////////////////
	class EWK_m1151_m2_deployment 						{ quality = 1; price = 3000; };
	class EWK_m1151_m2_deployment_Jtac 					{ quality = 1; price = 3000; };
	class EWK_m1151_m2_deployment_AT4					{ quality = 1; price = 3000; };
	class EWK_m1151_m2_deployment_Bumper 				{ quality = 1; price = 3000; };
	class EWK_HMMWV_Light 								{ quality = 1; price = 3000; };
	class EWK_HMMWV_Medevac 							{ quality = 1; price = 3000; };
	class EWK_M997A2_Ambulance 							{ quality = 1; price = 3000; };
	class EWK_M997A2_Ambulance_NoBackLights 			{ quality = 1; price = 3000; };
	class EWK_M997A2_Ambulance_Tan 						{ quality = 1; price = 3000; };
	class EWK_M997A2_Ambulance_Tan_NoBackLights 		{ quality = 1; price = 3000; };
	class EWK_M1114_Armored 							{ quality = 1; price = 3000; };
	//EWK_M998A2_sov
	class EWK_M998A2_sov_M2 							{ quality = 1; price = 3000; };
	//EWK_m1151_TOW_deployment
	class EWK_m1151_m240_deployment 					{ quality = 1; price = 3000; };

};
class CfgExileCustomCode
{
	/*
		You can overwrite every single file of our code without touching it.
		To do that, add the function name you want to overwrite plus the
		path to your custom file here. If you wonder how this works, have a
		look at our bootstrap/fn_preInit.sqf function.

		Simply add the following scheme here:

		<Function Name of Exile> = "<New File Name>";

		Example:

		ExileClient_util_fusRoDah = "myaddon/myfunction.sqf";
	*/
	ExileClientPlayerAttributes = "ExileExileClient_object_player_stats_update.sqf";
};
class CfgExileMusic
{
	Ambient[] = {"ExileTrack03","ExileTrack04"};
	Combat[] = {"ExileTrack06","ExileTrack07"};
	Intro[] = {"ExileTrack02","ExileTrack03"};
};
class CfgFlags
{
	class USA
	{
		name = "USA";
		texture = "\A3\Data_F\Flags\flag_us_co.paa";
		uid = "";
	};
};
class CfgMaintenance
{
	cost[] =
	{
		5000, // Level 1
		10000, // Level 2
		15000, // Level 3
		20000, // Level 4
		25000, // Level 5
		30000, // Level 6
		35000, // Level 7
		40000, // Level 8
		45000, // Level 9
		50000  // Level 10
	};

	period = 30;
};
class CfgTerritories
{
	// Base Cost / radius
	// Level 1 is allways for PoPtabs , >= 2 for Respect

	prices[] =
	{
		{5000,	15}, // Level 1
		{10000,	30}, // Level 2
		{15000,	45}, // Level 3
		{20000,	60}, // Level 4
		{25000,	75}, // Level 5
		{30000,	90}, // Level 6
		{35000,	105}, // Level 7
		{40000,	120}, // Level 8
		{45000,	135}, // Level 9
		{50000,	150}  // Level 10
	};

	noNeedForTerritory[] =
	{
		"Exile_Construction_CampFire_Preview",
		"Exile_Construction_CamoTent_Preview"
	};

	protectionPeriod = 21;

	popTabAmountPerObject = 10;
	respectAamountPerObject = 5;
};
class CfgTraderCategories
{
	class Uniforms
	{
		name = "Uniforms";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\uniform_ca.paa";
		items[] =
		{
			"U_C_Journalist",
			"U_C_Poloshirt_blue",
			"U_C_Poloshirt_burgundy",
			"U_C_Poloshirt_salmon",
			"U_C_Poloshirt_stripped",
			"U_C_Poloshirt_tricolour",
			"U_C_Poor_1",
			"U_C_Poor_2",
			"U_C_Poor_shorts_1",
			"U_C_Scientist",
			"U_OrestesBody",
			"U_Rangemaster",
			"U_NikosAgedBody",
			"U_NikosBody",
			"U_Competitor",
			"U_B_CombatUniform_mcam",
			"U_B_CombatUniform_mcam_tshirt",
			"U_B_CombatUniform_mcam_vest",
			"U_B_CombatUniform_mcam_worn",
			"U_B_CTRG_1",
			"U_B_CTRG_2",
			"U_B_CTRG_3",
			"U_I_CombatUniform",
			"U_I_CombatUniform_shortsleeve",
			"U_I_CombatUniform_tshirt",
			"U_I_OfficerUniform",
			"U_O_CombatUniform_ocamo",
			"U_O_CombatUniform_oucamo",
			"U_O_OfficerUniform_ocamo",
			"U_B_SpecopsUniform_sgg",
			"U_O_SpecopsUniform_blk",
			"U_O_SpecopsUniform_ocamo",
			"U_I_G_Story_Protagonist_F",
			"U_C_HunterBody_grn",
			"U_IG_Guerilla1_1",
			"U_IG_Guerilla2_1",
			"U_IG_Guerilla2_2",
			"U_IG_Guerilla2_3",
			"U_IG_Guerilla3_1",
			"U_BG_Guerilla2_1",
			"U_IG_Guerilla3_2",
			"U_BG_Guerrilla_6_1",
			"U_BG_Guerilla1_1",
			"U_BG_Guerilla2_2",
			"U_BG_Guerilla2_3",
			"U_BG_Guerilla3_1",
			"U_BG_leader",
			"U_IG_leader",
			"U_I_G_resistanceLeader_F",
			"U_B_FullGhillie_ard",
			"U_B_FullGhillie_lsh",
			"U_B_FullGhillie_sard",
			"U_B_GhillieSuit",
			"U_I_FullGhillie_ard",
			"U_I_FullGhillie_lsh",
			"U_I_FullGhillie_sard",
			"U_I_GhillieSuit",
			"U_O_FullGhillie_ard",
			"U_O_FullGhillie_lsh",
			"U_O_FullGhillie_sard",
			"U_O_GhillieSuit",
			"U_I_Wetsuit",
			"U_O_Wetsuit",
			"U_B_Wetsuit",
			"U_B_survival_uniform",
			"U_B_HeliPilotCoveralls",
			"U_I_HeliPilotCoveralls",
			"U_B_PilotCoveralls",
			"U_I_pilotCoveralls",
			"U_O_PilotCoveralls",
			"TRYK_U_B_ARO2_CombatUniform",
 			"TRYK_U_B_ARO2R_CombatUniform",
 			"TRYK_U_B_AOR2_BLK_CombatUniform",
 			"TRYK_U_B_AOR2_BLK_R_CombatUniform",
 			"TRYK_U_B_AOR2_GRY_CombatUniform",
 			"TRYK_U_B_AOR2_GRY_R_CombatUniform",
 			"TRYK_U_B_AOR2_OD_CombatUniform",
 			"TRYK_U_B_AOR2_OD_R_CombatUniform",
 			"TRYK_U_B_PCUHsW3nh",
 			"TRYK_U_B_PCUHsW3",
 			"TRYK_U_B_BLKBLK_CombatUniform",
 			"TRYK_U_B_BLKBLK_R_CombatUniform",
 			"TRYK_U_B_BLKOCP_CombatUniform",
 			"TRYK_U_B_BLKOCP_R_CombatUniformTshirt",
 			"TRYK_U_B_BLOD_T",
 			"TRYK_U_B_BLKTAN_CombatUniform",
 			"TRYK_U_B_BLKTANR_CombatUniformTshirt",
 			"TRYK_U_B_C01_Tsirt",
 			"TRYK_U_B_BLK",
 			"TRYK_U_B_BLK_Tshirt",
 			"TRYK_U_B_BLK_OD_Tshirt",
 			"TRYK_U_B_BLK_OD",
 			"TRYK_U_B_OD_BLK_2",
 			"TRYK_U_B_OD_BLK",
 			"TRYK_U_B_fleece",
 			"TRYK_U_B_GRYOCP_CombatUniform",
 			"TRYK_U_B_GRYOCP_R_CombatUniformTshirt",
 			"TRYK_U_B_MARPAT_Wood_Tshirt",
 			"TRYK_U_B_MARPAT_Wood",
			"TRYK_U_B_MARPAT_WOOD_CombatUniform",
 			"TRYK_U_B_MARPAT_WOOD_CombatUniformTshirt",
 			"TRYK_U_B_MTP_CombatUniform",
 			"TRYK_U_B_MTP_R_CombatUniform",
 			"TRYK_U_B_MTP_BLK_CombatUniform",
 			"TRYK_U_B_MTP_BLK_R_CombatUniform",
 			"TRYK_U_Bts_PCUs",
 			"TRYK_U_Bts_PCUGs",
 			"TRYK_U_Bts_PCUODs",
 			"TRYK_U_B_PCUHs",
 			"TRYK_U_B_PCUGHs",
 			"TRYK_U_B_PCUODHs",
 			"TRYK_U_B_PCUGs_BLK_R",
 			"TRYK_U_B_PCUGs_gry_R",
 			"TRYK_U_B_PCUGs_OD_R",
 			"TRYK_U_B_PCUs_R",
 			"TRYK_U_B_PCUs",
 			"TRYK_U_B_PCUGs_BLK",
 			"TRYK_U_B_PCUGs",
 			"TRYK_U_B_PCUGs_gry",
 			"TRYK_U_B_Wood_PCUs_R",
 			"TRYK_U_B_Wood_PCUs",
 			"TRYK_U_B_PCUODs",
 			"TRYK_U_B_PCUGs_OD",
			"TRYK_U_B_AOR2_Rollup_CombatUniform",
 			"TRYK_shirts_DENIM_BK",
 			"TRYK_shirts_DENIM_BL",
 			"TRYK_shirts_DENIM_BWH",
 			"TRYK_shirts_DENIM_od",
 			"TRYK_shirts_DENIM_R",
 			"TRYK_shirts_DENIM_RED2",
 			"TRYK_shirts_DENIM_WH",
 			"TRYK_shirts_DENIM_WHB",
 			"TRYK_shirts_DENIM_ylb",
 			"TRYK_shirts_DENIM_od_Sleeve",
 			"TRYK_shirts_DENIM_ylb_Sleeve",
 			"TRYK_shirts_DENIM_BK_Sleeve",
 			"TRYK_shirts_DENIM_BL_Sleeve",
 			"TRYK_shirts_DENIM_BWH_Sleeve",
 			"TRYK_shirts_DENIM_R_Sleeve",
 			"TRYK_shirts_DENIM_RED2_Sleeve",
 			"TRYK_shirts_DENIM_WH_Sleeve",
 			"TRYK_shirts_DENIM_WHB_Sleeve",
 			"TRYK_U_denim_hood_3c",
 			"TRYK_U_denim_hood_blk",
 			"TRYK_U_denim_hood_mc",
 			"TRYK_U_denim_hood_nc",
 			"TRYK_U_denim_jersey_blk",
 			"TRYK_U_denim_jersey_blu",
 			"TRYK_U_B_RED_T_BG_BR",
 			"TRYK_U_B_BLK_T_BG_WH",
 			"TRYK_U_B_BLK_T_BK",
 			"TRYK_U_B_RED_T_BR",
 			"TRYK_U_B_BLK_T_WH",
 			"TRYK_U_B_Denim_T_BG_BK",
 			"TRYK_U_B_Denim_T_BG_WH",
 			"TRYK_U_B_Denim_T_BK",
 			"TRYK_U_B_Denim_T_WH",
 			"TRYK_U_B_JSDF_CombatUniform",
 			"TRYK_U_B_JSDF_CombatUniformTshirt"

		};
	};

	class Vests
	{
		name = "Vests";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\vest_ca.paa";
		items[] =
		{
			"TRYK_V_ArmorVest_AOR2_2",
			"TRYK_V_ArmorVest_Brown2",
			"TRYK_V_ArmorVest_cbr2",
			"TRYK_V_ArmorVest_khk2",
			"TRYK_V_ArmorVest_rgr2",
			"TRYK_V_ArmorVest_AOR1_2",
			"TRYK_V_ArmorVest_coyo2",
			"TRYK_V_ArmorVest_Delta2",
			"TRYK_V_ArmorVest_green2",
			"TRYK_V_ArmorVest_Ranger2",
			"TRYK_V_ArmorVest_tan2",
			"TRYK_V_PlateCarrier_wood",
			"TRYK_V_PlateCarrier_blk",
			"TRYK_V_PlateCarrier_JSDF",
			"TRYK_V_tacv10LC_TN",
			"TRYK_V_tacv10LC_OD",
			"TRYK_V_tacv10LC_BK",
			"TRYK_V_tacv1_SHERIFF_BK",
			"TRYK_V_tacv1LSRF_BK",
			"TRYK_V_tacv1LC_SRF2_OD",
			"TRYK_V_tacv1LC_SRF_OD",
			"TRYK_V_tacv1LC_SRF2_BK",
			"TRYK_V_tacv1LC_SRF_BK",
			"TRYK_V_tacv1LP_BK",
			"TRYK_V_tacv1LC_P2_BK",
			"TRYK_V_tacv1LC_P_BK",
			"TRYK_V_tacv1_P_BK",
			"TRYK_V_tacv1_MSL_NV",
			"TRYK_V_tacv1_MSL_BK",
			"TRYK_V_tacv1LMSL_NV",
			"TRYK_V_tacv1LMSL_BK",
			"TRYK_V_tacv1LC_MSL_NV",
			"TRYK_V_tacv1LC_MSL_BK",
			"TRYK_V_tacv1_FBI_BK",
			"TRYK_V_tacv1LC_FBI2_BK",
			"TRYK_V_tacv1LC_FBI_BK",
			"TRYK_V_tacv1L_OD",
			"TRYK_V_tacv1L_CY",
			"TRYK_V_tacv1L_BK",
			"TRYK_V_tacv1LC_OD",
			"TRYK_V_tacv1LC_CY",
			"TRYK_V_tacv1LC_BK",
			"TRYK_V_tacv1MLC_BK"

		};
	};

	class Headgear
	{
		name = "Headgear";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\headgear_ca.paa";
		items[] =
		{
			"H_Cap_blk",
			"H_Cap_blk_Raven",
			"H_Cap_blu",
			"H_Cap_brn_SPECOPS",
			"H_Cap_grn",
			"H_Cap_headphones",
			"H_Cap_khaki_specops_UK",
			"H_Cap_oli",
			"H_Cap_press",
			"H_Cap_red",
			"H_Cap_tan",
			"H_Cap_tan_specops_US",
			"H_Watchcap_blk",
			"H_Watchcap_camo",
			"H_Watchcap_khk",
			"H_Watchcap_sgg",
			"H_MilCap_blue",
			"H_MilCap_dgtl",
			"H_MilCap_mcamo",
			"H_MilCap_ocamo",
			"H_MilCap_oucamo",
			"H_MilCap_rucamo",
			"H_Bandanna_camo",
			"H_Bandanna_cbr",
			"H_Bandanna_gry",
			"H_Bandanna_khk",
			"H_Bandanna_khk_hs",
			"H_Bandanna_mcamo",
			"H_Bandanna_sgg",
			"H_Bandanna_surfer",
			"H_Booniehat_dgtl",
			"H_Booniehat_dirty",
			"H_Booniehat_grn",
			"H_Booniehat_indp",
			"H_Booniehat_khk",
			"H_Booniehat_khk_hs",
			"H_Booniehat_mcamo",
			"H_Booniehat_tan",
			"H_Hat_blue",
			"H_Hat_brown",
			"H_Hat_camo",
			"H_Hat_checker",
			"H_Hat_grey",
			"H_Hat_tan",
			"H_StrawHat",
			"H_StrawHat_dark",
			"H_Beret_02",
			"H_Beret_blk",
			"H_Beret_blk_POLICE",
			"H_Beret_brn_SF",
			"H_Beret_Colonel",
			"H_Beret_grn",
			"H_Beret_grn_SF",
			"H_Beret_ocamo",
			"H_Beret_red",
			"H_Shemag_khk",
			"H_Shemag_olive",
			"H_Shemag_olive_hs",
			"H_Shemag_tan",
			"H_ShemagOpen_khk",
			"H_ShemagOpen_tan",
			"H_TurbanO_blk",
			"H_HelmetB",
			"H_HelmetB_black",
			"H_HelmetB_camo",
			"H_HelmetB_desert",
			"H_HelmetB_grass",
			"H_HelmetB_light",
			"H_HelmetB_light_black",
			"H_HelmetB_light_desert",
			"H_HelmetB_light_grass",
			"H_HelmetB_light_sand",
			"H_HelmetB_light_snakeskin",
			"H_HelmetB_paint",
			"H_HelmetB_plain_blk",
			"H_HelmetB_sand",
			"H_HelmetB_snakeskin",
			"H_HelmetCrew_B",
			"H_HelmetCrew_I",
			"H_HelmetCrew_O",
			"H_HelmetIA",
			"H_HelmetIA_camo",
			"H_HelmetIA_net",
			"H_HelmetLeaderO_ocamo",
			"H_HelmetLeaderO_oucamo",
			"H_HelmetO_ocamo",
			"H_HelmetO_oucamo",
			"H_HelmetSpecB",
			"H_HelmetSpecB_blk",
			"H_HelmetSpecB_paint1",
			"H_HelmetSpecB_paint2",
			"H_HelmetSpecO_blk",
			"H_HelmetSpecO_ocamo",
			"H_CrewHelmetHeli_B",
			"H_CrewHelmetHeli_I",
			"H_CrewHelmetHeli_O",
			"H_HelmetCrew_I",
			"H_HelmetCrew_B",
			"H_HelmetCrew_O",
			"H_PilotHelmetHeli_B",
			"H_PilotHelmetHeli_I",
			"H_PilotHelmetHeli_O",
			"TRYK_H_PASGT_BLK",
 			"TRYK_H_PASGT_COYO",
 			"TRYK_H_PASGT_OD",
 			"TRYK_H_PASGT_TAN",
 			"TRYK_H_DELTAHELM_NV",
 			"TRYK_r_cap_blk_Glasses",
 			"TRYK_r_cap_od_Glasses",
 			"TRYK_r_cap_tan_Glasses",
 			"TRYK_H_TACEARMUFF_H",
 			"TRYK_H_Helmet_JSDF",
 			"TRYK_H_woolhat",
 			"TRYK_H_woolhat_br",
 			"TRYK_H_woolhat_cu",
 			"TRYK_H_woolhat_CW",
 			"TRYK_H_woolhat_tan",
 			"TRYK_H_woolhat_WH",
 			"TRYK_H_pakol",
 			"TRYK_H_Helmet_WOOD",
 			"TRYK_H_Helmet_MARPAT_Wood",
 			"TRYK_H_GR",
 			"TRYK_H_AOR2",
 			"TRYK_H_headsetcap_od",
 			"TRYK_H_headsetcap",
 			"TRYK_H_headsetcap_blk",
 			"TRYK_H_headsetcap_od_Glasses",
 			"TRYK_H_headsetcap_blk_Glasses",
 			"TRYK_H_headsetcap_Glasses",
 			"TRYK_H_ghillie_top_headless3",
 			"TRYK_H_ghillie_over_green",
 			"TRYK_H_ghillie_top_green",
 			"TRYK_H_ghillie_top_headless_green",
 			"TRYK_H_ghillie_over",
 			"TRYK_H_ghillie_top",
 			"TRYK_H_ghillie_top_headless",
 			"TRYK_ESS_CAP_tan",
 			"TRYK_ESS_CAP_OD",
 			"TRYK_ESS_CAP",
 			"TRYK_H_EARMUFF",
 			"TRYK_H_Booniehat_WOOD",
 			"TRYK_H_Booniehat_JSDF",
 			"TRYK_H_Booniehat_MARPAT_WOOD",
 			"TRYK_H_Booniehat_AOR2",
 			"TRYK_H_Bandana_wig_g",
 			"TRYK_H_Bandana_H",
 			"TRYK_Kio_Balaclava"
		};
	};


	class PointerAttachments
	{
		name = "Pointer Attachments";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] =
		{
			"acc_flashlight",
			"acc_pointer_IR",
			"RH_peq15",
			"RH_peq15_top",
			"RH_peq15b",
			"RH_peq15b_top",
			"RH_peq2",
			"RH_peq2_top",
			"RH_SFM952V",
			"RH_SFM952V_tan"
		};
	};

	class BipodAttachments
	{
		name = "Bipod Attachments";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itembipod_ca.paa";
		items[] =
		{
			"bipod_01_F_blk",
			"bipod_01_F_mtp",
			"bipod_01_F_snd",
			"bipod_02_F_blk",
			"bipod_02_F_hex",
			"bipod_02_F_tan",
			"bipod_03_F_blk",
			"bipod_03_F_oli",
			"RH_HBLM",
			"RH_HBLM_tg",
			"RH_HBLM_des",
			"RH_HBLM_wdl",
			"RH_TD_ACB",
			"RH_TD_ACB_g",
			"RH_TD_ACB_b"
		};
	};

	class MuzzleAttachments
	{
		name = "Suppressor Attachments";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemmuzzle_ca.paa";
		items[] =
		{
			"RH_qdss_nt4",
			"RH_qdss_nt4_tg",
			"RH_qdss_nt4_des",
			"RH_qdss_nt4_wdl",
			"RH_saker",
			"RH_saker_tg",
			"RH_saker_des",
			"RH_saker_wdl",
			"RH_Saker762",
			"RH_Saker762_tg",
			"RH_Saker762_des",
			"RH_Saker762_wdl",
			"RH_fa556",
			"RH_fa556_tg",
			"RH_fa556_des",
			"RH_fa556_wdl",
			"RH_fa762",
			"RH_fa762_tg",
			"RH_fa762_des",
			"RH_fa762_wdl",
			"RH_spr_mbs",
			"RH_spr_mbs_tg",
			"RH_spr_mbs_des",
			"RH_spr_mbs_wdl",
			"RH_tundra",
			"RH_tundra_tg",
			"RH_tundra_des",
			"RH_tundra_wdl",
			"RH_m110sd",
			"RH_m110sd_t",
			"hlc_muzzle_Agendasix",
			"hlc_muzzle_Agendasix10mm",
			"hlc_muzzle_Tundra",
			"hlc_muzzle_545SUP_AK",
			"hlc_muzzle_762SUP_AK",
			"hlc_muzzle_snds_fal"
		};
	};

	class UAVs
	{
		name = "Unmanned Aerial Vehicles";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\gps_ca.paa";
		items[] =
		{
			"I_UavTerminal",
			"I_UAV_01_backpack_F"
		};
	};

	class StaticMGs
	{
		name = "Static Machine Guns";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] =
		{
			"O_HMG_01_support_F",
			//"O_HMG_01_support_high_F", // Does not seem to work with HMG01, only the lower version does
			"O_HMG_01_weapon_F"
		};
	};

	class OpticAttachments
	{
		name = "Scopes";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemoptic_ca.paa";
		items[] =
		{
			"optic_Aco",
			"optic_ACO_grn",
			"optic_ACO_grn_smg",
			"optic_Aco_smg",
			"optic_AMS",
			"optic_AMS_khk",
			"optic_AMS_snd",
			"optic_Arco",
			"optic_DMS",
			"optic_Hamr",
			"optic_Holosight",
			"optic_Holosight_smg",
			"optic_KHS_blk",
			"optic_KHS_hex",
			"optic_KHS_old",
			"optic_KHS_tan",
			"optic_LRPS",
			"optic_MRCO",
			"optic_MRD",
			"optic_NVS",
			"optic_SOS",
			"optic_Yorris",
			"RH_eotech553",
			"RH_eotech553mag",
	 		"RH_eotech553_tan",
	 		"RH_eotech553mag_tan",
	 		"RH_eotexps3",
	 		"RH_eotexps3_tan",
	 		"RH_eothhs1",
	 		"RH_eothhs1_tan",
	 		"RH_compm4s",
	 		"RH_compm2",
	 		"RH_compm2l",
	 		"RH_compm2_tan",
	 		"RH_compm2l_tan",
	 		"RH_t1",
	 		"RH_t1_tan",
	 		"RH_reflex",
	 		"RH_shortdot",
	 		"RH_m3lr",
	 		"RH_ta01nsn",
	 		"RH_ta01nsn_2D",
	 		"RH_ta31rco",
	 		"RH_ta31rco_2D",
	 		"RH_ta31rmr",
	 		"RH_ta31rmr_2D",
	 		"RH_ta01nsn_tan",
	 		"RH_ta01nsn_tan_2D",
	 		"RH_ta31rco_tan",
	 		"RH_ta31rco_tan_2D",
	 		"RH_ta31rmr_tan",
	 		"RH_ta31rmr_tan_2D",
	 		"RH_ta648",
	 		"RH_accupoint",
	 		"RH_leu_mk4",
	 		"RH_c79",
	 		"RH_c79_2D",
	 		"RH_m145",
	 		"RH_barska_rds",
	 		"RH_cmore",
	 		"RH_LTdocter",
	 		"RH_LTdocterl",
	 		"RH_zpoint",
	 		"RH_anpvs10",
	 		"hlc_optic_suit",
	 		"HLC_Optic_PSO1",
			"HLC_Optic_1p29",
			"hlc_optic_kobra",
			"hlc_optic_goshawk",
			"hlc_optic_PVS4FAL"
		};
	};

	class Hardware
	{
		name = "Hardware";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] =
		{
			"Exile_Item_Rope",
			"Exile_Item_DuctTape",
			"Exile_Item_ExtensionCord",
			"Exile_Item_FuelCanisterEmpty",
			"Exile_Item_JunkMetal",
			"Exile_Item_LightBulb",
			"Exile_Item_MetalBoard",
			"Exile_Item_MetalPole",
			"Exile_Item_SafeKit",
			"Exile_Item_CamoTentKit",
			"Exile_Item_CodeLock"
		};
	};

	class Food
	{
		name = "Fast Food";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] =
		{
			"Exile_Item_GloriousKnakworst",
			"Exile_Item_SausageGravy",
			"Exile_Item_ChristmasTinner",
			"Exile_Item_BBQSandwich",
			"Exile_Item_Surstromming",
			"Exile_Item_Catfood"
		};
	};

	class Drinks
	{
		name = "Drinks";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] =
		{
			"Exile_Item_PlasticBottleFreshWater",
			"Exile_Item_Beer",
			"Exile_Item_Energydrink"
		};
	};

	class Tools
	{
		name = "Tools";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] =
		{
			"Exile_Item_Matches",
			"Exile_Item_CookingPot",
			"Binocular",
			"Rangefinder",
			"Laserdesignator",
			"Laserdesignator_02",
			"Laserdesignator_03",
			"NVGoggles",
			"NVGoggles_INDEP",
			"NVGoggles_OPFOR",
			"G_I_Diving",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemRadio",
			"ItemWatch",
			"tf_rf7800str_1",
			"tf_anprc148jem",
			"TRYK_balaclava_BLACK_NV",
 			"TRYK_balaclava_NV",
 			"TRYK_balaclava_BLACK_EAR_NV",
 			"TRYK_balaclava_EAR_NV",
 			"TRYK_G_bala_ess_NV",
 			"TRYK_Headphone_NV",
 			"TRYK_Shemagh_MESH_NV",
 			"TRYK_Shemagh_G_NV",
 			"TRYK_Shemagh_TAN_NV",
 			"TRYK_Shemagh_WH_NV",
 			"TRYK_Shemagh_EAR_G_NV",
 			"TRYK_Shemagh_EAR_NV",
 			"TRYK_ShemaghESSWH_NV",
 			"TRYK_ShemaghESSOD_NV",
 			"TRYK_ShemaghESSTAN_NV",
 			"TRYK_Shemagh_EAR_WH_NV",
 			"TRYK_Shemagh_shade_MESH",
 			"TRYK_Shemagh_shade_G_N",
 			"TRYK_Shemagh_shade_N",
 			"TRYK_Shemagh_shade_WH_N",
 			"TRYK_SPgearG_NV",
 			"TRYK_SPgear_PHC1_NV",
 			"TRYK_SPgear_PHC2_NV",
 			"TRYK_HRPIGEAR_NV",
 			"TRYK_TAC_boonie_SET_NV",
 			"TRYK_NOMIC_TAC_EARMUFF",
 			"TRYK_TAC_EARMUFF",
 			"TRYK_TAC_EARMUFF_SHADE",
 			"TRYK_TAC_SET_NV_MESH_2",
 			"TRYK_TAC_SET_NV_OD_2",
 			"TRYK_TAC_SET_NV_TAN_2",
 			"TRYK_TAC_SET_NV_WH_2",
 			"TRYK_TAC_SET_NV_MESH",
 			"TRYK_TAC_SET_NV_OD",
 			"TRYK_TAC_SET_NV_TAN",
 			"TRYK_TAC_SET_NV_WH"
		};
	};

	class FirstAid
	{
		name = "FirstAid";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] =
		{
			"Exile_Item_InstaDoc"
		};
	};
	class Navigation
	{
		name = "Special Environment";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] =
		{
			"B_Parachute",
			"V_RebreatherB",
			"V_RebreatherIA",
			"V_RebreatherIR"
		};
	};

	class Backpacks
	{
		name = "Backpacks";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\backpack_ca.paa";
		items[] =
		{
			"TRYK_B_AssaultPack_MARPAT_Wood",
 			"TRYK_B_AssaultPack_Type2camo",
 			"TRYK_B_AssaultPack_UCP",
 			"TRYK_B_Coyotebackpack_BLK",
 			"TRYK_B_Coyotebackpack",
 			"TRYK_B_Coyotebackpack_OD",
 			"TRYK_B_Carryall_JSDF",
 			"TRYK_B_Carryall_blk",
 			"TRYK_B_Carryall_wood",
 			"TRYK_B_Kitbag_aaf",
 			"TRYK_B_Kitbag_blk",
 			"TRYK_B_Kitbag_Base",
 			"TRYK_B_Kitbag_Base_JSDF",
 			"TRYK_B_Medbag_BK",
 			"TRYK_B_Medbag_OD",
 			"TRYK_B_Medbag_ucp",
 			"TRYK_B_BAF_BAG_BLK",
 			"TRYK_B_BAF_BAG_CYT",
 			"TRYK_B_BAF_BAG_mcamo",
 			"TRYK_B_BAF_BAG_OD",
 			"TRYK_B_BAF_BAG_rgr"
		};
	};

	class Ammunition
	{
		name = "Ammunition";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] =
		{
			"16Rnd_9x21_Mag",
			"5Rnd_127x108_APDS_Mag",
			"5Rnd_127x108_Mag",
			"6Rnd_45ACP_Cylinder",
			"6Rnd_GreenSignal_F",
			"6Rnd_RedSignal_F",
			"7Rnd_408_Mag",
			"9Rnd_45ACP_Mag",
			"RH_30Rnd_556x45_Mk262",
			"RH_60Rnd_556x45_Mk262",
			"RH_20Rnd_762x51_M80A1",
			"hlc_30Rnd_545x39_B_AK",
			"hlc_30Rnd_545x39_t_ak",
			"hlc_30Rnd_545x39_S_AK",
			"hlc_45Rnd_545x39_t_rpk",
			"hlc_30Rnd_545x39_EP_ak",
			"hlc_30Rnd_762x39_b_ak",
			"hlc_30Rnd_762x39_t_ak",
			"hlc_45Rnd_762x39_t_rpk",
			"hlc_45Rnd_762x39_m_rpk",
			"hlc_10rnd_12g_buck_S12",
			"hlc_10rnd_12g_slug_S12",
			"hlc_20Rnd_762x51_B_fal",
			"hlc_20Rnd_762x51_mk316_fal",
			"hlc_20Rnd_762x51_barrier_fal",
			"hlc_20Rnd_762x51_t_fal",
			"hlc_50rnd_762x51_M_FAL",
			"hlc_20Rnd_762x51_S_fal",
			"hlc_100Rnd_762x51_B_M60E4",
			"hlc_100Rnd_762x51_T_M60E4",
			"hlc_100Rnd_762x51_M_M60E4",
			"hlc_200rnd_556x45_M_SAW",
			"hlc_200rnd_556x45_T_SAW",
			"hlc_200rnd_556x45_B_SAW",
			"hlc_30Rnd_9x19_B_MP5",
			"hlc_30Rnd_9x19_GD_MP5",
			"hlc_30Rnd_9x19_SD_MP5",
			"hlc_30Rnd_10mm_B_MP5",
			"hlc_30Rnd_10mm_JHP_MP5",
			"prpl_25Rnd_556x45_famas",
			"prpl_25Rnd_556x45_famas_all_tracer",
			"prpl_25Rnd_556x45AP_famas",
			"prpl_25Rnd_556x45_famas_sd",
			"prpl_25Rnd_556x45_famas_sd_tracer",
			"prpl_30Rnd_556x45_famas",
			"prpl_30Rnd_556x45AP_famas",
			"prpl_30Rnd_556x45_famas_tracer",
			"prpl_30Rnd_556x45_famas_all_tracer",
			"prpl_30Rnd_556x45_famas_sd",
			"prpl_30Rnd_556x45_famas_sd_tracer"
		};
	};

	class Flares
	{
		name = "Flares";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] =
		{
			"Chemlight_blue",
			"Chemlight_green",
			"Chemlight_red",
			"FlareGreen_F",
			"FlareRed_F",
			"FlareWhite_F",
			"FlareYellow_F",
			"UGL_FlareGreen_F",
			"UGL_FlareRed_F",
			"UGL_FlareWhite_F",
			"UGL_FlareYellow_F",
			"3Rnd_UGL_FlareGreen_F",
			"3Rnd_UGL_FlareRed_F",
			"3Rnd_UGL_FlareWhite_F",
			"3Rnd_UGL_FlareYellow_F"
		};
	};

	class Smokes
	{
		name = "Smokes";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] =
		{
			"SmokeShell",
			"SmokeShellBlue",
			"SmokeShellGreen",
			"SmokeShellOrange",
			"SmokeShellPurple",
			"SmokeShellRed",
			"SmokeShellYellow",
			"1Rnd_Smoke_Grenade_shell",
			"1Rnd_SmokeBlue_Grenade_shell",
			"1Rnd_SmokeGreen_Grenade_shell",
			"1Rnd_SmokeOrange_Grenade_shell",
			"1Rnd_SmokePurple_Grenade_shell",
			"1Rnd_SmokeRed_Grenade_shell",
			"1Rnd_SmokeYellow_Grenade_shell",
			"3Rnd_Smoke_Grenade_shell",
			"3Rnd_SmokeBlue_Grenade_shell",
			"3Rnd_SmokeGreen_Grenade_shell",
			"3Rnd_SmokeOrange_Grenade_shell",
			"3Rnd_SmokePurple_Grenade_shell",
			"3Rnd_SmokeRed_Grenade_shell",
			"3Rnd_SmokeYellow_Grenade_shell",
			"hlc_GRD_White",
			"hlc_GRD_red",
			"hlc_GRD_green",
			"hlc_GRD_blue",
			"hlc_GRD_orange",
			"hlc_GRD_purple"
		};
	};

	class Explosives
	{
		name = "Explosives";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\cargothrow_ca.paa";
		items[] =
		{
			"HandGrenade",
			"MiniGrenade",
			"B_IR_Grenade",
			"O_IR_Grenade",
			"I_IR_Grenade",
			"1Rnd_HE_Grenade_shell",
			"3Rnd_HE_Grenade_shell",
			"APERSBoundingMine_Range_Mag",
			"APERSMine_Range_Mag",
			"APERSTripMine_Wire_Mag",
			"ClaymoreDirectionalMine_Remote_Mag",
			"DemoCharge_Remote_Mag",
			"IEDLandBig_Remote_Mag",
			"IEDLandSmall_Remote_Mag",
			"IEDUrbanBig_Remote_Mag",
			"IEDUrbanSmall_Remote_Mag",
			"SatchelCharge_Remote_Mag",
			"SLAMDirectionalMine_Wire_Mag",
			"hlc_VOG25_AK",
			"prpl_APAVmag",
			"prpl_APAV58mag",
			"prpl_AC58mag"
		};
	};

	class Pistols
	{
		name = "Pistols";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\handgun_ca.paa";
		items[] =
		{
			"hgun_ACPC2_F",
			"hgun_P07_F",
			"hgun_Pistol_heavy_01_F",
			"hgun_Pistol_heavy_02_F",
			"hgun_Pistol_Signal_F",
			"hgun_Rook40_F"
		};
	};

	class SubMachineGuns
	{
		name = "Sub Machine Guns";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] =
		{
			"hlc_smg_mp510",
			"hlc_smg_mp5a2",
			"hlc_smg_mp5a3",
			"hlc_smg_mp5a4",
			"hlc_smg_mp5k_PDW",
			"hlc_smg_MP5N",
			"hlc_smg_9mmar",
			"hlc_smg_mp5sd5",
			"hlc_smg_mp5sd6",
			"RH_sbr9"
		};
	};

	class LightMachineGuns
	{
		name = "Light Machine Guns";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] =
		{
			"hlc_m249_SQuantoon",
			"hlc_m249_pip1"
		};
	};

	class AssaultRifles
	{
		name = "Assault Rifles";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] =
		{
			"RH_Hk416",
			"RH_M16A4gl",
			"RH_M16A4_m",
			"RH_M27IAR",
			"RH_M4_ris_m",
			"RH_M4A1_ris_M203s",
			"hlc_rifle_falosw",
			"hlc_rifle_osw_GL",
			"hlc_rifle_c1A1",
			"hlc_rifle_FAL5061",
			"hlc_rifle_STG58F",
			"hlc_rifle_ak74",
			"hlc_rifle_aks74",
			"hlc_rifle_aks74u",
			"hlc_rifle_ak47",
			"hlc_rifle_akm",
			"hlc_rifle_aku12",
			"hlc_rifle_rpk12",
			"hlc_rifle_rpk",
			"hlc_rifle_rpk74n",
			"hlc_rifle_ak12",
			"hlc_rifle_ak12gl",
			"hlc_rifle_akmgl",
			"hlc_rifle_aks74_GL",
			"hlc_rifle_saiga12k",
			"hlc_lmg_M60E4",
			"hlc_lmg_M60",
			"prpl_famas",
			"prpl_famas_hg",
			"prpl_famas_tan",
			"prpl_famas_hg_tan",
			"prpl_famas_gl",
			"prpl_famas_gl_tan",
			"prpl_famas_g2",
			"prpl_famas_g2_tan",
			"prpl_famas_g2_hg",
			"prpl_famas_g2_hg_tan",
			"prpl_famas_g2_gl",
			"prpl_famas_g2_gl_tan"
		};
	};

	class SniperRifles
	{
		name = "Sniper Rifles";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] =
		{
			"srifle_GM6_camo_F",
			"srifle_GM6_F",
			"RH_Mk12mod1",
			"RH_Mk11",
			"RH_SAMR",
			"RH_SR25EC",
			"RH_m110"

		};
	};

	class Bikes
	{
		name = "Bikes";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] =
		{
			"Exile_Bike_OldBike",
			"Exile_Bike_MountainBike",
			"Exile_Bike_QuadBike_Black"
		};
	};

	class Cars
	{
		name = "Cars";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] =
		{
			"Exile_Car_Hatchback_Rusty1",
			"Exile_Car_Hatchback_Rusty2",
			"Exile_Car_Hatchback_Rusty3",
			"Exile_Car_Hatchback_Sport_Red",
			"Exile_Car_SUV_Red",
			"Exile_Car_Offroad_Rusty1",
			"Exile_Car_Offroad_Rusty2",
			"Exile_Car_Offroad_Rusty3",
			"Exile_Car_Offroad_Repair_Civillian",
			"Exile_Car_Offroad_Armed_Guerilla01",
			"Exile_Car_Strider",
			"Exile_Car_Hunter",
			"Exile_Car_Ifrit",
			"RDS_Ikarus_Civ_01",
			"RDS_Ikarus_Civ_02",
			"RDS_Lada_Civ_01",
			"RDS_Lada_Civ_02",
			"RDS_Lada_Civ_03",
			"RDS_Lada_Civ_04",
			"RDS_Lada_Civ_05",
			"RDS_S1203_Civ_01",
			"RDS_S1203_Civ_02",
			"RDS_S1203_Civ_03",
			"RDS_Gaz24_Civ_01",
			"RDS_Gaz24_Civ_02",
			"RDS_Gaz24_Civ_03",
			"RDS_Golf4_Civ_01",
			"RDS_Octavia_Civ_01",
			"RDS_Hatchback_01_F",
			"RDS_SUV_01_F",
			"RDS_Van_01_transport_F",
			"RDS_Van_01_fuel_F",
			"RDS_Van_01_box_F",
			"BAF_Offroad_D",
			"BAF_Offroad_W",
			"LandRover_CZ_EP1",
			"LandRover_TK_CIV_EP1",
			"BAF_Offroad_D_HMG",
			"BAF_Offroad_W_HMG",
			"ACR_Offroad_HMG",
			"LandRover_ACR",
			"ACR_LandRover_AMB",
			"EWK_m1151_m2_deployment",
			"EWK_m1151_m2_deployment_Jtac",
			"EWK_m1151_m2_deployment_AT4",
			"EWK_m1151_m2_deployment_Bumper",
			"EWK_HMMWV_Light",
			"EWK_HMMWV_Medevac",
			"EWK_M997A2_Ambulance",
			"EWK_M997A2_Ambulance_NoBackLights",
			"EWK_M997A2_Ambulance_Tan",
			"EWK_M997A2_Ambulance_Tan_NoBackLights",
			"EWK_M1114_Armored",
			"EWK_M998A2_sov_M2",
			"EWK_m1151_m240_deployment"

		};
	};

	class Trucks
	{
		name = "Trucks";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] =
		{
			"Exile_Car_Van_Black",
			"Exile_Car_Van_Box_Black",
			"Exile_Car_Van_Fuel_Black",
			"Exile_Car_Zamak",
			"Exile_Car_Tempest",
			"Exile_Car_HEMMT"
		};
	};

	class Choppers
	{
		name = "Helicopters";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] =
		{
			"Exile_Chopper_Hummingbird_Green",
			"Exile_Chopper_Hummingbird_Civillian_Wasp",
			"Exile_Chopper_Taru_Black",
			"Exile_Chopper_Taru_Covered_Black",
			"Exile_Chopper_Taru_Transport_Black",
			"Exile_Chopper_Orca_BlackCustom",
			"Exile_Chopper_Mohawk_FIA",
			"Exile_Chopper_Huron_Black",
			"Exile_Chopper_Hellcat_Green"
		};
	};

	class Boats
	{
		name = "Boats";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] =
		{
			"Exile_Boat_RubberDuck_Orange"
		};
	};

	class Planes
	{
		name = "Planes";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] =
		{
			"Exile_Plane_Cessna"
		};
	};
};

class CfgTraders
{
	/**
	 * Weapons, scopes, silencers, ammo
	 */
	class Exile_Trader_Armory
	{
		name = "ARMORY";
		showWeaponFilter = 1;
		categories[] =
		{
			"PointerAttachments",
			"BipodAttachments",
			"MuzzleAttachments",
			"OpticAttachments",
			"Ammunition",
			"Pistols",
			"SubMachineGuns",
			"LightMachineGuns",
			"AssaultRifles",
			"SniperRifles"
		};
	};

	/**
	 * Satchels, nades, UAVs, static MGs
	 */
	class Exile_Trader_SpecialOperations
	{
		name = "SPECIAL OPERATIONS";
		showWeaponFilter = 1; // for noob tubes
		categories[] =
		{
			"Flares",
			"Smokes",
			"UAVs",
			"StaticMGs",
			"Explosives",
			"Navigation"
		};
	};

	/**
	 * Uniforms, vests, helmets, backpacks
	 */
	class Exile_Trader_Equipment
	{
		name = "EQUIPMENT";
		showWeaponFilter = 0;
		categories[] =
		{
			"Headgear",
			"Uniforms",
			"Vests",
			"Backpacks",
			"Tools",
			"FirstAid"
		};
	};

	/**
	 * Cans, cans, cans
	 */
	class Exile_Trader_Food
	{
		name = "FAST FOOD";
		showWeaponFilter = 0;
		categories[] =
		{
			"Food",
			"Drinks"
		};
	};

	/**
	 * Light bulbs, metal, etc.
	 */
	class Exile_Trader_Hardware
	{
		name = "HARDWARE";
		showWeaponFilter = 0;
		categories[] =
		{
			"Hardware"
		};
	};

	/**
	 * Sells cars and general vehicles
	 */
	class Exile_Trader_Vehicle
	{
		name = "VEHICLE";
		showWeaponFilter = 0;
		categories[] =
		{
			"Cars",
			"Trucks"
		};
	};

	/**
	 * Sells choppers and planes
	 */
	class Exile_Trader_Aircraft
	{
		name = "AIRCRAFT";
		showWeaponFilter = 0;
		categories[] =
		{
			"Choppers",
			"Planes"
		};
	};

	/**
	 * Salles ships and boats
	 */
	class Exile_Trader_Boat
	{
		name = "BOAT";
		showWeaponFilter = 0;
		categories[] =
		{
			"Boats"
		};
	};
};
class CfgVehicleCustoms
{
	///////////////////////////////////////////////////////////////////////////////
	// QUAD BIKES
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Bike_QuadBike_Abstract
	{
		skins[] =
		{
			{"Exile_Bike_QuadBike_Black",		100},
			{"Exile_Bike_QuadBike_Blue",		100},
			{"Exile_Bike_QuadBike_Red",			100},
			{"Exile_Bike_QuadBike_White",		100},
			{"Exile_Bike_QuadBike_Nato",		150},
			{"Exile_Bike_QuadBike_Csat",		150},
			{"Exile_Bike_QuadBike_Fia",			150},
			{"Exile_Bike_QuadBike_Guerilla01",	150},
			{"Exile_Bike_QuadBike_Guerilla02",	150}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// MOTOR BOATS
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Boat_MotorBoat_Abstract
	{
		skins[] =
		{
			{"Exile_Boat_MotorBoat_Police",		350},
			{"Exile_Boat_MotorBoat_Orange",		300},
			{"Exile_Boat_MotorBoat_White",		300}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// RUBBER DUCKS
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Boat_RubberDuck_Abstract
	{
		skins[] =
		{
			{"Exile_Boat_RubberDuck_CSAT",		200},
			{"Exile_Boat_RubberDuck_Digital",	200},
			{"Exile_Boat_RubberDuck_Orange",	150},
			{"Exile_Boat_RubberDuck_Blue",		150},
			{"Exile_Boat_RubberDuck_Black",		150}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// SDV
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Boat_SDV_Abstract
	{
		skins[] =
		{
			{"Exile_Boat_SDV_CSAT",		200},
			{"Exile_Boat_SDV_Digital",	200},
			{"Exile_Boat_SDV_Grey",		100}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Hellcat
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Chopper_Hellcat_Abstract
	{
		skins[] =
		{
			{"Exile_Chopper_Hellcat_Green", 350},
			{"Exile_Chopper_Hellcat_FIA", 	500}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Hummingbird (Civillian)
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Chopper_Hummingbird_Civillian_Abstract
	{
		skins[] =
		{
			{"Exile_Chopper_Hummingbird_Civillian_Blue", 		350},
			{"Exile_Chopper_Hummingbird_Civillian_Red", 		350},
			{"Exile_Chopper_Hummingbird_Civillian_ION", 		350},
			{"Exile_Chopper_Hummingbird_Civillian_BlueLine", 	350},
			{"Exile_Chopper_Hummingbird_Civillian_Digital", 	350},
			{"Exile_Chopper_Hummingbird_Civillian_Elliptical", 	350},
			{"Exile_Chopper_Hummingbird_Civillian_Furious", 	350},
			{"Exile_Chopper_Hummingbird_Civillian_GrayWatcher", 350},
			{"Exile_Chopper_Hummingbird_Civillian_Jeans", 		350},
			{"Exile_Chopper_Hummingbird_Civillian_Light", 		350},
			{"Exile_Chopper_Hummingbird_Civillian_Shadow", 		350},
			{"Exile_Chopper_Hummingbird_Civillian_Sheriff", 	350},
			{"Exile_Chopper_Hummingbird_Civillian_Speedy", 		350},
			{"Exile_Chopper_Hummingbird_Civillian_Sunset", 		350},
			{"Exile_Chopper_Hummingbird_Civillian_Vrana", 		350},
			{"Exile_Chopper_Hummingbird_Civillian_Wasp", 		350},
			{"Exile_Chopper_Hummingbird_Civillian_Wave", 		350}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Huron
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Chopper_Huron_Abstract
	{
		skins[] =
		{
			{"Exile_Chopper_Huron_Black", 	450},
			{"Exile_Chopper_Huron_Green", 	450}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Orca
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Chopper_Orca_Abstract
	{
		skins[] =
		{
			{"Exile_Chopper_Orca_CSAT", 		350},
			{"Exile_Chopper_Orca_Black", 		350},
			{"Exile_Chopper_Orca_BlackCustom", 	350}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Taru
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Chopper_Taru_Abstract
	{
		skins[] =
		{
			{"Exile_Chopper_Taru_CSAT",		500},
			{"Exile_Chopper_Taru_Black",	500}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Taru (Transport)
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Chopper_Taru_Transport_Abstract
	{
		skins[] =
		{
			{"Exile_Chopper_Taru_Transport_CSAT",	500},
			{"Exile_Chopper_Taru_Transport_Black",	500}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Taru (Covered)
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Chopper_Taru_Covered_Abstract
	{
		skins[] =
		{
			{"Exile_Chopper_Taru_Covered_CSAT",		500},
			{"Exile_Chopper_Taru_Covered_Black",	500}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Hatchback
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Hatchback_Abstract
	{
		skins[] =
		{
			{"Exile_Car_Hatchback_Rusty1", 			50},
			{"Exile_Car_Hatchback_Rusty2", 			50},
			{"Exile_Car_Hatchback_Rusty3", 			50},
			{"Exile_Car_Hatchback_Beige", 			100},
			{"Exile_Car_Hatchback_Green", 			100},
			{"Exile_Car_Hatchback_Blue", 			100},
			{"Exile_Car_Hatchback_BlueCustom", 		100},
			{"Exile_Car_Hatchback_BeigeCustom", 	100},
			{"Exile_Car_Hatchback_Yellow", 			100},
			{"Exile_Car_Hatchback_Grey", 			100},
			{"Exile_Car_Hatchback_Black", 			100},
			{"Exile_Car_Hatchback_Dark", 			100}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Hatchback (Sport)
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Hatchback_Sport_Abstract
	{
		skins[] =
		{
			{"Exile_Car_Hatchback_Sport_Red", 		100},
			{"Exile_Car_Hatchback_Sport_Blue", 		100},
			{"Exile_Car_Hatchback_Sport_Orange", 	100},
			{"Exile_Car_Hatchback_Sport_White", 	100},
			{"Exile_Car_Hatchback_Sport_Beige", 	100},
			{"Exile_Car_Hatchback_Sport_Green", 	100}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Offroad
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Offroad_Abstract
	{
		skins[] =
		{
			{"Exile_Car_Offroad_Rusty1", 		50},
			{"Exile_Car_Offroad_Rusty2", 		50},
			{"Exile_Car_Offroad_Rusty3", 		50},
			{"Exile_Car_Offroad_Red", 			500},
			{"Exile_Car_Offroad_Beige", 		500},
			{"Exile_Car_Offroad_White", 		500},
			{"Exile_Car_Offroad_Blue", 			500},
			{"Exile_Car_Offroad_DarkRed", 		500},
			{"Exile_Car_Offroad_BlueCustom", 	500},
			{"Exile_Car_Offroad_Guerilla01", 	700},
			{"Exile_Car_Offroad_Guerilla02", 	700},
			{"Exile_Car_Offroad_Guerilla03", 	700},
			{"Exile_Car_Offroad_Guerilla04", 	700},
			{"Exile_Car_Offroad_Guerilla05", 	700},
			{"Exile_Car_Offroad_Guerilla06", 	700},
			{"Exile_Car_Offroad_Guerilla07", 	700},
			{"Exile_Car_Offroad_Guerilla08", 	700},
			{"Exile_Car_Offroad_Guerilla09", 	700},
			{"Exile_Car_Offroad_Guerilla10", 	700},
			{"Exile_Car_Offroad_Guerilla11", 	700},
			{"Exile_Car_Offroad_Guerilla12", 	700}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Offroad (Armed)
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Offroad_Armed_Abstract
	{
		skins[] =
		{
			{"Exile_Car_Offroad_Armed_Guerilla01",	250},
			{"Exile_Car_Offroad_Armed_Guerilla02",	250},
			{"Exile_Car_Offroad_Armed_Guerilla03",	250},
			{"Exile_Car_Offroad_Armed_Guerilla04",	250},
			{"Exile_Car_Offroad_Armed_Guerilla05",	250},
			{"Exile_Car_Offroad_Armed_Guerilla06",	250},
			{"Exile_Car_Offroad_Armed_Guerilla07",	250},
			{"Exile_Car_Offroad_Armed_Guerilla08",	250},
			{"Exile_Car_Offroad_Armed_Guerilla09",	250},
			{"Exile_Car_Offroad_Armed_Guerilla10",	250},
			{"Exile_Car_Offroad_Armed_Guerilla11",	250},
			{"Exile_Car_Offroad_Armed_Guerilla12",	250}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Offroad (Repair)
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Offroad_Repair_Abstract
	{
		skins[] =
		{
			{"Exile_Car_Offroad_Repair_Civillian",		150},
			{"Exile_Car_Offroad_Repair_Red",			150},
			{"Exile_Car_Offroad_Repair_Beige",			150},
			{"Exile_Car_Offroad_Repair_White",			150},
			{"Exile_Car_Offroad_Repair_Blue",			150},
			{"Exile_Car_Offroad_Repair_DarkRed",		150},
			{"Exile_Car_Offroad_Repair_BlueCustom",		150},
			{"Exile_Car_Offroad_Repair_Guerilla01",		250},
			{"Exile_Car_Offroad_Repair_Guerilla02",		250},
			{"Exile_Car_Offroad_Repair_Guerilla03",		250},
			{"Exile_Car_Offroad_Repair_Guerilla04",		250},
			{"Exile_Car_Offroad_Repair_Guerilla05",		250},
			{"Exile_Car_Offroad_Repair_Guerilla06",		250},
			{"Exile_Car_Offroad_Repair_Guerilla07",		250},
			{"Exile_Car_Offroad_Repair_Guerilla08",		250},
			{"Exile_Car_Offroad_Repair_Guerilla09",		250},
			{"Exile_Car_Offroad_Repair_Guerilla10",		250},
			{"Exile_Car_Offroad_Repair_Guerilla11",		250},
			{"Exile_Car_Offroad_Repair_Guerilla12",		250}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// SUV
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_SUV_Abstract
	{
		skins[] =
		{
			{"Exile_Car_SUV_Red", 		100},
			{"Exile_Car_SUV_Black", 	150},
			{"Exile_Car_SUV_Grey", 		100},
			{"Exile_Car_SUV_Orange", 	100}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Van
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Van_Abstract
	{
		skins[] =
		{
			{"Exile_Car_Van_Black",			100},
			{"Exile_Car_Van_White",			100},
			{"Exile_Car_Van_Red",			100},
			{"Exile_Car_Van_Guerilla01",	150},
			{"Exile_Car_Van_Guerilla02",	150},
			{"Exile_Car_Van_Guerilla03",	150},
			{"Exile_Car_Van_Guerilla04",	150},
			{"Exile_Car_Van_Guerilla05",	150},
			{"Exile_Car_Van_Guerilla06",	150},
			{"Exile_Car_Van_Guerilla07",	150},
			{"Exile_Car_Van_Guerilla08",	150}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Van (Box)
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Van_Box_Abstract
	{
		skins[] =
		{
			{"Exile_Car_Van_Box_Black",				100},
			{"Exile_Car_Van_Box_White",				100},
			{"Exile_Car_Van_Box_Red",				100},
			{"Exile_Car_Van_Box_Guerilla01",		150},
			{"Exile_Car_Van_Box_Guerilla02",		150},
			{"Exile_Car_Van_Box_Guerilla03",		150},
			{"Exile_Car_Van_Box_Guerilla04",		150},
			{"Exile_Car_Van_Box_Guerilla05",		150},
			{"Exile_Car_Van_Box_Guerilla06",		150},
			{"Exile_Car_Van_Box_Guerilla07",		150},
			{"Exile_Car_Van_Box_Guerilla08",		150}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Van (Fuel)
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Van_Fuel_Abstract
	{
		skins[] =
		{
			{"Exile_Car_Van_Fuel_Black",			100},
			{"Exile_Car_Van_Fuel_White",			100},
			{"Exile_Car_Van_Fuel_Red",				100},
			{"Exile_Car_Van_Fuel_Guerilla01",		150},
			{"Exile_Car_Van_Fuel_Guerilla02",		150},
			{"Exile_Car_Van_Fuel_Guerilla03",		150}
		};
	};
};