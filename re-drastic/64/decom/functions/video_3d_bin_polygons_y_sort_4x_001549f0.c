/*
 * Ghidra decompilation
 *
 * Function : video_3d_bin_polygons_y_sort_4x
 * Address  : 001549f0
 * Program  : drastic64
 */


void video_3d_bin_polygons_y_sort_4x
               (long param_1,long param_2,uint *param_3,long param_4,uint param_5)

{
  uint uVar1;
  short sVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  uint uVar8;
  int iVar9;
  long lVar10;
  ushort uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  long lVar15;
  ushort uVar16;
  undefined1 *puVar17;
  undefined2 *puVar18;
  short *psVar19;
  uint *puVar20;
  undefined8 uVar21;
  undefined8 extraout_x11;
  uint uVar22;
  ushort uVar23;
  ushort uVar24;
  uint uVar25;
  uint uVar26;
  uint *puVar27;
  uint local_a4;
  uint local_38;
  uint local_34;
  long local_30;
  uint *puStack_28;
  undefined1 *local_20;
  undefined8 local_18;
  uint *local_10;
  undefined2 *puStack_8;
  
  *(undefined4 *)(param_2 + 0x1000) = 0;
  *(undefined4 *)(param_2 + 0x2004) = 0;
  *(undefined4 *)(param_2 + 0x3008) = 0;
  *(undefined4 *)(param_2 + 0x400c) = 0;
  *(undefined4 *)(param_2 + 0x5010) = 0;
  *(undefined4 *)(param_2 + 0x6014) = 0;
  *(undefined4 *)(param_2 + 0x7018) = 0;
  *(undefined4 *)(param_2 + 0x801c) = 0;
  *(undefined4 *)(param_2 + 0x9020) = 0;
  *(undefined4 *)(param_2 + 0xa024) = 0;
  uVar8 = param_3[0x4000];
  *(undefined4 *)(param_2 + 0xb028) = 0;
  local_38 = param_5;
  *(undefined4 *)(param_2 + 0xc02c) = 0;
  local_20 = &completed_9126;
  local_30 = param_2;
  if (uVar8 != 0) {
    uVar21 = 0;
    uVar22 = 0xffffffff;
    local_a4 = 0xffffffff;
    local_34 = param_5 | 4;
    uVar26 = 0;
    local_20 = &completed_9126;
    puVar18 = &polygon_sort_counts_15122;
    local_10 = param_3 + 0x4000;
    puVar27 = param_3;
    puStack_28 = param_3;
    do {
      while( true ) {
        uVar25 = puVar27[2];
        uVar1 = uVar25 & 0xf;
        if ((uVar1 < 9) && ((uVar25 & 0xe) != 0)) break;
LAB_00154b04:
        uVar26 = uVar26 + 1;
        puVar27 = puVar27 + 8;
        param_3 = puStack_28;
        if (uVar8 <= uVar26) goto LAB_00154ebc;
      }
      lVar6 = (ulong)*(ushort *)((long)puVar27 + 0x1a) * 0x10;
      lVar10 = param_4 + lVar6;
      uVar4 = *(uint *)(param_4 + lVar6);
      uVar8 = (uint)*(ushort *)(lVar10 + 0x16);
      if (0x180 < *(ushort *)(lVar10 + 0x16)) {
        uVar8 = 0x180;
      }
      *(short *)(lVar10 + 0x16) = (short)uVar8;
      bVar3 = uVar8 < *(ushort *)(lVar10 + 6);
      uVar12 = (uint)*(ushort *)(lVar10 + 6);
      uVar14 = uVar12;
      if (bVar3) {
        uVar14 = uVar8;
      }
      uVar5 = (uint)bVar3;
      lVar6 = (long)(int)uVar14;
      uVar23 = *(ushort *)(lVar10 + 8) & *(ushort *)(lVar10 + 0x18);
      uVar16 = *(ushort *)(lVar10 + 8) | *(ushort *)(lVar10 + 0x18);
      uVar24 = *(ushort *)(lVar10 + 10) & *(ushort *)(lVar10 + 0x1a);
      uVar11 = *(ushort *)(lVar10 + 10) | *(ushort *)(lVar10 + 0x1a);
      if (uVar8 < uVar12) {
        uVar8 = uVar12;
      }
      uVar12 = *(uint *)(lVar10 + 0x10) & uVar4;
      uVar4 = *(uint *)(lVar10 + 0x10) | uVar4;
      if (2 < uVar1) {
        uVar13 = (uint)*(ushort *)(lVar10 + 0x26);
        if (0x180 < *(ushort *)(lVar10 + 0x26)) {
          uVar13 = 0x180;
        }
        *(short *)(lVar10 + 0x26) = (short)uVar13;
        uVar5 = (uint)bVar3;
        if (uVar13 < uVar14) {
          lVar6 = (long)(int)uVar13;
          uVar5 = 2;
        }
        uVar16 = uVar16 | *(ushort *)(lVar10 + 0x28);
        uVar24 = uVar24 & *(ushort *)(lVar10 + 0x2a);
        uVar11 = uVar11 | *(ushort *)(lVar10 + 0x2a);
        uVar23 = uVar23 & *(ushort *)(lVar10 + 0x28);
        if (uVar8 < uVar13) {
          uVar8 = uVar13;
        }
        uVar12 = uVar12 & *(uint *)(lVar10 + 0x20);
        uVar4 = uVar4 | *(uint *)(lVar10 + 0x20);
        if (uVar1 != 3) {
          uVar14 = (uint)*(ushort *)(lVar10 + 0x36);
          if (0x180 < *(ushort *)(lVar10 + 0x36)) {
            uVar14 = 0x180;
          }
          *(short *)(lVar10 + 0x36) = (short)uVar14;
          if (uVar14 < (uint)lVar6) {
            lVar6 = (long)(int)uVar14;
            uVar5 = 3;
          }
          uVar16 = uVar16 | *(ushort *)(lVar10 + 0x38);
          uVar24 = uVar24 & *(ushort *)(lVar10 + 0x3a);
          uVar11 = *(ushort *)(lVar10 + 0x3a) | uVar11;
          uVar23 = uVar23 & *(ushort *)(lVar10 + 0x38);
          if (uVar8 < uVar14) {
            uVar8 = uVar14;
          }
          uVar12 = uVar12 & *(uint *)(lVar10 + 0x30);
          uVar4 = uVar4 | *(uint *)(lVar10 + 0x30);
          if (uVar1 != 4) {
            uVar14 = (uint)*(ushort *)(lVar10 + 0x46);
            if (0x180 < *(ushort *)(lVar10 + 0x46)) {
              uVar14 = 0x180;
            }
            *(short *)(lVar10 + 0x46) = (short)uVar14;
            if (uVar14 < (uint)lVar6) {
              lVar6 = (long)(int)uVar14;
              uVar5 = 4;
            }
            uVar16 = uVar16 | *(ushort *)(lVar10 + 0x48);
            uVar24 = uVar24 & *(ushort *)(lVar10 + 0x4a);
            uVar11 = uVar11 | *(ushort *)(lVar10 + 0x4a);
            uVar23 = uVar23 & *(ushort *)(lVar10 + 0x48);
            if (uVar8 < uVar14) {
              uVar8 = uVar14;
            }
            uVar12 = uVar12 & *(uint *)(lVar10 + 0x40);
            uVar4 = uVar4 | *(uint *)(lVar10 + 0x40);
            if (uVar1 != 5) {
              uVar14 = (uint)*(ushort *)(lVar10 + 0x56);
              if (0x180 < *(ushort *)(lVar10 + 0x56)) {
                uVar14 = 0x180;
              }
              *(short *)(lVar10 + 0x56) = (short)uVar14;
              if (uVar14 < (uint)lVar6) {
                lVar6 = (long)(int)uVar14;
                uVar5 = 5;
              }
              uVar16 = uVar16 | *(ushort *)(lVar10 + 0x58);
              uVar24 = uVar24 & *(ushort *)(lVar10 + 0x5a);
              uVar11 = uVar11 | *(ushort *)(lVar10 + 0x5a);
              uVar23 = uVar23 & *(ushort *)(lVar10 + 0x58);
              if (uVar8 < uVar14) {
                uVar8 = uVar14;
              }
              uVar12 = uVar12 & *(uint *)(lVar10 + 0x50);
              uVar4 = uVar4 | *(uint *)(lVar10 + 0x50);
              if (uVar1 != 6) {
                uVar14 = (uint)*(ushort *)(lVar10 + 0x66);
                if (0x180 < *(ushort *)(lVar10 + 0x66)) {
                  uVar14 = 0x180;
                }
                *(short *)(lVar10 + 0x66) = (short)uVar14;
                if (uVar14 < (uint)lVar6) {
                  lVar6 = (long)(int)uVar14;
                  uVar5 = 6;
                }
                uVar16 = uVar16 | *(ushort *)(lVar10 + 0x68);
                uVar24 = uVar24 & *(ushort *)(lVar10 + 0x6a);
                uVar11 = uVar11 | *(ushort *)(lVar10 + 0x6a);
                uVar23 = uVar23 & *(ushort *)(lVar10 + 0x68);
                if (uVar8 < uVar14) {
                  uVar8 = uVar14;
                }
                uVar12 = uVar12 & *(uint *)(lVar10 + 0x60);
                uVar4 = uVar4 | *(uint *)(lVar10 + 0x60);
                if (uVar1 == 8) {
                  uVar14 = (uint)*(ushort *)(lVar10 + 0x76);
                  if (0x180 < *(ushort *)(lVar10 + 0x76)) {
                    uVar14 = 0x180;
                  }
                  *(short *)(lVar10 + 0x76) = (short)uVar14;
                  if (uVar14 < (uint)lVar6) {
                    lVar6 = (long)(int)uVar14;
                    uVar5 = 7;
                  }
                  if (uVar8 < uVar14) {
                    uVar8 = uVar14;
                  }
                  uVar12 = uVar12 & *(uint *)(lVar10 + 0x70);
                  uVar24 = uVar24 & *(ushort *)(lVar10 + 0x7a);
                  uVar4 = uVar4 | *(uint *)(lVar10 + 0x70);
                  uVar11 = uVar11 | *(ushort *)(lVar10 + 0x7a);
                  uVar23 = uVar23 & *(ushort *)(lVar10 + 0x78);
                  uVar16 = uVar16 | *(ushort *)(lVar10 + 0x78);
                }
              }
            }
          }
        }
      }
      if (uVar8 == (uint)lVar6) {
        uVar8 = *local_10;
        goto LAB_00154b04;
      }
      puVar20 = &local_34;
      if (uVar11 != uVar24) {
        puVar20 = &local_38;
      }
      uVar14 = *puVar20;
      if ((*(byte *)(param_1 + 0x9acc) >> 1 & 1) == 0) {
        uVar13 = uVar14 | 0x10;
        if (uVar23 != uVar16) {
          uVar13 = uVar14;
        }
        uVar14 = uVar13 | 0x20;
        if (uVar12 != uVar4) {
          uVar14 = uVar13;
        }
      }
      else {
        uVar13 = uVar14 | 0x30;
        if (uVar12 != uVar4) {
          uVar13 = uVar14;
        }
        uVar14 = uVar13 | 8;
      }
      uVar4 = *puVar27;
      puVar20 = local_10;
      if (((uVar4 & 0x1c000000) != 0) && ((puVar27[1] >> 4 & 3) != 3)) {
        uVar16 = *(ushort *)(puVar27 + 6);
        uVar12 = uVar14 | 2;
        if (uVar4 != local_a4 || uVar16 != uVar22) {
          local_18 = (uint *)(CONCAT44(local_18._4_4_,uVar14) | 2);
          puStack_8 = puVar18;
          uVar21 = texture_cache_lookup(*(undefined8 *)(param_1 + 0x9a38));
          uVar25 = puVar27[2];
          puVar18 = puStack_8;
          uVar22 = (uint)uVar16;
          uVar12 = (uint)local_18;
          local_a4 = uVar4;
        }
        uVar14 = uVar12;
        *(undefined8 *)(puVar27 + 4) = uVar21;
        puVar20 = local_10;
      }
      uVar8 = uVar25 | uVar8 << 0x17 | uVar14 << 8;
      if (uVar1 == 4) {
        if ((uVar25 & 0x40) == 0) {
          uVar8 = uVar8 | 0x200000;
          uVar5 = uVar5 << 0x10;
        }
        else {
          if (uVar5 == 2) {
            uVar5 = 0x20000;
            if ((uint)*(ushort *)(lVar10 + 0x36) == (uint)lVar6) {
              uVar5 = 0x30000;
            }
          }
          else {
            uVar5 = uVar5 << 0x10;
          }
          uVar8 = uVar8 | 0x480000;
        }
        puVar27[2] = uVar8 | uVar5;
        local_18 = puVar20;
        local_10 = (uint *)puVar18;
        render_sprite_check_isra_0(puVar27,lVar10);
        puVar20 = local_18;
        uVar21 = extraout_x11;
      }
      else {
        puVar27[2] = uVar5 << 0x10 | uVar1 << 0x13 | uVar8;
        local_10 = (uint *)puVar18;
      }
      puVar27 = puVar27 + 8;
      sVar2 = *(short *)((long)local_10 + lVar6 * 2);
      uVar8 = *puVar20;
      *(short *)(polygon_sort_list_15121 +
                ((long)*(short *)((long)local_10 + lVar6 * 2) + lVar6 * 0x800) * 2) = (short)uVar26;
      *(short *)((long)local_10 + lVar6 * 2) = sVar2 + 1;
      uVar26 = uVar26 + 1;
      puVar18 = (undefined2 *)local_10;
      local_10 = puVar20;
      param_3 = puStack_28;
    } while (uVar26 < uVar8);
  }
LAB_00154ebc:
  puVar17 = (undefined1 *)0x3e9640;
  psVar19 = (short *)(local_20 + 0x630);
  do {
    iVar9 = *psVar19 + -1;
    lVar10 = (long)iVar9;
    while (-1 < iVar9) {
      uVar16 = *(ushort *)(puVar17 + lVar10 * 2);
      lVar10 = lVar10 + -1;
      uVar7 = (ulong)(param_3[(ulong)uVar16 * 8 + 2] >> 0x17);
      if (0x180 < param_3[(ulong)uVar16 * 8 + 2] >> 0x17) {
        uVar7 = 0x180;
      }
      sVar2 = *(short *)(local_20 + uVar7 * 2 + 0x330);
      *(short *)(local_20 + uVar7 * 2 + 0x330) = *(short *)(local_20 + uVar7 * 2 + 0x330) + 1;
      *(ushort *)(polygon_sort_list_15121 + ((long)sVar2 + uVar7 * 0x800) * 2) = uVar16;
      iVar9 = (int)lVar10;
    }
    *psVar19 = 0;
    bVar3 = puVar17 != polygon_sort_list_15121;
    puVar17 = puVar17 + -0x1000;
    psVar19 = psVar19 + -1;
  } while (bVar3);
  lVar10 = 0x26a640;
  puVar18 = (undefined2 *)(local_20 + 0x330);
  lVar6 = 0;
  do {
    iVar9 = (short)puVar18[lVar6 + 1] + -1;
    lVar15 = (long)iVar9;
    while (-1 < iVar9) {
      uVar16 = *(ushort *)(lVar10 + lVar15 * 2);
      uVar8 = 0xfff << (ulong)(*(ushort *)
                                (param_4 + (ulong)((*(ushort *)
                                                     ((long)param_3 + (ulong)uVar16 * 0x20 + 10) & 7
                                                   ) + (uint)*(ushort *)
                                                              ((long)param_3 +
                                                              (ulong)uVar16 * 0x20 + 0x1a)) * 0x10 +
                                6) >> 5 & 0x1f) & 0xfffU >> (ulong)(0xb - ((uint)lVar6 >> 5) & 0x1f)
      ;
      if ((uVar8 & 1) != 0) {
        uVar26 = *(uint *)(local_30 + 0x1000);
        *(ushort *)(local_30 + (ulong)uVar26 * 2) = uVar16;
        *(uint *)(local_30 + 0x1000) = uVar26 + 1;
      }
      if ((uVar8 >> 1 & 1) != 0) {
        uVar26 = *(uint *)(param_2 + 0x2004);
        *(ushort *)(param_2 + 0x1004 + (ulong)uVar26 * 2) = uVar16;
        *(uint *)(param_2 + 0x2004) = uVar26 + 1;
      }
      if ((uVar8 >> 2 & 1) != 0) {
        uVar26 = *(uint *)(param_2 + 0x3008);
        *(ushort *)(param_2 + 0x2008 + (ulong)uVar26 * 2) = uVar16;
        *(uint *)(param_2 + 0x3008) = uVar26 + 1;
      }
      if ((uVar8 >> 3 & 1) != 0) {
        uVar26 = *(uint *)(param_2 + 0x400c);
        *(ushort *)(param_2 + 0x300c + (ulong)uVar26 * 2) = uVar16;
        *(uint *)(param_2 + 0x400c) = uVar26 + 1;
      }
      if ((uVar8 >> 4 & 1) != 0) {
        uVar26 = *(uint *)(param_2 + 0x5010);
        *(ushort *)(param_2 + 0x4010 + (ulong)uVar26 * 2) = uVar16;
        *(uint *)(param_2 + 0x5010) = uVar26 + 1;
      }
      if ((uVar8 >> 5 & 1) != 0) {
        uVar26 = *(uint *)(param_2 + 0x6014);
        *(ushort *)(param_2 + 0x5014 + (ulong)uVar26 * 2) = uVar16;
        *(uint *)(param_2 + 0x6014) = uVar26 + 1;
      }
      if ((uVar8 >> 6 & 1) != 0) {
        uVar26 = *(uint *)(param_2 + 0x7018);
        *(ushort *)(param_2 + 0x6018 + (ulong)uVar26 * 2) = uVar16;
        *(uint *)(param_2 + 0x7018) = uVar26 + 1;
      }
      if ((uVar8 >> 7 & 1) != 0) {
        uVar26 = *(uint *)(param_2 + 0x801c);
        *(ushort *)(param_2 + 0x701c + (ulong)uVar26 * 2) = uVar16;
        *(uint *)(param_2 + 0x801c) = uVar26 + 1;
      }
      if ((uVar8 >> 8 & 1) != 0) {
        uVar26 = *(uint *)(param_2 + 0x9020);
        *(ushort *)(param_2 + 0x8020 + (ulong)uVar26 * 2) = uVar16;
        *(uint *)(param_2 + 0x9020) = uVar26 + 1;
      }
      if ((uVar8 >> 9 & 1) != 0) {
        uVar26 = *(uint *)(param_2 + 0xa024);
        *(ushort *)(param_2 + 0x9024 + (ulong)uVar26 * 2) = uVar16;
        *(uint *)(param_2 + 0xa024) = uVar26 + 1;
      }
      if ((uVar8 >> 10 & 1) != 0) {
        uVar26 = *(uint *)(param_2 + 0xb028);
        *(ushort *)(param_2 + 41000 + (ulong)uVar26 * 2) = uVar16;
        *(uint *)(param_2 + 0xb028) = uVar26 + 1;
      }
      if ((uVar8 >> 0xb & 1) != 0) {
        uVar8 = *(uint *)(param_2 + 0xc02c);
        *(ushort *)(param_2 + 0xb02c + (ulong)uVar8 * 2) = uVar16;
        *(uint *)(param_2 + 0xc02c) = uVar8 + 1;
      }
      lVar15 = lVar15 + -1;
      iVar9 = (int)lVar15;
    }
    lVar15 = lVar6 + 1;
    puVar18[lVar6 + 1] = 0;
    lVar10 = lVar10 + 0x1000;
    lVar6 = lVar15;
  } while (lVar15 != 0x180);
  *puVar18 = 0;
  return;
}


