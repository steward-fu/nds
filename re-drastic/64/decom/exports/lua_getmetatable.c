/*
 * Ghidra decompilation
 *
 * Function : lua_getmetatable
 * Address  : 001f2fd0
 * Program  : drastic64
 */


bool lua_getmetatable(long param_1,int param_2)

{
  long *plVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  
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
  uVar2 = *(uint *)(plVar3 + 1) & 0xf;
  if (uVar2 == 5) {
    lVar4 = *(long *)(*plVar3 + 0x28);
  }
  else if (uVar2 == 7) {
    lVar4 = *(long *)(*plVar3 + 0x10);
  }
  else {
    lVar4 = *(long *)(*(long *)(param_1 + 0x18) + (ulong)uVar2 * 8 + 0x1b8);
  }
  if (lVar4 != 0) {
    plVar3 = *(long **)(param_1 + 0x10);
    *plVar3 = lVar4;
    *(undefined4 *)(plVar3 + 1) = 0x45;
    *(long **)(param_1 + 0x10) = plVar3 + 2;
  }
  return lVar4 != 0;
}


