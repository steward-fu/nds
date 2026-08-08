/*
 * Ghidra decompilation
 *
 * Function : lua_absindex
 * Address  : 001f0be0
 * Program  : drastic64
 */


int lua_absindex(long param_1,int param_2)

{
  if (param_2 + 0xf4627U < 0xf4628) {
    param_2 = param_2 + (int)(*(long *)(param_1 + 0x10) - **(long **)(param_1 + 0x20) >> 4);
  }
  return param_2;
}


