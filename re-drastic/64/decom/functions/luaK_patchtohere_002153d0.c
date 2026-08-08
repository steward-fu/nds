/*
 * Ghidra decompilation
 *
 * Function : luaK_patchtohere
 * Address  : 002153d0
 * Program  : drastic64
 */


void luaK_patchtohere(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_1 + 0x20);
  luaK_concat(param_1,param_1 + 0x28,param_2);
  return;
}


