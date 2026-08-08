/*
 * Ghidra decompilation
 *
 * Function : lua_copy
 * Address  : 001f0dd0
 * Program  : drastic64
 */


void lua_copy(long param_1,int param_2,int param_3)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long **pplVar4;
  long *plVar5;
  
  pplVar4 = *(long ***)(param_1 + 0x20);
  if (param_2 < 1) {
    if (param_2 < -0xf4627) {
      if (param_2 == -0xf4628) {
        plVar3 = (long *)(*(long *)(param_1 + 0x18) + 0x40);
      }
      else if ((*(int *)(*pplVar4 + 1) == 0x16) ||
              (lVar1 = **pplVar4, (int)(uint)*(byte *)(lVar1 + 10) < -0xf4628 - param_2)) {
        plVar3 = &luaO_nilobject_;
      }
      else {
        plVar3 = (long *)(lVar1 + (long)(-0xf4629 - param_2) * 0x10 + 0x20);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(param_1 + 0x10) + (long)param_2 * 0x10);
    }
  }
  else {
    plVar3 = &luaO_nilobject_;
    if (*pplVar4 + (long)param_2 * 2 < *(long **)(param_1 + 0x10)) {
      plVar3 = *pplVar4 + (long)param_2 * 2;
    }
  }
  if (0 < param_3) {
    lVar1 = plVar3[1];
    plVar5 = &luaO_nilobject_;
    if (*pplVar4 + (long)param_3 * 2 < *(long **)(param_1 + 0x10)) {
      plVar5 = *pplVar4 + (long)param_3 * 2;
    }
    *plVar5 = *plVar3;
    plVar5[1] = lVar1;
    return;
  }
  if (param_3 < -0xf4627) {
    if (param_3 != -0xf4628) {
      plVar5 = *pplVar4;
      if ((*(int *)(plVar5 + 1) == 0x16) ||
         ((int)(uint)*(byte *)(*plVar5 + 10) < -0xf4628 - param_3)) {
        plVar2 = &luaO_nilobject_;
      }
      else {
        plVar2 = (long *)(*plVar5 + (long)(-0xf4629 - param_3) * 0x10 + 0x20);
      }
      lVar1 = plVar3[1];
      *plVar2 = *plVar3;
      plVar2[1] = lVar1;
      if ((*(uint *)(plVar3 + 1) >> 6 & 1) == 0) {
        return;
      }
      if ((*(byte *)(*plVar5 + 9) >> 2 & 1) == 0) {
        return;
      }
      if ((*(byte *)(*plVar3 + 9) & 3) == 0) {
        return;
      }
      luaC_barrier_();
      return;
    }
    plVar5 = (long *)(*(long *)(param_1 + 0x18) + 0x40);
  }
  else {
    plVar5 = (long *)(*(long *)(param_1 + 0x10) + (long)param_3 * 0x10);
  }
  lVar1 = plVar3[1];
  *plVar5 = *plVar3;
  plVar5[1] = lVar1;
  return;
}


