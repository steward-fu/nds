/*
 * Ghidra decompilation
 *
 * Function : lua_len
 * Address  : 001f4320
 * Program  : drastic64
 */


void lua_len(long param_1,int param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = *(long **)(param_1 + 0x10);
  if (param_2 < 1) {
    if (-0xf4628 < param_2) {
      luaV_objlen(param_1,plVar3,plVar3 + (long)param_2 * 2);
      *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 0x10;
      return;
    }
    if (param_2 == -0xf4628) {
      plVar2 = (long *)(*(long *)(param_1 + 0x18) + 0x40);
    }
    else {
      plVar2 = **(long ***)(param_1 + 0x20);
      if ((*(int *)(plVar2 + 1) == 0x16) ||
         (lVar4 = *plVar2, (int)(uint)*(byte *)(lVar4 + 10) < -0xf4628 - param_2)) {
        luaV_objlen(param_1,plVar3,&luaO_nilobject_);
        *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 0x10;
        return;
      }
      plVar2 = (long *)(lVar4 + (long)(-0xf4629 - param_2) * 0x10 + 0x20);
    }
  }
  else {
    plVar1 = **(long ***)(param_1 + 0x20) + (long)param_2 * 2;
    plVar2 = &luaO_nilobject_;
    if (plVar1 < plVar3) {
      plVar2 = plVar1;
    }
  }
  luaV_objlen(param_1,plVar3,plVar2);
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 0x10;
  return;
}


