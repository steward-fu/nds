/*
 * Ghidra decompilation
 *
 * Function : lua_on_frame_update
 * Address  : 00189f10
 * Program  : drastic64
 */


void lua_on_frame_update(void)

{
  if (DAT_004ec3f8 == '\0') {
    return;
  }
  lua_getglobal(DAT_004ec3f0,"on_frame_update");
  lua_pcallk(DAT_004ec3f0,0,0xffffffff,0,0,0);
  return;
}


