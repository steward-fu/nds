/*
 * Ghidra decompilation
 *
 * Function : lua_on_unload_game
 * Address  : 00189c00
 * Program  : drastic64
 */


void lua_on_unload_game(void)

{
  if (DAT_004ec3f8 == '\0') {
    return;
  }
  lua_getglobal(DAT_004ec3f0,"on_unload");
  lua_pcallk(DAT_004ec3f0,0,0xffffffff,0,0,0);
  DAT_004ec3f9 = 0;
  return;
}


