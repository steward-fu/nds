/*
 * Ghidra decompilation
 *
 * Function : luaV_tonumber_
 * Address  : 002029f0
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void luaV_tonumber_(long *param_1,float *param_2)

{
  undefined8 uVar1;
  long lVar2;
  float local_18 [2];
  int local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(uint *)(param_1 + 1) == 0x13) {
    uVar1 = 1;
    *param_2 = (float)*(int *)param_1;
  }
  else if (((*(uint *)(param_1 + 1) & 0xf) == 4) &&
          (lVar2 = luaO_str2num(*param_1 + 0x20,local_18), lVar2 == *(long *)(*param_1 + 0x10) + 1))
  {
    if (local_10 == 0x13) {
      local_18[0] = (float)(int)local_18[0];
    }
    uVar1 = 1;
    *param_2 = local_18[0];
  }
  else {
    uVar1 = 0;
  }
  if (local_8 - ___stack_chk_guard == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1,local_8 - ___stack_chk_guard,0);
}


