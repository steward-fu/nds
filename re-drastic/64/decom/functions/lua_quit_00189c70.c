/*
 * Ghidra decompilation
 *
 * Function : lua_quit
 * Address  : 00189c70
 * Program  : drastic64
 */


void lua_quit(void)

{
  if (DAT_004ec3f0 != 0) {
    if ((DAT_004ec3f9 != '\0') && (DAT_004ec3f8 != '\0')) {
      lua_getglobal(DAT_004ec3f0,"on_unload");
      lua_pcallk(DAT_004ec3f0,0,0xffffffff,0,0,0);
      DAT_004ec3f9 = '\0';
    }
    lua_close(DAT_004ec3f0);
    DAT_004ec3f0 = 0;
    DAT_004ec3f8 = '\0';
  }
  return;
}


