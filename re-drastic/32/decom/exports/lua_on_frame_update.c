/*
 * Ghidra decompilation
 *
 * Function : lua_on_frame_update
 * Address  : 080a7ce8
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void lua_on_frame_update(void)

{
  if (lua_state.script_loaded != '\0') {
    lua_getglobal(lua_state.lua,"on_frame_update");
    lua_pcallk(lua_state.lua,0,-1,0,0,(lua_KFunction)0x0);
  }
  return;
}


