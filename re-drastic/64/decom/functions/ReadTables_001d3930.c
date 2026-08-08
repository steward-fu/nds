/*
 * Ghidra decompilation
 *
 * Function : ReadTables
 * Address  : 001d3930
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Unpack::ReadTables(BitInput&, UnpackBlockHeader&, UnpackBlockTables&) [clone .part.0] */

void Unpack::ReadTables(BitInput *param_1,UnpackBlockHeader *param_2,UnpackBlockTables *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint *puVar13;
  ushort uVar14;
  byte bVar15;
  char cVar16;
  int iVar17;
  ulong uVar18;
  long lVar19;
  undefined8 uVar20;
  uint uVar21;
  byte *pbVar22;
  ulong uVar23;
  byte *pbVar24;
  int iVar25;
  uint uVar26;
  ulong uVar27;
  long lVar28;
  ulong uVar29;
  ulong uVar30;
  ulong uVar31;
  UnpackBlockTables *pUVar32;
  ulong uVar33;
  ulong uVar34;
  uint uVar35;
  ulong uVar36;
  ulong uVar37;
  ulong uVar38;
  ulong uVar39;
  ulong uVar40;
  ulong uVar41;
  ulong uVar42;
  ulong uVar43;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 local_240;
  undefined8 local_238;
  undefined8 local_230;
  undefined8 local_228;
  undefined8 local_220;
  undefined8 local_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  byte local_1d0 [20];
  byte abStack_1bc [3];
  byte local_1b9 [307];
  byte local_86 [64];
  byte local_46;
  byte local_45;
  byte local_44;
  byte local_43;
  byte local_42;
  byte local_41;
  byte local_40;
  byte local_3f;
  byte local_3e;
  byte local_3d;
  byte local_3c;
  byte local_3b;
  byte local_3a;
  byte local_39;
  byte local_38;
  byte local_37;
  byte local_36 [44];
  byte abStack_a [2];
  long local_8;
  
  uVar36 = 0;
  local_8 = ___stack_chk_guard;
  do {
    uVar18 = BitInput::fgetbits();
    bVar15 = (byte)(uVar18 >> 0xc);
    BitInput::faddbits((BitInput *)param_2,4);
    uVar35 = (uint)uVar36;
    if (((uint)(uVar18 >> 0xc) & 0xff) == 0xf) {
      uVar18 = BitInput::fgetbits();
      BitInput::faddbits((BitInput *)param_2,4);
      if ((uVar18 >> 0xc & 0xff) != 0) {
        uVar23 = uVar36;
        if (uVar35 < 0x14) {
          do {
            uVar26 = (int)uVar23 + 1;
            uVar36 = (ulong)uVar26;
            iVar17 = (((uint)(uVar18 >> 0xc) & 0xff) - uVar26) + uVar35 + 2;
            local_1d0[uVar23] = 0;
            uVar23 = uVar36;
          } while (0 < iVar17 && uVar26 < 0x13 || 0 < iVar17 && uVar26 == 0x13);
          goto LAB_001d3984;
        }
        break;
      }
      local_1d0[uVar36] = bVar15;
      uVar35 = uVar35 + 1;
      uVar36 = (ulong)uVar35;
    }
    else {
      local_1d0[uVar36] = bVar15;
      uVar36 = (ulong)(uVar35 + 1);
LAB_001d3984:
      uVar35 = (uint)uVar36;
    }
  } while (uVar35 < 0x14);
  local_250 = 0;
  uStack_248 = 0;
  local_240 = 0;
  local_238 = 0;
  local_230 = 0;
  local_228 = 0;
  local_220 = 0;
  local_218 = 0;
  *(undefined4 *)(param_3 + 0x3bb0) = 0x14;
  pbVar24 = local_1d0;
  do {
    pbVar22 = pbVar24 + 1;
    *(int *)((long)&local_250 + ((ulong)*pbVar24 & 0xf) * 4) =
         *(int *)((long)&local_250 + ((ulong)*pbVar24 & 0xf) * 4) + 1;
    pbVar24 = pbVar22;
  } while (pbVar22 != abStack_1bc);
  uVar35 = local_250._4_4_;
  puVar13 = (uint *)(param_3 + 0x3bb0);
  iVar17 = (int)uStack_248 + local_250._4_4_ * 2;
  *(undefined8 *)(param_3 + 0x4838) = 0;
  *(undefined8 *)(param_3 + 0x4840) = 0;
  iVar25 = uStack_248._4_4_ + iVar17 * 2;
  *(undefined8 *)(param_3 + 0x4848) = 0;
  *(undefined8 *)(param_3 + 0x4850) = 0;
  iVar1 = (int)local_240 + iVar25 * 2;
  iVar2 = local_240._4_4_ + iVar1 * 2;
  iVar3 = (int)local_238 + iVar2 * 2;
  iVar4 = local_238._4_4_ + iVar3 * 2;
  iVar5 = (int)local_230 + iVar4 * 2;
  iVar6 = local_230._4_4_ + iVar5 * 2;
  *(undefined4 *)(param_3 + 0x3bb4) = 0;
  *(uint *)(param_3 + 0x3bb8) = local_250._4_4_ << 0xf;
  iVar7 = (int)local_228 + iVar6 * 2;
  *(undefined4 *)(param_3 + 0x3bf4) = 0;
  *(undefined8 *)(param_3 + 0x4858) = 0;
  *(int *)(param_3 + 0x3bbc) = iVar17 * 0x4000;
  iVar17 = local_228._4_4_ + iVar7 * 2;
  *(int *)(param_3 + 0x3bc8) = iVar2 * 0x800;
  *(int *)(param_3 + 0x3bc4) = iVar1 * 0x1000;
  *(int *)(param_3 + 0x3bd0) = iVar4 * 0x200;
  iVar1 = (int)local_220 + iVar17 * 2;
  iVar2 = local_250._4_4_ + (int)uStack_248;
  iVar4 = iVar2 + uStack_248._4_4_;
  *(int *)(param_3 + 0x3bdc) = iVar7 * 0x40;
  iVar7 = local_220._4_4_ + iVar1 * 2;
  iVar8 = iVar4 + (int)local_240;
  iVar9 = iVar8 + local_240._4_4_;
  *(int *)(param_3 + 0x3be0) = iVar17 * 0x20;
  iVar17 = iVar9 + (int)local_238;
  local_250 = (ulong)local_250._4_4_ << 0x20;
  *(int *)(param_3 + 0x3bc0) = iVar25 * 0x2000;
  *(int *)(param_3 + 0x3bcc) = iVar3 * 0x400;
  *(int *)(param_3 + 0x3bd4) = iVar5 * 0x100;
  *(int *)(param_3 + 0x3bd8) = iVar6 * 0x80;
  *(int *)(param_3 + 0x3be4) = iVar1 * 0x10;
  *(int *)(param_3 + 0x3be8) = iVar7 * 8;
  iVar25 = iVar17 + local_238._4_4_;
  iVar1 = iVar25 + (int)local_230;
  iVar3 = (int)local_218 + iVar7 * 2;
  iVar5 = iVar1 + local_230._4_4_;
  iVar6 = iVar5 + (int)local_228;
  iVar7 = iVar6 + local_228._4_4_;
  iVar10 = iVar7 + (int)local_220;
  *(int *)(param_3 + 0x3bec) = iVar3 * 4;
  *(int *)(param_3 + 0x3bf0) = (local_218._4_4_ + iVar3 * 2) * 2;
  iVar3 = iVar10 + local_220._4_4_;
  *(undefined4 *)(param_3 + 0x3bf8) = 0;
  *(uint *)(param_3 + 0x3bfc) = uVar35;
  *(int *)(param_3 + 0x3c00) = iVar2;
  *(int *)(param_3 + 0x3c04) = iVar4;
  *(int *)(param_3 + 0x3c08) = iVar8;
  *(int *)(param_3 + 0x3c0c) = iVar9;
  *(int *)(param_3 + 0x3c10) = iVar17;
  *(int *)(param_3 + 0x3c14) = iVar25;
  *(int *)(param_3 + 0x3c18) = iVar1;
  *(int *)(param_3 + 0x3c1c) = iVar5;
  *(int *)(param_3 + 0x3c20) = iVar6;
  *(int *)(param_3 + 0x3c24) = iVar7;
  *(int *)(param_3 + 0x3c28) = iVar10;
  *(int *)(param_3 + 0x3c2c) = iVar3;
  *(int *)(param_3 + 0x3c30) = iVar3 + (int)local_218;
  local_210 = *(undefined8 *)(param_3 + 0x3bf4);
  uStack_208 = *(undefined8 *)(param_3 + 0x3bfc);
  lVar28 = 1;
  local_200 = *(undefined8 *)(param_3 + 0x3c04);
  uStack_1f8 = *(undefined8 *)(param_3 + 0x3c0c);
  local_1f0 = *(undefined8 *)(param_3 + 0x3c14);
  uStack_1e8 = *(undefined8 *)(param_3 + 0x3c1c);
  local_1e0 = *(undefined8 *)(param_3 + 0x3c24);
  uStack_1d8 = *(undefined8 *)(param_3 + 0x3c2c);
  do {
    if ((local_1d0[lVar28 + -1] & 0xf) != 0) {
      lVar19 = (long)(int)(local_1d0[lVar28 + -1] & 0xf);
      uVar35 = *(uint *)((long)&local_210 + lVar19 * 4);
      *(uint *)((long)&local_210 + lVar19 * 4) = uVar35 + 1;
      *(short *)((long)puVar13 + (ulong)uVar35 * 2 + 0xc88) = (short)lVar28 + -1;
    }
    lVar28 = lVar28 + 1;
  } while (lVar28 != 0x15);
  pUVar32 = param_3 + 0x3c38;
  uVar35 = 0;
  uVar18 = 1;
  uVar36 = 1;
  *(undefined4 *)(param_3 + 0x3c34) = 7;
LAB_001d3c38:
  if ((int)uVar18 == 0x10) goto LAB_001d573c;
LAB_001d3c40:
  if (uVar35 < puVar13[uVar36 + 1]) {
LAB_001d5750:
    uVar23 = (ulong)((int)uVar18 - 1);
    goto LAB_001d3e08;
  }
  iVar17 = (int)uVar18;
  uVar26 = iVar17 + 1;
  if (iVar17 == 0xf) {
LAB_001d5850:
    uVar18 = (ulong)uVar26;
    uVar23 = 0xf;
    uVar36 = 0x10;
  }
  else {
    uVar36 = (ulong)uVar26;
    if (puVar13[(ulong)uVar26 + 1] <= uVar35) {
      uVar26 = iVar17 + 2;
      if (iVar17 == 0xe) goto LAB_001d5850;
      uVar36 = (ulong)uVar26;
      if (puVar13[(ulong)uVar26 + 1] <= uVar35) {
        uVar26 = iVar17 + 3;
        if (iVar17 == 0xd) goto LAB_001d5850;
        uVar36 = (ulong)uVar26;
        if (puVar13[(ulong)uVar26 + 1] <= uVar35) {
          uVar26 = iVar17 + 4;
          if (iVar17 == 0xc) {
LAB_001d59a8:
            uVar18 = (ulong)uVar26;
            uVar36 = 0x10;
            uVar23 = 0xf;
            goto LAB_001d3e08;
          }
          if (uVar35 < puVar13[(ulong)uVar26 + 1]) {
LAB_001d59e4:
            uVar18 = (ulong)uVar26;
            uVar23 = (ulong)(uVar26 - 1);
            uVar36 = uVar18;
            goto LAB_001d3e08;
          }
          uVar26 = iVar17 + 5;
          if (iVar17 == 0xb) goto LAB_001d5850;
          uVar36 = (ulong)uVar26;
          if (puVar13[(ulong)uVar26 + 1] <= uVar35) {
            uVar26 = iVar17 + 6;
            if (iVar17 == 10) goto LAB_001d5850;
            uVar36 = (ulong)uVar26;
            if (puVar13[(ulong)uVar26 + 1] <= uVar35) {
              uVar26 = iVar17 + 7;
              if (iVar17 == 9) goto LAB_001d5850;
              uVar36 = (ulong)uVar26;
              if (puVar13[(ulong)uVar26 + 1] <= uVar35) {
                uVar26 = iVar17 + 8;
                if (iVar17 == 8) goto LAB_001d5850;
                uVar36 = (ulong)uVar26;
                if (puVar13[(ulong)uVar26 + 1] <= uVar35) {
                  uVar26 = iVar17 + 9;
                  if (iVar17 == 7) goto LAB_001d59a8;
                  if (uVar35 < puVar13[(ulong)uVar26 + 1]) goto LAB_001d59e4;
                  uVar26 = iVar17 + 10;
                  if (iVar17 == 6) goto LAB_001d5850;
                  uVar36 = (ulong)uVar26;
                  if (puVar13[(ulong)uVar26 + 1] <= uVar35) {
                    uVar26 = iVar17 + 0xb;
                    if (iVar17 == 5) goto LAB_001d5850;
                    uVar36 = (ulong)uVar26;
                    if (puVar13[(ulong)uVar26 + 1] <= uVar35) {
                      uVar26 = iVar17 + 0xc;
                      if (iVar17 == 4) goto LAB_001d5850;
                      uVar36 = (ulong)uVar26;
                      if (puVar13[(ulong)uVar26 + 1] <= uVar35) {
                        uVar26 = iVar17 + 0xd;
                        if (iVar17 == 3) goto LAB_001d5850;
                        uVar36 = (ulong)uVar26;
                        if (puVar13[(ulong)uVar26 + 1] <= uVar35) {
                          if (iVar17 == 2) {
                            uVar23 = 0xf;
                            uVar18 = 0x10;
                            uVar36 = 0x10;
                            goto LAB_001d3e08;
                          }
                          uVar23 = 0xf;
                          uVar18 = 0x10;
                          uVar36 = 0x10;
                          if (*(uint *)(param_3 + 0x3bf0) <= uVar35) goto LAB_001d3e08;
                          uVar18 = 0xf;
                          uVar36 = 0xf;
                          goto LAB_001d5750;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    uVar18 = (ulong)uVar26;
    uVar23 = (ulong)(uVar26 - 1);
  }
LAB_001d3e08:
  do {
    *pUVar32 = SUB81(uVar18,0);
    uVar26 = (uVar35 - puVar13[uVar23 + 1] >> (ulong)(0x10U - (int)uVar18 & 0x1f)) +
             puVar13[uVar36 + 0x11];
    if (uVar26 < 0x14) {
      uVar35 = uVar35 + 0x200;
      *(undefined2 *)((-0x3838 - (long)param_3) + (long)pUVar32 * 2) =
           *(undefined2 *)((long)puVar13 + (ulong)uVar26 * 2 + 0xc88);
      pUVar32 = pUVar32 + 1;
      if (param_3 + 0x3cb8 != pUVar32) goto LAB_001d3c38;
LAB_001d3e50:
      iVar17 = 0;
      break;
    }
    *(undefined2 *)((-0x3838 - (long)param_3) + (long)pUVar32 * 2) = 0;
    pUVar32 = pUVar32 + 1;
    uVar35 = uVar35 + 0x200;
    if (pUVar32 == param_3 + 0x3cb8) goto LAB_001d3e50;
    if ((int)uVar18 != 0x10) goto LAB_001d3c40;
LAB_001d573c:
    uVar23 = 0xf;
  } while( true );
LAB_001d3e60:
  iVar25 = *(int *)param_2;
  if ((param_2[8] == (UnpackBlockHeader)0x0) && (*(int *)(param_1 + 0xd0) + -4 <= iVar25)) {
    cVar16 = UnpReadBuf();
    if (cVar16 == '\0') goto LAB_001d59a0;
    iVar25 = *(int *)param_2;
  }
  uVar26 = *(uint *)(param_3 + 0x3c34);
  iVar1 = *(int *)(param_2 + 4);
  lVar28 = *(long *)(param_2 + 0x10) + (long)iVar25;
  uVar35 = ((uint)*(byte *)(lVar28 + 2) |
            (uint)*(byte *)(*(long *)(param_2 + 0x10) + (long)iVar25) << 0x10 |
           (uint)*(byte *)(lVar28 + 1) << 8) >> (ulong)(8U - iVar1 & 0x1f) & 0xfffe;
  if (uVar35 < puVar13[(ulong)uVar26 + 1]) {
    uVar36 = (ulong)(uVar35 >> (ulong)(0x10 - uVar26 & 0x1f));
    uVar14 = *(ushort *)((long)puVar13 + uVar36 * 2 + 0x488);
    uVar35 = (uint)*(byte *)((long)puVar13 + uVar36 + 0x88) + iVar1;
    *(uint *)param_2 = iVar25 + (uVar35 >> 3);
    *(uint *)(param_2 + 4) = uVar35 & 7;
  }
  else {
    uVar21 = uVar26 + 1;
    if (uVar21 < 0xf) {
      uVar36 = (ulong)uVar21;
      if (puVar13[(ulong)uVar21 + 1] <= uVar35) {
        uVar21 = uVar26 + 2;
        if (uVar26 == 0xd) {
LAB_001d5758:
          uVar26 = 1;
          uVar18 = 0xe;
          uVar36 = 0xf;
          goto LAB_001d409c;
        }
        uVar36 = (ulong)uVar21;
        if (puVar13[(ulong)uVar21 + 1] <= uVar35) {
          uVar21 = uVar26 + 3;
          if (uVar26 == 0xc) goto LAB_001d5758;
          uVar36 = (ulong)uVar21;
          if (puVar13[(ulong)uVar21 + 1] <= uVar35) {
            uVar21 = uVar26 + 4;
            if (uVar26 == 0xb) goto LAB_001d5758;
            uVar36 = (ulong)uVar21;
            if (puVar13[(ulong)uVar21 + 1] <= uVar35) {
              uVar21 = uVar26 + 5;
              if (uVar26 == 10) goto LAB_001d5758;
              uVar36 = (ulong)uVar21;
              if (puVar13[(ulong)uVar21 + 1] <= uVar35) {
                uVar21 = uVar26 + 6;
                if (uVar26 == 9) goto LAB_001d5758;
                uVar36 = (ulong)uVar21;
                if (puVar13[(ulong)uVar21 + 1] <= uVar35) {
                  uVar21 = uVar26 + 7;
                  if (uVar26 == 8) goto LAB_001d5758;
                  uVar36 = (ulong)uVar21;
                  if (puVar13[(ulong)uVar21 + 1] <= uVar35) {
                    uVar21 = uVar26 + 8;
                    if (uVar26 == 7) goto LAB_001d5758;
                    uVar36 = (ulong)uVar21;
                    if (puVar13[(ulong)uVar21 + 1] <= uVar35) {
                      uVar21 = uVar26 + 9;
                      if (uVar26 == 6) goto LAB_001d5758;
                      uVar36 = (ulong)uVar21;
                      if (puVar13[(ulong)uVar21 + 1] <= uVar35) {
                        uVar21 = uVar26 + 10;
                        if (uVar26 == 5) goto LAB_001d5758;
                        uVar36 = (ulong)uVar21;
                        if (puVar13[(ulong)uVar21 + 1] <= uVar35) {
                          uVar21 = uVar26 + 0xb;
                          if (uVar26 == 4) goto LAB_001d5758;
                          uVar36 = (ulong)uVar21;
                          if (puVar13[(ulong)uVar21 + 1] <= uVar35) {
                            uVar21 = uVar26 + 0xc;
                            if (uVar26 == 3) goto LAB_001d5758;
                            uVar36 = (ulong)uVar21;
                            if (puVar13[(ulong)uVar21 + 1] <= uVar35) {
                              uVar21 = uVar26 + 0xd;
                              if (uVar26 == 2) goto LAB_001d5758;
                              uVar36 = (ulong)uVar21;
                              if (puVar13[(ulong)uVar21 + 1] <= uVar35) {
                                uVar21 = uVar26 + 0xe;
                                if (uVar26 == 1) goto LAB_001d5758;
                                uVar36 = (ulong)uVar21;
                                if (puVar13[(ulong)uVar21 + 1] <= uVar35) {
                                  if ((uVar26 == 0) || (*(uint *)(param_3 + 0x3bec) <= uVar35))
                                  goto LAB_001d408c;
                                  uVar21 = 0xe;
                                  uVar36 = 0xe;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      uVar18 = (ulong)(uVar21 - 1);
      uVar26 = 0x10 - uVar21;
    }
    else {
LAB_001d408c:
      uVar26 = 1;
      uVar18 = 0xe;
      uVar21 = 0xf;
      uVar36 = 0xf;
    }
LAB_001d409c:
    *(uint *)param_2 = iVar25 + (uVar21 + iVar1 >> 3);
    *(uint *)(param_2 + 4) = uVar21 + iVar1 & 7;
    uVar35 = (uVar35 - puVar13[uVar18 + 1] >> (ulong)(uVar26 & 0x1f)) + puVar13[uVar36 + 0x11];
    if (*puVar13 <= uVar35) {
      uVar35 = 0;
    }
    uVar14 = *(ushort *)((long)puVar13 + (ulong)uVar35 * 2 + 0xc88);
  }
  if (uVar14 < 0x10) {
    local_1b9[(long)iVar17 + 1] = (byte)uVar14;
    iVar17 = iVar17 + 1;
  }
  else if (uVar14 < 0x12) {
    if (uVar14 == 0x10) {
      uVar36 = BitInput::fgetbits();
      iVar25 = ((uint)(uVar36 >> 0xd) & 0x7ffff) + 3;
      BitInput::faddbits((BitInput *)param_2,3);
    }
    else {
      uVar36 = BitInput::fgetbits();
      iVar25 = ((uint)(uVar36 >> 9) & 0x7fffff) + 0xb;
      BitInput::faddbits((BitInput *)param_2,7);
    }
    if (iVar17 == 0) goto LAB_001d3e60;
    if (0x1ad < iVar17) goto LAB_001d40f4;
    iVar25 = iVar17 + iVar25;
    bVar15 = local_1b9[iVar17];
    lVar28 = (long)(iVar17 + 1);
    do {
      iVar17 = (int)lVar28;
      local_1b9[lVar28] = bVar15;
      lVar28 = lVar28 + 1;
    } while (0 < iVar25 - iVar17 && iVar17 < 0x1ae);
  }
  else {
    if (uVar14 == 0x12) {
      uVar36 = BitInput::fgetbits();
      iVar25 = ((uint)(uVar36 >> 0xd) & 0x7ffff) + 3;
      BitInput::faddbits((BitInput *)param_2,3);
    }
    else {
      uVar36 = BitInput::fgetbits();
      iVar25 = ((uint)(uVar36 >> 9) & 0x7fffff) + 0xb;
      BitInput::faddbits((BitInput *)param_2,7);
    }
    if (0x1ad < iVar17) goto LAB_001d40f4;
    iVar25 = iVar25 + iVar17;
    lVar28 = (long)(iVar17 + 1);
    do {
      iVar17 = (int)lVar28;
      local_1b9[lVar28] = 0;
      lVar28 = lVar28 + 1;
    } while (iVar17 < 0x1ae && 0 < iVar25 - iVar17);
  }
  if (iVar17 == 0x1ae) {
LAB_001d40f4:
    if ((param_2[8] != (UnpackBlockHeader)0x0) || (*(int *)param_2 <= *(int *)(param_1 + 0xd0))) {
      *(undefined4 *)param_3 = 0x132;
      local_250 = 0;
      uStack_248 = 0;
      local_240 = 0;
      local_238 = 0;
      local_230 = 0;
      local_228 = 0;
      local_220 = 0;
      local_218 = 0;
      pbVar24 = local_1b9 + 1;
      do {
        pbVar22 = pbVar24 + 1;
        *(int *)((long)&local_250 + ((ulong)*pbVar24 & 0xf) * 4) =
             *(int *)((long)&local_250 + ((ulong)*pbVar24 & 0xf) * 4) + 1;
        pbVar24 = pbVar22;
      } while (local_86 != pbVar22);
      local_250 = local_250 & 0xffffffff00000000;
      memset(param_3 + 0xc88,0,0x264);
      *(undefined4 *)(param_3 + 4) = 0;
      *(undefined4 *)(param_3 + 0x44) = 0;
      iVar17 = (int)uStack_248 + local_250._4_4_ * 2;
      iVar25 = uStack_248._4_4_ + iVar17 * 2;
      iVar1 = (int)local_240 + iVar25 * 2;
      iVar2 = local_240._4_4_ + iVar1 * 2;
      iVar3 = (int)local_238 + iVar2 * 2;
      uStack_248._4_4_ = local_250._4_4_ + (int)uStack_248 + uStack_248._4_4_;
      iVar4 = local_238._4_4_ + iVar3 * 2;
      iVar5 = (int)local_230 + iVar4 * 2;
      local_240._0_4_ = uStack_248._4_4_ + (int)local_240;
      iVar6 = local_230._4_4_ + iVar5 * 2;
      iVar7 = (int)local_228 + iVar6 * 2;
      local_240._4_4_ = (int)local_240 + local_240._4_4_;
      iVar8 = local_228._4_4_ + iVar7 * 2;
      *(int *)(param_3 + 0xc) = iVar17 * 0x4000;
      *(int *)(param_3 + 0x10) = iVar25 * 0x2000;
      iVar17 = (int)local_220 + iVar8 * 2;
      local_238._0_4_ = local_240._4_4_ + (int)local_238;
      *(int *)(param_3 + 0x14) = iVar1 * 0x1000;
      *(int *)(param_3 + 0x18) = iVar2 * 0x800;
      local_238._4_4_ = (int)local_238 + local_238._4_4_;
      *(int *)(param_3 + 0x1c) = iVar3 * 0x400;
      *(int *)(param_3 + 0x20) = iVar4 * 0x200;
      iVar25 = local_220._4_4_ + iVar17 * 2;
      local_230._0_4_ = local_238._4_4_ + (int)local_230;
      *(int *)(param_3 + 0x24) = iVar5 * 0x100;
      *(int *)(param_3 + 0x28) = iVar6 * 0x80;
      local_230._4_4_ = (int)local_230 + local_230._4_4_;
      *(int *)(param_3 + 0x30) = iVar8 * 0x20;
      *(int *)(param_3 + 0x34) = iVar17 * 0x10;
      iVar17 = (int)local_218 + iVar25 * 2;
      local_228._0_4_ = local_230._4_4_ + (int)local_228;
      local_228._4_4_ = (int)local_228 + local_228._4_4_;
      local_220._0_4_ = local_228._4_4_ + (int)local_220;
      *(int *)(param_3 + 0x38) = iVar25 * 8;
      *(int *)(param_3 + 0x3c) = iVar17 * 4;
      local_220._4_4_ = (int)local_220 + local_220._4_4_;
      *(uint *)(param_3 + 8) = local_250._4_4_ << 0xf;
      *(int *)(param_3 + 0x2c) = iVar7 * 0x40;
      *(int *)(param_3 + 0x40) = (local_218._4_4_ + iVar17 * 2) * 2;
      *(undefined4 *)(param_3 + 0x48) = 0;
      *(uint *)(param_3 + 0x4c) = local_250._4_4_;
      *(uint *)(param_3 + 0x50) = local_250._4_4_ + (int)uStack_248;
      *(int *)(param_3 + 0x54) = uStack_248._4_4_;
      *(int *)(param_3 + 0x58) = (int)local_240;
      *(int *)(param_3 + 0x5c) = local_240._4_4_;
      *(int *)(param_3 + 0x60) = (int)local_238;
      *(int *)(param_3 + 100) = local_238._4_4_;
      *(int *)(param_3 + 0x68) = (int)local_230;
      *(int *)(param_3 + 0x6c) = local_230._4_4_;
      *(int *)(param_3 + 0x70) = (int)local_228;
      *(int *)(param_3 + 0x74) = local_228._4_4_;
      *(int *)(param_3 + 0x78) = (int)local_220;
      *(int *)(param_3 + 0x7c) = local_220._4_4_;
      *(int *)(param_3 + 0x80) = local_220._4_4_ + (int)local_218;
      local_210 = *(undefined8 *)(param_3 + 0x44);
      uStack_208 = *(undefined8 *)(param_3 + 0x4c);
      lVar28 = 1;
      local_200 = *(undefined8 *)(param_3 + 0x54);
      uStack_1f8 = *(undefined8 *)(param_3 + 0x5c);
      local_1f0 = *(undefined8 *)(param_3 + 100);
      uStack_1e8 = *(undefined8 *)(param_3 + 0x6c);
      local_1e0 = *(undefined8 *)(param_3 + 0x74);
      uStack_1d8 = *(undefined8 *)(param_3 + 0x7c);
      do {
        if ((local_1b9[lVar28] & 0xf) != 0) {
          lVar19 = (long)(int)(local_1b9[lVar28] & 0xf);
          uVar35 = *(uint *)((long)&local_210 + lVar19 * 4);
          *(uint *)((long)&local_210 + lVar19 * 4) = uVar35 + 1;
          *(short *)(param_3 + (ulong)uVar35 * 2 + 0xc88) = (short)lVar28 + -1;
        }
        lVar28 = lVar28 + 1;
      } while (lVar28 != 0x133);
      pUVar32 = param_3 + 0x88;
      uVar35 = 0;
      uVar18 = 1;
      uVar36 = 1;
      *(undefined4 *)(param_3 + 0x84) = 10;
LAB_001d4310:
      if ((int)uVar18 == 0x10) goto LAB_001d5808;
LAB_001d4318:
      if (uVar35 < *(uint *)(param_3 + uVar36 * 4 + 4)) {
LAB_001d5818:
        uVar23 = (ulong)((int)uVar18 - 1);
        goto LAB_001d44e0;
      }
      iVar17 = (int)uVar18;
      uVar26 = iVar17 + 1;
      if (iVar17 == 0xf) {
LAB_001d5908:
        uVar18 = (ulong)uVar26;
        uVar23 = 0xf;
        uVar36 = 0x10;
      }
      else {
        uVar36 = (ulong)uVar26;
        if (*(uint *)(param_3 + (ulong)uVar26 * 4 + 4) <= uVar35) {
          uVar26 = iVar17 + 2;
          if (iVar17 == 0xe) goto LAB_001d5908;
          uVar36 = (ulong)uVar26;
          if (*(uint *)(param_3 + (ulong)uVar26 * 4 + 4) <= uVar35) {
            uVar26 = iVar17 + 3;
            if (iVar17 == 0xd) goto LAB_001d5908;
            uVar36 = (ulong)uVar26;
            if (*(uint *)(param_3 + (ulong)uVar26 * 4 + 4) <= uVar35) {
              uVar26 = iVar17 + 4;
              if (iVar17 == 0xc) {
LAB_001d59f4:
                uVar18 = (ulong)uVar26;
                uVar36 = 0x10;
                uVar23 = 0xf;
                goto LAB_001d44e0;
              }
              if (uVar35 < *(uint *)(param_3 + (ulong)uVar26 * 4 + 4)) {
LAB_001d5a54:
                uVar18 = (ulong)uVar26;
                uVar23 = (ulong)(uVar26 - 1);
                uVar36 = uVar18;
                goto LAB_001d44e0;
              }
              uVar26 = iVar17 + 5;
              if (iVar17 == 0xb) goto LAB_001d5908;
              uVar36 = (ulong)uVar26;
              if (*(uint *)(param_3 + (ulong)uVar26 * 4 + 4) <= uVar35) {
                uVar26 = iVar17 + 6;
                if (iVar17 == 10) goto LAB_001d5908;
                uVar36 = (ulong)uVar26;
                if (*(uint *)(param_3 + (ulong)uVar26 * 4 + 4) <= uVar35) {
                  uVar26 = iVar17 + 7;
                  if (iVar17 == 9) goto LAB_001d5908;
                  uVar36 = (ulong)uVar26;
                  if (*(uint *)(param_3 + (ulong)uVar26 * 4 + 4) <= uVar35) {
                    uVar26 = iVar17 + 8;
                    if (iVar17 == 8) goto LAB_001d5908;
                    uVar36 = (ulong)uVar26;
                    if (*(uint *)(param_3 + (ulong)uVar26 * 4 + 4) <= uVar35) {
                      uVar26 = iVar17 + 9;
                      if (iVar17 == 7) goto LAB_001d59f4;
                      if (uVar35 < *(uint *)(param_3 + (ulong)uVar26 * 4 + 4)) goto LAB_001d5a54;
                      uVar26 = iVar17 + 10;
                      if (iVar17 == 6) goto LAB_001d5908;
                      uVar36 = (ulong)uVar26;
                      if (*(uint *)(param_3 + (ulong)uVar26 * 4 + 4) <= uVar35) {
                        uVar26 = iVar17 + 0xb;
                        if (iVar17 == 5) goto LAB_001d5908;
                        uVar36 = (ulong)uVar26;
                        if (*(uint *)(param_3 + (ulong)uVar26 * 4 + 4) <= uVar35) {
                          uVar26 = iVar17 + 0xc;
                          if (iVar17 == 4) goto LAB_001d5908;
                          uVar36 = (ulong)uVar26;
                          if (*(uint *)(param_3 + (ulong)uVar26 * 4 + 4) <= uVar35) {
                            uVar26 = iVar17 + 0xd;
                            if (iVar17 == 3) goto LAB_001d5908;
                            uVar36 = (ulong)uVar26;
                            if (*(uint *)(param_3 + (ulong)uVar26 * 4 + 4) <= uVar35) {
                              if (iVar17 == 2) {
                                uVar23 = 0xf;
                                uVar18 = 0x10;
                                uVar36 = 0x10;
                                goto LAB_001d44e0;
                              }
                              uVar23 = 0xf;
                              uVar18 = 0x10;
                              uVar36 = 0x10;
                              if (*(uint *)(param_3 + 0x40) <= uVar35) goto LAB_001d44e0;
                              uVar18 = 0xf;
                              uVar36 = 0xf;
                              goto LAB_001d5818;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        uVar18 = (ulong)uVar26;
        uVar23 = (ulong)(uVar26 - 1);
      }
LAB_001d44e0:
      while( true ) {
        *pUVar32 = SUB81(uVar18,0);
        uVar26 = (uVar35 - *(int *)(param_3 + uVar23 * 4 + 4) >> (ulong)(0x10U - (int)uVar18 & 0x1f)
                 ) + *(int *)(param_3 + uVar36 * 4 + 0x44);
        if (uVar26 < 0x132) break;
        *(undefined2 *)((0x378 - (long)param_3) + (long)pUVar32 * 2) = 0;
        pUVar32 = pUVar32 + 1;
        uVar35 = uVar35 + 0x40;
        if (param_3 + 0x488 == pUVar32) goto LAB_001d4528;
        if ((int)uVar18 != 0x10) goto LAB_001d4318;
LAB_001d5808:
        uVar23 = 0xf;
      }
      uVar35 = uVar35 + 0x40;
      *(undefined2 *)((0x378 - (long)param_3) + (long)pUVar32 * 2) =
           *(undefined2 *)(param_3 + (ulong)uVar26 * 2 + 0xc88);
      pUVar32 = pUVar32 + 1;
      if (param_3 + 0x488 != pUVar32) goto LAB_001d4310;
LAB_001d4528:
      local_250 = 0;
      uStack_248 = 0;
      local_240 = 0;
      local_238 = 0;
      local_230 = 0;
      local_228 = 0;
      local_220 = 0;
      local_218 = 0;
      *(undefined4 *)(param_3 + 0xeec) = 0x40;
      pbVar24 = local_86;
      do {
        pbVar22 = pbVar24 + 1;
        *(int *)((long)&local_250 + ((ulong)*pbVar24 & 0xf) * 4) =
             *(int *)((long)&local_250 + ((ulong)*pbVar24 & 0xf) * 4) + 1;
        pbVar24 = pbVar22;
      } while (&local_46 != pbVar22);
      uVar35 = local_250._4_4_;
      iVar17 = (int)uStack_248 + local_250._4_4_ * 2;
      iVar25 = uStack_248._4_4_ + iVar17 * 2;
      iVar1 = (int)local_240 + iVar25 * 2;
      iVar2 = local_240._4_4_ + iVar1 * 2;
      iVar3 = (int)local_238 + iVar2 * 2;
      iVar4 = local_238._4_4_ + iVar3 * 2;
      iVar5 = (int)local_230 + iVar4 * 2;
      iVar6 = local_230._4_4_ + iVar5 * 2;
      *(undefined8 *)(param_3 + 0x1b74) = 0;
      *(undefined8 *)(param_3 + 0x1b7c) = 0;
      *(undefined8 *)(param_3 + 0x1b84) = 0;
      *(undefined8 *)(param_3 + 0x1b8c) = 0;
      iVar7 = (int)local_228 + iVar6 * 2;
      *(undefined8 *)(param_3 + 0x1b94) = 0;
      *(undefined8 *)(param_3 + 0x1b9c) = 0;
      *(undefined8 *)(param_3 + 0x1ba4) = 0;
      *(undefined8 *)(param_3 + 0x1bac) = 0;
      *(undefined8 *)(param_3 + 0x1bb4) = 0;
      *(undefined8 *)(param_3 + 0x1bbc) = 0;
      *(undefined8 *)(param_3 + 0x1bc4) = 0;
      *(undefined8 *)(param_3 + 0x1bcc) = 0;
      *(undefined8 *)(param_3 + 0x1bd4) = 0;
      *(undefined8 *)(param_3 + 0x1bdc) = 0;
      *(undefined8 *)(param_3 + 0x1be4) = 0;
      *(undefined8 *)(param_3 + 0x1bec) = 0;
      *(undefined4 *)(param_3 + 0xef0) = 0;
      *(uint *)(param_3 + 0xef4) = local_250._4_4_ << 0xf;
      *(undefined4 *)(param_3 + 0xf30) = 0;
      *(int *)(param_3 + 0xef8) = iVar17 * 0x4000;
      *(int *)(param_3 + 0xefc) = iVar25 * 0x2000;
      *(int *)(param_3 + 0xf00) = iVar1 * 0x1000;
      *(int *)(param_3 + 0xf04) = iVar2 * 0x800;
      iVar17 = local_228._4_4_ + iVar7 * 2;
      *(int *)(param_3 + 0xf08) = iVar3 * 0x400;
      *(int *)(param_3 + 0xf0c) = iVar4 * 0x200;
      *(int *)(param_3 + 0xf10) = iVar5 * 0x100;
      *(int *)(param_3 + 0xf14) = iVar6 * 0x80;
      local_250 = (ulong)local_250._4_4_ << 0x20;
      *(int *)(param_3 + 0xf18) = iVar7 * 0x40;
      *(int *)(param_3 + 0xf1c) = iVar17 * 0x20;
      iVar17 = (int)local_220 + iVar17 * 2;
      iVar25 = local_220._4_4_ + iVar17 * 2;
      uStack_248._0_4_ = uVar35 + (int)uStack_248;
      iVar1 = (int)local_218 + iVar25 * 2;
      uStack_248._4_4_ = (int)uStack_248 + uStack_248._4_4_;
      local_240._0_4_ = uStack_248._4_4_ + (int)local_240;
      *(int *)(param_3 + 0xf28) = iVar1 * 4;
      *(int *)(param_3 + 0xf2c) = (local_218._4_4_ + iVar1 * 2) * 2;
      local_240._4_4_ = (int)local_240 + local_240._4_4_;
      *(int *)(param_3 + 0xf20) = iVar17 * 0x10;
      *(int *)(param_3 + 0xf24) = iVar25 * 8;
      local_238._0_4_ = local_240._4_4_ + (int)local_238;
      *(undefined4 *)(param_3 + 0xf34) = 0;
      local_238._4_4_ = (int)local_238 + local_238._4_4_;
      *(uint *)(param_3 + 0xf38) = uVar35;
      *(int *)(param_3 + 0xf3c) = (int)uStack_248;
      local_230._0_4_ = local_238._4_4_ + (int)local_230;
      local_230._4_4_ = (int)local_230 + local_230._4_4_;
      *(int *)(param_3 + 0xf40) = uStack_248._4_4_;
      *(int *)(param_3 + 0xf44) = (int)local_240;
      local_228._0_4_ = local_230._4_4_ + (int)local_228;
      *(int *)(param_3 + 0xf50) = local_238._4_4_;
      *(int *)(param_3 + 0xf54) = (int)local_230;
      local_228._4_4_ = (int)local_228 + local_228._4_4_;
      local_220._0_4_ = local_228._4_4_ + (int)local_220;
      *(int *)(param_3 + 0xf48) = local_240._4_4_;
      *(int *)(param_3 + 0xf4c) = (int)local_238;
      local_220._4_4_ = (int)local_220 + local_220._4_4_;
      *(int *)(param_3 + 0xf58) = local_230._4_4_;
      *(int *)(param_3 + 0xf5c) = (int)local_228;
      *(int *)(param_3 + 0xf60) = local_228._4_4_;
      *(int *)(param_3 + 0xf64) = (int)local_220;
      *(int *)(param_3 + 0xf68) = local_220._4_4_;
      *(int *)(param_3 + 0xf6c) = local_220._4_4_ + (int)local_218;
      lVar28 = 0;
      local_210 = *(undefined8 *)(param_3 + 0xf30);
      uStack_208 = *(undefined8 *)(param_3 + 0xf38);
      local_200 = *(undefined8 *)(param_3 + 0xf40);
      uStack_1f8 = *(undefined8 *)(param_3 + 0xf48);
      local_1f0 = *(undefined8 *)(param_3 + 0xf50);
      uStack_1e8 = *(undefined8 *)(param_3 + 0xf58);
      local_1e0 = *(undefined8 *)(param_3 + 0xf60);
      uStack_1d8 = *(undefined8 *)(param_3 + 0xf68);
      do {
        if ((local_86[lVar28] & 0xf) != 0) {
          lVar19 = (long)(int)(local_86[lVar28] & 0xf);
          uVar35 = *(uint *)((long)&local_210 + lVar19 * 4);
          *(uint *)((long)&local_210 + lVar19 * 4) = uVar35 + 1;
          *(short *)(param_3 + (ulong)uVar35 * 2 + 0x1b74) = (short)lVar28;
        }
        lVar28 = lVar28 + 1;
      } while (lVar28 != 0x40);
      pUVar32 = param_3 + 0xf74;
      uVar35 = 0;
      uVar18 = 1;
      uVar36 = 1;
      *(undefined4 *)(param_3 + 0xf70) = 7;
LAB_001d475c:
      if ((int)uVar18 == 0x10) goto LAB_001d57c0;
LAB_001d4764:
      if (uVar35 < *(uint *)(param_3 + uVar36 * 4 + 0xef0)) {
LAB_001d5828:
        uVar23 = (ulong)((int)uVar18 - 1);
        goto LAB_001d4930;
      }
      iVar17 = (int)uVar18;
      uVar26 = iVar17 + 1;
      if (iVar17 == 0xf) {
LAB_001d5918:
        uVar18 = (ulong)uVar26;
        uVar23 = 0xf;
        uVar36 = 0x10;
      }
      else {
        uVar36 = (ulong)uVar26;
        if (uVar35 < *(uint *)(param_3 + (ulong)uVar26 * 4 + 0xef0)) {
LAB_001d595c:
          uVar18 = (ulong)uVar26;
          uVar23 = (ulong)(uVar26 - 1);
        }
        else {
          uVar26 = iVar17 + 2;
          if (iVar17 == 0xe) goto LAB_001d5918;
          uVar36 = (ulong)uVar26;
          if (uVar35 < *(uint *)(param_3 + (ulong)uVar26 * 4 + 0xef0)) goto LAB_001d595c;
          uVar26 = iVar17 + 3;
          if (iVar17 == 0xd) goto LAB_001d5918;
          uVar36 = (ulong)uVar26;
          if (uVar35 < *(uint *)(param_3 + (ulong)uVar26 * 4 + 0xef0)) goto LAB_001d595c;
          uVar26 = iVar17 + 4;
          if (iVar17 == 0xc) {
LAB_001d5a04:
            uVar18 = (ulong)uVar26;
            uVar36 = 0x10;
            uVar23 = 0xf;
          }
          else {
            if (*(uint *)(param_3 + (ulong)uVar26 * 4 + 0xef0) <= uVar35) {
              uVar26 = iVar17 + 5;
              if (iVar17 == 0xb) goto LAB_001d5918;
              uVar36 = (ulong)uVar26;
              if (*(uint *)(param_3 + (ulong)uVar26 * 4 + 0xef0) <= uVar35) {
                uVar26 = iVar17 + 6;
                if (iVar17 == 10) goto LAB_001d5918;
                uVar36 = (ulong)uVar26;
                if (*(uint *)(param_3 + (ulong)uVar26 * 4 + 0xef0) <= uVar35) {
                  uVar26 = iVar17 + 7;
                  if (iVar17 == 9) goto LAB_001d5918;
                  uVar36 = (ulong)uVar26;
                  if (*(uint *)(param_3 + (ulong)uVar26 * 4 + 0xef0) <= uVar35) {
                    uVar26 = iVar17 + 8;
                    if (iVar17 == 8) goto LAB_001d5918;
                    uVar36 = (ulong)uVar26;
                    if (*(uint *)(param_3 + (ulong)uVar26 * 4 + 0xef0) <= uVar35) {
                      uVar26 = iVar17 + 9;
                      if (iVar17 == 7) goto LAB_001d5a04;
                      if (uVar35 < *(uint *)(param_3 + (ulong)uVar26 * 4 + 0xef0))
                      goto LAB_001d5a64;
                      uVar26 = iVar17 + 10;
                      if (iVar17 == 6) goto LAB_001d5918;
                      uVar36 = (ulong)uVar26;
                      if (*(uint *)(param_3 + (ulong)uVar26 * 4 + 0xef0) <= uVar35) {
                        uVar26 = iVar17 + 0xb;
                        if (iVar17 == 5) goto LAB_001d5918;
                        uVar36 = (ulong)uVar26;
                        if (*(uint *)(param_3 + (ulong)uVar26 * 4 + 0xef0) <= uVar35) {
                          uVar26 = iVar17 + 0xc;
                          if (iVar17 == 4) goto LAB_001d5918;
                          uVar36 = (ulong)uVar26;
                          if (*(uint *)(param_3 + (ulong)uVar26 * 4 + 0xef0) <= uVar35) {
                            uVar26 = iVar17 + 0xd;
                            if (iVar17 == 3) goto LAB_001d5918;
                            uVar36 = (ulong)uVar26;
                            if (*(uint *)(param_3 + (ulong)uVar26 * 4 + 0xef0) <= uVar35) {
                              if (iVar17 == 2) {
                                uVar23 = 0xf;
                                uVar18 = 0x10;
                                uVar36 = 0x10;
                              }
                              else {
                                uVar23 = 0xf;
                                uVar18 = 0x10;
                                uVar36 = 0x10;
                                if (uVar35 < *(uint *)(param_3 + 0xf2c)) {
                                  uVar18 = 0xf;
                                  uVar36 = 0xf;
                                  goto LAB_001d5828;
                                }
                              }
                              goto LAB_001d4930;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
              goto LAB_001d595c;
            }
LAB_001d5a64:
            uVar18 = (ulong)uVar26;
            uVar23 = (ulong)(uVar26 - 1);
            uVar36 = uVar18;
          }
        }
      }
LAB_001d4930:
      do {
        *pUVar32 = SUB81(uVar18,0);
        uVar26 = (uVar35 - *(int *)(param_3 + uVar23 * 4 + 0xef0) >>
                 (ulong)(0x10U - (int)uVar18 & 0x1f)) + *(int *)(param_3 + uVar36 * 4 + 0xf30);
        if (uVar26 < 0x40) {
          uVar35 = uVar35 + 0x200;
          *(undefined2 *)((-0xb74 - (long)param_3) + (long)pUVar32 * 2) =
               *(undefined2 *)(param_3 + (ulong)uVar26 * 2 + 0x1b74);
          pUVar32 = pUVar32 + 1;
          if (param_3 + 0xff4 != pUVar32) goto LAB_001d475c;
LAB_001d4978:
          uVar41 = (ulong)local_46 & 0xf;
          local_250 = 0;
          uStack_248 = 0;
          uVar40 = (ulong)local_45 & 0xf;
          local_240 = 0;
          local_238 = 0;
          local_230 = 0;
          local_228 = 0;
          uVar39 = (ulong)local_44 & 0xf;
          local_220 = 0;
          local_218 = 0;
          uVar38 = (ulong)local_43 & 0xf;
          *(int *)((long)&local_250 + uVar41 * 4) = *(int *)((long)&local_250 + uVar41 * 4) + 1;
          *(int *)((long)&local_250 + uVar40 * 4) = *(int *)((long)&local_250 + uVar40 * 4) + 1;
          uVar36 = (ulong)local_42 & 0xf;
          *(int *)((long)&local_250 + uVar39 * 4) = *(int *)((long)&local_250 + uVar39 * 4) + 1;
          uVar23 = (ulong)local_41 & 0xf;
          *(int *)((long)&local_250 + uVar38 * 4) = *(int *)((long)&local_250 + uVar38 * 4) + 1;
          *(int *)((long)&local_250 + uVar36 * 4) = *(int *)((long)&local_250 + uVar36 * 4) + 1;
          uVar29 = (ulong)local_40 & 0xf;
          *(int *)((long)&local_250 + uVar23 * 4) = *(int *)((long)&local_250 + uVar23 * 4) + 1;
          uVar18 = (ulong)local_3f & 0xf;
          *(int *)((long)&local_250 + uVar29 * 4) = *(int *)((long)&local_250 + uVar29 * 4) + 1;
          uVar27 = (ulong)local_3e & 0xf;
          *(int *)((long)&local_250 + uVar18 * 4) = *(int *)((long)&local_250 + uVar18 * 4) + 1;
          uVar33 = (ulong)local_3d & 0xf;
          *(int *)((long)&local_250 + uVar27 * 4) = *(int *)((long)&local_250 + uVar27 * 4) + 1;
          uVar30 = (ulong)local_3c & 0xf;
          *(int *)((long)&local_250 + uVar33 * 4) = *(int *)((long)&local_250 + uVar33 * 4) + 1;
          uVar37 = (ulong)local_3b & 0xf;
          *(int *)((long)&local_250 + uVar30 * 4) = *(int *)((long)&local_250 + uVar30 * 4) + 1;
          uVar43 = (ulong)local_3a & 0xf;
          *(int *)((long)&local_250 + uVar37 * 4) = *(int *)((long)&local_250 + uVar37 * 4) + 1;
          uVar34 = (ulong)local_39 & 0xf;
          *(int *)((long)&local_250 + uVar43 * 4) = *(int *)((long)&local_250 + uVar43 * 4) + 1;
          uVar31 = (ulong)local_38 & 0xf;
          *(int *)((long)&local_250 + uVar34 * 4) = *(int *)((long)&local_250 + uVar34 * 4) + 1;
          uVar42 = (ulong)local_37 & 0xf;
          *(int *)((long)&local_250 + uVar31 * 4) = *(int *)((long)&local_250 + uVar31 * 4) + 1;
          iVar17 = *(int *)((long)&local_250 + uVar42 * 4);
          *(undefined8 *)(param_3 + 0x2a60) = 0;
          *(undefined8 *)(param_3 + 0x2a68) = 0;
          *(int *)((long)&local_250 + uVar42 * 4) = iVar17 + 1;
          uVar35 = local_250._4_4_;
          *(undefined8 *)(param_3 + 0x2a70) = 0;
          *(undefined8 *)(param_3 + 0x2a78) = 0;
          iVar17 = (int)uStack_248 + local_250._4_4_ * 2;
          *(undefined4 *)(param_3 + 0x1e1c) = 0;
          iVar25 = uStack_248._4_4_ + iVar17 * 2;
          *(undefined8 *)(param_3 + 0x1dd8) = 0x10;
          iVar1 = (int)local_240 + iVar25 * 2;
          *(uint *)(param_3 + 0x1de0) = local_250._4_4_ << 0xf;
          *(int *)(param_3 + 0x1de8) = iVar25 * 0x2000;
          iVar25 = local_240._4_4_ + iVar1 * 2;
          iVar2 = (int)local_238 + iVar25 * 2;
          iVar3 = local_238._4_4_ + iVar2 * 2;
          iVar4 = (int)local_230 + iVar3 * 2;
          local_250 = (ulong)local_250._4_4_ << 0x20;
          *(int *)(param_3 + 0x1de4) = iVar17 * 0x4000;
          *(int *)(param_3 + 0x1dec) = iVar1 * 0x1000;
          iVar17 = local_230._4_4_ + iVar4 * 2;
          uStack_248._0_4_ = *(int *)(param_3 + 0x1e1c) + uVar35 + (int)uStack_248;
          iVar1 = (int)local_228 + iVar17 * 2;
          uStack_248._4_4_ = (int)uStack_248 + uStack_248._4_4_;
          *(int *)(param_3 + 0x1df0) = iVar25 * 0x800;
          local_240._0_4_ = uStack_248._4_4_ + (int)local_240;
          iVar25 = local_228._4_4_ + iVar1 * 2;
          *(int *)(param_3 + 0x1df4) = iVar2 * 0x400;
          iVar2 = (int)local_220 + iVar25 * 2;
          *(int *)(param_3 + 0x1df8) = iVar3 * 0x200;
          *(int *)(param_3 + 0x1e00) = iVar17 * 0x80;
          iVar17 = local_220._4_4_ + iVar2 * 2;
          *(int *)(param_3 + 0x1e04) = iVar1 * 0x40;
          local_240._4_4_ = (int)local_240 + local_240._4_4_;
          *(int *)(param_3 + 0x1e08) = iVar25 * 0x20;
          iVar25 = (int)local_218 + iVar17 * 2;
          local_238._0_4_ = local_240._4_4_ + (int)local_238;
          local_238._4_4_ = (int)local_238 + local_238._4_4_;
          *(int *)(param_3 + 0x1e0c) = iVar2 * 0x10;
          local_230._0_4_ = local_238._4_4_ + (int)local_230;
          local_230._4_4_ = (int)local_230 + local_230._4_4_;
          *(int *)(param_3 + 0x1e18) = (local_218._4_4_ + iVar25 * 2) * 2;
          local_228._0_4_ = local_230._4_4_ + (int)local_228;
          local_228._4_4_ = (int)local_228 + local_228._4_4_;
          *(int *)(param_3 + 0x1dfc) = iVar4 * 0x100;
          *(int *)(param_3 + 0x1e10) = iVar17 * 8;
          *(int *)(param_3 + 0x1e14) = iVar25 * 4;
          local_220._0_4_ = local_228._4_4_ + (int)local_220;
          *(undefined4 *)(param_3 + 0x1e20) = *(undefined4 *)(param_3 + 0x1e1c);
          *(int *)(param_3 + 0x1e28) = (int)uStack_248;
          local_220._4_4_ = (int)local_220 + local_220._4_4_;
          *(uint *)(param_3 + 0x1e24) = *(int *)(param_3 + 0x1e1c) + uVar35;
          *(int *)(param_3 + 0x1e2c) = uStack_248._4_4_;
          *(int *)(param_3 + 0x1e30) = (int)local_240;
          *(int *)(param_3 + 0x1e34) = local_240._4_4_;
          *(int *)(param_3 + 0x1e38) = (int)local_238;
          *(int *)(param_3 + 0x1e3c) = local_238._4_4_;
          *(int *)(param_3 + 0x1e40) = (int)local_230;
          *(int *)(param_3 + 0x1e44) = local_230._4_4_;
          *(int *)(param_3 + 0x1e48) = (int)local_228;
          *(int *)(param_3 + 0x1e4c) = local_228._4_4_;
          *(int *)(param_3 + 0x1e50) = (int)local_220;
          *(int *)(param_3 + 0x1e54) = local_220._4_4_;
          *(int *)(param_3 + 0x1e58) = local_220._4_4_ + (int)local_218;
          local_210 = *(undefined8 *)(param_3 + 0x1e1c);
          uStack_208 = *(undefined8 *)(param_3 + 0x1e24);
          local_200 = *(undefined8 *)(param_3 + 0x1e2c);
          uStack_1f8 = *(undefined8 *)(param_3 + 0x1e34);
          local_1e0 = *(undefined8 *)(param_3 + 0x1e4c);
          uStack_1d8 = *(undefined8 *)(param_3 + 0x1e54);
          local_1f0 = *(undefined8 *)(param_3 + 0x1e3c);
          uStack_1e8 = *(undefined8 *)(param_3 + 0x1e44);
          if ((local_46 & 0xf) != 0) {
            uVar35 = *(uint *)((long)&local_210 + uVar41 * 4);
            *(uint *)((long)&local_210 + uVar41 * 4) = uVar35 + 1;
            *(undefined2 *)(param_3 + (ulong)uVar35 * 2 + 0x2a60) = 0;
          }
          if ((local_45 & 0xf) != 0) {
            uVar35 = *(uint *)((long)&local_210 + uVar40 * 4);
            *(uint *)((long)&local_210 + uVar40 * 4) = uVar35 + 1;
            *(undefined2 *)(param_3 + (ulong)uVar35 * 2 + 0x2a60) = 1;
          }
          if ((local_44 & 0xf) != 0) {
            uVar35 = *(uint *)((long)&local_210 + uVar39 * 4);
            *(uint *)((long)&local_210 + uVar39 * 4) = uVar35 + 1;
            *(undefined2 *)(param_3 + (ulong)uVar35 * 2 + 0x2a60) = 2;
          }
          if ((local_43 & 0xf) != 0) {
            uVar35 = *(uint *)((long)&local_210 + uVar38 * 4);
            *(uint *)((long)&local_210 + uVar38 * 4) = uVar35 + 1;
            *(undefined2 *)(param_3 + (ulong)uVar35 * 2 + 0x2a60) = 3;
          }
          if ((local_42 & 0xf) != 0) {
            uVar35 = *(uint *)((long)&local_210 + uVar36 * 4);
            *(uint *)((long)&local_210 + uVar36 * 4) = uVar35 + 1;
            *(undefined2 *)(param_3 + (ulong)uVar35 * 2 + 0x2a60) = 4;
          }
          if ((local_41 & 0xf) != 0) {
            uVar35 = *(uint *)((long)&local_210 + uVar23 * 4);
            *(uint *)((long)&local_210 + uVar23 * 4) = uVar35 + 1;
            *(undefined2 *)(param_3 + (ulong)uVar35 * 2 + 0x2a60) = 5;
          }
          if ((local_40 & 0xf) != 0) {
            uVar35 = *(uint *)((long)&local_210 + uVar29 * 4);
            *(uint *)((long)&local_210 + uVar29 * 4) = uVar35 + 1;
            *(undefined2 *)(param_3 + (ulong)uVar35 * 2 + 0x2a60) = 6;
          }
          if ((local_3f & 0xf) != 0) {
            uVar35 = *(uint *)((long)&local_210 + uVar18 * 4);
            *(uint *)((long)&local_210 + uVar18 * 4) = uVar35 + 1;
            *(undefined2 *)(param_3 + (ulong)uVar35 * 2 + 0x2a60) = 7;
          }
          if ((local_3e & 0xf) != 0) {
            uVar35 = *(uint *)((long)&local_210 + uVar27 * 4);
            *(uint *)((long)&local_210 + uVar27 * 4) = uVar35 + 1;
            *(undefined2 *)(param_3 + (ulong)uVar35 * 2 + 0x2a60) = 8;
          }
          if ((local_3d & 0xf) != 0) {
            uVar35 = *(uint *)((long)&local_210 + uVar33 * 4);
            *(uint *)((long)&local_210 + uVar33 * 4) = uVar35 + 1;
            *(undefined2 *)(param_3 + (ulong)uVar35 * 2 + 0x2a60) = 9;
          }
          if ((local_3c & 0xf) != 0) {
            uVar35 = *(uint *)((long)&local_210 + uVar30 * 4);
            *(uint *)((long)&local_210 + uVar30 * 4) = uVar35 + 1;
            *(undefined2 *)(param_3 + (ulong)uVar35 * 2 + 0x2a60) = 10;
          }
          if ((local_3b & 0xf) != 0) {
            uVar35 = *(uint *)((long)&local_210 + uVar37 * 4);
            *(uint *)((long)&local_210 + uVar37 * 4) = uVar35 + 1;
            *(undefined2 *)(param_3 + (ulong)uVar35 * 2 + 0x2a60) = 0xb;
          }
          if ((local_3a & 0xf) != 0) {
            uVar35 = *(uint *)((long)&local_210 + uVar43 * 4);
            *(uint *)((long)&local_210 + uVar43 * 4) = uVar35 + 1;
            *(undefined2 *)(param_3 + (ulong)uVar35 * 2 + 0x2a60) = 0xc;
          }
          if ((local_39 & 0xf) != 0) {
            uVar35 = *(uint *)((long)&local_210 + uVar34 * 4);
            *(uint *)((long)&local_210 + uVar34 * 4) = uVar35 + 1;
            *(undefined2 *)(param_3 + (ulong)uVar35 * 2 + 0x2a60) = 0xd;
          }
          if ((local_38 & 0xf) != 0) {
            uVar35 = *(uint *)((long)&local_210 + uVar31 * 4);
            *(uint *)((long)&local_210 + uVar31 * 4) = uVar35 + 1;
            *(undefined2 *)(param_3 + (ulong)uVar35 * 2 + 0x2a60) = 0xe;
          }
          if ((local_37 & 0xf) != 0) {
            uVar35 = *(uint *)((long)&local_210 + uVar42 * 4);
            *(uint *)((long)&local_210 + uVar42 * 4) = uVar35 + 1;
            *(undefined2 *)(param_3 + (ulong)uVar35 * 2 + 0x2a60) = 0xf;
          }
          pUVar32 = param_3 + 0x1e60;
          uVar35 = 0;
          uVar18 = 1;
          uVar36 = 1;
          *(undefined4 *)(param_3 + 0x1e5c) = 7;
          goto LAB_001d4f74;
        }
        *(undefined2 *)((-0xb74 - (long)param_3) + (long)pUVar32 * 2) = 0;
        pUVar32 = pUVar32 + 1;
        uVar35 = uVar35 + 0x200;
        if (param_3 + 0xff4 == pUVar32) goto LAB_001d4978;
        if ((int)uVar18 != 0x10) goto LAB_001d4764;
LAB_001d57c0:
        uVar23 = 0xf;
      } while( true );
    }
LAB_001d59a0:
    uVar20 = 0;
LAB_001d561c:
    if (local_8 - ___stack_chk_guard != 0) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(uVar20,&__stack_chk_guard,local_8 - ___stack_chk_guard,0);
    }
    return;
  }
  goto LAB_001d3e60;
LAB_001d4f74:
  if ((int)uVar18 == 0x10) goto LAB_001d579c;
LAB_001d4f7c:
  if (uVar35 < *(uint *)(param_3 + uVar36 * 4 + 0x1ddc)) {
LAB_001d5848:
    uVar23 = (ulong)((int)uVar18 - 1);
    goto LAB_001d5148;
  }
  iVar17 = (int)uVar18;
  uVar26 = iVar17 + 1;
  if (iVar17 == 0xf) {
LAB_001d5928:
    uVar18 = (ulong)uVar26;
    uVar23 = 0xf;
    uVar36 = 0x10;
  }
  else {
    uVar36 = (ulong)uVar26;
    if (uVar35 < *(uint *)(param_3 + (ulong)uVar26 * 4 + 0x1ddc)) {
LAB_001d5938:
      uVar18 = (ulong)uVar26;
      uVar23 = (ulong)(uVar26 - 1);
    }
    else {
      uVar26 = iVar17 + 2;
      if (iVar17 == 0xe) goto LAB_001d5928;
      uVar36 = (ulong)uVar26;
      if (uVar35 < *(uint *)(param_3 + (ulong)uVar26 * 4 + 0x1ddc)) goto LAB_001d5938;
      uVar26 = iVar17 + 3;
      if (iVar17 == 0xd) goto LAB_001d5928;
      uVar36 = (ulong)uVar26;
      if (uVar35 < *(uint *)(param_3 + (ulong)uVar26 * 4 + 0x1ddc)) goto LAB_001d5938;
      uVar26 = iVar17 + 4;
      if (iVar17 == 0xc) {
LAB_001d5a24:
        uVar18 = (ulong)uVar26;
        uVar36 = 0x10;
        uVar23 = 0xf;
      }
      else {
        if (*(uint *)(param_3 + (ulong)uVar26 * 4 + 0x1ddc) <= uVar35) {
          uVar26 = iVar17 + 5;
          if (iVar17 == 0xb) goto LAB_001d5928;
          uVar36 = (ulong)uVar26;
          if (*(uint *)(param_3 + (ulong)uVar26 * 4 + 0x1ddc) <= uVar35) {
            uVar26 = iVar17 + 6;
            if (iVar17 == 10) goto LAB_001d5928;
            uVar36 = (ulong)uVar26;
            if (*(uint *)(param_3 + (ulong)uVar26 * 4 + 0x1ddc) <= uVar35) {
              uVar26 = iVar17 + 7;
              if (iVar17 == 9) goto LAB_001d5928;
              uVar36 = (ulong)uVar26;
              if (*(uint *)(param_3 + (ulong)uVar26 * 4 + 0x1ddc) <= uVar35) {
                uVar26 = iVar17 + 8;
                if (iVar17 == 8) goto LAB_001d5928;
                uVar36 = (ulong)uVar26;
                if (*(uint *)(param_3 + (ulong)uVar26 * 4 + 0x1ddc) <= uVar35) {
                  uVar26 = iVar17 + 9;
                  if (iVar17 == 7) goto LAB_001d5a24;
                  if (uVar35 < *(uint *)(param_3 + (ulong)uVar26 * 4 + 0x1ddc)) goto LAB_001d5a44;
                  uVar26 = iVar17 + 10;
                  if (iVar17 == 6) goto LAB_001d5928;
                  uVar36 = (ulong)uVar26;
                  if (*(uint *)(param_3 + (ulong)uVar26 * 4 + 0x1ddc) <= uVar35) {
                    uVar26 = iVar17 + 0xb;
                    if (iVar17 == 5) goto LAB_001d5928;
                    uVar36 = (ulong)uVar26;
                    if (*(uint *)(param_3 + (ulong)uVar26 * 4 + 0x1ddc) <= uVar35) {
                      uVar26 = iVar17 + 0xc;
                      if (iVar17 == 4) goto LAB_001d5928;
                      uVar36 = (ulong)uVar26;
                      if (*(uint *)(param_3 + (ulong)uVar26 * 4 + 0x1ddc) <= uVar35) {
                        uVar26 = iVar17 + 0xd;
                        if (iVar17 == 3) goto LAB_001d5928;
                        uVar36 = (ulong)uVar26;
                        if (*(uint *)(param_3 + (ulong)uVar26 * 4 + 0x1ddc) <= uVar35) {
                          if (iVar17 == 2) {
                            uVar23 = 0xf;
                            uVar18 = 0x10;
                            uVar36 = 0x10;
                          }
                          else {
                            uVar23 = 0xf;
                            uVar18 = 0x10;
                            uVar36 = 0x10;
                            if (uVar35 < *(uint *)(param_3 + 0x1e18)) {
                              uVar18 = 0xf;
                              uVar36 = 0xf;
                              goto LAB_001d5848;
                            }
                          }
                          goto LAB_001d5148;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          goto LAB_001d5938;
        }
LAB_001d5a44:
        uVar18 = (ulong)uVar26;
        uVar23 = (ulong)(uVar26 - 1);
        uVar36 = uVar18;
      }
    }
  }
LAB_001d5148:
  *pUVar32 = SUB81(uVar18,0);
  uVar26 = (uVar35 - *(int *)(param_3 + uVar23 * 4 + 0x1ddc) >> (ulong)(0x10U - (int)uVar18 & 0x1f))
           + *(int *)(param_3 + uVar36 * 4 + 0x1e1c);
  if (0xf < uVar26) {
    *(undefined2 *)((-0x1a60 - (long)param_3) + (long)pUVar32 * 2) = 0;
    pUVar32 = pUVar32 + 1;
    uVar35 = uVar35 + 0x200;
    if (pUVar32 == param_3 + 0x1ee0) goto LAB_001d5190;
    if ((int)uVar18 != 0x10) goto LAB_001d4f7c;
LAB_001d579c:
    uVar23 = 0xf;
    goto LAB_001d5148;
  }
  uVar35 = uVar35 + 0x200;
  *(undefined2 *)((-0x1a60 - (long)param_3) + (long)pUVar32 * 2) =
       *(undefined2 *)(param_3 + (ulong)uVar26 * 2 + 0x2a60);
  pUVar32 = pUVar32 + 1;
  if (param_3 + 0x1ee0 != pUVar32) goto LAB_001d4f74;
LAB_001d5190:
  *(undefined4 *)(param_3 + 0x2cc4) = 0x2c;
  local_250 = 0;
  uStack_248 = 0;
  local_240 = 0;
  local_238 = 0;
  local_230 = 0;
  local_228 = 0;
  local_220 = 0;
  local_218 = 0;
  pbVar24 = local_36;
  do {
    pbVar22 = pbVar24 + 1;
    *(int *)((long)&local_250 + ((ulong)*pbVar24 & 0xf) * 4) =
         *(int *)((long)&local_250 + ((ulong)*pbVar24 & 0xf) * 4) + 1;
    pbVar24 = pbVar22;
  } while (pbVar22 != abStack_a);
  uVar35 = local_250._4_4_;
  iVar17 = (int)uStack_248 + local_250._4_4_ * 2;
  *(undefined8 *)(param_3 + 0x394c) = 0;
  *(undefined8 *)(param_3 + 0x3954) = 0;
  iVar25 = uStack_248._4_4_ + iVar17 * 2;
  iVar1 = (int)local_240 + iVar25 * 2;
  *(undefined8 *)(param_3 + 0x395c) = 0;
  *(undefined8 *)(param_3 + 0x3964) = 0;
  iVar2 = local_240._4_4_ + iVar1 * 2;
  *(undefined8 *)(param_3 + 0x396c) = 0;
  *(undefined8 *)(param_3 + 0x3974) = 0;
  iVar3 = (int)local_238 + iVar2 * 2;
  *(undefined8 *)(param_3 + 0x397c) = 0;
  *(undefined8 *)(param_3 + 0x3984) = 0;
  iVar4 = local_238._4_4_ + iVar3 * 2;
  *(undefined8 *)(param_3 + 0x398c) = 0;
  *(undefined8 *)(param_3 + 0x3994) = 0;
  iVar5 = (int)local_230 + iVar4 * 2;
  iVar6 = local_230._4_4_ + iVar5 * 2;
  *(undefined8 *)(param_3 + 0x399c) = 0;
  iVar7 = (int)local_228 + iVar6 * 2;
  *(undefined4 *)(param_3 + 0x2cc8) = 0;
  *(uint *)(param_3 + 0x2ccc) = local_250._4_4_ << 0xf;
  *(undefined4 *)(param_3 + 0x2d08) = 0;
  *(int *)(param_3 + 0x2cd4) = iVar25 * 0x2000;
  *(int *)(param_3 + 0x2cdc) = iVar2 * 0x800;
  iVar25 = local_228._4_4_ + iVar7 * 2;
  *(int *)(param_3 + 0x2ce4) = iVar4 * 0x200;
  iVar2 = (int)local_220 + iVar25 * 2;
  local_250 = (ulong)local_250._4_4_ << 0x20;
  *(int *)(param_3 + 0x2cd0) = iVar17 * 0x4000;
  *(int *)(param_3 + 0x2cd8) = iVar1 * 0x1000;
  *(int *)(param_3 + 0x2ce0) = iVar3 * 0x400;
  *(int *)(param_3 + 0x2ce8) = iVar5 * 0x100;
  *(int *)(param_3 + 0x2cec) = iVar6 * 0x80;
  *(int *)(param_3 + 0x2cf0) = iVar7 * 0x40;
  *(int *)(param_3 + 0x2cf4) = iVar25 * 0x20;
  *(int *)(param_3 + 0x2cf8) = iVar2 * 0x10;
  iVar17 = *(int *)(param_3 + 0x2d08) + uVar35;
  iVar25 = iVar17 + (int)uStack_248;
  iVar1 = iVar25 + uStack_248._4_4_;
  iVar3 = iVar1 + (int)local_240;
  iVar4 = iVar3 + local_240._4_4_;
  iVar5 = iVar4 + (int)local_238;
  iVar6 = local_238._4_4_ + iVar5;
  iVar2 = local_220._4_4_ + iVar2 * 2;
  iVar7 = iVar6 + (int)local_230;
  iVar8 = (int)local_218 + iVar2 * 2;
  iVar9 = iVar7 + local_230._4_4_;
  iVar10 = iVar9 + (int)local_228;
  iVar11 = iVar10 + local_228._4_4_;
  iVar12 = iVar11 + (int)local_220;
  *(int *)(param_3 + 0x2cfc) = iVar2 * 8;
  *(int *)(param_3 + 0x2d00) = iVar8 * 4;
  *(int *)(param_3 + 0x2d04) = (local_218._4_4_ + iVar8 * 2) * 2;
  iVar2 = iVar12 + local_220._4_4_;
  *(int *)(param_3 + 0x2d0c) = *(int *)(param_3 + 0x2d08);
  *(int *)(param_3 + 0x2d10) = iVar17;
  *(int *)(param_3 + 0x2d14) = iVar25;
  *(int *)(param_3 + 0x2d18) = iVar1;
  *(int *)(param_3 + 0x2d1c) = iVar3;
  *(int *)(param_3 + 0x2d20) = iVar4;
  *(int *)(param_3 + 0x2d24) = iVar5;
  *(int *)(param_3 + 0x2d28) = iVar6;
  *(int *)(param_3 + 0x2d2c) = iVar7;
  *(int *)(param_3 + 0x2d30) = iVar9;
  *(int *)(param_3 + 0x2d34) = iVar10;
  *(int *)(param_3 + 0x2d38) = iVar11;
  *(int *)(param_3 + 0x2d3c) = iVar12;
  *(int *)(param_3 + 0x2d40) = iVar2;
  *(int *)(param_3 + 0x2d44) = iVar2 + (int)local_218;
  local_210 = *(undefined8 *)(param_3 + 0x2d08);
  uStack_208 = *(undefined8 *)(param_3 + 0x2d10);
  lVar28 = 0;
  local_200 = *(undefined8 *)(param_3 + 0x2d18);
  uStack_1f8 = *(undefined8 *)(param_3 + 0x2d20);
  local_1f0 = *(undefined8 *)(param_3 + 0x2d28);
  uStack_1e8 = *(undefined8 *)(param_3 + 0x2d30);
  local_1e0 = *(undefined8 *)(param_3 + 0x2d38);
  uStack_1d8 = *(undefined8 *)(param_3 + 0x2d40);
  do {
    if ((local_36[lVar28] & 0xf) != 0) {
      lVar19 = (long)(int)(local_36[lVar28] & 0xf);
      uVar35 = *(uint *)((long)&local_210 + lVar19 * 4);
      *(uint *)((long)&local_210 + lVar19 * 4) = uVar35 + 1;
      *(short *)(param_3 + (ulong)uVar35 * 2 + 0x394c) = (short)lVar28;
    }
    lVar28 = lVar28 + 1;
  } while (lVar28 != 0x2c);
  pUVar32 = param_3 + 0x2d4c;
  uVar18 = 1;
  uVar36 = 1;
  uVar35 = 0;
  *(undefined4 *)(param_3 + 0x2d48) = 7;
LAB_001d53fc:
  if ((int)uVar18 == 0x10) goto LAB_001d57e4;
LAB_001d5404:
  if (uVar35 < *(uint *)(param_3 + uVar36 * 4 + 0x2cc8)) {
LAB_001d5838:
    uVar23 = (ulong)((int)uVar18 - 1);
    goto LAB_001d55d0;
  }
  iVar17 = (int)uVar18;
  uVar26 = iVar17 + 1;
  if (iVar17 == 0xf) {
LAB_001d58f8:
    uVar18 = (ulong)uVar26;
    uVar23 = 0xf;
    uVar36 = 0x10;
  }
  else {
    uVar36 = (ulong)uVar26;
    if (uVar35 < *(uint *)(param_3 + (ulong)uVar26 * 4 + 0x2cc8)) {
LAB_001d5944:
      uVar18 = (ulong)uVar26;
      uVar23 = (ulong)(uVar26 - 1);
    }
    else {
      uVar26 = iVar17 + 2;
      if (iVar17 == 0xe) goto LAB_001d58f8;
      uVar36 = (ulong)uVar26;
      if (uVar35 < *(uint *)(param_3 + (ulong)uVar26 * 4 + 0x2cc8)) goto LAB_001d5944;
      uVar26 = iVar17 + 3;
      if (iVar17 == 0xd) goto LAB_001d58f8;
      uVar36 = (ulong)uVar26;
      if (uVar35 < *(uint *)(param_3 + (ulong)uVar26 * 4 + 0x2cc8)) goto LAB_001d5944;
      uVar26 = iVar17 + 4;
      if (iVar17 == 0xc) {
LAB_001d5a14:
        uVar18 = (ulong)uVar26;
        uVar36 = 0x10;
        uVar23 = 0xf;
      }
      else {
        if (*(uint *)(param_3 + (ulong)uVar26 * 4 + 0x2cc8) <= uVar35) {
          uVar26 = iVar17 + 5;
          if (iVar17 == 0xb) goto LAB_001d58f8;
          uVar36 = (ulong)uVar26;
          if (*(uint *)(param_3 + (ulong)uVar26 * 4 + 0x2cc8) <= uVar35) {
            uVar26 = iVar17 + 6;
            if (iVar17 == 10) goto LAB_001d58f8;
            uVar36 = (ulong)uVar26;
            if (*(uint *)(param_3 + (ulong)uVar26 * 4 + 0x2cc8) <= uVar35) {
              uVar26 = iVar17 + 7;
              if (iVar17 == 9) goto LAB_001d58f8;
              uVar36 = (ulong)uVar26;
              if (*(uint *)(param_3 + (ulong)uVar26 * 4 + 0x2cc8) <= uVar35) {
                uVar26 = iVar17 + 8;
                if (iVar17 == 8) goto LAB_001d58f8;
                uVar36 = (ulong)uVar26;
                if (*(uint *)(param_3 + (ulong)uVar26 * 4 + 0x2cc8) <= uVar35) {
                  uVar26 = iVar17 + 9;
                  if (iVar17 == 7) goto LAB_001d5a14;
                  if (uVar35 < *(uint *)(param_3 + (ulong)uVar26 * 4 + 0x2cc8)) goto LAB_001d5a34;
                  uVar26 = iVar17 + 10;
                  if (iVar17 == 6) goto LAB_001d58f8;
                  uVar36 = (ulong)uVar26;
                  if (*(uint *)(param_3 + (ulong)uVar26 * 4 + 0x2cc8) <= uVar35) {
                    uVar26 = iVar17 + 0xb;
                    if (iVar17 == 5) goto LAB_001d58f8;
                    uVar36 = (ulong)uVar26;
                    if (*(uint *)(param_3 + (ulong)uVar26 * 4 + 0x2cc8) <= uVar35) {
                      uVar26 = iVar17 + 0xc;
                      if (iVar17 == 4) goto LAB_001d58f8;
                      uVar36 = (ulong)uVar26;
                      if (*(uint *)(param_3 + (ulong)uVar26 * 4 + 0x2cc8) <= uVar35) {
                        uVar26 = iVar17 + 0xd;
                        if (iVar17 == 3) goto LAB_001d58f8;
                        uVar36 = (ulong)uVar26;
                        if (*(uint *)(param_3 + (ulong)uVar26 * 4 + 0x2cc8) <= uVar35) {
                          if (iVar17 == 2) {
                            uVar23 = 0xf;
                            uVar18 = 0x10;
                            uVar36 = 0x10;
                          }
                          else {
                            uVar23 = 0xf;
                            uVar18 = 0x10;
                            uVar36 = 0x10;
                            if (uVar35 < *(uint *)(param_3 + 0x2d04)) {
                              uVar18 = 0xf;
                              uVar36 = 0xf;
                              goto LAB_001d5838;
                            }
                          }
                          goto LAB_001d55d0;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          goto LAB_001d5944;
        }
LAB_001d5a34:
        uVar18 = (ulong)uVar26;
        uVar23 = (ulong)(uVar26 - 1);
        uVar36 = uVar18;
      }
    }
  }
LAB_001d55d0:
  do {
    *pUVar32 = SUB81(uVar18,0);
    uVar26 = (uVar35 - *(int *)(param_3 + uVar23 * 4 + 0x2cc8) >>
             (ulong)(0x10U - (int)uVar18 & 0x1f)) + *(int *)(param_3 + uVar36 * 4 + 0x2d08);
    if (uVar26 < 0x2c) {
      uVar35 = uVar35 + 0x200;
      *(undefined2 *)((-0x294c - (long)param_3) + (long)pUVar32 * 2) =
           *(undefined2 *)(param_3 + (ulong)uVar26 * 2 + 0x394c);
      pUVar32 = pUVar32 + 1;
      if (param_3 + 0x2dcc == pUVar32) {
LAB_001d5618:
        uVar20 = 1;
        goto LAB_001d561c;
      }
      goto LAB_001d53fc;
    }
    *(undefined2 *)((-0x294c - (long)param_3) + (long)pUVar32 * 2) = 0;
    pUVar32 = pUVar32 + 1;
    uVar35 = uVar35 + 0x200;
    if (param_3 + 0x2dcc == pUVar32) goto LAB_001d5618;
    if ((int)uVar18 != 0x10) goto LAB_001d5404;
LAB_001d57e4:
    uVar23 = 0xf;
  } while( true );
}


