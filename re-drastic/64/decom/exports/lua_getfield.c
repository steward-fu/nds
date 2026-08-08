/*
 * Ghidra decompilation
 *
 * Function : lua_getfield
 * Address  : 001f2a40
 * Program  : drastic64
 */


uint lua_getfield(long param_1,int param_2,undefined8 param_3)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 0x10);
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
      plVar3 = plVar5 + (long)param_2 * 2;
    }
  }
  else {
    plVar1 = **(long ***)(param_1 + 0x20) + (long)param_2 * 2;
    plVar3 = &luaO_nilobject_;
    if (plVar1 < plVar5) {
      plVar3 = plVar1;
    }
  }
  lVar2 = luaS_new(param_1,param_3);
  lVar4 = *(long *)(param_1 + 0x10);
  *plVar5 = lVar2;
  *(uint *)(plVar5 + 1) = *(byte *)(lVar2 + 8) | 0x40;
  *(long *)(param_1 + 0x10) = lVar4 + 0x10;
  luaV_gettable(param_1,plVar3,lVar4);
  return *(uint *)(*(long *)(param_1 + 0x10) + -8) & 0xf;
}


