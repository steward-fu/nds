/*
 * Ghidra decompilation
 *
 * Function : luaV_div
 * Address  : 002037e0
 * Program  : drastic64
 */


int luaV_div(undefined8 param_1,uint param_2,uint param_3)

{
  int iVar1;
  
  if (param_3 + 1 < 2) {
    iVar1 = -param_2;
    if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
      luaG_runerror(param_1,"attempt to divide by zero");
    }
  }
  else {
    iVar1 = 0;
    if (param_3 != 0) {
      iVar1 = (int)param_2 / (int)param_3;
    }
    if ((int)(param_3 ^ param_2) < 0) {
      return iVar1 - (uint)(param_2 != iVar1 * param_3);
    }
  }
  return iVar1;
}


