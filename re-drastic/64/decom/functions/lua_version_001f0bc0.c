/*
 * Ghidra decompilation
 *
 * Function : lua_version
 * Address  : 001f0bc0
 * Program  : drastic64
 */


undefined1 * lua_version(long param_1)

{
  if (param_1 != 0) {
    return *(undefined1 **)(*(long *)(param_1 + 0x18) + 0xe8);
  }
  return &version_4688;
}


