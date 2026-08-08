/*
 * Ghidra decompilation
 *
 * Function : lua_upvalueid
 * Address  : 001f4800
 * Program  : drastic64
 */


long lua_upvalueid(long param_1,int param_2,int param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
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
      plVar2 = (long *)(*(long *)(param_1 + 0x10) + (long)param_2 * 0x10);
    }
  }
  else {
    plVar1 = **(long ***)(param_1 + 0x20) + (long)param_2 * 2;
    plVar2 = &luaO_nilobject_;
    if (plVar1 < *(long **)(param_1 + 0x10)) {
      plVar2 = plVar1;
    }
  }
  if ((*(uint *)(plVar2 + 1) & 0x3f) == 6) {
    return *(long *)(*plVar2 + (long)(param_3 + -1) * 8 + 0x20);
  }
  if ((*(uint *)(plVar2 + 1) & 0x3f) != 0x26) {
    return 0;
  }
  return *plVar2 + ((long)(param_3 + -1) + 2) * 0x10;
}


