/*
 * Ghidra decompilation
 *
 * Function : luaK_stringK
 * Address  : 00215ec0
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void luaK_stringK(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long local_18;
  uint local_10;
  long local_8;
  
  local_10 = *(byte *)(param_2 + 8) | 0x40;
  local_8 = ___stack_chk_guard;
  local_18 = param_2;
  uVar1 = addk(param_1,&local_18);
  if (local_8 - ___stack_chk_guard == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1,local_8 - ___stack_chk_guard,0);
}


