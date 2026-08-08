/*
 * Ghidra decompilation
 *
 * Function : FUN_0802f5e4
 * Address  : 0802f5e4
 * Program  : drastic16
 */


void FUN_0802f5e4(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  short sVar10;
  short sVar11;
  undefined uVar12;
  byte bVar13;
  uint uVar14;
  int iVar15;
  byte bVar16;
  byte bVar17;
  uint uVar18;
  int iVar19;
  byte bVar20;
  byte bVar21;
  int iVar22;
  int iVar23;
  uint uVar24;
  int iVar25;
  uint uVar26;
  uint uVar27;
  ushort *puVar28;
  int iVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  int iVar33;
  uint uVar34;
  int iVar35;
  short *psVar36;
  int iVar37;
  void *__s;
  uint uVar38;
  int iVar39;
  bool bVar40;
  short *local_a8;
  short *local_a4;
  uint local_a0;
  short local_8c;
  uint local_88;
  uint local_74;
  uint local_64;
  uint local_60;
  uint local_54;
  uint local_4c;
  uint local_44;
  
  uVar26 = *(uint *)(param_1 + 0x70);
  uVar30 = uVar26 & 0x10;
  if (uVar30 == 0) {
    local_4c = 5;
  }
  iVar22 = *(int *)(param_1 + 0xc) + 0x200;
  if (uVar30 != 0) {
    local_4c = ((uVar26 << 10) >> 0x1e) + 5;
  }
  puVar28 = *(ushort **)(param_1 + 0x18);
  if (*(char *)(param_1 + 0x97) == '\x01') {
    iVar23 = 0x600000;
  }
  else {
    iVar23 = 0x400000;
  }
  if ((int)uVar26 < 0) {
    uVar27 = *(uint *)(param_1 + 0x14);
  }
  else {
    local_44 = 0;
    uVar27 = uVar30;
  }
  if ((int)uVar26 < 0) {
    local_44 = uVar27;
  }
  __s = (void *)(param_1 + 0x20e78);
  local_54 = 0xffff;
  memset((void *)(param_1 + 0x20ab8),0,0x3c0);
  memset(__s,0,0xc0);
  local_a8 = (short *)(param_1 + 0x2f8);
  iVar29 = 0;
  local_a4 = (short *)(param_1 + 0x2f4);
  local_60 = 0xffff;
  local_64 = 0xffff;
  iVar35 = param_1;
  do {
    uVar4 = *puVar28;
    uVar27 = (uint)uVar4;
    if ((uVar4 >> 0xe != 3) && ((uVar27 & 0x300) != 0x200)) {
      uVar5 = puVar28[1];
      uVar38 = (uint)uVar5;
      bVar16 = 0;
      uVar24 = uVar27 & 0xff;
      iVar19 = ((uint)(uVar5 >> 0xe) | (uint)(uVar4 >> 0xe) << 2) * 2;
      uVar34 = (uint)(byte)(&DAT_080e6881)[iVar19];
      if ((uVar4 & 0x200) != 0) {
        uVar34 = uVar34 << 1;
      }
      if ((uVar24 < 0xc0) || (0xff < uVar34 + uVar24)) {
        uVar18 = uVar38 & 0x1ff;
        uVar6 = puVar28[2];
        uVar31 = (uint)uVar6;
        bVar20 = (&DAT_080e6880)[iVar19];
        uVar14 = (uint)bVar20;
        uVar2 = local_64;
        uVar32 = local_60;
        uVar3 = local_54;
        if (((uVar18 | uVar24) != 0) ||
           ((uVar2 = uVar27, uVar32 = uVar38, uVar3 = uVar31,
            uVar27 != local_64 || uVar38 != local_60 || (uVar31 != local_54)))) {
          local_54 = uVar3;
          local_60 = uVar32;
          local_64 = uVar2;
          local_a0 = uVar14;
          if ((uVar4 & 0x200) != 0) {
            local_a0 = uVar14 << 1;
          }
          if ((uVar18 < 0x100) || (0x1ff < local_a0 + uVar18)) {
            local_8c = (short)((int)(uVar18 << 0x17) >> 0x17);
            sVar11 = (short)uVar24;
            *local_a8 = sVar11;
            *(undefined *)(iVar35 + 0x305) = 0;
            local_74 = (uVar31 << 0x14) >> 0x1e;
            *(undefined *)(iVar35 + 0x304) = 0;
            uVar32 = (uVar27 << 0x14) >> 0x1e;
            uVar2 = (uint)(uVar6 >> 0xc);
            if ((uVar4 & 0x100) == 0) {
              if ((uVar5 & 0x1000) == 0) {
                bVar16 = 0;
              }
              else {
                bVar16 = 4;
              }
              if ((uVar5 & 0x2000) != 0) {
                *local_a8 = sVar11 + -1 + (short)uVar34;
                *(undefined *)(iVar35 + 0x305) = 1;
              }
            }
            else {
              psVar36 = (short *)(iVar35 + 0x300);
              iVar39 = *(int *)(param_1 + 0x18) + ((uVar38 << 0x12) >> 0x1b) * 0x20;
              sVar7 = *(short *)(iVar39 + 6);
              sVar8 = *(short *)(iVar39 + 0x16);
              uVar38 = local_a0 >> 1;
              sVar9 = *(short *)(iVar39 + 0x1e);
              sVar10 = *(short *)(iVar39 + 0xe);
              *(short *)(iVar35 + 0x2fa) = sVar7;
              iVar19 = (int)sVar7;
              iVar37 = (int)sVar8;
              *(short *)(iVar35 + 0x2fc) = sVar8;
              *(short *)(iVar35 + 0x2fe) = sVar10;
              uVar3 = uVar34 >> 1;
              *psVar36 = sVar9;
              if ((iVar19 == 0x100 && iVar37 == 0) && (sVar10 == 0 && sVar9 == 0x100)) {
                if ((uVar4 & 0x200) != 0) {
                  uVar24 = uVar24 + (uVar34 >> 2);
                  local_8c = local_8c + (short)(local_a0 >> 2);
                  *local_a8 = (short)uVar24;
                  if ((((0xbf < uVar24) && (uVar24 + uVar3 < 0x100)) || (0xff < local_8c)) ||
                     ((int)((int)local_8c + uVar38) < 1)) goto LAB_0802f9b0;
                  bVar16 = 0;
                  uVar34 = uVar3;
                  local_a0 = uVar38;
                }
              }
              else {
                bVar40 = (uVar4 & 0x200) == 0;
                sVar7 = *(short *)(iVar39 + 0xe);
                iVar25 = uVar3 << 8;
                *(short *)(iVar35 + 0x2fe) = sVar7;
                iVar1 = uVar38 << 8;
                iVar15 = iVar1;
                if (!bVar40) {
                  iVar15 = iVar1 >> 1;
                }
                *psVar36 = *(short *)(iVar39 + 0x1e);
                if (bVar40) {
                  iVar39 = uVar34 << 8;
                  iVar1 = local_a0 << 8;
                  iVar33 = iVar25;
                  local_88 = uVar34;
                }
                else {
                  iVar33 = iVar25 >> 1;
                  local_88 = uVar3;
                  iVar39 = iVar25;
                }
                uVar18 = (uint)local_8c;
                iVar15 = iVar15 - iVar19 * uVar38;
                iVar33 = iVar33 - iVar37 * uVar38;
                if ((int)(uVar18 + 7) < 0 != SCARRY4(uVar18,7)) {
                  uVar38 = -uVar18 & 0xfffffff8;
                  local_8c = (short)uVar38 + local_8c;
                  iVar15 = iVar19 * uVar38 + iVar15;
                  local_a0 = local_a0 - uVar38;
                  iVar33 = iVar37 * uVar38 + iVar33;
                  uVar18 = (uint)local_8c;
                }
                uVar38 = uVar18 + local_a0;
                if (0x100 < uVar38) {
                  uVar18 = 0x107 - uVar18;
                }
                *(short *)(iVar35 + 0x2f0) = (short)iVar15;
                if (0x100 < uVar38) {
                  local_a0 = uVar18 & 0xfffffff8;
                }
                *(short *)(iVar35 + 0x2f2) = (short)iVar33;
                *(char *)(iVar35 + 0x303) = (char)local_88;
                *local_a8 = sVar11 + (short)uVar3;
                FUN_0802f2b8(iVar15,iVar19,iVar1 + -1,(int)sVar7,local_88,iVar35 + 0x2b8,
                             iVar35 + 0x2c8,iVar35 + 0x2c0);
                FUN_0802f2b8(iVar33,iVar37,iVar39 + -1,(int)*psVar36,local_88,iVar35 + 0x2d0,
                             iVar35 + 0x2e0,iVar35 + 0x2d8);
                bVar16 = 8;
              }
            }
            if (uVar32 == 3) {
              if (uVar2 == 0) goto LAB_0802f9b0;
              *(byte *)(iVar35 + 0x304) = (byte)(uVar6 >> 0xc) * '\x02' + '\x01';
              if ((uVar26 & 0x40) == 0) {
                if ((uVar26 & 0x20) == 0) {
                  uVar31 = uVar31 & 0xf;
                  *local_a4 = 0x100;
                  uVar27 = (uVar31 + ((uVar31 << 0x16) >> 0x1a) * 0x80) * 0x10;
                }
                else {
                  uVar31 = uVar31 & 0x1f;
                  *local_a4 = 0x200;
                  uVar27 = (uVar31 + ((uVar31 << 0x16) >> 0x1b) * 0x100) * 0x10;
                }
              }
              else {
                uVar27 = (uVar31 & 0x3ff) << (7U - ((int)(uVar26 << 9) >> 0x1f) & 0xff);
                uVar31 = uVar14 << 1;
                *local_a4 = (short)uVar31;
              }
              if ((bVar16 & 8) == 0) {
                bVar20 = bVar16 & 4;
                if (bVar20 != 0) {
                  uVar31 = uVar14 + 0x7fffffff;
                }
                iVar19 = (int)local_8c;
                if (bVar20 != 0) {
                  uVar27 = uVar27 + uVar31 * 2;
                }
                if (iVar19 + 7 < 0 != SCARRY4(iVar19,7)) {
                  uVar38 = -iVar19 & 0xfffffff8;
                  local_8c = (short)uVar38 + local_8c;
                  local_a0 = local_a0 - uVar38;
                  if (bVar20 == 0) {
                    uVar27 = uVar27 + uVar38 * 2;
                    iVar19 = (int)local_8c;
                  }
                  else {
                    uVar27 = uVar27 + uVar38 * -2;
                    iVar19 = (int)local_8c;
                  }
                }
                if (0x100 < iVar19 + local_a0) {
                  local_a0 = 0x107U - iVar19 & 0xfffffff8;
                }
              }
              bVar21 = bVar16 | 2;
              bVar17 = 2;
            }
            else {
              iVar19 = -((int)(uVar27 << 0x12) >> 0x1f);
              uVar27 = (uVar31 & 0x3ff) << (local_4c & 0xff);
              bVar21 = bVar16 | (byte)((uVar27 << 0x12) >> 0x1f);
              if (uVar32 == 1) {
                *(undefined *)(iVar35 + 0x304) = 0x80;
                bVar17 = 1;
              }
              else {
                bVar17 = 0;
                if (uVar32 == 2) {
                  local_74 = 4;
                }
              }
              if (uVar30 == 0) {
                *local_a4 = 0x400;
                if (iVar19 == 0) {
                  if ((bVar16 & 4) != 0) goto LAB_0802ff50;
                  iVar19 = 0;
                }
                else {
                  uVar27 = uVar27 & ~(1 << (local_4c & 0xff));
                  if ((bVar16 & 4) == 0) goto LAB_0802ff14;
                  iVar19 = 1;
                  uVar27 = uVar27 + ((bVar20 >> 3) + 0x3ffffff) * 0x40;
                }
              }
              else {
                bVar13 = bVar20 >> 3;
                if (iVar19 == 0) {
                  *local_a4 = (ushort)bVar13 << 5;
                  if ((bVar16 & 4) == 0) {
                    iVar19 = 0;
                  }
                  else {
LAB_0802ff50:
                    uVar27 = uVar27 + ((bVar20 >> 3) + 0x7ffffff) * 0x20;
                  }
                }
                else {
                  *local_a4 = (ushort)bVar13 << 6;
                  if ((bVar16 & 4) == 0) {
LAB_0802ff14:
                    iVar19 = 1;
                  }
                  else {
                    iVar19 = 1;
                    uVar27 = uVar27 + (bVar13 + 0x3ffffff) * 0x40;
                  }
                }
              }
              if ((bVar16 & 8) == 0) {
                iVar37 = (int)local_8c;
                if (iVar37 + 7 < 0 != SCARRY4(iVar37,7)) {
                  uVar38 = -iVar37 & 0xfffffff8;
                  local_8c = (short)uVar38 + local_8c;
                  iVar37 = uVar38 << 2;
                  if (iVar19 != 0) {
                    iVar37 = uVar38 << 3;
                  }
                  local_a0 = local_a0 - uVar38;
                  if ((bVar16 & 4) != 0) {
                    iVar37 = -iVar37;
                  }
                  uVar27 = uVar27 + iVar37;
                  iVar37 = (int)local_8c;
                }
                if (0x100 < iVar37 + local_a0) {
                  local_a0 = 0x107U - iVar37 & 0xfffffff8;
                }
              }
            }
            if (local_a0 != 0) {
              *(uint *)(iVar35 + 0x2ec) = *(int *)(param_1 + 4) + uVar27 + iVar23;
              *(byte *)(iVar35 + 0x302) = bVar21;
              *(char *)(iVar35 + 0x306) = (char)local_a0;
              *(short *)(iVar35 + 0x2f6) = local_8c;
              if ((uVar4 & 0x2000) == 0) {
                *(uint *)(iVar35 + 0x2e8) = iVar22 + uVar2 * 0x20;
              }
              else if (local_44 == 0) {
                *(int *)(iVar35 + 0x2e8) = iVar22;
              }
              else {
                *(uint *)(iVar35 + 0x2e8) = local_44 + uVar2 * 0x200;
              }
              iVar19 = param_1 + 0x2b8 + local_74 * 0x6000 + 0x2800;
              iVar37 = param_1 + 0x2b8 + local_74 * 0xc0 + 0x20800;
              uVar12 = (undefined)iVar29;
              if (uVar34 == 0x80 && 0x80 < uVar24) {
                *local_a8 = *local_a8 + -0x100;
                iVar25 = 0;
                iVar39 = iVar19;
                do {
                  bVar16 = *(byte *)(iVar37 + iVar25);
                  *(undefined *)(iVar39 + (uint)bVar16) = uVar12;
                  iVar39 = iVar39 + 0x80;
                  *(byte *)(iVar37 + iVar25) = bVar16 + 1;
                  *(byte *)((int)__s + iVar25) = bVar17 | *(byte *)((int)__s + iVar25);
                  iVar25 = iVar25 + 1;
                } while (iVar25 != uVar24 - 0x80);
                if (uVar24 < 0xc0) {
                  iVar19 = iVar19 + uVar24 * 0x80;
                  do {
                    bVar16 = *(byte *)(iVar37 + uVar24);
                    *(undefined *)(iVar19 + (uint)bVar16) = uVar12;
                    iVar19 = iVar19 + 0x80;
                    *(byte *)(iVar37 + uVar24) = bVar16 + 1;
                    *(byte *)((int)__s + uVar24) = bVar17 | *(byte *)((int)__s + uVar24);
                    uVar24 = uVar24 + 1;
                  } while (uVar24 != 0xc0);
                }
              }
              else {
                if (uVar24 < 0xc0) {
                  uVar34 = uVar34 + uVar24;
                  if (uVar34 < 0xc1) goto LAB_0802f968;
                  uVar34 = 0xc0;
                }
                else {
                  uVar34 = (uVar24 + uVar34) - 0x100;
                  *local_a8 = *local_a8 + -0x100;
                  uVar24 = 0;
LAB_0802f968:
                  if (uVar34 <= uVar24) goto LAB_0802f9b0;
                }
                iVar19 = iVar19 + uVar24 * 0x80;
                do {
                  bVar16 = *(byte *)(iVar37 + uVar24);
                  *(undefined *)(iVar19 + (uint)bVar16) = uVar12;
                  iVar19 = iVar19 + 0x80;
                  *(byte *)(iVar37 + uVar24) = bVar16 + 1;
                  *(byte *)((int)__s + uVar24) = bVar17 | *(byte *)((int)__s + uVar24);
                  uVar24 = uVar24 + 1;
                } while (uVar24 != uVar34);
              }
            }
          }
        }
      }
    }
LAB_0802f9b0:
    iVar29 = iVar29 + 1;
    local_a8 = local_a8 + 0x28;
    puVar28 = puVar28 + 4;
    local_a4 = local_a4 + 0x28;
    iVar35 = iVar35 + 0x50;
    if (iVar29 == 0x80) {
      return;
    }
  } while( true );
}


