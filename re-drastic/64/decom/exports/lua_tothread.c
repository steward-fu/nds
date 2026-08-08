/*
 * Ghidra decompilation
 *
 * Function : lua_tothread
 * Address  : 001f2150
 * Program  : drastic64
 */


long lua_tothread(long param_1,int param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  
  if (param_2 < 1) {
    if (param_2 < -0xf4627) {
      if (param_2 == -0xf4628) {
        plVar3 = (long *)(*(long *)(param_1 + 0x18) + 0x40);
      }
      else {
        plVar3 = **(long ***)(param_1 + 0x20);
        if ((*(int *)(plVar3 + 1) == 0x16) ||
           (lVar2 = *plVar3, (int)(uint)*(byte *)(lVar2 + 10) < -0xf4628 - param_2)) {
          plVar3 = &luaO_nilobject_;
        }
        else {
          plVar3 = (long *)(lVar2 + (long)(-0xf4629 - param_2) * 0x10 + 0x20);
        }
      }
    }
    else {
      plVar3 = (long *)(*(long *)(param_1 + 0x10) + (long)param_2 * 0x10);
    }
  }
  else {
    plVar1 = **(long ***)(param_1 + 0x20) + (long)param_2 * 2;
    plVar3 = &luaO_nilobject_;
    if (plVar1 < *(long **)(param_1 + 0x10)) {
      plVar3 = plVar1;
    }
  }
  lVar2 = 0;
  if (*(int *)(plVar3 + 1) == 0x48) {
    lVar2 = *plVar3;
  }
  return lVar2;
}


