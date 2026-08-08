/*
 * Ghidra decompilation
 *
 * Function : gctm
 * Address  : 00213fa0
 * Program  : drastic64
 */


undefined8 gctm(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = luaL_len(param_1,1);
  if (0 < iVar1) {
    do {
      lua_rawgeti(param_1,1,iVar1);
      lua_touserdata(param_1,0xffffffff);
      dlclose();
      lua_settop(param_1,0xfffffffe);
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return 0;
}


