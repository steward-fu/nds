/*
 * Ghidra decompilation
 *
 * Function : FUN_080b3ecc
 * Address  : 080b3ecc
 * Program  : drastic16
 */


void FUN_080b3ecc(int param_1)

{
  uint local_14;
  uint local_10;
  uint local_c;
  
  if (*(int *)(param_1 + 4) == 0) {
    for (local_c = 0; local_c < 0x100; local_c = local_c + 1) {
      local_10 = local_c;
      for (local_14 = 0; local_14 < 8; local_14 = local_14 + 1) {
        if ((local_10 & 1) == 0) {
          local_10 = local_10 >> 1;
        }
        else {
          local_10 = local_10 >> 1 ^ 0xedb88320;
        }
      }
      *(uint *)(param_1 + local_c * 4) = local_10;
    }
  }
  return;
}


