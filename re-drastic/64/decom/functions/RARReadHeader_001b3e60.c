/*
 * Ghidra decompilation
 *
 * Function : RARReadHeader
 * Address  : 001b3e60
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 RARReadHeader(undefined8 param_1,char *param_2)

{
  undefined4 uVar1;
  char acStack_3848 [5120];
  char acStack_2448 [5120];
  undefined8 local_1048;
  undefined8 local_1040;
  undefined8 local_1038;
  undefined8 local_1030;
  undefined8 local_1028;
  undefined4 local_1020;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  memset(acStack_3848,0,0x3840);
  uVar1 = RARReadHeaderEx(param_1,acStack_3848);
  strncpyz(param_2,acStack_3848,0x104);
  strncpyz(param_2 + 0x104,acStack_2448,0x104);
  *(undefined4 *)(param_2 + 0x228) = local_1020;
  *(undefined8 *)(param_2 + 0x238) = 0;
  *(undefined8 *)(param_2 + 0x208) = local_1048;
  *(ulong *)(param_2 + 0x210) = CONCAT44(local_1038._4_4_,local_1040._4_4_);
  *(undefined8 *)(param_2 + 0x218) = local_1030;
  *(undefined8 *)(param_2 + 0x220) = local_1028;
  if (local_8 - ___stack_chk_guard == 0) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_8 - ___stack_chk_guard,0);
}


