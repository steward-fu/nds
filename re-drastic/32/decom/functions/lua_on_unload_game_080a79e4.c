/*
 * Ghidra decompilation
 *
 * Function : lua_on_unload_game
 * Address  : 080a79e4
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void lua_on_unload_game(void)

{
  if (lua_state.script_loaded != '\0') {
    lua_getglobal(lua_state.lua,"on_unload");
    lua_pcallk(lua_state.lua,0,-1,0,0,(lua_KFunction)0x0);
    lua_state.game_loaded = '\0';
  }
  return;
}


