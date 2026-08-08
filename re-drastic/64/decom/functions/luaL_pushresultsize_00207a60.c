/*
 * Ghidra decompilation
 *
 * Function : luaL_pushresultsize
 * Address  : 00207a60
 * Program  : drastic64
 */


void luaL_pushresultsize(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = param_1[3];
  param_1[2] = param_2 + param_1[2];
  lua_pushlstring(lVar1,*param_1);
  if ((long *)*param_1 != param_1 + 4) {
    lua_rotate(lVar1,0xfffffffe,0xffffffff);
    lua_settop(lVar1,0xfffffffe);
    return;
  }
  return;
}


