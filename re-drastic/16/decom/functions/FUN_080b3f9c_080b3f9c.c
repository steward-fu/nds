/*
 * Ghidra decompilation
 *
 * Function : FUN_080b3f9c
 * Address  : 080b3f9c
 * Program  : drastic16
 */


void FUN_080b3f9c(void)

{
  uint local_14;
  uint local_10;
  uint local_c;
  
  FUN_080b3ecc(&DAT_081cd97c);
  for (local_c = 0; local_c < 0x100; local_c = local_c + 1) {
    local_10 = *(uint *)(&DAT_081cd97c + local_c * 4);
    for (local_14 = 1; local_14 < 8; local_14 = local_14 + 1) {
      local_10 = *(uint *)(&DAT_081cd97c + (local_10 & 0xff) * 4) ^ local_10 >> 8;
      *(uint *)(&DAT_081cd97c + (local_14 * 0x100 + local_c) * 4) = local_10;
    }
  }
  return;
}


