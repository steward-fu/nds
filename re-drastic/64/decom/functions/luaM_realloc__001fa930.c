/*
 * Ghidra decompilation
 *
 * Function : luaM_realloc_
 * Address  : 001fa930
 * Program  : drastic64
 */


void luaM_realloc_(long param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  code **ppcVar3;
  
  ppcVar3 = *(code ***)(param_1 + 0x18);
  lVar1 = param_3;
  if (param_2 == 0) {
    lVar1 = 0;
  }
  lVar2 = (**ppcVar3)(ppcVar3[1]);
  if (lVar2 == 0 && param_4 != 0) {
    luaC_fullgc(param_1,1);
    lVar2 = (**ppcVar3)(ppcVar3[1],param_2,param_3,param_4);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      luaD_throw(param_1,4);
    }
  }
  ppcVar3[3] = ppcVar3[3] + (param_4 - lVar1);
  return;
}


