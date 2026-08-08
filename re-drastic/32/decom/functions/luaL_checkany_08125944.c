/*
 * Ghidra decompilation
 *
 * Function : luaL_checkany
 * Address  : 08125944
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void luaL_checkany(lua_State *L,int arg)

{
  int iVar1;
  
  iVar1 = lua_type(L,arg);
  if (iVar1 != -1) {
    return;
  }
  luaL_argerror(L,arg,"value expected");
  return;
}


