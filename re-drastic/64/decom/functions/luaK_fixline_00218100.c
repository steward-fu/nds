/*
 * Ghidra decompilation
 *
 * Function : luaK_fixline
 * Address  : 00218100
 * Program  : drastic64
 */


void luaK_fixline(long *param_1,undefined4 param_2)

{
  *(undefined4 *)(*(long *)(*param_1 + 0x48) + (long)*(int *)(param_1 + 4) * 4 + -4) = param_2;
  return;
}


