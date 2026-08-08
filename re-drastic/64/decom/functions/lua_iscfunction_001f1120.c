/*
 * Ghidra decompilation
 *
 * Function : lua_iscfunction
 * Address  : 001f1120
 * Program  : drastic64
 */


bool lua_iscfunction(long param_1,int param_2)

{
  long *plVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  
  if (param_2 < 1) {
    if (-0xf4628 < param_2) {
      iVar2 = *(int *)(*(long *)(param_1 + 0x10) + (long)param_2 * 0x10 + 8);
      return iVar2 == 0x66 || iVar2 == 0x16;
    }
    if (param_2 == -0xf4628) {
      plVar3 = (long *)(*(long *)(param_1 + 0x18) + 0x40);
    }
    else {
      plVar3 = **(long ***)(param_1 + 0x20);
      if ((*(int *)(plVar3 + 1) == 0x16) ||
         (lVar4 = *plVar3, (int)(uint)*(byte *)(lVar4 + 10) < -0xf4628 - param_2)) {
        return DAT_00229c08 == 0x66 || DAT_00229c08 == 0x16;
      }
      plVar3 = (long *)(lVar4 + (long)(-0xf4629 - param_2) * 0x10 + 0x20);
    }
  }
  else {
    plVar1 = **(long ***)(param_1 + 0x20) + (long)param_2 * 2;
    plVar3 = &luaO_nilobject_;
    if (plVar1 < *(long **)(param_1 + 0x10)) {
      plVar3 = plVar1;
    }
  }
  return *(int *)(plVar3 + 1) == 0x66 || *(int *)(plVar3 + 1) == 0x16;
}


