#include "BIS_AddonInfo.hpp"
class CfgPatches {
    class 2PARA_Equipment {
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
    class 2PARA_Cobra: ItemCore {
        author = "PJHQ";
        scope = 2;
        weaponPoolAvailable = 1;
        displayName = "[2PARA] Cobra(Mesh)";
        Picture = "\2PARA_Equipment\ui\2PARA_CA.paa";
        model = "2PARA_Equipment\Helmets\Models\2PARA_Cobra_Mesh.p3d";
        hiddenSelections[] = {
           "_RANK","_TRFHL","_TRFHR"
          
        };
        hiddenSelectionsTextures[] = {
            "","2PARA_Equipment\Helmets\Data\16AA_CO.paa","2PARA_Equipment\Helmets\Data\2PARA_CO.paa"
        
        };
        ace_hearing_protection = 1;
        ace_hearing_lowerVolume = 0.25;
        class ItemInfo: HeadgearItem {
            mass = 31;
            uniformModel = "2PARA_Equipment\Helmets\Models\2PARA_Cobra_Mesh.p3d";
            hiddenSelections[] = {
               "_RANK","_TRFHL","_TRFHR"
               
            };
            modelSides[] = {
                3,
                2,
                1,
                0
            };
            class HitpointsProtectionInfo {
                class Head {
                    hitPointName = "HitHead";
                      armor = 8;
                    passThrough = 0.5;
                };
            };
        };
    };
    class 2PARA_Cobra_LCpl: 2PARA_Cobra {
        scope = 2;
        weaponPoolAvailable = 1;
        displayName = "[2PARA] Cobra(Mesh) LCpl";
        Picture = "\2PARA_Equipment\ui\2PARA_CA.paa";
        model = "2PARA_Equipment\Helmets\Models\2PARA_Cobra_Mesh.p3d";
        hiddenSelections[] = {
           "_RANK","_TRFHL","_TRFHR"
          
        };
        hiddenSelectionsTextures[] = {
            "2PARA_Equipment\Helmets\Data\LCpl_CO.paa","2PARA_Equipment\Helmets\Data\16AA_CO.paa","2PARA_Equipment\Helmets\Data\2PARA_CO.paa"
        
        };
    };
    class 2PARA_Cobra_Cpl: 2PARA_Cobra {
        scope = 2;
        weaponPoolAvailable = 1;
        displayName = "[2PARA] Cobra(Mesh) Cpl";
        Picture = "\2PARA_Equipment\ui\2PARA_CA.paa";
        model = "2PARA_Equipment\Helmets\Models\2PARA_Cobra_Mesh.p3d";
        hiddenSelections[] = {
           "_RANK","_TRFHL","_TRFHR"
          
        };
        hiddenSelectionsTextures[] = {
            "2PARA_Equipment\Helmets\Data\Cpl_CO.paa","2PARA_Equipment\Helmets\Data\16AA_CO.paa","2PARA_Equipment\Helmets\Data\2PARA_CO.paa"
        
        };
    };
    class 2PARA_Cobra_Sgt: 2PARA_Cobra {
        scope = 2;
        weaponPoolAvailable = 1;
        displayName = "[2PARA] Cobra(Mesh) Sgt";
        Picture = "\2PARA_Equipment\ui\2PARA_CA.paa";
        model = "2PARA_Equipment\Helmets\Models\2PARA_Cobra_Mesh.p3d";
        hiddenSelections[] = {
           "_RANK","_TRFHL","_TRFHR"
          
        };
        hiddenSelectionsTextures[] = {
            "2PARA_Equipment\Helmets\Data\Sgt_CO.paa","2PARA_Equipment\Helmets\Data\16AA_CO.paa","2PARA_Equipment\Helmets\Data\2PARA_CO.paa"
        };
    };
     class 2PARA_Cobra_SSgt: 2PARA_Cobra {
        scope = 2;
        weaponPoolAvailable = 1;
        displayName = "[2PARA] Cobra(Mesh) SSgt";
        Picture = "\2PARA_Equipment\ui\2PARA_CA.paa";
        model = "2PARA_Equipment\Helmets\Models\2PARA_Cobra_Mesh.p3d";
        hiddenSelections[] = {
           "_RANK","_TRFHL","_TRFHR"
          
        };
        hiddenSelectionsTextures[] = {
            "2PARA_Equipment\Helmets\Data\SSgt_CO.paa","2PARA_Equipment\Helmets\Data\16AA_CO.paa","2PARA_Equipment\Helmets\Data\2PARA_CO.paa"
        
        };
    };
    class 2PARA_Cobra_2Lt: 2PARA_Cobra {
        scope = 2;
        weaponPoolAvailable = 1;
        displayName = "[2PARA] Cobra(Mesh) 2Lt";
        Picture = "\2PARA_Equipment\ui\2PARA_CA.paa";
        model = "2PARA_Equipment\Helmets\Models\2PARA_Cobra_Mesh.p3d";
        hiddenSelections[] = {
           "_RANK","_TRFHL","_TRFHR"
          
        };
        hiddenSelectionsTextures[] = {
            "2PARA_Equipment\Helmets\Data\2Lt_CO.paa","2PARA_Equipment\Helmets\Data\16AA_CO.paa","2PARA_Equipment\Helmets\Data\2PARA_CO.paa"
        
        };
    };
    class 2PARA_Cobra_Lt: 2PARA_Cobra {
        scope = 2;
        weaponPoolAvailable = 1;
        displayName = "[2PARA] Cobra(Mesh) Lt";
        Picture = "\2PARA_Equipment\ui\2PARA_CA.paa";
        model = "2PARA_Equipment\Helmets\Models\2PARA_Cobra_Mesh.p3d";
        hiddenSelections[] = {
           "_RANK","_TRFHL","_TRFHR"
          
        };
        hiddenSelectionsTextures[] = {
            "2PARA_Equipment\Helmets\Data\Lt_CO.paa","2PARA_Equipment\Helmets\Data\16AA_CO.paa","2PARA_Equipment\Helmets\Data\2PARA_CO.paa"
        
        };
    };
    class 2PARA_Cobra_D: 2PARA_Cobra {
        scope = 2;
        weaponPoolAvailable = 1;
        displayName = "[2PARA] Cobra(Mesh) Dark";
        Picture = "\2PARA_Equipment\ui\2PARA_CA.paa";
        model = "2PARA_Equipment\Helmets\Models\2PARA_Cobra_Mesh.p3d";
        hiddenSelections[] = {
           "_RANK","_TRFHL","_TRFHR"
          
        };
        hiddenSelectionsTextures[] = {
            "","2PARA_Equipment\Helmets\Data\16AA_DARK_CO.paa","2PARA_Equipment\Helmets\Data\2PARA_CO.paa"
        
        };
    };
    class 2PARA_Cobra_LCpl_D: 2PARA_Cobra {
        scope = 2;
        weaponPoolAvailable = 1;
        displayName = "[2PARA] Cobra(Mesh) LCpl Dark";
        Picture = "\2PARA_Equipment\ui\2PARA_CA.paa";
        model = "2PARA_Equipment\Helmets\Models\2PARA_Cobra_Mesh.p3d";
        hiddenSelections[] = {
           "_RANK","_TRFHL","_TRFHR"
          
        };
        hiddenSelectionsTextures[] = {
            "2PARA_Equipment\Helmets\Data\LCpl_CO.paa","2PARA_Equipment\Helmets\Data\16AA_DARK_CO.paa","2PARA_Equipment\Helmets\Data\2PARA_CO.paa"
        
        };
    };
    class 2PARA_Cobra_Cpl_D: 2PARA_Cobra {
        scope = 2;
        weaponPoolAvailable = 1;
        displayName = "[2PARA] Cobra(Mesh) Cpl Dark";
        Picture = "\2PARA_Equipment\ui\2PARA_CA.paa";
        model = "2PARA_Equipment\Helmets\Models\2PARA_Cobra_Mesh.p3d";
        hiddenSelections[] = {
           "_RANK","_TRFHL","_TRFHR"
          
        };
        hiddenSelectionsTextures[] = {
            "2PARA_Equipment\Helmets\Data\Cpl_CO.paa","2PARA_Equipment\Helmets\Data\16AA_DARK_CO.paa","2PARA_Equipment\Helmets\Data\2PARA_CO.paa"
        
        };
    };
    class 2PARA_Cobra_Sgt_D: 2PARA_Cobra {
        scope = 2;
        weaponPoolAvailable = 1; 
        displayName = "[2PARA] Cobra(Mesh) Sgt Dark";
        Picture = "\2PARA_Equipment\ui\2PARA_CA.paa";
        model = "2PARA_Equipment\Helmets\Models\2PARA_Cobra_Mesh.p3d";
        hiddenSelections[] = {
           "_RANK","_TRFHL","_TRFHR"
          
        };
        hiddenSelectionsTextures[] = {
            "2PARA_Equipment\Helmets\Data\Sgt_CO.paa","2PARA_Equipment\Helmets\Data\16AA_DARK_CO.paa","2PARA_Equipment\Helmets\Data\2PARA_CO.paa"
        };
    };
     class 2PARA_Cobra_SSgt_D: 2PARA_Cobra {
        scope = 2;
        weaponPoolAvailable = 1;
        displayName = "[2PARA] Cobra(Mesh) SSgt Dark";
        Picture = "\2PARA_Equipment\ui\2PARA_CA.paa";
        model = "2PARA_Equipment\Helmets\Models\2PARA_Cobra_Mesh.p3d";
        hiddenSelections[] = {
           "_RANK","_TRFHL","_TRFHR"
          
        };
        hiddenSelectionsTextures[] = {
            "2PARA_Equipment\Helmets\Data\SSgt_CO.paa","2PARA_Equipment\Helmets\Data\16AA_DARK_CO.paa","2PARA_Equipment\Helmets\Data\2PARA_CO.paa"
        
        };
    };
    class 2PARA_Cobra_2Lt_D: 2PARA_Cobra {
        scope = 2;
        weaponPoolAvailable = 1;
        displayName = "[2PARA] Cobra(Mesh) 2Lt Dark";
        Picture = "\2PARA_Equipment\ui\2PARA_CA.paa";
        model = "2PARA_Equipment\Helmets\Models\2PARA_Cobra_Mesh.p3d";
        hiddenSelections[] = {
           "_RANK","_TRFHL","_TRFHR"
          
        };
        hiddenSelectionsTextures[] = {
            "2PARA_Equipment\Helmets\Data\2Lt_CO.paa","2PARA_Equipment\Helmets\Data\16AA_Dark_CO.paa","2PARA_Equipment\Helmets\Data\2PARA_CO.paa"
        
        };
    };
    class 2PARA_Cobra_Lt_D: 2PARA_Cobra {
        scope = 2;
        weaponPoolAvailable = 1;
        displayName = "[2PARA] Cobra(Mesh) Lt Dark";
        Picture = "\2PARA_Equipment\ui\2PARA_CA.paa";
        model = "2PARA_Equipment\Helmets\Models\2PARA_Cobra_Mesh.p3d";
        hiddenSelections[] = {
           "_RANK","_TRFHL","_TRFHR"
          
        };
        hiddenSelectionsTextures[] = {
            "2PARA_Equipment\Helmets\Data\Lt_CO.paa","2PARA_Equipment\Helmets\Data\16AA_Dark_CO.paa","2PARA_Equipment\Helmets\Data\2PARA_CO.paa"
        
        };
    };
    class RAMC_Cobra: 2PARA_Cobra {
        scope = 2;
        weaponPoolAvailable = 1;
        displayName = "[2PARA/RAMC] Cobra(Mesh)";
        Picture = "\2PARA_Equipment\ui\2PARA_CA.paa";
        model = "2PARA_Equipment\Helmets\Models\2PARA_Cobra_Mesh.p3d";
        hiddenSelections[] = {
           "_RANK","_TRFHL","_TRFHR"
          
        };
        hiddenSelectionsTextures[] = {
           "","2PARA_Equipment\Helmets\Data\16AA_CO.paa","2PARA_Equipment\Helmets\Data\RAMC_CO.paa"
        
        };
    };class RAMC_Cobra_D: 2PARA_Cobra {
        scope = 2;
        weaponPoolAvailable = 1;
        displayName = "[2PARA/RAMC] Cobra(Mesh) Dark";
        Picture = "\2PARA_Equipment\ui\2PARA_CA.paa";
        model = "2PARA_Equipment\Helmets\Models\2PARA_Cobra_Mesh.p3d";
        hiddenSelections[] = {
           "_RANK","_TRFHL","_TRFHR"
          
        };
        hiddenSelectionsTextures[] = {
           "","2PARA_Equipment\Helmets\Data\16AA_DARK_CO.paa","2PARA_Equipment\Helmets\Data\RAMC_CO.paa"
        
        };
    };
    class RAMC_Cobra_LCpl: 2PARA_Cobra {
        scope = 2;
        weaponPoolAvailable = 1;
        displayName = "[2PARA/RAMC] Cobra(Mesh) LCpl";
        Picture = "\2PARA_Equipment\ui\2PARA_CA.paa";
        model = "2PARA_Equipment\Helmets\Models\2PARA_Cobra_Mesh.p3d";
        hiddenSelections[] = {
           "_RANK","_TRFHL","_TRFHR"
          
        };
        hiddenSelectionsTextures[] = {
          "2PARA_Equipment\Helmets\Data\LCpl_CO.paa","2PARA_Equipment\Helmets\Data\16AA_CO.paa","2PARA_Equipment\Helmets\Data\RAMC_CO.paa"
        
        };
    };
     class RAMC_Cobra_LCpl_D: 2PARA_Cobra {
        scope = 2;
        weaponPoolAvailable = 1; 
        displayName = "[2PARA/RAMC] Cobra(Mesh) LCpl Dark";
        Picture = "\2PARA_Equipment\ui\2PARA_CA.paa";
        model = "2PARA_Equipment\Helmets\Models\2PARA_Cobra_Mesh.p3d";
        hiddenSelections[] = {
           "_RANK","_TRFHL","_TRFHR"
          
        };
        hiddenSelectionsTextures[] = {
          "2PARA_Equipment\Helmets\Data\LCpl_CO.paa","2PARA_Equipment\Helmets\Data\16AA_DARK_CO.paa","2PARA_Equipment\Helmets\Data\RAMC_CO.paa"
        
        };
    };
    class RAMC_Cobra_Cpl: 2PARA_Cobra {
        scope = 2;
        weaponPoolAvailable = 1;
        displayName = "[2PARA/RAMC] Cobra(Mesh) Cpl";
        Picture = "\2PARA_Equipment\ui\2PARA_CA.paa";
        model = "2PARA_Equipment\Helmets\Models\2PARA_Cobra_Mesh.p3d";
        hiddenSelections[] = {
           "_RANK","_TRFHL","_TRFHR"
          
        };
        hiddenSelectionsTextures[] = {
           "2PARA_Equipment\Helmets\Data\Cpl_CO.paa","2PARA_Equipment\Helmets\Data\16AA_CO.paa","2PARA_Equipment\Helmets\Data\RAMC_CO.paa"
        
        };
    };
    class RAMC_Cobra_Cpl_D: 2PARA_Cobra {
        scope = 2;
        weaponPoolAvailable = 1;
        displayName = "[2PARA/RAMC] Cobra(Mesh) Cpl Dark";
        Picture = "\2PARA_Equipment\ui\2PARA_CA.paa";
        model = "2PARA_Equipment\Helmets\Models\2PARA_Cobra_Mesh.p3d";
        hiddenSelections[] = {
           "_RANK","_TRFHL","_TRFHR"
          
        };
        hiddenSelectionsTextures[] = {
           "2PARA_Equipment\Helmets\Data\Cpl_CO.paa","2PARA_Equipment\Helmets\Data\16AA_DARK_CO.paa","2PARA_Equipment\Helmets\Data\RAMC_CO.paa"
        
        };
    };
        class RAMC_Cobra_Sgt: 2PARA_Cobra {
        scope = 2;
        weaponPoolAvailable = 1;
        displayName = "[2PARA/RAMC] Cobra(Mesh) Sgt";
        Picture = "\2PARA_Equipment\ui\2PARA_CA.paa";
        model = "2PARA_Equipment\Helmets\Models\2PARA_Cobra_Mesh.p3d";
        hiddenSelections[] = {
           "_RANK","_TRFHL","_TRFHR"
          
        };
        hiddenSelectionsTextures[] = {
            "2PARA_Equipment\Helmets\Data\Sgt_CO.paa","2PARA_Equipment\Helmets\Data\16AA_CO.paa","2PARA_Equipment\Helmets\Data\RAMC_CO.paa"
        };
    };
        class RAMC_Cobra_Sgt_D: 2PARA_Cobra {
        scope = 2;
        weaponPoolAvailable = 1;
        displayName = "[2PARA/RAMC] Cobra(Mesh) Sgt Dark";
        Picture = "\2PARA_Equipment\ui\2PARA_CA.paa";
        model = "2PARA_Equipment\Helmets\Models\2PARA_Cobra_Mesh.p3d";
        hiddenSelections[] = {
           "_RANK","_TRFHL","_TRFHR"
          
        };
        hiddenSelectionsTextures[] = {
            "2PARA_Equipment\Helmets\Data\Sgt_CO.paa","2PARA_Equipment\Helmets\Data\16AA_DARK_CO.paa","2PARA_Equipment\Helmets\Data\RAMC_CO.paa"
        };
    };
     class SIG_Cobra: 2PARA_Cobra {
        scope = 2;
        weaponPoolAvailable = 1;
        displayName = "[2PARA/SIGS] Cobra(Mesh)";
        Picture = "\2PARA_Equipment\ui\2PARA_CA.paa";
        model = "2PARA_Equipment\Helmets\Models\2PARA_Cobra_Mesh.p3d";
        hiddenSelections[] = {
           "_RANK","_TRFHL","_TRFHR"
          
        };
        hiddenSelectionsTextures[] = {
           "","2PARA_Equipment\Helmets\Data\16AA_CO.paa","2PARA_Equipment\Helmets\Data\SIGS_CO.paa"
        
        };
    };
    class SIG_Cobra_D: 2PARA_Cobra {
        scope = 2;
        weaponPoolAvailable = 1;
        displayName = "[2PARA/SIGS] Cobra(Mesh) Dark";
        Picture = "\2PARA_Equipment\ui\2PARA_CA.paa";
        model = "2PARA_Equipment\Helmets\Models\2PARA_Cobra_Mesh.p3d";
        hiddenSelections[] = {
           "_RANK","_TRFHL","_TRFHR"
          
        };
        hiddenSelectionsTextures[] = {
           "","2PARA_Equipment\Helmets\Data\16AA_DARK_CO.paa","2PARA_Equipment\Helmets\Data\SIGS_CO.paa"
        
        };
    };
    class SIGS_Cobra_LCpl: 2PARA_Cobra {
        scope = 2;
        weaponPoolAvailable = 1;
        displayName = "[2PARA/SIGS] Cobra(Mesh) LCpl";
        Picture = "\2PARA_Equipment\ui\2PARA_CA.paa";
        model = "2PARA_Equipment\Helmets\Models\2PARA_Cobra_Mesh.p3d";
        hiddenSelections[] = {
           "_RANK","_TRFHL","_TRFHR"
          
        };
        hiddenSelectionsTextures[] = {
          "2PARA_Equipment\Helmets\Data\LCpl_CO.paa","2PARA_Equipment\Helmets\Data\16AA_CO.paa","2PARA_Equipment\Helmets\Data\SIGS_CO.paa"
        
        };
    };
    class SIGS_Cobra_LCpl_D: 2PARA_Cobra {
        scope = 2;
        weaponPoolAvailable = 1;
        displayName = "[2PARA/SIGS] Cobra(Mesh) LCpl Dark";
        Picture = "\2PARA_Equipment\ui\2PARA_CA.paa";
        model = "2PARA_Equipment\Helmets\Models\2PARA_Cobra_Mesh.p3d";
        hiddenSelections[] = {
           "_RANK","_TRFHL","_TRFHR"
          
        };
        hiddenSelectionsTextures[] = {
          "2PARA_Equipment\Helmets\Data\LCpl_CO.paa","2PARA_Equipment\Helmets\Data\16AA_DARK_CO.paa","2PARA_Equipment\Helmets\Data\SIGS_CO.paa"
        
        };
    };
};