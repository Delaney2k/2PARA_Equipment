#include "BIS_AddonInfo.hpp"
class CfgPatches {
    class 2PARA_Berets {
        units[] = {};
        weapons[] = {};
        requiredVersion = 1;
        requiredAddons[] = 
        {			
            "A3_Data_F",
			"Extended_EventHandlers"
        };
    };
};
class UniformSlotInfo {
    slotType = 0;
    linkProxy = "-";
};
class CfgWeapons {
    class Vest_Camo_Base;
    class Uniform_Base;
    class H_HelmetB;
    class Default;
    class ItemCore: Default {};
    class UniformItem: ItemCore {
        class ItemInfo;
    };
    class InventoryItem_Base_F;
    class HeadgearItem: InventoryItem_Base_F {
        class ItemInfo;
        class HeadgearItem;
    };
    class VestItem: ItemCore {
        class ItemInfo;
    };
    class 2PARA_Ally_Beret: ItemCore {
        author = "PJHQ";
        scope = 2;
        weaponPoolAvailable = 1;
        displayName = "[2PARA] Beret(Ally)";
        Picture = "\2PARA_Equipment\ui\2PARA_CA.paa";
        model = "2PARA_Equipment\berets\models\2PARA_Ally_Beret.p3d";
        hiddenSelections[] = {
           ""
          
        };
        hiddenSelectionsTextures[] = {
            ""
        
        };
        ace_hearing_protection = 1;
        ace_hearing_hasEHP = 1;
        ace_hearing_lowerVolume = 0.50; 
        class ItemInfo: HeadgearItem {
            mass = 31;
            uniformModel = "2PARA_Equipment\berets\models\2PARA_Ally_Beret.p3d";
            hiddenSelections[] = {
            };
            modelSides[] = {
                3,
                2,
                1,
                0
            };
        };
    };
};