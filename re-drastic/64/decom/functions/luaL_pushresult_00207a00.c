/*
 * Ghidra decompilation
 *
 * Function : luaL_pushresult
 * Address  : 00207a00
 * Program  : drastic64
 */


void luaL_pushresult(long *param_1)

{
  long lVar1;
  
  lVar1 = param_1[3];
  lua_pushlstring(lVar1,*param_1,param_1[2]);
  if ((long *)*param_1 != param_1 + 4) {
    lua_rotate(lVar1,0xfffffffe,0xffffffff);
    lua_settop(lVar1,0xfffffffe);
    return;
  }
  return;
}


