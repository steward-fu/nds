/*
 * Ghidra decompilation
 *
 * Function : FUN_001551fc
 * Address  : 001551fc
 * Program  : drastic64
 */


void FUN_001551fc(long param_1,long param_2,uint *param_3,long param_4,uint param_5)

{
  uint *puVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  ushort uVar5;
  ushort uVar6;
  undefined2 uVar7;
  uint uVar8;
  long lVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  ushort uVar15;
  uint uVar16;
  ushort uVar17;
  ushort uVar18;
  ushort uVar19;
  uint uVar20;
  uint uVar21;
  uint uStack_48;
  uint uStack_44;
  undefined8 uStack_40;
  
  if ((param_5 != 0) && ((*(byte *)(param_1 + 0x9acc) & 1) != 0)) {
    puVar1 = param_3 + 0x4000;
    uVar11 = *puVar1;
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
    *(undefined4 *)(param_2 + 0xb028) = 0;
    *(undefined4 *)(param_2 + 0xc02c) = 0;
    if (uVar11 != 0) {
      uVar21 = 0;
      uStack_48 = 0xffffffff;
      uStack_44 = 0xffffffff;
      uStack_40 = 0;
      do {
        uVar20 = param_3[2];
        lVar9 = (ulong)*(ushort *)((long)param_3 + 0x1a) * 0x10;
        lVar2 = param_4 + lVar9;
        uVar3 = uVar20 & 0xf;
        uVar5 = *(ushort *)(lVar2 + 6);
        uVar12 = *(uint *)(param_4 + lVar9);
        if (uVar3 - 2 < 7) {
          uVar6 = *(ushort *)(lVar2 + 0x16);
          uVar10 = (uint)uVar5;
          uVar14 = (uint)uVar6;
          uVar13 = uVar10;
          if (uVar6 < uVar5) {
            uVar13 = uVar14;
          }
          uVar8 = (uint)(uVar6 < uVar5);
          uVar19 = *(ushort *)(lVar2 + 8) & *(ushort *)(lVar2 + 0x18);
          uVar17 = *(ushort *)(lVar2 + 8) | *(ushort *)(lVar2 + 0x18);
          uVar18 = *(ushort *)(lVar2 + 10) & *(ushort *)(lVar2 + 0x1a);
          uVar15 = *(ushort *)(lVar2 + 10) | *(ushort *)(lVar2 + 0x1a);
          if (uVar10 < uVar14) {
            uVar10 = uVar14;
          }
          uVar14 = uVar12 & *(uint *)(lVar2 + 0x10);
          uVar12 = uVar12 | *(uint *)(lVar2 + 0x10);
          if (uVar3 != 2) {
            uVar16 = (uint)*(ushort *)(lVar2 + 0x26);
            uVar8 = (uint)(uVar6 < uVar5);
            if (*(ushort *)(lVar2 + 0x26) < uVar13) {
              uVar8 = 2;
              uVar13 = uVar16;
            }
            uVar19 = uVar19 & *(ushort *)(lVar2 + 0x28);
            uVar17 = uVar17 | *(ushort *)(lVar2 + 0x28);
            uVar18 = uVar18 & *(ushort *)(lVar2 + 0x2a);
            uVar15 = *(ushort *)(lVar2 + 0x2a) | uVar15;
            if (uVar10 < uVar16) {
              uVar10 = uVar16;
            }
            uVar14 = uVar14 & *(uint *)(lVar2 + 0x20);
            uVar12 = uVar12 | *(uint *)(lVar2 + 0x20);
            if (uVar3 != 3) {
              uVar16 = (uint)*(ushort *)(lVar2 + 0x36);
              if (*(ushort *)(lVar2 + 0x36) < uVar13) {
                uVar8 = 3;
                uVar13 = uVar16;
              }
              uVar19 = *(ushort *)(lVar2 + 0x38) & uVar19;
              uVar17 = *(ushort *)(lVar2 + 0x38) | uVar17;
              uVar18 = *(ushort *)(lVar2 + 0x3a) & uVar18;
              uVar15 = *(ushort *)(lVar2 + 0x3a) | uVar15;
              if (uVar10 < uVar16) {
                uVar10 = uVar16;
              }
              uVar14 = uVar14 & *(uint *)(lVar2 + 0x30);
              uVar12 = uVar12 | *(uint *)(lVar2 + 0x30);
              if (uVar3 != 4) {
                uVar16 = (uint)*(ushort *)(lVar2 + 0x46);
                if (*(ushort *)(lVar2 + 0x46) < uVar13) {
                  uVar8 = 4;
                  uVar13 = uVar16;
                }
                uVar19 = *(ushort *)(lVar2 + 0x48) & uVar19;
                uVar17 = *(ushort *)(lVar2 + 0x48) | uVar17;
                uVar18 = *(ushort *)(lVar2 + 0x4a) & uVar18;
                uVar15 = *(ushort *)(lVar2 + 0x4a) | uVar15;
                if (uVar10 < uVar16) {
                  uVar10 = uVar16;
                }
                uVar14 = uVar14 & *(uint *)(lVar2 + 0x40);
                uVar12 = uVar12 | *(uint *)(lVar2 + 0x40);
                if (uVar3 != 5) {
                  uVar16 = (uint)*(ushort *)(lVar2 + 0x56);
                  if (*(ushort *)(lVar2 + 0x56) < uVar13) {
                    uVar8 = 5;
                    uVar13 = uVar16;
                  }
                  uVar19 = *(ushort *)(lVar2 + 0x58) & uVar19;
                  uVar17 = uVar17 | *(ushort *)(lVar2 + 0x58);
                  uVar18 = *(ushort *)(lVar2 + 0x5a) & uVar18;
                  uVar15 = uVar15 | *(ushort *)(lVar2 + 0x5a);
                  if (uVar10 < uVar16) {
                    uVar10 = uVar16;
                  }
                  uVar14 = uVar14 & *(uint *)(lVar2 + 0x50);
                  uVar12 = uVar12 | *(uint *)(lVar2 + 0x50);
                  if (uVar3 != 6) {
                    uVar16 = (uint)*(ushort *)(lVar2 + 0x66);
                    if (*(ushort *)(lVar2 + 0x66) < uVar13) {
                      uVar8 = 6;
                      uVar13 = uVar16;
                    }
                    uVar19 = uVar19 & *(ushort *)(lVar2 + 0x68);
                    uVar17 = uVar17 | *(ushort *)(lVar2 + 0x68);
                    uVar18 = uVar18 & *(ushort *)(lVar2 + 0x6a);
                    uVar15 = uVar15 | *(ushort *)(lVar2 + 0x6a);
                    if (uVar10 < uVar16) {
                      uVar10 = uVar16;
                    }
                    uVar14 = uVar14 & *(uint *)(lVar2 + 0x60);
                    uVar12 = uVar12 | *(uint *)(lVar2 + 0x60);
                    if (uVar3 == 8) {
                      uVar16 = (uint)*(ushort *)(lVar2 + 0x76);
                      if (*(ushort *)(lVar2 + 0x76) < uVar13) {
                        uVar8 = 7;
                        uVar13 = uVar16;
                      }
                      if (uVar10 < uVar16) {
                        uVar10 = uVar16;
                      }
                      uVar19 = uVar19 & *(ushort *)(lVar2 + 0x78);
                      uVar14 = uVar14 & *(uint *)(lVar2 + 0x70);
                      uVar12 = uVar12 | *(uint *)(lVar2 + 0x70);
                      uVar17 = *(ushort *)(lVar2 + 0x78) | uVar17;
                      uVar18 = uVar18 & *(ushort *)(lVar2 + 0x7a);
                      uVar15 = *(ushort *)(lVar2 + 0x7a) | uVar15;
                    }
                  }
                }
              }
            }
          }
          if (uVar10 != uVar13) {
            if (0x180 < uVar10) {
              uVar10 = 0x180;
            }
            uVar11 = param_5 | 4;
            if (uVar15 != uVar18) {
              uVar11 = param_5;
            }
            if ((*(byte *)(param_1 + 0x9acc) >> 1 & 1) == 0) {
              uVar16 = uVar11 | 0x10;
              if (uVar17 != uVar19) {
                uVar16 = uVar11;
              }
              uVar11 = uVar16 | 0x20;
              if (uVar14 != uVar12) {
                uVar11 = uVar16;
              }
            }
            else {
              uVar16 = uVar11 | 0x30;
              if (uVar14 != uVar12) {
                uVar16 = uVar11;
              }
              uVar11 = uVar16 | 8;
            }
            uVar12 = *param_3;
            if (((uVar12 & 0x1c000000) != 0) && ((param_3[1] >> 4 & 3) != 3)) {
              uVar5 = *(ushort *)(param_3 + 6);
              if (uVar12 != uStack_48 || uVar5 != uStack_44) {
                uStack_40 = texture_cache_lookup(*(undefined8 *)(param_1 + 0x9a38));
                uVar20 = param_3[2];
                uStack_48 = uVar12;
                uStack_44 = (uint)uVar5;
              }
              uVar11 = uVar11 | 2;
              *(undefined8 *)(param_3 + 4) = uStack_40;
            }
            uVar11 = uVar20 | uVar10 << 0x17 | uVar11 << 8;
            if (uVar3 == 4) {
              if ((uVar20 & 0x40) == 0) {
                uVar11 = uVar11 | 0x200000;
                uVar8 = uVar8 << 0x10;
              }
              else {
                if (uVar8 == 2) {
                  uVar8 = 0x20000;
                  if (uVar13 == *(ushort *)(lVar2 + 0x36)) {
                    uVar8 = 0x30000;
                  }
                }
                else {
                  uVar8 = uVar8 << 0x10;
                }
                uVar11 = uVar11 | 0x480000;
              }
              param_3[2] = uVar11 | uVar8;
              render_sprite_check_isra_0(param_3,lVar2);
            }
            else {
              param_3[2] = uVar8 << 0x10 | uVar3 << 0x13 | uVar11;
            }
            iVar4 = uVar10 + 0x1e;
            if (-1 < (int)(uVar10 - 1)) {
              iVar4 = uVar10 - 1;
            }
            uVar3 = 0xfffU >> (ulong)(0xbU - (iVar4 >> 5) & 0x1f) &
                    0xfff << (ulong)((int)uVar13 >> 5 & 0x1f);
            uVar7 = (undefined2)uVar21;
            if ((uVar3 & 1) != 0) {
              uVar11 = *(uint *)(param_2 + 0x1000);
              *(undefined2 *)(param_2 + (ulong)uVar11 * 2) = uVar7;
              *(uint *)(param_2 + 0x1000) = uVar11 + 1;
            }
            if ((uVar3 >> 1 & 1) != 0) {
              uVar11 = *(uint *)(param_2 + 0x2004);
              *(undefined2 *)(param_2 + 0x1004 + (ulong)uVar11 * 2) = uVar7;
              *(uint *)(param_2 + 0x2004) = uVar11 + 1;
            }
            if ((uVar3 >> 2 & 1) != 0) {
              uVar11 = *(uint *)(param_2 + 0x3008);
              *(undefined2 *)(param_2 + 0x2008 + (ulong)uVar11 * 2) = uVar7;
              *(uint *)(param_2 + 0x3008) = uVar11 + 1;
            }
            if ((uVar3 >> 3 & 1) != 0) {
              uVar11 = *(uint *)(param_2 + 0x400c);
              *(undefined2 *)(param_2 + 0x300c + (ulong)uVar11 * 2) = uVar7;
              *(uint *)(param_2 + 0x400c) = uVar11 + 1;
            }
            if ((uVar3 >> 4 & 1) != 0) {
              uVar11 = *(uint *)(param_2 + 0x5010);
              *(undefined2 *)(param_2 + 0x4010 + (ulong)uVar11 * 2) = uVar7;
              *(uint *)(param_2 + 0x5010) = uVar11 + 1;
            }
            if ((uVar3 >> 5 & 1) != 0) {
              uVar11 = *(uint *)(param_2 + 0x6014);
              *(undefined2 *)(param_2 + 0x5014 + (ulong)uVar11 * 2) = uVar7;
              *(uint *)(param_2 + 0x6014) = uVar11 + 1;
            }
            if ((uVar3 >> 6 & 1) != 0) {
              uVar11 = *(uint *)(param_2 + 0x7018);
              *(undefined2 *)(param_2 + 0x6018 + (ulong)uVar11 * 2) = uVar7;
              *(uint *)(param_2 + 0x7018) = uVar11 + 1;
            }
            if ((uVar3 >> 7 & 1) != 0) {
              uVar11 = *(uint *)(param_2 + 0x801c);
              *(undefined2 *)(param_2 + 0x701c + (ulong)uVar11 * 2) = uVar7;
              *(uint *)(param_2 + 0x801c) = uVar11 + 1;
            }
            if ((uVar3 >> 8 & 1) != 0) {
              uVar11 = *(uint *)(param_2 + 0x9020);
              *(undefined2 *)(param_2 + 0x8020 + (ulong)uVar11 * 2) = uVar7;
              *(uint *)(param_2 + 0x9020) = uVar11 + 1;
            }
            if ((uVar3 >> 9 & 1) != 0) {
              uVar11 = *(uint *)(param_2 + 0xa024);
              *(undefined2 *)(param_2 + 0x9024 + (ulong)uVar11 * 2) = uVar7;
              *(uint *)(param_2 + 0xa024) = uVar11 + 1;
            }
            if ((uVar3 >> 10 & 1) != 0) {
              uVar11 = *(uint *)(param_2 + 0xb028);
              *(undefined2 *)(param_2 + 41000 + (ulong)uVar11 * 2) = uVar7;
              *(uint *)(param_2 + 0xb028) = uVar11 + 1;
            }
            uVar11 = *puVar1;
            if ((uVar3 >> 0xb & 1) != 0) {
              uVar3 = *(uint *)(param_2 + 0xc02c);
              *(undefined2 *)(param_2 + 0xb02c + (ulong)uVar3 * 2) = uVar7;
              *(uint *)(param_2 + 0xc02c) = uVar3 + 1;
            }
          }
        }
        uVar21 = uVar21 + 1;
        param_3 = param_3 + 8;
      } while (uVar21 < uVar11);
    }
    return;
  }
  video_3d_bin_polygons_y_sort_4x(param_1,param_2,param_3,param_4,param_5);
  return;
}


