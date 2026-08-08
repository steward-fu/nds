/*
 * Ghidra decompilation
 *
 * Function : RAROpenArchive
 * Address  : 001b36f0
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void RAROpenArchive(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  long local_8;
  
  local_98 = *(undefined4 *)(param_1 + 3);
  local_a8 = *(undefined4 *)(param_1 + 1);
  local_b8 = *param_1;
  local_8 = ___stack_chk_guard;
  local_a0 = param_1[2];
  local_b0 = 0;
  uStack_94 = 0;
  local_90 = 0;
  uStack_8c = 0;
  uStack_88 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  uStack_48 = 0;
  local_40 = 0;
  uStack_38 = 0;
  local_30 = 0;
  uStack_28 = 0;
  local_20 = 0;
  uStack_18 = 0;
  local_10 = 0;
  local_a4 = 0;
  uVar1 = RAROpenArchiveEx(&local_b8);
  *(undefined4 *)((long)param_1 + 0xc) = local_a4;
  *(ulong *)((long)param_1 + 0x1c) = CONCAT44(local_90,uStack_94);
  if (local_8 - ___stack_chk_guard == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1,local_8 - ___stack_chk_guard,0);
}


