/*
 * Ghidra decompilation
 *
 * Function : FUN_0804420c
 * Address  : 0804420c
 * Program  : drastic16
 */


void FUN_0804420c(int param_1,int param_2,uint *param_3,int param_4,uint param_5)

{
  int iVar1;
  short sVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  ushort uVar6;
  ushort *puVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  short *psVar15;
  ushort uVar17;
  uint uVar18;
  uint uVar19;
  uint *puVar20;
  ushort uVar21;
  bool bVar22;
  uint local_84;
  undefined2 *local_5c;
  uint local_58;
  undefined *local_54;
  uint local_44;
  uint local_3c;
  uint local_38;
  short *psVar16;
  
  uVar10 = param_3[0x2800];
  uVar18 = param_2 + 0xb02c;
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
  if (uVar10 == 0) {
    uVar18 = 0x3208;
  }
  *(undefined4 *)(param_2 + 0xc02c) = 0;
  if (uVar10 == 0) {
    local_54 = (undefined *)(uVar18 & 0xffff | 0x8100000);
  }
  else {
    local_84 = 0;
    local_44 = 0xffffffff;
    local_38 = 0;
    local_3c = 0xffffffff;
    local_54 = &DAT_08103208;
    puVar20 = param_3;
    do {
      uVar4 = puVar20[2];
      uVar12 = uVar4 & 0xf;
      iVar11 = param_4 + (uint)*(ushort *)((int)puVar20 + 0x12) * 0x10;
      uVar5 = *(uint *)(param_4 + (uint)*(ushort *)((int)puVar20 + 0x12) * 0x10);
      uVar18 = (uint)*(ushort *)(iVar11 + 6);
      if (uVar12 - 2 < 7) {
        uVar10 = (uint)*(ushort *)(iVar11 + 0x16);
        if (0xbf < uVar10) {
          uVar10 = 0xc0;
        }
        *(short *)(iVar11 + 0x16) = (short)uVar10;
        uVar13 = (uint)(uVar10 < uVar18);
        uVar14 = uVar10;
        if (uVar10 <= uVar18) {
          uVar14 = uVar18;
          uVar18 = uVar10;
        }
        uVar10 = uVar5 | *(uint *)(iVar11 + 0x10);
        uVar5 = uVar5 & *(uint *)(iVar11 + 0x10);
        uVar3 = *(ushort *)(iVar11 + 8) & *(ushort *)(iVar11 + 0x18);
        uVar6 = *(ushort *)(iVar11 + 8) | *(ushort *)(iVar11 + 0x18);
        uVar17 = *(ushort *)(iVar11 + 10) & *(ushort *)(iVar11 + 0x1a);
        uVar21 = *(ushort *)(iVar11 + 10) | *(ushort *)(iVar11 + 0x1a);
        if (uVar12 != 2) {
          uVar19 = (uint)*(ushort *)(iVar11 + 0x26);
          if (0xbf < uVar19) {
            uVar19 = 0xc0;
          }
          *(short *)(iVar11 + 0x26) = (short)uVar19;
          uVar3 = *(ushort *)(iVar11 + 0x28) & uVar3;
          uVar6 = *(ushort *)(iVar11 + 0x28) | uVar6;
          if (uVar19 < uVar18) {
            uVar13 = 2;
          }
          if (uVar14 < uVar19) {
            uVar14 = uVar19;
          }
          if (uVar19 <= uVar18) {
            uVar18 = uVar19;
          }
          uVar5 = uVar5 & *(uint *)(iVar11 + 0x20);
          uVar10 = uVar10 | *(uint *)(iVar11 + 0x20);
          uVar17 = *(ushort *)(iVar11 + 0x2a) & uVar17;
          uVar21 = *(ushort *)(iVar11 + 0x2a) | uVar21;
          if (uVar12 != 3) {
            uVar19 = (uint)*(ushort *)(iVar11 + 0x36);
            if (0xbf < uVar19) {
              uVar19 = 0xc0;
            }
            *(short *)(iVar11 + 0x36) = (short)uVar19;
            if (uVar19 < uVar18) {
              uVar13 = 3;
            }
            if (uVar14 < uVar19) {
              uVar14 = uVar19;
            }
            if (uVar19 <= uVar18) {
              uVar18 = uVar19;
            }
            uVar5 = uVar5 & *(uint *)(iVar11 + 0x30);
            uVar10 = uVar10 | *(uint *)(iVar11 + 0x30);
            uVar3 = *(ushort *)(iVar11 + 0x38) & uVar3;
            uVar6 = *(ushort *)(iVar11 + 0x38) | uVar6;
            uVar17 = *(ushort *)(iVar11 + 0x3a) & uVar17;
            uVar21 = *(ushort *)(iVar11 + 0x3a) | uVar21;
            if (uVar12 != 4) {
              uVar19 = (uint)*(ushort *)(iVar11 + 0x46);
              if (0xbf < uVar19) {
                uVar19 = 0xc0;
              }
              *(short *)(iVar11 + 0x46) = (short)uVar19;
              if (uVar19 < uVar18) {
                uVar13 = 4;
              }
              if (uVar14 < uVar19) {
                uVar14 = uVar19;
              }
              if (uVar19 <= uVar18) {
                uVar18 = uVar19;
              }
              uVar5 = uVar5 & *(uint *)(iVar11 + 0x40);
              uVar10 = uVar10 | *(uint *)(iVar11 + 0x40);
              uVar3 = *(ushort *)(iVar11 + 0x48) & uVar3;
              uVar6 = *(ushort *)(iVar11 + 0x48) | uVar6;
              uVar17 = *(ushort *)(iVar11 + 0x4a) & uVar17;
              uVar21 = *(ushort *)(iVar11 + 0x4a) | uVar21;
              if (uVar12 != 5) {
                uVar19 = (uint)*(ushort *)(iVar11 + 0x56);
                if (0xbf < uVar19) {
                  uVar19 = 0xc0;
                }
                *(short *)(iVar11 + 0x56) = (short)uVar19;
                if (uVar19 < uVar18) {
                  uVar13 = 5;
                }
                if (uVar14 < uVar19) {
                  uVar14 = uVar19;
                }
                if (uVar19 <= uVar18) {
                  uVar18 = uVar19;
                }
                uVar5 = uVar5 & *(uint *)(iVar11 + 0x50);
                uVar10 = uVar10 | *(uint *)(iVar11 + 0x50);
                uVar3 = *(ushort *)(iVar11 + 0x58) & uVar3;
                uVar6 = *(ushort *)(iVar11 + 0x58) | uVar6;
                uVar17 = *(ushort *)(iVar11 + 0x5a) & uVar17;
                uVar21 = *(ushort *)(iVar11 + 0x5a) | uVar21;
                if (uVar12 != 6) {
                  uVar19 = (uint)*(ushort *)(iVar11 + 0x66);
                  if (0xbf < uVar19) {
                    uVar19 = 0xc0;
                  }
                  *(short *)(iVar11 + 0x66) = (short)uVar19;
                  if (uVar19 < uVar18) {
                    uVar13 = 6;
                  }
                  if (uVar14 < uVar19) {
                    uVar14 = uVar19;
                  }
                  if (uVar19 <= uVar18) {
                    uVar18 = uVar19;
                  }
                  uVar5 = uVar5 & *(uint *)(iVar11 + 0x60);
                  uVar10 = uVar10 | *(uint *)(iVar11 + 0x60);
                  uVar3 = *(ushort *)(iVar11 + 0x68) & uVar3;
                  uVar6 = *(ushort *)(iVar11 + 0x68) | uVar6;
                  uVar17 = *(ushort *)(iVar11 + 0x6a) & uVar17;
                  uVar21 = *(ushort *)(iVar11 + 0x6a) | uVar21;
                  if (uVar12 == 8) {
                    uVar19 = (uint)*(ushort *)(iVar11 + 0x76);
                    if (0xbf < uVar19) {
                      uVar19 = 0xc0;
                    }
                    *(short *)(iVar11 + 0x76) = (short)uVar19;
                    uVar5 = uVar5 & *(uint *)(iVar11 + 0x70);
                    uVar10 = uVar10 | *(uint *)(iVar11 + 0x70);
                    if (uVar19 < uVar18) {
                      uVar13 = 7;
                    }
                    if (uVar14 < uVar19) {
                      uVar14 = uVar19;
                    }
                    if (uVar19 <= uVar18) {
                      uVar18 = uVar19;
                    }
                    uVar3 = *(ushort *)(iVar11 + 0x78) & uVar3;
                    uVar6 = *(ushort *)(iVar11 + 0x78) | uVar6;
                    uVar17 = *(ushort *)(iVar11 + 0x7a) & uVar17;
                    uVar21 = *(ushort *)(iVar11 + 0x7a) | uVar21;
                  }
                }
              }
            }
          }
        }
        if (uVar14 == uVar18) {
          uVar10 = param_3[0x2800];
        }
        else {
          uVar19 = param_5;
          if (uVar17 == uVar21) {
            uVar19 = param_5 | 4;
          }
          if ((*(byte *)(param_1 + 0x9a91) & 2) == 0) {
            if (uVar3 == uVar6) {
              uVar19 = uVar19 | 0x10;
            }
            uVar9 = *puVar20;
            if (uVar5 == uVar10) {
              uVar19 = uVar19 | 0x20;
            }
          }
          else {
            uVar9 = *puVar20;
            if (uVar5 == uVar10) {
              uVar19 = uVar19 | 0x30;
            }
            uVar19 = uVar19 | 8;
          }
          if (((uVar9 & 0x1c000000) != 0) && ((puVar20[1] << 0x1a) >> 0x1e != 3)) {
            uVar10 = (uint)*(ushort *)(puVar20 + 4);
            uVar19 = uVar19 | 2;
            if (local_3c != uVar9 || local_44 != uVar10) {
              local_38 = FUN_08058628(*(undefined4 *)(param_1 + 0x9a1c),uVar9,uVar10);
              uVar4 = puVar20[2];
              local_44 = uVar10;
              local_3c = uVar9;
            }
            puVar20[3] = local_38;
          }
          uVar10 = uVar4 | uVar14 << 0x18 | uVar19 << 8;
          puVar20[2] = uVar10;
          if (uVar12 == 4) {
            if ((uVar4 & 0x40) == 0) {
              uVar13 = uVar13 << 0x10;
              uVar10 = uVar10 | 0x200000;
            }
            else {
              if (uVar13 == 2) {
                if (uVar18 == *(ushort *)(iVar11 + 0x36)) {
                  uVar13 = 0x30000;
                }
                else {
                  uVar13 = 0x20000;
                }
              }
              else {
                uVar13 = uVar13 << 0x10;
              }
              uVar10 = uVar10 | 0x480000;
            }
            puVar20[2] = uVar13 | uVar10;
            FUN_08034788(puVar20,iVar11);
          }
          else {
            puVar20[2] = uVar12 << 0x13 | uVar13 << 0x10 | uVar10;
          }
          sVar2 = *(short *)(&DAT_08103208 + uVar18 * 2);
          uVar10 = param_3[0x2800];
          *(short *)(&DAT_08103208 + uVar18 * 2) = sVar2 + 1;
          *(short *)(&DAT_08103390 + (uVar18 * 0x800 + (int)sVar2) * 2) = (short)local_84;
        }
      }
      puVar20 = puVar20 + 5;
      local_84 = local_84 + 1;
    } while (local_84 < uVar10);
  }
  iVar11 = 0x81c3390;
  psVar15 = &DAT_08103388;
  do {
    psVar16 = psVar15 + -1;
    iVar8 = *psVar15 + -1;
    if (-1 < iVar8) {
      puVar7 = (ushort *)(iVar11 + *psVar15 * 2);
      do {
        puVar7 = puVar7 + -1;
        iVar8 = iVar8 + -1;
        uVar3 = *puVar7;
        uVar10 = (uint)*(byte *)((int)param_3 + (uint)uVar3 * 0x14 + 0xb);
        iVar1 = uVar10 * 2;
        sVar2 = *(short *)(local_54 + iVar1);
        *(short *)(local_54 + iVar1) = sVar2 + 1;
        *(ushort *)(local_54 + (uVar10 * 0x800 + (int)sVar2) * 2 + 0x188) = uVar3;
      } while (iVar8 != -1);
    }
    iVar11 = iVar11 + -0x1000;
    *psVar15 = 0;
    psVar15 = psVar16;
  } while (psVar16 != (short *)((int)&DAT_08103204 + 2));
  local_54 = &DAT_08104390;
  local_5c = (undefined2 *)&DAT_08103208;
  local_58 = 0;
  do {
    iVar11 = (short)local_5c[1] + -1;
    if (-1 < iVar11) {
      puVar7 = (ushort *)(local_54 + (short)local_5c[1] * 2);
      do {
        puVar7 = puVar7 + -1;
        uVar3 = *puVar7;
        uVar10 = 0xfffU >> (0xb - (local_58 >> 4) & 0xff) &
                 0xfff << (*(ushort *)
                            (param_4 + ((*(ushort *)((int)param_3 + (uint)uVar3 * 0x14 + 10) & 7) +
                                       (uint)*(ushort *)((int)param_3 + (uint)uVar3 * 0x14 + 0x12))
                                       * 0x10 + 6) >> 4 & 0xff);
        if ((uVar10 & 1) != 0) {
          iVar8 = *(int *)(param_2 + 0x1000);
          *(ushort *)(param_2 + iVar8 * 2) = uVar3;
          *(int *)(param_2 + 0x1000) = iVar8 + 1;
        }
        if ((uVar10 & 2) != 0) {
          iVar8 = *(int *)(param_2 + 0x2004);
          *(ushort *)(param_2 + iVar8 * 2 + 0x1004) = uVar3;
          *(int *)(param_2 + 0x2004) = iVar8 + 1;
        }
        if ((uVar10 & 4) != 0) {
          iVar8 = *(int *)(param_2 + 0x3008);
          *(ushort *)(param_2 + iVar8 * 2 + 0x2008) = uVar3;
          *(int *)(param_2 + 0x3008) = iVar8 + 1;
        }
        if ((uVar10 & 8) != 0) {
          iVar8 = *(int *)(param_2 + 0x400c);
          *(ushort *)(param_2 + iVar8 * 2 + 0x300c) = uVar3;
          *(int *)(param_2 + 0x400c) = iVar8 + 1;
        }
        if ((uVar10 & 0x10) != 0) {
          iVar8 = *(int *)(param_2 + 0x5010);
          *(ushort *)(param_2 + iVar8 * 2 + 0x4010) = uVar3;
          *(int *)(param_2 + 0x5010) = iVar8 + 1;
        }
        if ((uVar10 & 0x20) != 0) {
          iVar8 = *(int *)(param_2 + 0x6014);
          *(ushort *)(param_2 + iVar8 * 2 + 0x5014) = uVar3;
          *(int *)(param_2 + 0x6014) = iVar8 + 1;
        }
        if ((uVar10 & 0x40) != 0) {
          iVar8 = *(int *)(param_2 + 0x7018);
          *(ushort *)(param_2 + iVar8 * 2 + 0x6018) = uVar3;
          *(int *)(param_2 + 0x7018) = iVar8 + 1;
        }
        if ((uVar10 & 0x80) != 0) {
          iVar8 = *(int *)(param_2 + 0x801c);
          *(ushort *)(param_2 + iVar8 * 2 + 0x701c) = uVar3;
          *(int *)(param_2 + 0x801c) = iVar8 + 1;
        }
        if ((uVar10 & 0x100) != 0) {
          iVar8 = *(int *)(param_2 + 0x9020);
          *(ushort *)(param_2 + iVar8 * 2 + 0x8020) = uVar3;
          *(int *)(param_2 + 0x9020) = iVar8 + 1;
        }
        if ((uVar10 & 0x200) != 0) {
          iVar8 = *(int *)(param_2 + 0xa024);
          *(ushort *)(param_2 + iVar8 * 2 + 0x9024) = uVar3;
          *(int *)(param_2 + 0xa024) = iVar8 + 1;
        }
        if ((uVar10 & 0x400) != 0) {
          iVar8 = *(int *)(param_2 + 0xb028);
          *(ushort *)(param_2 + iVar8 * 2 + 41000) = uVar3;
          *(int *)(param_2 + 0xb028) = iVar8 + 1;
        }
        if ((uVar10 & 0x800) != 0) {
          iVar8 = *(int *)(param_2 + 0xc02c);
          *(ushort *)(param_2 + iVar8 * 2 + 0xb02c) = uVar3;
          *(int *)(param_2 + 0xc02c) = iVar8 + 1;
        }
        bVar22 = iVar11 != 0;
        iVar11 = iVar11 + -1;
      } while (bVar22);
    }
    local_58 = local_58 + 1;
    local_54 = local_54 + 0x1000;
    local_5c = local_5c + 1;
    *local_5c = 0;
  } while (local_58 != 0xc0);
  return;
}


