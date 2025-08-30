class CfgPatches {
    class 2PARA_Equipment_Vests {
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
    class 2PARA_STV: ItemCore {
        author = "PJHQ";
        scope = 0;
        weaponPoolAvailable = 1;
        displayName = "[2PARA] STV(Base)";
        Picture = "\2PARA_Equipment\Ui\2PARA_CA.paa";
        model = "2PARA_Equipment\Vests\Models\2PARA_Virtus.p3d";
        hiddenSelections[] = {
           "",
          
        };
        hiddenSelectionsTextures[] = {
            "",
        
        };
        class ItemInfo: VestItem {
            mass = 165;
            uniformModel = "2PARA_Equipment\Vests\Models\2PARA_Virtus.p3d";
            containerClass = "Supply200";
            armor = 1;
            hiddenSelections[] = {
               "",
               
            };
            modelSides[] = {
                3,
                2,
                1,
                0
            };
            class HitpointsProtectionInfo {
                class Neck {
                HitpointName = "HitNeck";
                armor = 0;
                PassThrough = 1;
                };
                class Chest {
                    hitPointName = "HitChest";
                    armor = 18;
                    passThrough = 0.5;
                };
                class Diaphragm {
                    hitPointName = "HitDiaphragm";
                    armor = 18;
                    passThrough = 0.5;
                };
                class Abdomen {
                    hitPointName = "HitAbdomen";
                    armor = 18;
                    passThrough = 0.5;
                };
                class Body {
                HitpointName = "HitBody";
                armor = 0;
                PassThrough = 1;
                };
            };
        };
    };
    class 2PARA_STV_GPMG: ItemCore {
        author = "PJHQ";
        scope = 2;
        weaponPoolAvailable = 1;
        displayName = "[2PARA] STV(LMG/MMG)";
        Picture = "\2PARA_Equipment\Ui\2PARA_CA.paa";
        model = "2PARA_Equipment\Vests\Models\2PARA_Virtus_GPMG.p3d";
        hiddenSelections[] = {
           "",
          
        };
        hiddenSelectionsTextures[] = {
            "",
        
        };
        class ItemInfo: VestItem {
            mass = 165;
            uniformModel = "2PARA_Equipment\Vests\Models\2PARA_Virtus_GPMG.p3d";
            containerClass = "Supply400";
            armor = 1;
            hiddenSelections[] = {
               "",
               
            };
            modelSides[] = {
                3,
                2,
                1,
                0
            };
             class HitpointsProtectionInfo {
                class Neck {
                HitpointName = "HitNeck";
                armor = 0;
                PassThrough = 1;
                };
                class Chest {
                    hitPointName = "HitChest";
                    armor = 18;
                    passThrough = 0.5;
                };
                class Diaphragm {
                    hitPointName = "HitDiaphragm";
                    armor = 18;
                    passThrough = 0.5;
                };
                class Abdomen {
                    hitPointName = "HitAbdomen";
                    armor = 18;
                    passThrough = 0.5;
                };
                class Body {
                HitpointName = "HitBody";
                armor = 0;
                PassThrough = 1;
                };
            };
        };
    };
    class 2PARA_STV_TRP: ItemCore {
        author = "PJHQ";
        scope = 2;
        weaponPoolAvailable = 1;
        displayName = "[2PARA] STV(Rifleman A)";
        Picture = "\2PARA_Equipment\Ui\2PARA_CA.paa";
        model = "2PARA_Equipment\Vests\Models\2PARA_Virtus_TRP.p3d";
        hiddenSelections[] = {
           "",
          
        };
        hiddenSelectionsTextures[] = {
            "",
        
        };
        class ItemInfo: VestItem {
            mass = 165;
            uniformModel = "2PARA_Equipment\Vests\Models\2PARA_Virtus_TRP.p3d";
            containerClass = "Supply300";
            armor = 1;
            hiddenSelections[] = {
               "",
               
            };
            modelSides[] = {
                3,
                2,
                1,
                0
            };
            class HitpointsProtectionInfo {
                class Neck {
                HitpointName = "HitNeck";
                armor = 0;
                PassThrough = 1;
                };
                class Chest {
                    hitPointName = "HitChest";
                    armor = 18;
                    passThrough = 0.5;
                };
                class Diaphragm {
                    hitPointName = "HitDiaphragm";
                    armor = 18;
                    passThrough = 0.5;
                };
                class Abdomen {
                    hitPointName = "HitAbdomen";
                    armor = 18;
                    passThrough = 0.5;
                };
                class Body {
                HitpointName = "HitBody";
                armor = 0;
                PassThrough = 1;
                };
            };
        };
    };
    class 2PARA_STV_TRP_b: ItemCore {
        author = "PJHQ";
        scope = 2;
        weaponPoolAvailable = 1;
        displayName = "[2PARA] STV(Rifleman B)";
        Picture = "\2PARA_Equipment\Ui\2PARA_CA.paa";
        model = "2PARA_Equipment\Vests\Models\2PARA_Virtus_TRP_B.p3d";
        hiddenSelections[] = {
           "",
          
        };
        hiddenSelectionsTextures[] = {
            "",
        
        };
        class ItemInfo: VestItem {
            mass = 165;
            uniformModel = "2PARA_Equipment\Vests\Models\2PARA_Virtus_TRP_B.p3d";
            containerClass = "Supply300";
            armor = 1;
            hiddenSelections[] = {
               "",
               
            };
            modelSides[] = {
                3,
                2,
                1,
                0
            };
            class HitpointsProtectionInfo {
                class Neck {
                HitpointName = "HitNeck";
                armor = 0;
                PassThrough = 1;
                };
                class Chest {
                    hitPointName = "HitChest";
                    armor = 18;
                    passThrough = 0.5;
                };
                class Diaphragm {
                    hitPointName = "HitDiaphragm";
                    armor = 18;
                    passThrough = 0.5;
                };
                class Abdomen {
                    hitPointName = "HitAbdomen";
                    armor = 18;
                    passThrough = 0.5;
                };
                class Body {
                HitpointName = "HitBody";
                armor = 0;
                PassThrough = 1;
                };
            };
        };
    };
    class 2PARA_STV_TRP_IC: ItemCore {
        author = "PJHQ";
        scope = 2;
        weaponPoolAvailable = 1;
        displayName = "[2PARA] STV(IC/2IC)";
        Picture = "\2PARA_Equipment\Ui\2PARA_CA.paa";
        model = "2PARA_Equipment\Vests\Models\2PARA_Virtus_IC.p3d";
        hiddenSelections[] = {
           "",
          
        };
        hiddenSelectionsTextures[] = {
            "",
        
        };
        class ItemInfo: VestItem {
            mass = 165;
            uniformModel = "2PARA_Equipment\Vests\Models\2PARA_Virtus_IC.p3d";
            containerClass = "Supply400";
            armor = 1;
            hiddenSelections[] = {
               "",
               
            };
            modelSides[] = {
                3,
                2,
                1,
                0
            };
            class HitpointsProtectionInfo {
                class Neck {
                HitpointName = "HitNeck";
                armor = 0;
                PassThrough = 1;
                };
                class Chest {
                    hitPointName = "HitChest";
                    armor = 18;
                    passThrough = 0.5;
                };
                class Diaphragm {
                    hitPointName = "HitDiaphragm";
                    armor = 18;
                    passThrough = 0.5;
                };
                class Abdomen {
                    hitPointName = "HitAbdomen";
                    armor = 18;
                    passThrough = 0.5;
                };
                class Body {
                HitpointName = "HitBody";
                armor = 0;
                PassThrough = 1;
                };
            };
        };
    };
        class 2PARA_STV_GPMG_IC: ItemCore {
        author = "PJHQ";
        scope = 2;
        weaponPoolAvailable = 1;
        displayName = "[2PARA] STV(IC/2IC SF)";
        Picture = "\2PARA_Equipment\Ui\2PARA_CA.paa";
        model = "2PARA_Equipment\Vests\Models\2PARA_Virtus_GPMG_IC.p3d";
        hiddenSelections[] = {
           "",
          
        };
        hiddenSelectionsTextures[] = {
            "",
        
        };
        class ItemInfo: VestItem {
            mass = 165;
            uniformModel = "2PARA_Equipment\Vests\Models\2PARA_Virtus_GPMG_IC.p3d";
            containerClass = "Supply400";
            armor = 1;
            hiddenSelections[] = {
               "",
               
            };
            modelSides[] = {
                3,
                2,
                1,
                0
            };
            class HitpointsProtectionInfo {
                class Neck {
                HitpointName = "HitNeck";
                armor = 0;
                PassThrough = 1;
                };
                class Chest {
                    hitPointName = "HitChest";
                    armor = 18;
                    passThrough = 0.5;
                };
                class Diaphragm {
                    hitPointName = "HitDiaphragm";
                    armor = 18;
                    passThrough = 0.5;
                };
                class Abdomen {
                    hitPointName = "HitAbdomen";
                    armor = 18;
                    passThrough = 0.5;
                };
                class Body {
                HitpointName = "HitBody";
                armor = 0;
                PassThrough = 1;
                };
            };
        };
    };
};