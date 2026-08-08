/*
 * Ghidra decompilation
 *
 * Function : lua_get_path
 * Address  : 080a6f34
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int lua_get_path(lua_State *L)

{
  lua_pushstring(lua_state.lua,(lua_state.system)->root_path);
  return 1;
}


