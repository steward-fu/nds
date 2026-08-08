/*
 * Ghidra decompilation
 *
 * Function : f_tostring
 * Address  : 081293dc
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int f_tostring(lua_State *L)

{
  undefined4 *puVar1;
  LStream *p;
  
  puVar1 = (undefined4 *)luaL_checkudata(L,1,"FILE*");
  if (puVar1[1] != 0) {
    lua_pushfstring(L,"file (%p)",*puVar1);
    return 1;
  }
  lua_pushlstring(L,"file (closed)",0xd);
  return 1;
}


