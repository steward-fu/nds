/*
 * Ghidra decompilation
 *
 * Function : LzmaDecode
 * Address  : 001b1eb0
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int LzmaDecode(undefined8 param_1,undefined8 *param_2,undefined8 param_3,ulong *param_4,
              byte *param_5,uint param_6,undefined4 param_7,int *param_8,code **param_9)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  ulong uVar7;
  code *pcVar8;
  undefined8 uVar9;
  ulong uVar10;
  uint local_90;
  uint uStack_8c;
  undefined4 local_88;
  uint local_84;
  long local_80;
  undefined8 local_78;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined4 local_34;
  undefined8 local_30;
  uint local_28;
  undefined4 local_24;
  long local_8;
  
  iVar6 = 6;
  uVar10 = *param_4;
  local_8 = ___stack_chk_guard;
  uVar9 = *param_2;
  *param_2 = 0;
  *param_4 = 0;
  if (4 < uVar10) {
    local_80 = 0;
    local_78 = 0;
    iVar6 = 4;
    if (4 < param_6) {
      bVar4 = *param_5;
      if (bVar4 < 0xe1) {
        uVar7 = (ulong)bVar4 / 9;
        uVar5 = (uint)bVar4 - (bVar4 / 9 + (bVar4 / 9) * 8);
        uVar2 = bVar4 / 9 - ((int)(uVar7 / 5) + ((uint)(uVar7 * 0xcccccccd >> 0x20) & 0xfffffffc)) &
                0xff;
        uVar3 = *(uint *)(param_5 + 1);
        (*param_9[1])(param_9,0);
        uVar1 = (0x300 << (ulong)(uVar2 + (uVar5 & 0xff) & 0x1f)) + 0x736;
        local_80 = 0;
        local_80 = (**param_9)(param_9,(ulong)uVar1 << 1);
        local_28 = uVar1;
        if (local_80 == 0) {
          iVar6 = 2;
        }
        else {
          if (uVar3 < 0x1000) {
            uVar3 = 0x1000;
          }
          *param_4 = uVar10;
          local_60 = 0;
          local_50 = 0;
          local_34 = 0;
          local_30 = 0x100000001;
          local_24 = 0;
          local_90 = uVar5 & 0xff;
          uStack_8c = uVar2;
          local_88 = (int)(uVar7 / 5);
          local_84 = uVar3;
          local_78 = param_1;
          uStack_58 = uVar9;
          iVar6 = LzmaDec_DecodeToDic(&local_90,uVar9,param_3,param_4,param_7,param_8);
          if ((iVar6 == 0) && (iVar6 = 0, *param_8 == 3)) {
            iVar6 = 6;
          }
          pcVar8 = param_9[1];
          *param_2 = local_60;
          (*pcVar8)(param_9,local_80);
        }
      }
    }
  }
  if (local_8 - ___stack_chk_guard == 0) {
    return iVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_8 - ___stack_chk_guard,0);
}


