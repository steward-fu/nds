/*
 * Ghidra decompilation
 *
 * Function : FUN_080b15a0
 * Address  : 080b15a0
 * Program  : drastic16
 */


void FUN_080b15a0(int param_1,int param_2)

{
  char acStack_a8 [128];
  uint local_28;
  size_t local_24;
  uint local_20;
  uint local_1c;
  int local_18;
  uint local_14;
  uint local_10;
  int local_c;
  
  FUN_080b3ecc(param_1 + 0xaec);
  FUN_080a05bc(acStack_a8,param_2,0x80);
  local_24 = strlen(acStack_a8);
  *(undefined4 *)(param_1 + 0xfec) = 0xd3a3b879;
  *(undefined4 *)(param_1 + 0xff0) = 0x3f6d12f7;
  *(undefined4 *)(param_1 + 0xff4) = 0x7515a235;
  *(undefined4 *)(param_1 + 0xff8) = 0xa4e7f123;
  memcpy((void *)(param_1 + 0xeec),&DAT_08101c68,0x100);
  for (local_c = 0; local_c < 0x100; local_c = local_c + 1) {
    for (local_10 = 0; local_10 < local_24; local_10 = local_10 + 2) {
      local_14 = *(uint *)(param_1 + (((uint)*(byte *)(param_2 + local_10) - local_c & 0xff) + 0x2ba
                                     ) * 4 + 4);
      local_28 = *(uint *)(param_1 + (((uint)*(byte *)(param_2 + local_10 + 1) + local_c & 0xff) +
                                     0x2ba) * 4 + 4) & 0xff;
      local_18 = 1;
      for (; local_14 = local_14 & 0xff, local_14 != local_28; local_14 = local_14 + 1) {
        FUN_080b24a0(param_1,param_1 + local_14 + 0xeec,
                     param_1 + (local_14 + local_10 + local_18 & 0xff) + 0xeec);
        local_18 = local_18 + 1;
      }
    }
  }
  if ((local_24 & 0xf) != 0) {
    for (local_1c = local_24; local_1c <= (local_24 | 0xf); local_1c = local_1c + 1) {
      acStack_a8[local_1c] = '\0';
    }
  }
  for (local_20 = 0; local_20 < local_24; local_20 = local_20 + 0x10) {
    FUN_080b1868(param_1,acStack_a8 + local_20);
  }
  return;
}


