/*
 * Ghidra decompilation
 *
 * Function : lua_rawgeti
 * Address  : 001f2d20
 * Program  : drastic64
 */


uint lua_rawgeti(long param_1,int param_2,undefined4 param_3)

{
  long *plVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  
  plVar6 = *(long **)(param_1 + 0x10);
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
      plVar3 = plVar6 + (long)param_2 * 2;
    }
  }
  else {
    plVar1 = **(long ***)(param_1 + 0x20) + (long)param_2 * 2;
    plVar3 = &luaO_nilobject_;
    if (plVar1 < plVar6) {
      plVar3 = plVar1;
    }
  }
  plVar3 = (long *)luaH_getint(*plVar3,param_3);
  lVar4 = *(long *)(param_1 + 0x10);
  lVar5 = plVar3[1];
  *plVar6 = *plVar3;
  plVar6[1] = lVar5;
  uVar2 = *(uint *)(lVar4 + 8);
  *(long *)(param_1 + 0x10) = lVar4 + 0x10;
  return uVar2 & 0xf;
}


