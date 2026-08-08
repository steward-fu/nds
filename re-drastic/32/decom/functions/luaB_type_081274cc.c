/*
 * Ghidra decompilation
 *
 * Function : luaB_type
 * Address  : 081274cc
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int luaB_type(lua_State *L)

{
  int iVar1;
  
  luaL_checkany(L,1);
  iVar1 = lua_type(L,1);
  lua_pushvalue(L,-0xf4629 - iVar1);
  return 1;
}


