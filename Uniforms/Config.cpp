class CfgPatches {
    class 2PARA_G4_Uniforms {
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
class CfgVehicles {
    class I_Soldier_base_F;
    class SoldierWB;
    class Civilian_F;
    class SCOTT_ARMY_G4RS_soldier:SoldierWB {
        scope = 1;
        picture = "\2PARA_Equipment\Ui\2PARA_CA.paa";
        model = "\2PARA_Equipment\Uniforms\Models\G4RS.p3d";
        uniformClass = "SCOTT_ARMY_G4RS_soldier";
        class Wounds {
            tex[] = {};
            mat[] = {
                "2PARA_Equipment\Uniforms\Data\_G4RS.rvmat",
                "2PARA_Equipment\Uniforms\Data\_G4RS.rvmat",
                "2PARA_Equipment\Uniforms\Data\_G4RS.rvmat",
                "2PARA_Equipment\Uniforms\Data\_G4P.rvmat",
                "2PARA_Equipment\Uniforms\Data\_G4P.rvmat",
                "2PARA_Equipment\Uniforms\Data\_G4P.rvmat",
                "A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat",
                "A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat",
                "A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat",
                "A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat",
                "A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat",
                "A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat",
                "A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat",
                "A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat",
                "A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat",
                "A3\Characters_F\Heads\Data\hl_white_old.rvmat",
                "A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat",
                "A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat",
                "A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat",
                "A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat",
                "A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"
            };
        };
    };
     class 16AA_RLC_G4RS_soldier:SoldierWB {
        scope = 1;
        picture = "\2PARA_Equipment\Ui\2PARA_CA.paa";
        model = "\2PARA_Equipment\Uniforms\Models\G4RS_16AA_RLC.p3d";
        uniformClass = "16AA_RLC_G4RS_soldier";
        class Wounds {
            tex[] = {};
            mat[] = {
                "2PARA_Equipment\Uniforms\Data\_G4RS.rvmat",
                "2PARA_Equipment\Uniforms\Data\_G4RS.rvmat",
                "2PARA_Equipment\Uniforms\Data\_G4RS.rvmat",
                "2PARA_Equipment\Uniforms\Data\_G4P.rvmat",
                "2PARA_Equipment\Uniforms\Data\_G4P.rvmat",
                "2PARA_Equipment\Uniforms\Data\_G4P.rvmat",
                "A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat",
                "A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat",
                "A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat",
                "A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat",
                "A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat",
                "A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat",
                "A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat",
                "A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat",
                "A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat",
                "A3\Characters_F\Heads\Data\hl_white_old.rvmat",
                "A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat",
                "A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat",
                "A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat",
                "A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat",
                "A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"
            };
        };
    };
     class 16AA_RAMC_G4RS_soldier:SoldierWB {
        scope = 1;
        picture = "\2PARA_Equipment\Ui\2PARA_CA.paa";
        model = "\2PARA_Equipment\Uniforms\Models\G4RS.p3d";
        uniformClass = "16AA_RAMC_G4RS_soldier";
        class Wounds {
            tex[] = {};
            mat[] = {
                "2PARA_Equipment\Uniforms\Data\_G4RS.rvmat",
                "2PARA_Equipment\Uniforms\Data\_G4RS.rvmat",
                "2PARA_Equipment\Uniforms\Data\_G4RS.rvmat",
                "2PARA_Equipment\Uniforms\Data\_G4P.rvmat",
                "2PARA_Equipment\Uniforms\Data\_G4P.rvmat",
                "2PARA_Equipment\Uniforms\Data\_G4P.rvmat",
                "A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat",
                "A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat",
                "A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat",
                "A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat",
                "A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat",
                "A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat",
                "A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat",
                "A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat",
                "A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat",
                "A3\Characters_F\Heads\Data\hl_white_old.rvmat",
                "A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat",
                "A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat",
                "A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat",
                "A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat",
                "A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"
            };
        };
    };
    class 16AA_SIGS_G4RS_soldier:SoldierWB {
        scope = 1;
        picture = "\2PARA_Equipment\Ui\2PARA_CA.paa";
        model = "\2PARA_Equipment\Uniforms\Models\G4RS_16AA_SIGS.p3d";
        uniformClass = "16AA_SIGS_G4RS_soldier";
        class Wounds {
            tex[] = {};
            mat[] = {
                "2PARA_Equipment\Uniforms\Data\_G4RS.rvmat",
                "2PARA_Equipment\Uniforms\Data\_G4RS.rvmat",
                "2PARA_Equipment\Uniforms\Data\_G4RS.rvmat",
                "2PARA_Equipment\Uniforms\Data\_G4P.rvmat",
                "2PARA_Equipment\Uniforms\Data\_G4P.rvmat",
                "2PARA_Equipment\Uniforms\Data\_G4P.rvmat",
                "A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat",
                "A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat",
                "A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat",
                "A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat",
                "A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat",
                "A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat",
                "A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat",
                "A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat",
                "A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat",
                "A3\Characters_F\Heads\Data\hl_white_old.rvmat",
                "A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat",
                "A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat",
                "A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat",
                "A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat",
                "A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"
            };
        };
    };
};
class CfgWeapons {
    class Default;
    class ItemCore: Default {};
    class InventoryItem_Base_F;
    class VestItem: ItemCore {
        class ItemInfo;
    };
    class Vest_Camo_Base;
    class UniformItem;
    class Uniform_Base: ItemCore {
        class ItemInfo;
    };
    class HeadgearItem: InventoryItem_Base_F {
        class ItemInfo;
        class HeadgearItem;
    };
    class U_SCOTT_ARMY_G4RS_uniform: Uniform_Base {
        scope = 2;
        displayName = "[2PARA] Crye G4 Uniform(RS)";
        picture = "\2PARA_Equipment\Ui\2PARA_CA.paa";
        model = "\2PARA_Equipment\Uniforms\Models\G4RS.p3d";
        hiddenSelections[] = {
            "_TRFLH","_TRFRH","_AB"
        };
        hiddenSelectionsTextures[] = {
            "","",""
        };
        class ItemInfo: UniformItem {
            uniformModel = "-";
            uniformClass = "SCOTT_ARMY_G4RS_soldier";
            containerClass = "Supply80";
            mass = 15;
            armor = 1;
            uniformType = "Neopren";
        };
    };
     class U_SCOTT_ARMY_G4RS_RAMC_uniform: U_SCOTT_ARMY_G4RS_uniform {
        scope = 2;
        displayName = "[16AA/RAMC] Crye G4 Uniform(RS)";
        picture = "\2PARA_Equipment\Ui\2PARA_CA.paa";
        model = "\2PARA_Equipment\Uniforms\Models\G4RS_16AA_RAMC.p3d";
        hiddenSelections[] = {
            "_TRFLH","_TRFRH","_AB"
        };
        hiddenSelectionsTextures[] = {
            "","\2PARA_Equipment\Helmets\Data\RAMC_CO.paa",""
        };
         class ItemInfo: UniformItem {
            uniformModel = "-";
            uniformClass = "16AA_RAMC_G4RS_soldier";
            containerClass = "Supply80";
            mass = 15;
            armor = 1;
            uniformType = "Neopren";
        };
     };
      class U_SCOTT_ARMY_G4RS_RLC_uniform: U_SCOTT_ARMY_G4RS_uniform {
        scope = 2;
        displayName = "[16AA/RLC] Crye G4 Uniform(RS)";
        picture = "\2PARA_Equipment\Ui\2PARA_CA.paa";
        model = "\2PARA_Equipment\Uniforms\Models\G4RS_16AA_RLC.p3d";
        hiddenSelections[] = {
            "_TRFLH","_TRFRH","_AB"
        };
        hiddenSelectionsTextures[] = {
            "","\2PARA_Equipment\Helmets\Data\SIGS_CO.paa",""
        };
         class ItemInfo: UniformItem {
            uniformModel = "-";
            uniformClass = "16AA_RLC_G4RS_soldier";
            containerClass = "Supply80";
            mass = 15;
            armor = 1;
            uniformType = "Neopren";
        };
     };
      class U_SCOTT_ARMY_G4RS_SIGS_uniform: U_SCOTT_ARMY_G4RS_uniform {
        scope = 2;
        displayName = "[16AA/SIGS] Crye G4 Uniform(RS)";
        picture = "\2PARA_Equipment\Ui\2PARA_CA.paa";
        model = "\2PARA_Equipment\Uniforms\Models\G4RS_16AA_SIGS.p3d";
        hiddenSelections[] = {
            "_TRFLH","_TRFRH","_AB"
        };
        hiddenSelectionsTextures[] = {
            "","\2PARA_Equipment\Helmets\Data\SIGS_CO.paa",""
        };
         class ItemInfo: UniformItem {
            uniformModel = "-";
            uniformClass = "16AA_SIGS_G4RS_soldier";
            containerClass = "Supply80";
            mass = 15;
            armor = 1;
            uniformType = "Neopren";
        };
     };
};