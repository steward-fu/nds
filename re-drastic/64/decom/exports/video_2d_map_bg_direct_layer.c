/*
 * Ghidra decompilation
 *
 * Function : video_2d_map_bg_direct_layer
 * Address  : 00141550
 * Program  : drastic64
 */


void video_2d_map_bg_direct_layer(long *param_1,ulong param_2)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  
  param_2 = param_2 & 0xffffffff;
  if ((*(ushort *)(param_1 + param_2 * 0x16 + 0x2b) & 0xc0fc) != 0x4084) {
    return;
  }
  if (param_1[param_2 * 0x16 + 0x29] != 0) {
    return;
  }
  if (*(short *)((long)param_1 + param_2 * 0xb0 + 0x15e) != 0x100) {
    return;
  }
  if (*(short *)(param_1 + param_2 * 0x16 + 0x2c) != 0) {
    return;
  }
  if ((param_1[param_2 * 0x16 + 0x2c] & 0xffffffff0000U) != 0x10000000000) {
    return;
  }
  lVar2 = *param_1;
  uVar3 = 0xff;
  if ((*(int *)(lVar2 + 0x10) == 6) &&
     (uVar3 = 0,
     (*(uint *)(param_1 + param_2 * 0x16 + 0x20) & 0xfffe0000) != *(int *)(lVar2 + 0x18) * 0x4000))
  {
    uVar3 = 0xff;
  }
  if ((*(int *)(lVar2 + 0x20) == 6) &&
     ((*(uint *)(param_1 + param_2 * 0x16 + 0x20) & 0xfffe0000) == *(int *)(lVar2 + 0x28) * 0x4000))
  {
    uVar3 = 1;
  }
  if ((*(int *)(lVar2 + 0x30) == 6) &&
     ((*(uint *)(param_1 + param_2 * 0x16 + 0x20) & 0xfffe0000) == *(int *)(lVar2 + 0x38) * 0x4000))
  {
    uVar3 = 2;
    if (*(int *)(lVar2 + 0x40) != 6) goto LAB_001415e8;
LAB_001416b0:
    if ((*(uint *)(param_1 + param_2 * 0x16 + 0x20) & 0xfffe0000) == *(int *)(lVar2 + 0x48) * 0x4000
       ) {
      uVar3 = 3;
      goto LAB_001415e8;
    }
  }
  else if (*(int *)(lVar2 + 0x40) == 6) goto LAB_001416b0;
  if (uVar3 == 0xff) {
    return;
  }
LAB_001415e8:
  uVar1 = *(uint *)(param_1 + param_2 * 0x16 + 0x20);
  if ((uVar1 & 0x1ffff) < 0x8002) {
    if ((0x3f << ((ulong)(uVar1 >> 0xe) & 7) &
        ((byte)polygon_sort_list_13776[lVar2 + (ulong)uVar3 + 0x6e200] ^ 0xffffffff)) == 0) {
      param_1[param_2 * 0x16 + 0x1d] =
           *(long *)(lVar2 + ((ulong)uVar3 + 0x8b104) * 8) +
           (ulong)((uVar1 & 0x1fffe) + ((uVar1 & 0x1ffff) >> 1)) * 2;
    }
    else {
      param_1[param_2 * 0x16 + 0x1d] = 0;
    }
  }
  param_1[param_2 * 0x16 + 0x1c] = param_1[1] + (ulong)uVar1;
  return;
}


