/*
 * Ghidra decompilation
 *
 * Function : FUN_080d0d54
 * Address  : 080d0d54
 * Program  : drastic16
 */


int FUN_080d0d54(int param_1)

{
  uint local_c;
  
  for (local_c = 0; local_c < 0x20; local_c = local_c + 1) {
    if (*(int *)(param_1 + local_c * 4) != 0) {
      free(*(void **)(param_1 + local_c * 4));
    }
  }
  return param_1;
}


