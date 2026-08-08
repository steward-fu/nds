/*
 * Ghidra decompilation
 *
 * Function : lua_isinteger
 * Address  : 001f1200
 * Program  : drastic64
 */


bool lua_isinteger(long param_1,int param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  if (param_2 < 1) {
    if (-0xf4628 < param_2) {
      return *(int *)(*(long *)(param_1 + 0x10) + (long)param_2 * 0x10 + 8) == 0x13;
    }
    if (param_2 == -0xf4628) {
      plVar2 = (long *)(*(long *)(param_1 + 0x18) + 0x40);
    }
    else {
      plVar2 = **(long ***)(param_1 + 0x20);
      if ((*(int *)(plVar2 + 1) == 0x16) ||
         (lVar3 = *plVar2, (int)(uint)*(byte *)(lVar3 + 10) < -0xf4628 - param_2)) {
        return DAT_00229c08 == 0x13;
      }
      plVar2 = (long *)(lVar3 + (long)(-0xf4629 - param_2) * 0x10 + 0x20);
    }
  }
  else {
    plVar1 = **(long ***)(param_1 + 0x20) + (long)param_2 * 2;
    plVar2 = &luaO_nilobject_;
    if (plVar1 < *(long **)(param_1 + 0x10)) {
      plVar2 = plVar1;
    }
  }
  return *(int *)(plVar2 + 1) == 0x13;
}


