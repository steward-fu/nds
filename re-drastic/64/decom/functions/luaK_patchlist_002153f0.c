/*
 * Ghidra decompilation
 *
 * Function : luaK_patchlist
 * Address  : 002153f0
 * Program  : drastic64
 */


void luaK_patchlist(long param_1,undefined4 param_2,int param_3,undefined8 param_4)

{
  if (*(int *)(param_1 + 0x20) != param_3) {
    patchlistaux();
    return;
  }
  *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x20);
  luaK_concat(param_1,param_1 + 0x28,param_2,param_4,param_3);
  return;
}


