/*
 * Ghidra decompilation
 *
 * Function : lua_version
 * Address  : 0810dc50
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

lua_Number * lua_version(lua_State *L)

{
  lua_Number *plVar1;
  
  if (L == (lua_State *)0x0) {
    plVar1 = &lua_version::version;
  }
  else {
    plVar1 = L->l_G->version;
  }
  return plVar1;
}


