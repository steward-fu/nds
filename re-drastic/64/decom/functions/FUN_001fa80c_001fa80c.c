/*
 * Ghidra decompilation
 *
 * Function : FUN_001fa80c
 * Address  : 001fa80c
 * Program  : drastic64
 */


void FUN_001fa80c(long param_1,long param_2,int *param_3,long param_4,int param_5,undefined8 param_6
                 )

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  code **ppcVar5;
  
  iVar2 = *param_3;
  if (iVar2 < param_5 / 2) {
    param_5 = iVar2 * 2;
    if (param_5 < 4) {
      param_5 = 4;
    }
  }
  else if (param_5 <= iVar2) {
                    /* WARNING: Subroutine does not return */
    luaG_runerror(param_1,"too many %s (limit is %d)",param_6,param_5);
  }
  ppcVar5 = *(code ***)(param_1 + 0x18);
  lVar4 = iVar2 * param_4;
  param_4 = param_5 * param_4;
  lVar1 = lVar4;
  if (param_2 == 0) {
    lVar1 = 0;
  }
  lVar3 = (**ppcVar5)(ppcVar5[1],param_2,lVar4,param_4);
  if (lVar3 == 0 && param_4 != 0) {
    luaC_fullgc(param_1,1);
    lVar4 = (**ppcVar5)(ppcVar5[1],param_2,lVar4,param_4);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      luaD_throw(param_1,4);
    }
  }
  ppcVar5[3] = ppcVar5[3] + (param_4 - lVar1);
  *param_3 = param_5;
  return;
}


