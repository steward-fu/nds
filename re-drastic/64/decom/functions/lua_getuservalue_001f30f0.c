/*
 * Ghidra decompilation
 *
 * Function : lua_getuservalue
 * Address  : 001f30f0
 * Program  : drastic64
 */


uint lua_getuservalue(long param_1,int param_2)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 0x10);
  if (param_2 < 1) {
    if (param_2 < -0xf4627) {
      if (param_2 == -0xf4628) {
        plVar4 = (long *)(*(long *)(param_1 + 0x18) + 0x40);
      }
      else {
        plVar4 = **(long ***)(param_1 + 0x20);
        if ((*(int *)(plVar4 + 1) == 0x16) ||
           (lVar3 = *plVar4, (int)(uint)*(byte *)(lVar3 + 10) < -0xf4628 - param_2)) {
          plVar4 = &luaO_nilobject_;
        }
        else {
          plVar4 = (long *)(lVar3 + (long)(-0xf4629 - param_2) * 0x10 + 0x20);
        }
      }
    }
    else {
      plVar4 = plVar5 + (long)param_2 * 2;
    }
  }
  else {
    plVar1 = **(long ***)(param_1 + 0x20) + (long)param_2 * 2;
    plVar4 = &luaO_nilobject_;
    if (plVar1 < plVar5) {
      plVar4 = plVar1;
    }
  }
  lVar3 = *plVar4;
  *plVar5 = *(long *)(lVar3 + 0x20);
  uVar2 = (uint)*(byte *)(lVar3 + 10);
  *(uint *)(plVar5 + 1) = uVar2;
  *(long **)(param_1 + 0x10) = plVar5 + 2;
  return uVar2 & 0xf;
}


