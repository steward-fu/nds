/*
 * Ghidra decompilation
 *
 * Function : lua_seti
 * Address  : 001f3450
 * Program  : drastic64
 */


void lua_seti(long param_1,int param_2,undefined4 param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  
  plVar2 = *(long **)(param_1 + 0x10);
  if (param_2 < 1) {
    if (param_2 < -0xf4627) {
      if (param_2 == -0xf4628) {
        plVar3 = (long *)(*(long *)(param_1 + 0x18) + 0x40);
      }
      else {
        plVar3 = **(long ***)(param_1 + 0x20);
        if ((*(int *)(plVar3 + 1) == 0x16) ||
           (lVar4 = *plVar3, (int)(uint)*(byte *)(lVar4 + 10) < -0xf4628 - param_2)) {
          plVar3 = &luaO_nilobject_;
        }
        else {
          plVar3 = (long *)(lVar4 + (long)(-0xf4629 - param_2) * 0x10 + 0x20);
        }
      }
    }
    else {
      plVar3 = plVar2 + (long)param_2 * 2;
    }
  }
  else {
    plVar1 = **(long ***)(param_1 + 0x20) + (long)param_2 * 2;
    plVar3 = &luaO_nilobject_;
    if (plVar1 < plVar2) {
      plVar3 = plVar1;
    }
  }
  *(long **)(param_1 + 0x10) = plVar2 + 2;
  *(undefined4 *)plVar2 = param_3;
  *(undefined4 *)(plVar2 + 1) = 0x13;
  luaV_settable(param_1,plVar3,plVar2,plVar2 + -2);
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -0x20;
  return;
}


