/*
 * Ghidra decompilation
 *
 * Function : lua_gettop
 * Address  : 001f0c20
 * Program  : drastic64
 */


ulong lua_gettop(long param_1)

{
  return (ulong)(*(long *)(param_1 + 0x10) - (**(long **)(param_1 + 0x20) + 0x10)) >> 4 & 0xffffffff
  ;
}


