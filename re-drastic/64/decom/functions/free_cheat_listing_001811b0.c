/*
 * Ghidra decompilation
 *
 * Function : free_cheat_listing
 * Address  : 001811b0
 * Program  : drastic64
 */


void free_cheat_listing(long param_1)

{
  free(*(void **)(param_1 + 8));
  free(*(void **)(param_1 + 0x18));
  free(*(void **)(param_1 + 0x20));
  return;
}


