/*
 * Ghidra decompilation
 *
 * Function : lua_on_load_game
 * Address  : 080a7c24
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void lua_on_load_game(char *game_file_name)

{
  if (lua_state.script_loaded != '\0') {
    if (lua_state.game_loaded != '\0') {
      lua_getglobal(lua_state.lua,"on_unload");
      lua_pcallk(lua_state.lua,0,-1,0,0,(lua_KFunction)0x0);
      lua_state.game_loaded = '\0';
    }
    lua_getglobal(lua_state.lua,"on_load");
    lua_pushstring(lua_state.lua,game_file_name);
    lua_pcallk(lua_state.lua,1,-1,0,0,(lua_KFunction)0x0);
    lua_state.game_loaded = '\x01';
  }
  return;
}


