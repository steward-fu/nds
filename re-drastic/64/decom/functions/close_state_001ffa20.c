/*
 * Ghidra decompilation
 *
 * Function : close_state
 * Address  : 001ffa20
 * Program  : drastic64
 */


void close_state(long param_1)

{
  code *pcVar1;
  long lVar2;
  code **ppcVar3;
  long lVar4;
  
  ppcVar3 = *(code ***)(param_1 + 0x18);
  luaF_close(param_1,*(undefined8 *)(param_1 + 0x38));
  luaC_freeallobjects(param_1);
  luaM_realloc_(param_1,*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x30),
                (long)*(int *)(*(long *)(param_1 + 0x18) + 0x3c) << 3,0);
  pcVar1 = (code *)luaM_realloc_(param_1,ppcVar3[0x16],ppcVar3[0x18],0);
  lVar2 = *(long *)(param_1 + 0x38);
  ppcVar3[0x16] = pcVar1;
  ppcVar3[0x18] = (code *)0x0;
  if (lVar2 != 0) {
    lVar4 = *(long *)(param_1 + 0x78);
    *(long *)(param_1 + 0x20) = param_1 + 0x60;
    *(undefined8 *)(param_1 + 0x78) = 0;
    if (lVar4 != 0) {
      do {
        lVar2 = *(long *)(lVar4 + 0x18);
        luaM_realloc_(param_1,lVar4,0x48,0);
        lVar4 = lVar2;
      } while (lVar2 != 0);
      lVar2 = *(long *)(param_1 + 0x38);
    }
    luaM_realloc_(param_1,lVar2,(long)*(int *)(param_1 + 0xb8) << 4,0);
  }
                    /* WARNING: Could not recover jumptable at 0x001ffaf4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**ppcVar3)(ppcVar3[1],param_1 + -8,0x2d8,0);
  return;
}


