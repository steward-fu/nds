/*
 * Ghidra decompilation
 *
 * Function : lua_next
 * Address  : 001f4170
 * Program  : drastic64
 */


void lua_next(long param_1,int param_2)

{
  long *plVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  
  plVar4 = *(long **)(param_1 + 0x10);
  if (param_2 < 1) {
    if (param_2 < -0xf4627) {
      if (param_2 == -0xf4628) {
        plVar3 = (long *)(*(long *)(param_1 + 0x18) + 0x40);
      }
      else {
        plVar3 = **(long ***)(param_1 + 0x20);
        if ((*(int *)(plVar3 + 1) == 0x16) ||
           (lVar5 = *plVar3, (int)(uint)*(byte *)(lVar5 + 10) < -0xf4628 - param_2)) {
          plVar3 = &luaO_nilobject_;
        }
        else {
          plVar3 = (long *)(lVar5 + (long)(-0xf4629 - param_2) * 0x10 + 0x20);
        }
      }
    }
    else {
      plVar3 = plVar4 + (long)param_2 * 2;
    }
  }
  else {
    plVar1 = **(long ***)(param_1 + 0x20) + (long)param_2 * 2;
    plVar3 = &luaO_nilobject_;
    if (plVar1 < plVar4) {
      plVar3 = plVar1;
    }
  }
  iVar2 = luaH_next(param_1,*plVar3,plVar4 + -2);
  if (iVar2 == 0) {
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -0x10;
    return;
  }
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 0x10;
  return;
}


