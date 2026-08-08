/*
 * Ghidra decompilation
 *
 * Function : FUN_080b42c0
 * Address  : 080b42c0
 * Program  : drastic16
 */


ushort FUN_080b42c0(ushort param_1,int param_2,uint param_3)

{
  ushort local_12;
  uint local_c;
  
  local_12 = param_1;
  for (local_c = 0; local_c < param_3; local_c = local_c + 1) {
    local_12 = *(byte *)(param_2 + local_c) + local_12;
    local_12 = (ushort)((local_12 & 0x7fff) << 1) | (ushort)((int)(uint)local_12 >> 0xf);
  }
  return local_12;
}


