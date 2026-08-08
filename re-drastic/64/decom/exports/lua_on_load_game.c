/*
 * Ghidra decompilation
 *
 * Function : lua_on_load_game
 * Address  : 00189e50
 * Program  : drastic64
 */


void lua_on_load_game(undefined8 param_1)

{
  if (DAT_004ec3f8 != '\0') {
    if (DAT_004ec3f9 != '\0') {
      lua_getglobal(DAT_004ec3f0,"on_unload");
      lua_pcallk(DAT_004ec3f0,0,0xffffffff,0,0,0);
      DAT_004ec3f9 = '\0';
    }
    lua_getglobal(DAT_004ec3f0,"on_load");
    lua_pushstring(DAT_004ec3f0,param_1);
    lua_pcallk(DAT_004ec3f0,1,0xffffffff,0,0,0);
    DAT_004ec3f9 = '\x01';
  }
  return;
}


