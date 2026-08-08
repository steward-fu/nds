/*
 * Ghidra decompilation
 *
 * Function : lua_type
 * Address  : 001f1030
 * Program  : drastic64
 */


uint lua_type(long param_1,int param_2)

{
  long *plVar1;
  long lVar2;
  
  if (param_2 < 1) {
    if (param_2 < -0xf4627) {
      if (param_2 == -0xf4628) {
        plVar1 = (long *)(*(long *)(param_1 + 0x18) + 0x40);
      }
      else {
        plVar1 = **(long ***)(param_1 + 0x20);
        if (*(int *)(plVar1 + 1) == 0x16) {
          return 0xffffffff;
        }
        lVar2 = *plVar1;
        if ((int)(uint)*(byte *)(lVar2 + 10) < -0xf4628 - param_2) {
          return 0xffffffff;
        }
        plVar1 = (long *)(lVar2 + (long)(-0xf4629 - param_2) * 0x10 + 0x20);
      }
    }
    else {
      plVar1 = (long *)(*(long *)(param_1 + 0x10) + (long)param_2 * 0x10);
    }
  }
  else {
    plVar1 = **(long ***)(param_1 + 0x20) + (long)param_2 * 2;
    if (*(long **)(param_1 + 0x10) <= plVar1) {
      return 0xffffffff;
    }
  }
  if (plVar1 != &luaO_nilobject_) {
    return *(uint *)(plVar1 + 1) & 0xf;
  }
  return 0xffffffff;
}


