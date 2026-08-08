/*
 * Ghidra decompilation
 *
 * Function : lua_rawseti
 * Address  : 001f3660
 * Program  : drastic64
 */


void lua_rawseti(long param_1,int param_2,undefined8 param_3)

{
  long *plVar1;
  long lVar2;
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
           (lVar2 = *plVar3, (int)(uint)*(byte *)(lVar2 + 10) < -0xf4628 - param_2)) {
          plVar3 = &luaO_nilobject_;
        }
        else {
          plVar3 = (long *)(lVar2 + (long)(-0xf4629 - param_2) * 0x10 + 0x20);
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
  lVar5 = *plVar3;
  luaH_setint(param_1,lVar5,param_3,plVar4 + -2);
  lVar2 = *(long *)(param_1 + 0x10);
  if ((((*(uint *)(lVar2 + -8) >> 6 & 1) != 0) && ((*(byte *)(lVar5 + 9) >> 2 & 1) != 0)) &&
     ((*(byte *)(*(long *)(lVar2 + -0x10) + 9) & 3) != 0)) {
    luaC_barrierback_(param_1,lVar5);
    lVar2 = *(long *)(param_1 + 0x10);
  }
  *(long *)(param_1 + 0x10) = lVar2 + -0x10;
  return;
}


