/*
 * Ghidra decompilation
 *
 * Function : lua_quit
 * Address  : 080a7a48
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void lua_quit(void)

{
  if (lua_state.lua != (lua_State *)0x0) {
    if ((lua_state.game_loaded != '\0') && (lua_state.script_loaded != '\0')) {
      lua_getglobal(lua_state.lua,"on_unload");
      lua_pcallk(lua_state.lua,0,-1,0,0,(lua_KFunction)0x0);
      lua_state.game_loaded = '\0';
    }
    lua_close(lua_state.lua);
    lua_state.lua = (lua_State *)0x0;
    lua_state.script_loaded = '\0';
  }
  return;
}


