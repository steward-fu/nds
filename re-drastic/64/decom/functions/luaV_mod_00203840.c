/*
 * Ghidra decompilation
 *
 * Function : luaV_mod
 * Address  : 00203840
 * Program  : drastic64
 */


int luaV_mod(undefined8 param_1,uint param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  
  if (param_3 + 1 < 2) {
    iVar2 = 0;
    if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
      luaG_runerror(param_1,"attempt to perform \'n%%0\'");
    }
  }
  else {
    iVar2 = 0;
    if (param_3 != 0) {
      iVar2 = (int)param_2 / (int)param_3;
    }
    iVar2 = param_2 - iVar2 * param_3;
    if (iVar2 != 0) {
      iVar1 = iVar2 + param_3;
      if (-1 < (int)(param_3 ^ param_2)) {
        iVar1 = iVar2;
      }
      return iVar1;
    }
  }
  return iVar2;
}


