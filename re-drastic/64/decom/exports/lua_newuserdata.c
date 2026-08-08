/*
 * Ghidra decompilation
 *
 * Function : lua_newuserdata
 * Address  : 001f4460
 * Program  : drastic64
 */


long lua_newuserdata(long param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  if (0 < *(long *)(*(long *)(param_1 + 0x18) + 0x18)) {
    luaC_step();
  }
  lVar1 = luaS_newudata(param_1,param_2);
  plVar2 = *(long **)(param_1 + 0x10);
  *plVar2 = lVar1;
  *(undefined4 *)(plVar2 + 1) = 0x47;
  *(long **)(param_1 + 0x10) = plVar2 + 2;
  return lVar1 + 0x28;
}


