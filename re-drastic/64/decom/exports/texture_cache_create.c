/*
 * Ghidra decompilation
 *
 * Function : texture_cache_create
 * Address  : 0016b110
 * Program  : drastic64
 */


void texture_cache_create(uint *param_1,long *param_2,uint param_3,int param_4)

{
  long lVar1;
  long lVar2;
  int iVar3;
  byte bVar4;
  ushort uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  long lVar11;
  ulong __n;
  uint uVar12;
  long lVar13;
  long lVar14;
  uint uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined1 *puVar18;
  ulong uVar19;
  uint uVar20;
  ulong uVar21;
  uint uVar22;
  void *pvVar23;
  undefined8 uVar24;
  
  pvVar23 = *(void **)(param_1 + 4);
  iVar6 = 8 << ((ulong)(param_3 >> 0x14) & 7);
  iVar7 = 8 << ((ulong)(param_3 >> 0x17) & 7);
  lVar14 = *param_2;
  *param_1 = param_3 & 0xfff0ffff;
  *(short *)((long)param_1 + 0x46) = (short)param_4;
  *(undefined *)(param_1 + 0x12) = 0;
  uVar9 = iVar6 * iVar7;
  uVar21 = (ulong)(param_3 >> 0x1a) & 7;
  uVar10 = (param_3 & 0xffff) * 8;
  uVar20 = (uint)uVar21;
  if (pvVar23 == (void *)0x0) {
LAB_0016b3bc:
    bVar4 = bytes_per_dest_texel[uVar21];
    pvVar23 = malloc((ulong)(bVar4 * uVar9));
    iVar3 = *(int *)(param_2 + 0x1005);
    *(void **)(param_1 + 4) = pvVar23;
    *(uint *)(param_2 + 0x1005) = iVar3 + bVar4 * uVar9;
  }
  else if (*(byte *)((long)param_1 + 0x49) != uVar20) {
    free(pvVar23);
    if (*(void **)(param_1 + 6) != (void *)0x0) {
      free(*(void **)(param_1 + 6));
    }
    *(undefined8 *)(param_1 + 4) = 0;
    *(undefined8 *)(param_1 + 6) = 0;
    goto LAB_0016b3bc;
  }
  bVar4 = (&texels_per_hword_shift)[uVar21];
  uVar12 = uVar9 * 2 >> (ulong)(bVar4 & 0x1f);
  *(short *)(param_1 + 0x10) = (short)iVar6;
  param_1[1] = -1 << (ulong)(param_3 >> 0xb & 0x1f) &
               (-2 << (ulong)((uVar10 - 1) + uVar12 >> 0xe & 0x1f) ^ 0xffffffffU);
  *(short *)((long)param_1 + 0x42) = (short)iVar7;
  *(char *)((long)param_1 + 0x49) = (char)uVar21;
  *(undefined *)((long)param_1 + 0x4a) = 0;
  uVar8 = uVar10 >> 0x11;
  uVar19 = (ulong)uVar8;
  uVar10 = uVar10 & 0x1ffff;
  if (uVar20 == 5) {
    lVar13 = *(long *)(*param_2 + (uVar19 & 3) * 8 + 0x2180);
    if ((lVar13 == 0) || (lVar11 = *(long *)(*param_2 + 0x2188), lVar11 == 0)) {
      memset(pvVar23,0,(ulong)uVar9 << 2);
    }
    else {
      texture_cache_convert_compressed
                (param_1,lVar13 + (ulong)uVar10,
                 lVar11 + (uVar19 & 3) * 0x8000 + (ulong)(uVar10 >> 1),param_4 << 3,lVar14 + 0x21a0)
      ;
    }
    uVar10 = (uVar10 >> 1) + (uVar8 + 4) * 0x8000;
    param_1[1] = param_1[1] |
                 -1 << (ulong)(uVar10 >> 0xe & 0x1f) &
                 (-2 << (ulong)((uVar10 - 1) + uVar12 >> 0xe & 0x1f) ^ 0xffffffffU);
    param_1[2] = 0xf;
    return;
  }
  uVar9 = param_3 >> 0x1d & 1;
  if (uVar20 == 7) {
    puVar18 = (undefined1 *)0x0;
    param_1[2] = 0;
  }
  else {
    uVar15 = param_4 << 3;
    if (uVar20 == 2) {
      uVar15 = param_4 << 2;
    }
    uVar22 = uVar15 >> 0xd;
    uVar5 = *(ushort *)(palette_sizes_11384 + uVar21 * 2);
    uVar20 = uVar15 & 0x1fff;
    if (0xbfff < uVar15) {
      __printf_chk(1,"weird palette slot (%d)!\n",uVar22);
      uVar22 = uVar22 - 6;
    }
    lVar13 = *(long *)(lVar14 + (ulong)uVar22 * 8 + 0x21a0);
    if (uVar5 + uVar20 < 0x2001) {
      param_1[2] = 1 << (ulong)(uVar22 & 0x1f);
      if (lVar13 == 0) {
        puVar18 = copy_palette_11377;
        __memset_chk(copy_palette_11377,0,(ulong)uVar5 << 1,0x200);
        pvVar23 = *(void **)(param_1 + 4);
      }
      else {
        puVar18 = (undefined1 *)(lVar13 + (ulong)uVar20 * 2);
        pvVar23 = *(void **)(param_1 + 4);
      }
    }
    else {
      uVar15 = uVar22 - 5;
      if (uVar22 + 1 < 6) {
        uVar15 = uVar22 + 1;
      }
      pvVar23 = *(void **)(lVar14 + ((ulong)uVar15 + 0x434) * 8);
      param_1[2] = 3 << (ulong)(uVar22 & 0x1f);
      iVar6 = (0x2000 - uVar20) * 2;
      if (lVar13 == 0) {
        __memset_chk(copy_palette_11377,0,iVar6,0x200);
      }
      else {
        __memcpy_chk(copy_palette_11377,lVar13 + (ulong)uVar20 * 2,iVar6,0x200);
      }
      puVar18 = copy_palette_11377;
      __n = (ulong)(((uVar5 - 0x2000) + uVar20) * 2);
      if (pvVar23 != (void *)0x0) {
        memcpy(copy_palette_11377 + (ulong)(0x2000 - uVar20) * 2,pvVar23,__n);
        lVar14 = *param_2;
        lVar13 = *(long *)(lVar14 + (uVar19 + 0x430) * 8);
        pvVar23 = *(void **)(param_1 + 4);
        goto joined_r0x0016b438;
      }
      memset(copy_palette_11377 + (ulong)(0x2000 - uVar20) * 2,0,__n);
      pvVar23 = *(void **)(param_1 + 4);
    }
  }
  lVar14 = *param_2;
  lVar13 = *(long *)(lVar14 + (uVar19 + 0x430) * 8);
joined_r0x0016b438:
  uVar20 = uVar12;
  if (0x1ffff < uVar12 + uVar10) {
    uVar20 = 0x20000 - uVar10;
    uVar12 = (uVar10 - 0x20000) + uVar12;
    lVar11 = (long)pvVar23 +
             (ulong)(((uVar20 << (ulong)(bVar4 & 0x1f)) >> 1) *
                    (uint)(byte)bytes_per_dest_texel[uVar21]);
    uVar16 = *(undefined8 *)(lVar14 + (((ulong)(uVar8 + 1) & 3) + 0x430) * 8);
    if (0x1ffff < uVar12) {
      uVar8 = (uVar8 + 1 & 3) + 1;
      uVar19 = (ulong)(((uint)(0x20000 << (ulong)(bVar4 & 0x1f)) >> 1) *
                      (uint)(byte)bytes_per_dest_texel[uVar21]);
      uVar15 = uVar12 - 0x20000;
      lVar1 = lVar11 + uVar19;
      uVar24 = *(undefined8 *)(lVar14 + (((ulong)uVar8 & 3) + 0x430) * 8);
      if (0x1ffff < uVar15) {
        uVar8 = (uVar8 & 3) + 1;
        uVar15 = uVar12 - 0x40000;
        lVar2 = lVar1 + uVar19;
        uVar17 = *(undefined8 *)(lVar14 + (((ulong)uVar8 & 3) + 0x430) * 8);
        if (0x1ffff < uVar15) {
          texture_cache_convert_split
                    (param_2,param_1,lVar2 + uVar19,uVar12 - 0x60000,puVar18,(uVar8 & 3) + 1 & 3,0,
                     uVar21,uVar9);
          uVar15 = 0x20000;
        }
        texture_cache_convert(param_1,lVar2,uVar17,puVar18,uVar21,uVar15,uVar9);
        uVar15 = 0x20000;
      }
      texture_cache_convert(param_1,lVar1,uVar24,puVar18,uVar21,uVar15,uVar9);
      uVar12 = 0x20000;
    }
    texture_cache_convert(param_1,lVar11,uVar16,puVar18,uVar21,uVar12,uVar9);
  }
  lVar14 = lVar13 + (ulong)uVar10;
  if (lVar13 == 0) {
    lVar14 = 0;
  }
  texture_cache_convert(param_1,pvVar23,lVar14,puVar18,uVar21,uVar20,uVar9);
  return;
}


