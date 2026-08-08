/*
 * Ghidra decompilation
 *
 * Function : lua_rawlen
 * Address  : 001f1e80
 * Program  : drastic64
 */


long lua_rawlen(long param_1,int param_2)

{
  long *plVar1;
  uint uVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  
  if (param_2 < 1) {
    if (param_2 < -0xf4627) {
      if (param_2 == -0xf4628) {
        plVar4 = (long *)(*(long *)(param_1 + 0x18) + 0x40);
      }
      else {
        plVar4 = **(long ***)(param_1 + 0x20);
        if ((*(int *)(plVar4 + 1) == 0x16) ||
           (lVar5 = *plVar4, (int)(uint)*(byte *)(lVar5 + 10) < -0xf4628 - param_2)) {
          plVar4 = &luaO_nilobject_;
        }
        else {
          plVar4 = (long *)(lVar5 + (long)(-0xf4629 - param_2) * 0x10 + 0x20);
        }
      }
    }
    else {
      plVar4 = (long *)(*(long *)(param_1 + 0x10) + (long)param_2 * 0x10);
    }
  }
  else {
    plVar1 = **(long ***)(param_1 + 0x20) + (long)param_2 * 2;
    plVar4 = &luaO_nilobject_;
    if (plVar1 < *(long **)(param_1 + 0x10)) {
      plVar4 = plVar1;
    }
  }
  uVar2 = *(uint *)(plVar4 + 1) & 0xf;
  if (uVar2 == 5) {
    iVar3 = luaH_getn(*plVar4);
    return (long)iVar3;
  }
  if (uVar2 == 7) {
    return *(long *)(*plVar4 + 0x18);
  }
  if (uVar2 == 4) {
    return *(long *)(*plVar4 + 0x10);
  }
  return 0;
}


