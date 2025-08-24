class CfgPatches {
    class 2PARA_G4_uniforms {
        units[] = {};
        weapons[] = {};
        requiredVersion = 1;
        requiredAddons[] = 
        {			
            "A3_data_F",
			"Extended_EventHandlers"
        };
    };
};
class uniformslotInfo {
    slotType = 0;
    linkProxy = "-";
};
class CfgVehicles {
    class I_Soldier_base_F;
    class SoldierWB;
    class Civilian_F;
    class SCOTT_ARMY_G4_soldier: SoldierWB {
        scope = 1;
        picture = "\2para_equipment\ui\2PARA_CA.paa";
        model = "\2para_equipment\uniforms\model\G4.p3d";
        uniformClass = "SCOTT_ARMY_G4_soldier";
        class Wounds {
            tex[] = {};
            mat[] = {
                "2para_equipment\uniforms\data\_G4RS.rvmat",
                "2para_equipment\uniforms\data\_G4RS.rvmat",
                "2para_equipment\uniforms\data\_G4RS.rvmat",
                "2para_equipment\uniforms\data\_G4P.rvmat",
                "2para_equipment\uniforms\data\_G4P.rvmat",
                "2para_equipment\uniforms\data\_G4P.rvmat",
                "A3\Characters_F\Heads\data\hl_white_bald_muscular.rvmat",
                "A3\Characters_F\Heads\data\hl_white_bald_muscular_injury.rvmat",
                "A3\Characters_F\Heads\data\hl_white_bald_muscular_injury.rvmat",
                "A3\Characters_F\Heads\data\hl_black_bald_muscular.rvmat",
                "A3\Characters_F\Heads\data\hl_black_bald_muscular_injury.rvmat",
                "A3\Characters_F\Heads\data\hl_black_bald_muscular_injury.rvmat",
                "A3\Characters_F\Heads\data\hl_white_hairy_muscular.rvmat",
                "A3\Characters_F\Heads\data\hl_white_hairy_muscular_injury.rvmat",
                "A3\Characters_F\Heads\data\hl_white_hairy_muscular_injury.rvmat",
                "A3\Characters_F\Heads\data\hl_white_old.rvmat",
                "A3\Characters_F\Heads\data\hl_white_old_injury.rvmat",
                "A3\Characters_F\Heads\data\hl_white_old_injury.rvmat",
                "A3\Characters_F\Heads\data\hl_asian_bald_muscular.rvmat",
                "A3\Characters_F\Heads\data\hl_asian_bald_muscular_injury.rvmat",
                "A3\Characters_F\Heads\data\hl_asian_bald_muscular_injury.rvmat"
            };
        };
    };
    class SCOTT_ARMY_G4RS_soldier: SoldierWB {
        scope = 1;
        picture = "\2para_equipment\ui\2PARA_CA.paa";
        model = "\2para_equipment\uniforms\model\G4RS.p3d";
        uniformClass = "SCOTT_ARMY_G4RS_soldier";
        class Wounds {
            tex[] = {};
            mat[] = {
                "2para_equipment\uniforms\data\_G4RS.rvmat",
                "2para_equipment\uniforms\data\_G4RS.rvmat",
                "2para_equipment\uniforms\data\_G4RS.rvmat",
                "2para_equipment\uniforms\data\_G4P.rvmat",
                "2para_equipment\uniforms\data\_G4P.rvmat",
                "2para_equipment\uniforms\data\_G4P.rvmat",
                "A3\Characters_F\Heads\data\hl_white_bald_muscular.rvmat",
                "A3\Characters_F\Heads\data\hl_white_bald_muscular_injury.rvmat",
                "A3\Characters_F\Heads\data\hl_white_bald_muscular_injury.rvmat",
                "A3\Characters_F\Heads\data\hl_black_bald_muscular.rvmat",
                "A3\Characters_F\Heads\data\hl_black_bald_muscular_injury.rvmat",
                "A3\Characters_F\Heads\data\hl_black_bald_muscular_injury.rvmat",
                "A3\Characters_F\Heads\data\hl_white_hairy_muscular.rvmat",
                "A3\Characters_F\Heads\data\hl_white_hairy_muscular_injury.rvmat",
                "A3\Characters_F\Heads\data\hl_white_hairy_muscular_injury.rvmat",
                "A3\Characters_F\Heads\data\hl_white_old.rvmat",
                "A3\Characters_F\Heads\data\hl_white_old_injury.rvmat",
                "A3\Characters_F\Heads\data\hl_white_old_injury.rvmat",
                "A3\Characters_F\Heads\data\hl_asian_bald_muscular.rvmat",
                "A3\Characters_F\Heads\data\hl_asian_bald_muscular_injury.rvmat",
                "A3\Characters_F\Heads\data\hl_asian_bald_muscular_injury.rvmat"
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
    class U_SCOTT_ARMY_G4_uniform: Uniform_Base {
        scope = 0;
        displayName = "[2PARA] Crye G4 Uniform";
        picture = "\2para_equipment\ui\2PARA_CA.paa";
        model = "\2para_equipment\uniforms\model\G4.p3d";
        hiddenSelections[] = {
            ""
        };
        hiddenSelectionsTextures[] = {
            ""
        };
        class ItemInfo: UniformItem {
            uniformModel = "-";
            uniformClass = "SCOTT_ARMY_G4_soldier";
            containerClass = "Supply40";
            mass = 15;
            armor = 1;
            uniformType = "Neopren";
        };
    };
    class U_SCOTT_ARMY_G4RS_uniform: Uniform_Base {
        scope = 2;
        displayName = "[2PARA] Crye G4 Uniform(RS)";
        picture = "\2para_equipment\ui\2PARA_CA.paa";
        model = "\2para_equipment\uniforms\model\G4RS.p3d";
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
        scope = 0;
        displayName = "[2PARA/RAMC] Crye G4 Uniform(RS)";
        picture = "\2para_equipment\ui\2PARA_CA.paa";
        model = "\2para_equipment\uniforms\model\G4RS.p3d";
        hiddenSelections[] = {
            "_TRFLH","_TRFRH","_AB"
        };
        hiddenSelectionsTextures[] = {
            "","\2para_equipment\Helmets\data\RAMC_CO.paa",""
        };
     };
      class U_SCOTT_ARMY_G4RS_SIGS_uniform: U_SCOTT_ARMY_G4RS_uniform {
        scope = 0;
        displayName = "[2PARA/SIGS] Crye G4 Uniform(RS)";
        picture = "\2para_equipment\ui\2PARA_CA.paa";
        model = "\2para_equipment\uniforms\model\G4RS.p3d";
        hiddenSelections[] = {
            "_TRFLH","_TRFRH","_AB"
        };
        hiddenSelectionsTextures[] = {
            "","\2para_equipment\Helmets\data\SIGS_CO.paa",""
        };
     };
};