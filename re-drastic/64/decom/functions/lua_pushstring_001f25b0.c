/*
 * Ghidra decompilation
 *
 * Function : lua_pushstring
 * Address  : 001f25b0
 * Program  : drastic64
 */


long lua_pushstring(long param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  
  if (param_2 != 0) {
    if (0 < *(long *)(*(long *)(param_1 + 0x18) + 0x18)) {
      luaC_step();
    }
    lVar1 = luaS_new(param_1,param_2);
    plVar2 = *(long **)(param_1 + 0x10);
    *plVar2 = lVar1;
    *(uint *)(plVar2 + 1) = *(byte *)(lVar1 + 8) | 0x40;
    *(long **)(param_1 + 0x10) = plVar2 + 2;
    return lVar1 + 0x20;
  }
  lVar1 = *(long *)(param_1 + 0x10);
  *(undefined4 *)(lVar1 + 8) = 0;
  *(long *)(param_1 + 0x10) = lVar1 + 0x10;
  return 0;
}


