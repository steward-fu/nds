/*
 * Ghidra decompilation
 *
 * Function : lua_pushvalue
 * Address  : 001f0f60
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void lua_pushvalue(long param_1,int param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = _DAT_00229c08;
  plVar2 = *(long **)(param_1 + 0x10);
  if (param_2 < 1) {
    if (-0xf4628 < param_2) {
      lVar4 = (plVar2 + (long)param_2 * 2)[1];
      *plVar2 = plVar2[(long)param_2 * 2];
      plVar2[1] = lVar4;
      *(long **)(param_1 + 0x10) = plVar2 + 2;
      return;
    }
    if (param_2 == -0xf4628) {
      plVar3 = (long *)(*(long *)(param_1 + 0x18) + 0x40);
    }
    else {
      plVar3 = **(long ***)(param_1 + 0x20);
      if ((*(int *)(plVar3 + 1) == 0x16) ||
         (lVar5 = *plVar3, (int)(uint)*(byte *)(lVar5 + 10) < -0xf4628 - param_2)) {
        *plVar2 = luaO_nilobject_;
        plVar2[1] = lVar4;
        *(long **)(param_1 + 0x10) = plVar2 + 2;
        return;
      }
      plVar3 = (long *)(lVar5 + (long)(-0xf4629 - param_2) * 0x10 + 0x20);
    }
  }
  else {
    plVar1 = **(long ***)(param_1 + 0x20) + (long)param_2 * 2;
    plVar3 = &luaO_nilobject_;
    if (plVar1 < plVar2) {
      plVar3 = plVar1;
    }
  }
  lVar4 = plVar3[1];
  *plVar2 = *plVar3;
  plVar2[1] = lVar4;
  *(long **)(param_1 + 0x10) = plVar2 + 2;
  return;
}


