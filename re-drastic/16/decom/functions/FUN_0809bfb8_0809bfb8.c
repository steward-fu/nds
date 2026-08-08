/*
 * Ghidra decompilation
 *
 * Function : FUN_0809bfb8
 * Address  : 0809bfb8
 * Program  : drastic16
 */


int FUN_0809bfb8(undefined4 param_1,undefined4 *param_2,undefined4 param_3,uint *param_4,
                byte *param_5,uint param_6,undefined4 param_7,int *param_8,code **param_9)

{
  code *pcVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint local_98;
  uint local_94;
  uint local_90;
  uint local_8c;
  int local_88;
  undefined4 local_84;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  int local_44;
  undefined4 local_40;
  
  uVar2 = *param_4;
  uVar3 = *param_2;
  *param_2 = 0;
  *param_4 = 0;
  if (uVar2 < 5) {
    return 6;
  }
  local_84 = 0;
  local_88 = 0;
  if (4 < param_6) {
    uVar7 = (uint)*param_5;
    uVar4 = (uint)param_5[3] << 0x10 | (uint)param_5[2] << 8 | (uint)param_5[1] |
            (uint)param_5[4] << 0x18;
    if (uVar4 < 0x1000) {
      uVar4 = 0x1000;
    }
    if (uVar7 < 0xe1) {
      uVar5 = (uVar7 / 9) % 5;
      (*param_9[1])(param_9,0);
      iVar6 = (0x300 << uVar5 + uVar7 % 9) + 0x736;
      local_88 = 0;
      local_88 = (**param_9)(param_9,iVar6 * 2);
      if (local_88 != 0) {
        *param_4 = uVar2;
        local_74 = 0;
        local_50 = 0;
        local_40 = 0;
        local_6c = 0;
        local_68 = 0;
        local_4c = 1;
        local_48 = 1;
        local_98 = uVar7 % 9;
        local_94 = uVar5;
        local_90 = (uVar7 / 9) / 5;
        local_8c = uVar4;
        local_84 = param_1;
        local_70 = uVar3;
        local_44 = iVar6;
        iVar6 = FUN_0809addc(&local_98,uVar3,param_3,param_4,param_7,param_8);
        if ((iVar6 == 0) && (*param_8 == 3)) {
          iVar6 = 6;
        }
        pcVar1 = param_9[1];
        *param_2 = local_74;
        (*pcVar1)(param_9,local_88);
        return iVar6;
      }
      return 2;
    }
  }
  return 4;
}


