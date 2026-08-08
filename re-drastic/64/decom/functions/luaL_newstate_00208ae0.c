/*
 * Ghidra decompilation
 *
 * Function : luaL_newstate
 * Address  : 00208ae0
 * Program  : drastic64
 */


long luaL_newstate(void)

{
  long lVar1;
  
  lVar1 = lua_newstate(l_alloc,0);
  if (lVar1 != 0) {
    lua_atpanic(lVar1,panic);
  }
  return lVar1;
}


