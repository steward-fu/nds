/*
 * Ghidra decompilation
 *
 * Function : lua_is_active
 * Address  : 00189cf0
 * Program  : drastic64
 */


bool lua_is_active(void)

{
  return DAT_004ec3f0 != 0 && DAT_004ec3f8 != '\0';
}


