/*
 * Ghidra decompilation
 *
 * Function : lua_gc
 * Address  : 001f3f80
 * Program  : drastic64
 */


ulong lua_gc(long param_1,int param_2,int param_3)

{
  uint uVar1;
  undefined uVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0x18);
  if (param_2 == 4) {
    return (ulong)((int)*(undefined8 *)(lVar4 + 0x10) + (int)*(undefined8 *)(lVar4 + 0x18) & 0x3ff);
  }
  if (param_2 < 5) {
    if (param_2 == 2) {
      luaC_fullgc(param_1,0);
      return 0;
    }
    if (param_2 == 3) {
      return (ulong)(*(long *)(lVar4 + 0x10) + *(long *)(lVar4 + 0x18)) >> 10 & 0xffffffff;
    }
    if (param_2 == 0) {
      *(undefined *)(lVar4 + 0x57) = 0;
      return 0;
    }
    if (param_2 == 1) {
      luaE_setdebt(lVar4,0);
      *(undefined *)(lVar4 + 0x57) = 1;
      return 0;
    }
  }
  else {
    if (param_2 == 7) {
      if (param_3 < 0x28) {
        param_3 = 0x28;
      }
      uVar1 = *(uint *)(lVar4 + 0xd0);
      *(int *)(lVar4 + 0xd0) = param_3;
      return (ulong)uVar1;
    }
    if (param_2 < 8) {
      if (param_2 == 5) {
        uVar2 = *(undefined *)(lVar4 + 0x57);
        *(undefined *)(lVar4 + 0x57) = 1;
        if (param_3 == 0) {
          luaE_setdebt(lVar4,0xfffffffffffff380);
          luaC_step(param_1);
          *(undefined *)(lVar4 + 0x57) = uVar2;
        }
        else {
          lVar3 = *(long *)(lVar4 + 0x18) + (long)param_3 * 0x400;
          luaE_setdebt(lVar4,lVar3);
          if (0 < *(long *)(*(long *)(param_1 + 0x18) + 0x18)) {
            luaC_step(param_1);
          }
          *(undefined *)(lVar4 + 0x57) = uVar2;
          if (lVar3 < 1) {
            return 0;
          }
        }
        return (ulong)(*(char *)(lVar4 + 0x55) == '\a');
      }
      if (param_2 == 6) {
        uVar1 = *(uint *)(lVar4 + 0xcc);
        *(int *)(lVar4 + 0xcc) = param_3;
        return (ulong)uVar1;
      }
    }
    else if (param_2 == 9) {
      return (ulong)*(byte *)(lVar4 + 0x57);
    }
  }
  return 0xffffffff;
}


