/*
 * Ghidra decompilation
 *
 * Function : lua_get_touch
 * Address  : 00189130
 * Program  : drastic64
 */


undefined8 lua_get_touch(undefined8 param_1)

{
  lua_pushinteger(param_1,(uint)*(ushort *)(DAT_004ec3e0 + 0x80018) |
                          *(int *)(DAT_004ec3e0 + 0x80014) << 0x10);
  return 1;
}


