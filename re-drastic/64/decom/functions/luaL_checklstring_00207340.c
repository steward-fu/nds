/*
 * Ghidra decompilation
 *
 * Function : luaL_checklstring
 * Address  : 00207340
 * Program  : drastic64
 */


long luaL_checklstring(undefined8 param_1,undefined4 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = lua_tolstring();
  if (lVar1 != 0) {
    return lVar1;
  }
  uVar2 = lua_typename(param_1,4);
  typeerror(param_1,param_2,uVar2);
  return 0;
}


