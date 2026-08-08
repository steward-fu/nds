/*
 * Ghidra decompilation
 *
 * Function : lua_install_platform_module
 * Address  : 080a7afc
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void lua_install_platform_module(char *module_name,lua_platform_handler_struct *handlers)

{
  if ((lua_state.lua != (lua_State *)0x0) && (lua_state.script_loaded == '\0')) {
    luaL_checkversion_(lua_state.lua,503.0,0x44);
    lua_createtable(lua_state.lua,0,-1);
    luaL_setfuncs(lua_state.lua,(luaL_Reg *)handlers,0);
    lua_setglobal(lua_state.lua,module_name);
    return;
  }
  return;
}


