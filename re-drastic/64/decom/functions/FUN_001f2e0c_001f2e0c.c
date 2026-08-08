/*
 * Ghidra decompilation
 *
 * Function : FUN_001f2e0c
 * Address  : 001f2e0c
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001f2e0c(long param_1,int param_2,undefined8 param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined8 uStack_18;
  undefined4 uStack_10;
  long lStack_8;
  
  plVar5 = *(long **)(param_1 + 0x10);
  lStack_8 = ___stack_chk_guard;
  if (param_2 < 1) {
    if (param_2 < -0xf4627) {
      if (param_2 == -0xf4628) {
        plVar2 = (long *)(*(long *)(param_1 + 0x18) + 0x40);
      }
      else {
        plVar2 = **(long ***)(param_1 + 0x20);
        if ((*(int *)(plVar2 + 1) == 0x16) ||
           (lVar3 = *plVar2, (int)(uint)*(byte *)(lVar3 + 10) < -0xf4628 - param_2)) {
          plVar2 = &luaO_nilobject_;
        }
        else {
          plVar2 = (long *)(lVar3 + (long)(-0xf4629 - param_2) * 0x10 + 0x20);
        }
      }
    }
    else {
      plVar2 = plVar5 + (long)param_2 * 2;
    }
  }
  else {
    plVar1 = **(long ***)(param_1 + 0x20) + (long)param_2 * 2;
    plVar2 = &luaO_nilobject_;
    if (plVar1 < plVar5) {
      plVar2 = plVar1;
    }
  }
  uStack_10 = 2;
  uStack_18 = param_3;
  plVar2 = (long *)luaH_get(*plVar2,&uStack_18);
  lVar3 = plVar2[1];
  lVar4 = *(long *)(param_1 + 0x10);
  *plVar5 = *plVar2;
  plVar5[1] = lVar3;
  *(long *)(param_1 + 0x10) = lVar4 + 0x10;
  if (lStack_8 - ___stack_chk_guard != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(*(uint *)(lVar4 + 8) & 0xf,&__stack_chk_guard,lStack_8 - ___stack_chk_guard,0);
  }
  return;
}


