/*
 * Ghidra decompilation
 *
 * Function : lua_rawget
 * Address  : 001f2c40
 * Program  : drastic64
 */


uint lua_rawget(long param_1,int param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 0x10);
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
      plVar2 = plVar5 + (long)param_2 * 2;
    }
  }
  else {
    plVar1 = **(long ***)(param_1 + 0x20) + (long)param_2 * 2;
    plVar2 = &luaO_nilobject_;
    if (plVar1 < plVar5) {
      plVar2 = plVar1;
    }
  }
  plVar2 = (long *)luaH_get(*plVar2,plVar5 + -2);
  lVar3 = *(long *)(param_1 + 0x10);
  lVar4 = plVar2[1];
  plVar5[-2] = *plVar2;
  plVar5[-1] = lVar4;
  return *(uint *)(lVar3 + -8) & 0xf;
}


