/*
 * Ghidra decompilation
 *
 * Function : lua_pushlstring
 * Address  : 001f2530
 * Program  : drastic64
 */


long lua_pushlstring(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long *plVar2;
  
  if (0 < *(long *)(*(long *)(param_1 + 0x18) + 0x18)) {
    luaC_step();
  }
  lVar1 = luaS_newlstr(param_1,param_2,param_3);
  plVar2 = *(long **)(param_1 + 0x10);
  *plVar2 = lVar1;
  *(uint *)(plVar2 + 1) = *(byte *)(lVar1 + 8) | 0x40;
  *(long **)(param_1 + 0x10) = plVar2 + 2;
  return lVar1 + 0x20;
}


