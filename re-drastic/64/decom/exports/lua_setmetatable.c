/*
 * Ghidra decompilation
 *
 * Function : lua_setmetatable
 * Address  : 001f38f0
 * Program  : drastic64
 */


undefined8 lua_setmetatable(long param_1,int param_2)

{
  long *plVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  
  plVar3 = *(long **)(param_1 + 0x10);
  if (param_2 < 1) {
    plVar6 = plVar3 + (long)param_2 * 2;
    if (param_2 < -0xf4627) {
      if (param_2 == -0xf4628) {
        plVar6 = (long *)(*(long *)(param_1 + 0x18) + 0x40);
      }
      else {
        plVar6 = **(long ***)(param_1 + 0x20);
        if ((*(int *)(plVar6 + 1) == 0x16) ||
           (lVar5 = *plVar6, (int)(uint)*(byte *)(lVar5 + 10) < -0xf4628 - param_2)) {
          plVar6 = &luaO_nilobject_;
        }
        else {
          plVar6 = (long *)(lVar5 + (long)(-0xf4629 - param_2) * 0x10 + 0x20);
        }
      }
    }
  }
  else {
    plVar1 = **(long ***)(param_1 + 0x20) + (long)param_2 * 2;
    plVar6 = &luaO_nilobject_;
    if (plVar1 < plVar3) {
      plVar6 = plVar1;
    }
  }
  uVar2 = *(uint *)(plVar6 + 1) & 0xf;
  if (*(int *)(plVar3 + -1) == 0) {
    if (uVar2 != 5) {
      lVar5 = 0;
      if (uVar2 == 7) {
        *(undefined8 *)(*plVar6 + 0x10) = 0;
        *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -0x10;
        return 1;
      }
LAB_001f3984:
      *(long *)(*(long *)(param_1 + 0x18) + (ulong)uVar2 * 8 + 0x1b8) = lVar5;
      *(long **)(param_1 + 0x10) = plVar3 + -2;
      return 1;
    }
    *(undefined8 *)(*plVar6 + 0x28) = 0;
    lVar5 = *(long *)(param_1 + 0x10);
  }
  else {
    lVar5 = plVar3[-2];
    if (uVar2 == 5) {
      *(long *)(*plVar6 + 0x28) = lVar5;
    }
    else {
      if (uVar2 != 7) goto LAB_001f3984;
      *(long *)(*plVar6 + 0x10) = lVar5;
    }
    if (lVar5 != 0) {
      lVar4 = *plVar6;
      if (((*(byte *)(lVar4 + 9) >> 2 & 1) != 0) && ((*(byte *)(lVar5 + 9) & 3) != 0)) {
        luaC_barrier_(param_1);
        lVar4 = *plVar6;
      }
      luaC_checkfinalizer(param_1,lVar4,lVar5);
      *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -0x10;
      return 1;
    }
    lVar5 = *(long *)(param_1 + 0x10);
  }
  *(long *)(param_1 + 0x10) = lVar5 + -0x10;
  return 1;
}


