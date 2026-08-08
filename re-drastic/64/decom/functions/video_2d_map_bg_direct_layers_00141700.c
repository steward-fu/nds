/*
 * Ghidra decompilation
 *
 * Function : video_2d_map_bg_direct_layers
 * Address  : 00141700
 * Program  : drastic64
 */


void video_2d_map_bg_direct_layers(long *param_1)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  long lVar4;
  
  param_1[0x48] = 0;
  param_1[0x5e] = 0;
  uVar3 = *(uint *)(param_1 + 0x12) & 7;
  if (uVar3 < 5) {
    if (uVar3 < 3) {
      return;
    }
    if ((*(ushort *)(param_1 + 0x6d) & 0xc0fc) != 0x4084) {
      return;
    }
    if (param_1[0x6b] != 0) {
      return;
    }
    if (*(short *)((long)param_1 + 0x36e) != 0x100) {
      return;
    }
    if (*(short *)(param_1 + 0x6e) != 0) {
      return;
    }
    if ((param_1[0x6e] & 0xffffffff0000U) != 0x10000000000) {
      return;
    }
    lVar4 = *param_1;
    uVar3 = 0xff;
    if ((*(int *)(lVar4 + 0x10) == 6) &&
       (uVar3 = 0xff, (*(uint *)(param_1 + 0x62) & 0xfffe0000) == *(int *)(lVar4 + 0x18) * 0x4000))
    {
      uVar3 = 0;
    }
    if ((*(int *)(lVar4 + 0x20) == 6) &&
       ((*(uint *)(param_1 + 0x62) & 0xfffe0000) == *(int *)(lVar4 + 0x28) * 0x4000)) {
      uVar3 = 1;
    }
    if ((*(int *)(lVar4 + 0x30) == 6) &&
       (uVar2 = (ulong)*(uint *)(param_1 + 0x62),
       (*(uint *)(param_1 + 0x62) & 0xfffe0000) == *(int *)(lVar4 + 0x38) * 0x4000)) {
      uVar3 = 2;
      if (*(int *)(lVar4 + 0x40) == 6) {
LAB_00141b00:
        if (((uint)uVar2 & 0xfffe0000) != *(int *)(lVar4 + 0x48) * 0x4000) goto LAB_001419d0;
        uVar3 = 3;
      }
    }
    else {
      if (*(int *)(lVar4 + 0x40) == 6) {
        uVar2 = (ulong)*(uint *)(param_1 + 0x62);
        goto LAB_00141b00;
      }
LAB_001419d0:
      if (uVar3 == 0xff) {
        return;
      }
      uVar2 = (ulong)*(uint *)(param_1 + 0x62);
    }
    uVar1 = (uint)uVar2 & 0x1ffff;
    if (0x8001 < uVar1) goto LAB_0014190c;
    if ((0x3f << (uVar2 >> 0xe & 7) &
        ((byte)polygon_sort_list_13776[lVar4 + (ulong)uVar3 + 0x6e200] ^ 0xffffffff)) == 0) {
      param_1[0x5f] =
           *(long *)(lVar4 + ((ulong)uVar3 + 0x8b104) * 8) +
           (ulong)(((uint)uVar2 & 0x1fffe) + (uVar1 >> 1)) * 2;
      goto LAB_0014190c;
    }
  }
  else {
    if (uVar3 != 5) {
      return;
    }
    lVar4 = *param_1;
    if (((((*(ushort *)(param_1 + 0x57) & 0xc0fc) == 0x4084) && (param_1[0x55] == 0)) &&
        (*(short *)((long)param_1 + 0x2be) == 0x100)) &&
       ((*(short *)(param_1 + 0x58) == 0 && ((param_1[0x58] & 0xffffffff0000U) == 0x10000000000))))
    {
      uVar3 = 0xff;
      if ((*(int *)(lVar4 + 0x10) == 6) &&
         (uVar3 = 0xff, (*(uint *)(param_1 + 0x4c) & 0xfffe0000) == *(int *)(lVar4 + 0x18) * 0x4000)
         ) {
        uVar3 = 0;
      }
      if ((*(int *)(lVar4 + 0x20) == 6) &&
         ((*(uint *)(param_1 + 0x4c) & 0xfffe0000) == *(int *)(lVar4 + 0x28) * 0x4000)) {
        uVar3 = 1;
      }
      if ((*(int *)(lVar4 + 0x30) == 6) &&
         (uVar2 = (ulong)*(uint *)(param_1 + 0x4c),
         (*(uint *)(param_1 + 0x4c) & 0xfffe0000) == *(int *)(lVar4 + 0x38) * 0x4000)) {
        uVar3 = 2;
        if (*(int *)(lVar4 + 0x40) == 6) {
LAB_00141ac0:
          if (((uint)uVar2 & 0xfffe0000) != *(int *)(lVar4 + 0x48) * 0x4000) goto LAB_001417cc;
          uVar3 = 3;
        }
      }
      else {
        if (*(int *)(lVar4 + 0x40) == 6) {
          uVar2 = (ulong)*(uint *)(param_1 + 0x4c);
          goto LAB_00141ac0;
        }
LAB_001417cc:
        if (uVar3 == 0xff) goto LAB_00141820;
        uVar2 = (ulong)*(uint *)(param_1 + 0x4c);
      }
      uVar1 = (uint)uVar2 & 0x1ffff;
      if (uVar1 < 0x8002) {
        if ((0x3f << (uVar2 >> 0xe & 7) &
            ((byte)polygon_sort_list_13776[lVar4 + (ulong)uVar3 + 0x6e200] ^ 0xffffffff)) == 0) {
          param_1[0x49] =
               *(long *)(lVar4 + ((ulong)uVar3 + 0x8b104) * 8) +
               (ulong)(((uint)uVar2 & 0x1fffe) + (uVar1 >> 1)) * 2;
        }
        else {
          param_1[0x49] = 0;
        }
      }
      param_1[0x48] = param_1[1] + uVar2;
    }
LAB_00141820:
    if ((*(ushort *)(param_1 + 0x6d) & 0xc0fc) != 0x4084) {
      return;
    }
    if (param_1[0x6b] != 0) {
      return;
    }
    if (*(short *)((long)param_1 + 0x36e) != 0x100) {
      return;
    }
    if (*(short *)(param_1 + 0x6e) != 0) {
      return;
    }
    if ((param_1[0x6e] & 0xffffffff0000U) != 0x10000000000) {
      return;
    }
    uVar3 = 0xff;
    if ((*(int *)(lVar4 + 0x10) == 6) &&
       (uVar3 = 0xff, (*(uint *)(param_1 + 0x62) & 0xfffe0000) == *(int *)(lVar4 + 0x18) * 0x4000))
    {
      uVar3 = 0;
    }
    if ((*(int *)(lVar4 + 0x20) == 6) &&
       ((*(uint *)(param_1 + 0x62) & 0xfffe0000) == *(int *)(lVar4 + 0x28) * 0x4000)) {
      uVar3 = 1;
    }
    if ((*(int *)(lVar4 + 0x30) == 6) &&
       (uVar2 = (ulong)*(uint *)(param_1 + 0x62),
       (*(uint *)(param_1 + 0x62) & 0xfffe0000) == *(int *)(lVar4 + 0x38) * 0x4000)) {
      uVar3 = 2;
      if (*(int *)(lVar4 + 0x40) == 6) {
LAB_00141a80:
        if (((uint)uVar2 & 0xfffe0000) != *(int *)(lVar4 + 0x48) * 0x4000) goto LAB_001418c8;
        uVar3 = 3;
      }
    }
    else {
      if (*(int *)(lVar4 + 0x40) == 6) {
        uVar2 = (ulong)*(uint *)(param_1 + 0x62);
        goto LAB_00141a80;
      }
LAB_001418c8:
      if (uVar3 == 0xff) {
        return;
      }
      uVar2 = (ulong)*(uint *)(param_1 + 0x62);
    }
    uVar1 = (uint)uVar2 & 0x1ffff;
    if (0x8001 < uVar1) goto LAB_0014190c;
    if ((0x3f << (uVar2 >> 0xe & 7) &
        ((byte)polygon_sort_list_13776[lVar4 + (ulong)uVar3 + 0x6e200] ^ 0xffffffff)) == 0) {
      param_1[0x5f] =
           *(long *)(lVar4 + ((ulong)uVar3 + 0x8b104) * 8) +
           (ulong)(((uint)uVar2 & 0x1fffe) + (uVar1 >> 1)) * 2;
      goto LAB_0014190c;
    }
  }
  param_1[0x5f] = 0;
LAB_0014190c:
  param_1[0x5e] = param_1[1] + uVar2;
  return;
}


