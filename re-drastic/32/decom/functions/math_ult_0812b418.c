/*
 * Ghidra decompilation
 *
 * Function : math_ult
 * Address  : 0812b418
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int math_ult(lua_State *L)

{
  uint uVar1;
  lua_Integer a;
  uint uVar2;
  lua_Integer b;
  
  uVar1 = luaL_checkinteger(L,1);
  uVar2 = luaL_checkinteger(L,2);
  lua_pushboolean(L,(uint)(uVar1 < uVar2));
  return 1;
}


