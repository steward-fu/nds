/*
 * Ghidra decompilation
 *
 * Function : ReadTables30
 * Address  : 001d85b0
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Unpack::ReadTables30() */

void Unpack::ReadTables30(void)

{
  uint *puVar1;
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
  ushort uVar12;
  byte bVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  ComprDataIO **in_x0;
  ulong uVar17;
  uint uVar18;
  long lVar19;
  byte *pbVar20;
  ComprDataIO *pCVar21;
  byte *pbVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  ulong uVar26;
  int iVar27;
  uint uVar28;
  ulong uVar29;
  ComprDataIO **ppCVar30;
  ulong uVar31;
  ulong uVar32;
  ulong uVar33;
  ulong uVar34;
  ulong uVar35;
  ulong uVar36;
  Unpack *pUVar37;
  long lVar38;
  size_t __n;
  ulong uVar39;
  uint uVar40;
  ulong uVar41;
  ulong uVar42;
  ulong uVar43;
  ulong uVar44;
  undefined8 local_238;
  undefined8 local_230;
  undefined8 local_228;
  undefined8 local_220;
  undefined8 local_218;
  undefined8 local_210;
  undefined8 local_208;
  undefined8 local_200;
  ComprDataIO *local_1f8;
  ComprDataIO *pCStack_1f0;
  ComprDataIO *local_1e8;
  ComprDataIO *pCStack_1e0;
  ComprDataIO *local_1d8;
  ComprDataIO *pCStack_1d0;
  ComprDataIO *local_1c8;
  undefined8 uStack_1c0;
  byte local_1b8 [20];
  byte abStack_1a4 [3];
  byte local_1a1 [300];
  byte local_75 [60];
  byte local_39;
  byte local_38;
  byte local_37;
  byte local_36;
  byte local_35;
  byte local_34;
  byte local_33;
  byte local_32;
  byte local_31;
  byte local_30;
  byte local_2f;
  byte local_2e;
  byte local_2d;
  byte local_2c;
  byte local_2b;
  byte local_2a;
  byte local_29;
  byte local_28 [28];
  byte abStack_c [4];
  long local_8;
  
  iVar14 = *(int *)(in_x0 + 0x1a);
  local_8 = ___stack_chk_guard;
  iVar27 = *(int *)(in_x0 + 1);
  if (iVar14 + -0x18 <= iVar27) {
    iVar16 = iVar14 - iVar27;
    if (iVar16 < 0) {
LAB_001da484:
      lVar38 = 0;
      goto LAB_001da488;
    }
    pCVar21 = in_x0[3];
    if (iVar27 < 0x4001) {
      __n = (size_t)iVar14;
      iVar16 = iVar14;
    }
    else {
      __n = (size_t)iVar16;
      if (iVar16 != 0) {
        memmove(pCVar21,pCVar21 + iVar27,__n);
        pCVar21 = in_x0[3];
      }
      *(undefined4 *)(in_x0 + 1) = 0;
      *(int *)(in_x0 + 0x1a) = iVar16;
    }
    iVar14 = ComprDataIO::UnpRead(*in_x0,(uchar *)(pCVar21 + __n),(long)(0x8000 - iVar16));
    if (iVar14 < 1) {
      *(int *)((long)in_x0 + 0xd4) = *(int *)(in_x0 + 0x1a) + -0x1e;
      if (iVar14 == -1) goto LAB_001da484;
    }
    else {
      iVar14 = iVar14 + *(int *)(in_x0 + 0x1a);
      *(int *)(in_x0 + 0x1a) = iVar14;
      *(int *)((long)in_x0 + 0xd4) = iVar14 + -0x1e;
    }
  }
  ppCVar30 = in_x0 + 1;
  BitInput::faddbits((BitInput *)ppCVar30,-*(int *)((long)in_x0 + 0xc) & 7);
  uVar15 = BitInput::fgetbits();
  uVar40 = uVar15 & 0x8000;
  if ((uVar15 >> 0xf & 1) == 0) {
    *(undefined4 *)((long)in_x0 + 0xe8a4) = 0;
    in_x0[0x1345] = (ComprDataIO *)0x0;
    if ((uVar15 >> 0xe & 1) == 0) {
      memset((Unpack *)((long)in_x0 + 0xe6f4),0,0x1ae);
    }
    uVar39 = 0;
    BitInput::faddbits((BitInput *)ppCVar30,2);
    do {
      uVar17 = BitInput::fgetbits();
      bVar13 = (byte)(uVar17 >> 0xc);
      BitInput::faddbits((BitInput *)ppCVar30,4);
      uVar15 = (uint)uVar39;
      if (((uint)(uVar17 >> 0xc) & 0xff) == 0xf) {
        uVar17 = BitInput::fgetbits();
        BitInput::faddbits((BitInput *)ppCVar30,4);
        if ((uVar17 >> 0xc & 0xff) != 0) {
          uVar24 = uVar39;
          if (uVar15 < 0x14) {
            do {
              uVar28 = (int)uVar24 + 1;
              uVar39 = (ulong)uVar28;
              iVar14 = (((uint)(uVar17 >> 0xc) & 0xff) - uVar28) + uVar15 + 2;
              local_1b8[uVar24] = 0;
              uVar24 = uVar39;
            } while (0 < iVar14 && uVar28 < 0x13 || 0 < iVar14 && uVar28 == 0x13);
            goto LAB_001d86a4;
          }
          break;
        }
        local_1b8[uVar39] = bVar13;
        uVar15 = uVar15 + 1;
        uVar39 = (ulong)uVar15;
      }
      else {
        local_1b8[uVar39] = bVar13;
        uVar39 = (ulong)(uVar15 + 1);
LAB_001d86a4:
        uVar15 = (uint)uVar39;
      }
    } while (uVar15 < 0x14);
    local_238 = 0;
    local_230 = 0;
    local_228 = 0;
    local_220 = 0;
    local_218 = 0;
    local_210 = 0;
    local_208 = 0;
    local_200 = 0;
    *(undefined4 *)((long)in_x0 + 0x3c9c) = 0x14;
    pbVar20 = local_1b8;
    do {
      pbVar22 = pbVar20 + 1;
      *(int *)((long)&local_238 + ((ulong)*pbVar20 & 0xf) * 4) =
           *(int *)((long)&local_238 + ((ulong)*pbVar20 & 0xf) * 4) + 1;
      pbVar20 = pbVar22;
    } while (pbVar22 != abStack_1a4);
    uVar15 = local_238._4_4_;
    iVar14 = (int)local_230 + local_238._4_4_ * 2;
    iVar27 = local_230._4_4_ + iVar14 * 2;
    iVar16 = (int)local_228 + iVar27 * 2;
    iVar2 = local_228._4_4_ + iVar16 * 2;
    iVar3 = (int)local_220 + iVar2 * 2;
    iVar4 = local_220._4_4_ + iVar3 * 2;
    iVar5 = (int)local_218 + iVar4 * 2;
    *(undefined8 *)((long)in_x0 + 0x4924) = 0;
    *(undefined8 *)((long)in_x0 + 0x492c) = 0;
    iVar6 = local_218._4_4_ + iVar5 * 2;
    *(undefined8 *)((long)in_x0 + 0x4934) = 0;
    *(undefined8 *)((long)in_x0 + 0x493c) = 0;
    iVar7 = (int)local_210 + iVar6 * 2;
    *(undefined8 *)((long)in_x0 + 0x4944) = 0;
    *(undefined4 *)(in_x0 + 0x794) = 0;
    *(uint *)((long)in_x0 + 0x3ca4) = local_238._4_4_ << 0xf;
    *(undefined4 *)(in_x0 + 0x79c) = 0;
    *(int *)(in_x0 + 0x795) = iVar14 * 0x4000;
    iVar14 = local_210._4_4_ + iVar7 * 2;
    *(int *)(in_x0 + 0x796) = iVar16 * 0x1000;
    *(int *)((long)in_x0 + 0x3cb4) = iVar2 * 0x800;
    iVar16 = (int)local_208 + iVar14 * 2;
    *(int *)((long)in_x0 + 0x3cc4) = iVar6 * 0x80;
    iVar2 = local_208._4_4_ + iVar16 * 2;
    local_238 = (ulong)local_238._4_4_ << 0x20;
    *(int *)((long)in_x0 + 0x3cac) = iVar27 * 0x2000;
    *(int *)(in_x0 + 0x797) = iVar3 * 0x400;
    *(int *)((long)in_x0 + 0x3cbc) = iVar4 * 0x200;
    *(int *)(in_x0 + 0x798) = iVar5 * 0x100;
    *(int *)(in_x0 + 0x799) = iVar7 * 0x40;
    *(int *)((long)in_x0 + 0x3ccc) = iVar14 * 0x20;
    *(int *)(in_x0 + 0x79a) = iVar16 * 0x10;
    *(int *)((long)in_x0 + 0x3cd4) = iVar2 * 8;
    iVar14 = *(int *)(in_x0 + 0x79c) + uVar15;
    iVar27 = iVar14 + (int)local_230;
    iVar16 = iVar27 + local_230._4_4_;
    iVar3 = iVar16 + (int)local_228;
    iVar4 = iVar3 + local_228._4_4_;
    iVar5 = iVar4 + (int)local_220;
    iVar6 = iVar5 + local_220._4_4_;
    iVar7 = iVar6 + (int)local_218;
    iVar8 = iVar7 + local_218._4_4_;
    iVar2 = (int)local_200 + iVar2 * 2;
    iVar9 = iVar8 + (int)local_210;
    iVar10 = iVar9 + local_210._4_4_;
    iVar11 = iVar10 + (int)local_208;
    *(int *)(in_x0 + 0x79b) = iVar2 * 4;
    *(int *)((long)in_x0 + 0x3cdc) = (local_200._4_4_ + iVar2 * 2) * 2;
    iVar2 = iVar11 + local_208._4_4_;
    *(int *)((long)in_x0 + 0x3ce4) = *(int *)(in_x0 + 0x79c);
    *(int *)(in_x0 + 0x79d) = iVar14;
    *(int *)((long)in_x0 + 0x3cec) = iVar27;
    *(int *)(in_x0 + 0x79e) = iVar16;
    *(int *)((long)in_x0 + 0x3cf4) = iVar3;
    *(int *)(in_x0 + 0x79f) = iVar4;
    *(int *)((long)in_x0 + 0x3cfc) = iVar5;
    *(int *)(in_x0 + 0x7a0) = iVar6;
    *(int *)((long)in_x0 + 0x3d04) = iVar7;
    *(int *)(in_x0 + 0x7a1) = iVar8;
    *(int *)((long)in_x0 + 0x3d0c) = iVar9;
    *(int *)(in_x0 + 0x7a2) = iVar10;
    *(int *)((long)in_x0 + 0x3d14) = iVar11;
    *(int *)(in_x0 + 0x7a3) = iVar2;
    *(int *)((long)in_x0 + 0x3d1c) = iVar2 + (int)local_200;
    local_1e8 = in_x0[0x79e];
    pCStack_1e0 = in_x0[0x79f];
    local_1f8 = in_x0[0x79c];
    pCStack_1f0 = in_x0[0x79d];
    lVar38 = 1;
    local_1d8 = in_x0[0x7a0];
    pCStack_1d0 = in_x0[0x7a1];
    local_1c8 = in_x0[0x7a2];
    uStack_1c0 = in_x0[0x7a3];
    do {
      if ((local_1b8[lVar38 + -1] & 0xf) != 0) {
        lVar19 = (long)(int)(local_1b8[lVar38 + -1] & 0xf);
        uVar15 = *(uint *)((long)&local_1f8 + lVar19 * 4);
        *(uint *)((long)&local_1f8 + lVar19 * 4) = uVar15 + 1;
        *(short *)((long)in_x0 + (ulong)uVar15 * 2 + 0x4924) = (short)lVar38 + -1;
      }
      lVar38 = lVar38 + 1;
    } while (lVar38 != 0x15);
    pUVar37 = (Unpack *)((long)in_x0 + 0x3d24);
    uVar15 = 0;
    uVar17 = 1;
    uVar39 = 1;
    *(undefined4 *)(in_x0 + 0x7a4) = 7;
LAB_001d8978:
    if ((int)uVar17 == 0x10) goto LAB_001da50c;
LAB_001d8980:
    if (uVar15 < *(uint *)((long)in_x0 + uVar39 * 4 + 0x3ca0)) {
LAB_001da520:
      uVar24 = (ulong)((int)uVar17 - 1);
      goto LAB_001d8b48;
    }
    iVar14 = (int)uVar17;
    uVar28 = iVar14 + 1;
    if (iVar14 == 0xf) {
LAB_001da580:
      uVar17 = (ulong)uVar28;
      uVar24 = 0xf;
      uVar39 = 0x10;
    }
    else {
      uVar39 = (ulong)uVar28;
      if (*(uint *)((long)in_x0 + (ulong)uVar28 * 4 + 0x3ca0) <= uVar15) {
        uVar28 = iVar14 + 2;
        if (iVar14 == 0xe) goto LAB_001da580;
        uVar39 = (ulong)uVar28;
        if (*(uint *)((long)in_x0 + (ulong)uVar28 * 4 + 0x3ca0) <= uVar15) {
          uVar28 = iVar14 + 3;
          if (iVar14 == 0xd) goto LAB_001da580;
          uVar39 = (ulong)uVar28;
          if (*(uint *)((long)in_x0 + (ulong)uVar28 * 4 + 0x3ca0) <= uVar15) {
            uVar28 = iVar14 + 4;
            if (iVar14 == 0xc) {
LAB_001da748:
              uVar17 = (ulong)uVar28;
              uVar39 = 0x10;
              uVar24 = 0xf;
              goto LAB_001d8b48;
            }
            if (uVar15 < *(uint *)((long)in_x0 + (ulong)uVar28 * 4 + 0x3ca0)) {
LAB_001da784:
              uVar17 = (ulong)uVar28;
              uVar24 = (ulong)(uVar28 - 1);
              uVar39 = uVar17;
              goto LAB_001d8b48;
            }
            uVar28 = iVar14 + 5;
            if (iVar14 == 0xb) goto LAB_001da580;
            uVar39 = (ulong)uVar28;
            if (*(uint *)((long)in_x0 + (ulong)uVar28 * 4 + 0x3ca0) <= uVar15) {
              uVar28 = iVar14 + 6;
              if (iVar14 == 10) goto LAB_001da580;
              uVar39 = (ulong)uVar28;
              if (*(uint *)((long)in_x0 + (ulong)uVar28 * 4 + 0x3ca0) <= uVar15) {
                uVar28 = iVar14 + 7;
                if (iVar14 == 9) goto LAB_001da580;
                uVar39 = (ulong)uVar28;
                if (*(uint *)((long)in_x0 + (ulong)uVar28 * 4 + 0x3ca0) <= uVar15) {
                  uVar28 = iVar14 + 8;
                  if (iVar14 == 8) goto LAB_001da580;
                  uVar39 = (ulong)uVar28;
                  if (*(uint *)((long)in_x0 + (ulong)uVar28 * 4 + 0x3ca0) <= uVar15) {
                    uVar28 = iVar14 + 9;
                    if (iVar14 == 7) goto LAB_001da748;
                    if (uVar15 < *(uint *)((long)in_x0 + (ulong)uVar28 * 4 + 0x3ca0))
                    goto LAB_001da784;
                    uVar28 = iVar14 + 10;
                    if (iVar14 == 6) goto LAB_001da580;
                    uVar39 = (ulong)uVar28;
                    if (*(uint *)((long)in_x0 + (ulong)uVar28 * 4 + 0x3ca0) <= uVar15) {
                      uVar28 = iVar14 + 0xb;
                      if (iVar14 == 5) goto LAB_001da580;
                      uVar39 = (ulong)uVar28;
                      if (*(uint *)((long)in_x0 + (ulong)uVar28 * 4 + 0x3ca0) <= uVar15) {
                        uVar28 = iVar14 + 0xc;
                        if (iVar14 == 4) goto LAB_001da580;
                        uVar39 = (ulong)uVar28;
                        if (*(uint *)((long)in_x0 + (ulong)uVar28 * 4 + 0x3ca0) <= uVar15) {
                          uVar28 = iVar14 + 0xd;
                          if (iVar14 == 3) goto LAB_001da580;
                          uVar39 = (ulong)uVar28;
                          if (*(uint *)((long)in_x0 + (ulong)uVar28 * 4 + 0x3ca0) <= uVar15) {
                            if (iVar14 == 2) {
                              uVar24 = 0xf;
                              uVar17 = 0x10;
                              uVar39 = 0x10;
                              goto LAB_001d8b48;
                            }
                            uVar24 = 0xf;
                            uVar17 = 0x10;
                            uVar39 = 0x10;
                            if (*(uint *)((long)in_x0 + 0x3cdc) <= uVar15) goto LAB_001d8b48;
                            uVar17 = 0xf;
                            uVar39 = 0xf;
                            goto LAB_001da520;
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
      uVar17 = (ulong)uVar28;
      uVar24 = (ulong)(uVar28 - 1);
    }
LAB_001d8b48:
    do {
      *pUVar37 = SUB81(uVar17,0);
      uVar28 = (uVar15 - *(int *)((long)in_x0 + uVar24 * 4 + 0x3ca0) >>
               (ulong)(0x10U - (int)uVar17 & 0x1f)) + *(int *)((long)in_x0 + uVar39 * 4 + 0x3ce0);
      if (uVar28 < 0x14) {
        uVar15 = uVar15 + 0x200;
        *(undefined2 *)((-0x3924 - (long)in_x0) + (long)pUVar37 * 2) =
             *(undefined2 *)((long)in_x0 + (ulong)uVar28 * 2 + 0x4924);
        pUVar37 = pUVar37 + 1;
        if (pUVar37 != (Unpack *)((long)in_x0 + 0x3da4)) goto LAB_001d8978;
LAB_001d8b90:
        iVar27 = *(int *)(in_x0 + 0x1a);
        puVar1 = (uint *)((long)in_x0 + 0x3c9c);
        iVar14 = 0;
        goto LAB_001d8ba8;
      }
      *(undefined2 *)((-0x3924 - (long)in_x0) + (long)pUVar37 * 2) = 0;
      pUVar37 = pUVar37 + 1;
      uVar15 = uVar15 + 0x200;
      if (pUVar37 == (Unpack *)((long)in_x0 + 0x3da4)) goto LAB_001d8b90;
      if ((int)uVar17 != 0x10) goto LAB_001d8980;
LAB_001da50c:
      uVar24 = 0xf;
    } while( true );
  }
  *(undefined4 *)((long)in_x0 + 0xe8a4) = 1;
  lVar38 = local_8 - ___stack_chk_guard;
  lVar19 = 0;
  if (lVar38 == 0) {
    ModelPPM::DecodeInit((ModelPPM *)(in_x0 + 0x1346),(Unpack *)in_x0,(int *)(in_x0 + 0x1cde));
    return;
  }
  goto LAB_001da9f4;
  while (iVar14 != 0x194) {
LAB_001d8ba8:
    iVar16 = *(int *)(in_x0 + 1);
    if (iVar27 + -4 <= iVar16) {
      iVar2 = iVar27 - iVar16;
      if (iVar2 < 0) goto LAB_001da484;
      pCVar21 = in_x0[3];
      if (iVar16 < 0x4001) {
        iVar16 = ComprDataIO::UnpRead(*in_x0,(uchar *)(pCVar21 + iVar27),(long)(0x8000 - iVar27));
        iVar27 = *(int *)(in_x0 + 0x1a);
      }
      else {
        if (iVar2 != 0) {
          memmove(pCVar21,pCVar21 + iVar16,(long)iVar2);
          pCVar21 = in_x0[3];
        }
        *(undefined4 *)(in_x0 + 1) = 0;
        *(int *)(in_x0 + 0x1a) = iVar2;
        iVar16 = ComprDataIO::UnpRead(*in_x0,(uchar *)(pCVar21 + iVar2),(long)(0x8000 - iVar2));
        iVar27 = *(int *)(in_x0 + 0x1a);
      }
      if (iVar16 < 1) {
        *(int *)((long)in_x0 + 0xd4) = iVar27 + -0x1e;
        if (iVar16 == -1) goto LAB_001da484;
        iVar16 = *(int *)ppCVar30;
      }
      else {
        iVar27 = iVar16 + iVar27;
        *(int *)(in_x0 + 0x1a) = iVar27;
        *(int *)((long)in_x0 + 0xd4) = iVar27 + -0x1e;
        iVar16 = *(int *)ppCVar30;
      }
    }
    pCVar21 = in_x0[3];
    uVar28 = *(uint *)(in_x0 + 0x7a4);
    iVar2 = *(int *)((long)in_x0 + 0xc);
    uVar15 = ((uint)(byte)pCVar21[(long)iVar16 + 2] | (uint)(byte)pCVar21[iVar16] << 0x10 |
             (uint)(byte)pCVar21[(long)iVar16 + 1] << 8) >> (ulong)(8U - iVar2 & 0x1f) & 0xfffe;
    if (uVar15 < puVar1[(ulong)uVar28 + 1]) {
      uVar39 = (ulong)(uVar15 >> (ulong)(0x10 - uVar28 & 0x1f));
      uVar12 = *(ushort *)((long)puVar1 + uVar39 * 2 + 0x488);
      uVar15 = (uint)*(byte *)((long)puVar1 + uVar39 + 0x88) + iVar2;
      *(uint *)(in_x0 + 1) = iVar16 + (uVar15 >> 3);
      *(uint *)((long)in_x0 + 0xc) = uVar15 & 7;
    }
    else {
      uVar18 = uVar28 + 1;
      if (uVar18 < 0xf) {
        uVar39 = (ulong)uVar18;
        if (puVar1[(ulong)uVar18 + 1] <= uVar15) {
          uVar18 = uVar28 + 2;
          if (uVar28 == 0xd) {
LAB_001da570:
            uVar28 = 1;
            uVar17 = 0xe;
            uVar39 = 0xf;
            goto LAB_001d8e24;
          }
          uVar39 = (ulong)uVar18;
          if (puVar1[(ulong)uVar18 + 1] <= uVar15) {
            uVar18 = uVar28 + 3;
            if (uVar28 == 0xc) goto LAB_001da570;
            uVar39 = (ulong)uVar18;
            if (puVar1[(ulong)uVar18 + 1] <= uVar15) {
              uVar18 = uVar28 + 4;
              if (uVar28 == 0xb) goto LAB_001da570;
              uVar39 = (ulong)uVar18;
              if (puVar1[(ulong)uVar18 + 1] <= uVar15) {
                uVar18 = uVar28 + 5;
                if (uVar28 == 10) goto LAB_001da570;
                uVar39 = (ulong)uVar18;
                if (puVar1[(ulong)uVar18 + 1] <= uVar15) {
                  uVar18 = uVar28 + 6;
                  if (uVar28 == 9) goto LAB_001da570;
                  uVar39 = (ulong)uVar18;
                  if (puVar1[(ulong)uVar18 + 1] <= uVar15) {
                    uVar18 = uVar28 + 7;
                    if (uVar28 == 8) goto LAB_001da570;
                    uVar39 = (ulong)uVar18;
                    if (puVar1[(ulong)uVar18 + 1] <= uVar15) {
                      uVar18 = uVar28 + 8;
                      if (uVar28 == 7) goto LAB_001da570;
                      uVar39 = (ulong)uVar18;
                      if (puVar1[(ulong)uVar18 + 1] <= uVar15) {
                        uVar18 = uVar28 + 9;
                        if (uVar28 == 6) goto LAB_001da570;
                        uVar39 = (ulong)uVar18;
                        if (puVar1[(ulong)uVar18 + 1] <= uVar15) {
                          uVar18 = uVar28 + 10;
                          if (uVar28 == 5) goto LAB_001da570;
                          uVar39 = (ulong)uVar18;
                          if (puVar1[(ulong)uVar18 + 1] <= uVar15) {
                            uVar18 = uVar28 + 0xb;
                            if (uVar28 == 4) goto LAB_001da570;
                            uVar39 = (ulong)uVar18;
                            if (puVar1[(ulong)uVar18 + 1] <= uVar15) {
                              uVar18 = uVar28 + 0xc;
                              if (uVar28 == 3) goto LAB_001da570;
                              uVar39 = (ulong)uVar18;
                              if (puVar1[(ulong)uVar18 + 1] <= uVar15) {
                                uVar18 = uVar28 + 0xd;
                                if (uVar28 == 2) goto LAB_001da570;
                                uVar39 = (ulong)uVar18;
                                if (puVar1[(ulong)uVar18 + 1] <= uVar15) {
                                  uVar18 = uVar28 + 0xe;
                                  if (uVar28 == 1) goto LAB_001da570;
                                  uVar39 = (ulong)uVar18;
                                  if (puVar1[(ulong)uVar18 + 1] <= uVar15) {
                                    if ((uVar28 == 0) || (*(uint *)(in_x0 + 0x79b) <= uVar15))
                                    goto LAB_001d8e14;
                                    uVar18 = 0xe;
                                    uVar39 = 0xe;
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
        uVar17 = (ulong)(uVar18 - 1);
        uVar28 = 0x10 - uVar18;
      }
      else {
LAB_001d8e14:
        uVar28 = 1;
        uVar17 = 0xe;
        uVar18 = 0xf;
        uVar39 = 0xf;
      }
LAB_001d8e24:
      *(uint *)(in_x0 + 1) = iVar16 + (uVar18 + iVar2 >> 3);
      *(uint *)((long)in_x0 + 0xc) = uVar18 + iVar2 & 7;
      uVar15 = (uVar15 - puVar1[uVar17 + 1] >> (ulong)(uVar28 & 0x1f)) + puVar1[uVar39 + 0x11];
      if (*puVar1 <= uVar15) {
        uVar15 = 0;
      }
      uVar12 = *(ushort *)((long)puVar1 + (ulong)uVar15 * 2 + 0xc88);
    }
    if (uVar12 < 0x10) {
      local_1a1[(long)iVar14 + 1] =
           (char)uVar12 + (char)*(Unpack *)((long)in_x0 + (long)iVar14 + 0xe6f4) & 0xf;
      iVar14 = iVar14 + 1;
    }
    else if (uVar12 < 0x12) {
      if (uVar12 == 0x10) {
        uVar39 = BitInput::fgetbits();
        iVar27 = ((uint)(uVar39 >> 0xd) & 0x7ffff) + 3;
        BitInput::faddbits((BitInput *)ppCVar30,3);
      }
      else {
        uVar39 = BitInput::fgetbits();
        iVar27 = ((uint)(uVar39 >> 9) & 0x7fffff) + 0xb;
        BitInput::faddbits((BitInput *)ppCVar30,7);
      }
      if (iVar14 == 0) {
        iVar27 = *(int *)(in_x0 + 0x1a);
        goto LAB_001d8ba8;
      }
      if (0x193 < iVar14) goto LAB_001da8d0;
      iVar27 = iVar14 + iVar27;
      bVar13 = local_1a1[iVar14];
      lVar38 = (long)(iVar14 + 1);
      do {
        iVar14 = (int)lVar38;
        local_1a1[lVar38] = bVar13;
        lVar38 = lVar38 + 1;
      } while (0 < iVar27 - iVar14 && iVar14 < 0x194);
      iVar27 = *(int *)(in_x0 + 0x1a);
    }
    else {
      if (uVar12 == 0x12) {
        uVar39 = BitInput::fgetbits();
        iVar27 = ((uint)(uVar39 >> 0xd) & 0x7ffff) + 3;
        BitInput::faddbits((BitInput *)ppCVar30,3);
      }
      else {
        uVar39 = BitInput::fgetbits();
        iVar27 = ((uint)(uVar39 >> 9) & 0x7fffff) + 0xb;
        BitInput::faddbits((BitInput *)ppCVar30,7);
      }
      if (0x193 < iVar14) {
LAB_001da8d0:
        iVar27 = *(int *)(in_x0 + 0x1a);
        break;
      }
      iVar27 = iVar27 + iVar14;
      lVar38 = (long)(iVar14 + 1);
      do {
        iVar14 = (int)lVar38;
        local_1a1[lVar38] = 0;
        lVar38 = lVar38 + 1;
      } while (iVar14 < 0x194 && 0 < iVar27 - iVar14);
      iVar27 = *(int *)(in_x0 + 0x1a);
    }
  }
  *(Unpack *)(in_x0 + 0x1d15) = (Unpack)0x1;
  if (iVar27 < *(int *)(in_x0 + 1)) goto LAB_001da484;
  local_238 = 0;
  local_230 = 0;
  local_228 = 0;
  local_220 = 0;
  local_218 = 0;
  local_210 = 0;
  local_208 = 0;
  local_200 = 0;
  *(undefined4 *)((long)in_x0 + 0xec) = 299;
  pbVar20 = local_1a1 + 1;
  do {
    pbVar22 = pbVar20 + 1;
    *(int *)((long)&local_238 + ((ulong)*pbVar20 & 0xf) * 4) =
         *(int *)((long)&local_238 + ((ulong)*pbVar20 & 0xf) * 4) + 1;
    pbVar20 = pbVar22;
  } while (local_75 != pbVar22);
  local_238 = local_238 & 0xffffffff00000000;
  memset((Unpack *)((long)in_x0 + 0xd74),0,0x256);
  iVar14 = (int)local_230 + local_238._4_4_ * 2;
  iVar27 = local_230._4_4_ + iVar14 * 2;
  iVar16 = (int)local_228 + iVar27 * 2;
  iVar2 = local_228._4_4_ + iVar16 * 2;
  iVar3 = (int)local_220 + iVar2 * 2;
  iVar4 = local_220._4_4_ + iVar3 * 2;
  local_230._4_4_ = local_238._4_4_ + (int)local_230 + local_230._4_4_;
  iVar5 = (int)local_218 + iVar4 * 2;
  iVar6 = local_218._4_4_ + iVar5 * 2;
  local_228._0_4_ = local_230._4_4_ + (int)local_228;
  local_228._4_4_ = (int)local_228 + local_228._4_4_;
  iVar7 = (int)local_210 + iVar6 * 2;
  local_220._0_4_ = local_228._4_4_ + (int)local_220;
  *(undefined4 *)(in_x0 + 0x1e) = 0;
  *(uint *)((long)in_x0 + 0xf4) = local_238._4_4_ << 0xf;
  *(undefined4 *)(in_x0 + 0x26) = 0;
  local_220._4_4_ = (int)local_220 + local_220._4_4_;
  *(int *)(in_x0 + 0x1f) = iVar14 * 0x4000;
  *(int *)((long)in_x0 + 0xfc) = iVar27 * 0x2000;
  local_218._0_4_ = local_220._4_4_ + (int)local_218;
  iVar14 = local_210._4_4_ + iVar7 * 2;
  local_218._4_4_ = (int)local_218 + local_218._4_4_;
  local_210._0_4_ = local_218._4_4_ + (int)local_210;
  *(int *)(in_x0 + 0x20) = iVar16 * 0x1000;
  *(int *)((long)in_x0 + 0x104) = iVar2 * 0x800;
  iVar27 = (int)local_208 + iVar14 * 2;
  local_210._4_4_ = (int)local_210 + local_210._4_4_;
  *(int *)(in_x0 + 0x21) = iVar3 * 0x400;
  *(int *)((long)in_x0 + 0x10c) = iVar4 * 0x200;
  local_208._0_4_ = local_210._4_4_ + (int)local_208;
  iVar16 = local_208._4_4_ + iVar27 * 2;
  *(int *)(in_x0 + 0x22) = iVar5 * 0x100;
  local_208._4_4_ = (int)local_208 + local_208._4_4_;
  *(int *)((long)in_x0 + 0x11c) = iVar14 * 0x20;
  iVar14 = (int)local_200 + iVar16 * 2;
  *(int *)((long)in_x0 + 0x114) = iVar6 * 0x80;
  *(int *)(in_x0 + 0x23) = iVar7 * 0x40;
  *(int *)(in_x0 + 0x24) = iVar27 * 0x10;
  *(int *)((long)in_x0 + 0x124) = iVar16 * 8;
  *(int *)(in_x0 + 0x25) = iVar14 * 4;
  *(int *)((long)in_x0 + 300) = (local_200._4_4_ + iVar14 * 2) * 2;
  *(undefined4 *)((long)in_x0 + 0x134) = 0;
  *(uint *)(in_x0 + 0x27) = local_238._4_4_;
  *(uint *)((long)in_x0 + 0x13c) = local_238._4_4_ + (int)local_230;
  *(int *)(in_x0 + 0x28) = local_230._4_4_;
  *(int *)((long)in_x0 + 0x144) = (int)local_228;
  *(int *)(in_x0 + 0x2a) = local_220._4_4_;
  *(int *)((long)in_x0 + 0x154) = (int)local_218;
  *(int *)(in_x0 + 0x29) = local_228._4_4_;
  *(int *)((long)in_x0 + 0x14c) = (int)local_220;
  *(int *)(in_x0 + 0x2b) = local_218._4_4_;
  *(int *)((long)in_x0 + 0x15c) = (int)local_210;
  *(int *)(in_x0 + 0x2c) = local_210._4_4_;
  *(int *)((long)in_x0 + 0x164) = (int)local_208;
  *(int *)(in_x0 + 0x2d) = local_208._4_4_;
  *(int *)((long)in_x0 + 0x16c) = local_208._4_4_ + (int)local_200;
  local_1e8 = in_x0[0x28];
  pCStack_1e0 = in_x0[0x29];
  lVar38 = 1;
  local_1f8 = in_x0[0x26];
  pCStack_1f0 = in_x0[0x27];
  local_1d8 = in_x0[0x2a];
  pCStack_1d0 = in_x0[0x2b];
  local_1c8 = in_x0[0x2c];
  uStack_1c0 = in_x0[0x2d];
  do {
    if ((local_1a1[lVar38] & 0xf) != 0) {
      lVar19 = (long)(int)(local_1a1[lVar38] & 0xf);
      uVar15 = *(uint *)((long)&local_1f8 + lVar19 * 4);
      *(uint *)((long)&local_1f8 + lVar19 * 4) = uVar15 + 1;
      *(short *)((long)in_x0 + (ulong)uVar15 * 2 + 0xd74) = (short)lVar38 + -1;
    }
    lVar38 = lVar38 + 1;
  } while (lVar38 != 300);
  pUVar37 = (Unpack *)((long)in_x0 + 0x174);
  uVar15 = 0;
  uVar17 = 1;
  uVar39 = 1;
  *(undefined4 *)(in_x0 + 0x2e) = 10;
LAB_001d90e0:
  do {
    iVar14 = (int)uVar17;
    if (iVar14 == 0x10) {
      uVar24 = 0xf;
    }
    else if (uVar15 < *(uint *)((long)in_x0 + uVar39 * 4 + 0xf0)) {
LAB_001da828:
      uVar24 = (ulong)((int)uVar17 - 1);
    }
    else {
      uVar28 = iVar14 + 1;
      if (iVar14 == 0xf) {
LAB_001da870:
        uVar17 = (ulong)uVar28;
        uVar24 = 0xf;
        uVar39 = 0x10;
      }
      else {
        uVar39 = (ulong)uVar28;
        if (*(uint *)((long)in_x0 + (ulong)uVar28 * 4 + 0xf0) <= uVar15) {
          uVar28 = iVar14 + 2;
          if (iVar14 == 0xe) goto LAB_001da870;
          uVar39 = (ulong)uVar28;
          if (*(uint *)((long)in_x0 + (ulong)uVar28 * 4 + 0xf0) <= uVar15) {
            uVar28 = iVar14 + 3;
            if (iVar14 == 0xd) goto LAB_001da870;
            uVar39 = (ulong)uVar28;
            if (*(uint *)((long)in_x0 + (ulong)uVar28 * 4 + 0xf0) <= uVar15) {
              uVar28 = iVar14 + 4;
              if (iVar14 == 0xc) {
LAB_001da93c:
                uVar17 = (ulong)uVar28;
                uVar39 = 0x10;
                uVar24 = 0xf;
              }
              else {
                if (*(uint *)((long)in_x0 + (ulong)uVar28 * 4 + 0xf0) <= uVar15) {
                  uVar28 = iVar14 + 5;
                  if (iVar14 == 0xb) goto LAB_001da870;
                  uVar39 = (ulong)uVar28;
                  if (*(uint *)((long)in_x0 + (ulong)uVar28 * 4 + 0xf0) <= uVar15) {
                    uVar28 = iVar14 + 6;
                    if (iVar14 == 10) goto LAB_001da870;
                    uVar39 = (ulong)uVar28;
                    if (*(uint *)((long)in_x0 + (ulong)uVar28 * 4 + 0xf0) <= uVar15) {
                      uVar28 = iVar14 + 7;
                      if (iVar14 == 9) goto LAB_001da870;
                      uVar39 = (ulong)uVar28;
                      if (*(uint *)((long)in_x0 + (ulong)uVar28 * 4 + 0xf0) <= uVar15) {
                        uVar28 = iVar14 + 8;
                        if (iVar14 == 8) goto LAB_001da870;
                        uVar39 = (ulong)uVar28;
                        if (*(uint *)((long)in_x0 + (ulong)uVar28 * 4 + 0xf0) <= uVar15) {
                          uVar28 = iVar14 + 9;
                          if (iVar14 == 7) goto LAB_001da93c;
                          if (uVar15 < *(uint *)((long)in_x0 + (ulong)uVar28 * 4 + 0xf0))
                          goto LAB_001da94c;
                          uVar28 = iVar14 + 10;
                          if (iVar14 == 6) goto LAB_001da870;
                          uVar39 = (ulong)uVar28;
                          if (*(uint *)((long)in_x0 + (ulong)uVar28 * 4 + 0xf0) <= uVar15) {
                            uVar28 = iVar14 + 0xb;
                            if (iVar14 == 5) goto LAB_001da870;
                            uVar39 = (ulong)uVar28;
                            if (*(uint *)((long)in_x0 + (ulong)uVar28 * 4 + 0xf0) <= uVar15) {
                              uVar28 = iVar14 + 0xc;
                              if (iVar14 == 4) goto LAB_001da870;
                              uVar39 = (ulong)uVar28;
                              if (*(uint *)((long)in_x0 + (ulong)uVar28 * 4 + 0xf0) <= uVar15) {
                                uVar28 = iVar14 + 0xd;
                                if (iVar14 == 3) goto LAB_001da870;
                                uVar39 = (ulong)uVar28;
                                if (*(uint *)((long)in_x0 + (ulong)uVar28 * 4 + 0xf0) <= uVar15) {
                                  if (iVar14 == 2) {
                                    uVar24 = 0xf;
                                    uVar17 = 0x10;
                                    uVar39 = 0x10;
                                  }
                                  else {
                                    uVar24 = 0xf;
                                    uVar17 = 0x10;
                                    uVar39 = 0x10;
                                    if (uVar15 < *(uint *)((long)in_x0 + 300)) {
                                      uVar17 = 0xf;
                                      uVar39 = 0xf;
                                      goto LAB_001da828;
                                    }
                                  }
                                  goto LAB_001d92b0;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                  goto LAB_001da8ac;
                }
LAB_001da94c:
                uVar17 = (ulong)uVar28;
                uVar24 = (ulong)(uVar28 - 1);
                uVar39 = uVar17;
              }
              goto LAB_001d92b0;
            }
          }
        }
LAB_001da8ac:
        uVar17 = (ulong)uVar28;
        uVar24 = (ulong)(uVar28 - 1);
      }
    }
LAB_001d92b0:
    *pUVar37 = SUB81(uVar17,0);
    uVar28 = (uVar15 - *(int *)((long)in_x0 + uVar24 * 4 + 0xf0) >>
             (ulong)(0x10U - (int)uVar17 & 0x1f)) + *(int *)((long)in_x0 + uVar39 * 4 + 0x130);
    if (0x12a < uVar28) {
      *(undefined2 *)((0x28c - (long)in_x0) + (long)pUVar37 * 2) = 0;
      pUVar37 = pUVar37 + 1;
      uVar15 = uVar15 + 0x40;
      if ((Unpack *)((long)in_x0 + 0x574) == pUVar37) break;
      goto LAB_001d90e0;
    }
    uVar15 = uVar15 + 0x40;
    *(undefined2 *)((0x28c - (long)in_x0) + (long)pUVar37 * 2) =
         *(undefined2 *)((long)in_x0 + (ulong)uVar28 * 2 + 0xd74);
    pUVar37 = pUVar37 + 1;
  } while ((Unpack *)((long)in_x0 + 0x574) != pUVar37);
  local_238 = 0;
  local_230 = 0;
  local_228 = 0;
  local_220 = 0;
  local_218 = 0;
  local_210 = 0;
  local_208 = 0;
  local_200 = 0;
  *(undefined4 *)(in_x0 + 0x1fb) = 0x3c;
  pbVar20 = local_75;
  do {
    pbVar22 = pbVar20 + 1;
    *(int *)((long)&local_238 + ((ulong)*pbVar20 & 0xf) * 4) =
         *(int *)((long)&local_238 + ((ulong)*pbVar20 & 0xf) * 4) + 1;
    pbVar20 = pbVar22;
  } while (&local_39 != pbVar22);
  uVar15 = local_238._4_4_;
  iVar14 = (int)local_230 + local_238._4_4_ * 2;
  iVar27 = local_230._4_4_ + iVar14 * 2;
  iVar16 = (int)local_228 + iVar27 * 2;
  iVar2 = local_228._4_4_ + iVar16 * 2;
  in_x0[0x38c] = (ComprDataIO *)0x0;
  in_x0[0x38d] = (ComprDataIO *)0x0;
  iVar3 = (int)local_220 + iVar2 * 2;
  in_x0[0x38e] = (ComprDataIO *)0x0;
  in_x0[0x38f] = (ComprDataIO *)0x0;
  iVar4 = local_220._4_4_ + iVar3 * 2;
  in_x0[0x390] = (ComprDataIO *)0x0;
  in_x0[0x391] = (ComprDataIO *)0x0;
  iVar5 = (int)local_218 + iVar4 * 2;
  in_x0[0x392] = (ComprDataIO *)0x0;
  in_x0[0x393] = (ComprDataIO *)0x0;
  in_x0[0x394] = (ComprDataIO *)0x0;
  in_x0[0x395] = (ComprDataIO *)0x0;
  iVar6 = local_218._4_4_ + iVar5 * 2;
  in_x0[0x396] = (ComprDataIO *)0x0;
  in_x0[0x397] = (ComprDataIO *)0x0;
  in_x0[0x398] = (ComprDataIO *)0x0;
  in_x0[0x399] = (ComprDataIO *)0x0;
  in_x0[0x39a] = (ComprDataIO *)0x0;
  *(undefined4 *)((long)in_x0 + 0x101c) = 0;
  *(undefined4 *)((long)in_x0 + 0xfdc) = 0;
  *(uint *)(in_x0 + 0x1fc) = local_238._4_4_ << 0xf;
  *(int *)((long)in_x0 + 0xfe4) = iVar14 * 0x4000;
  *(int *)(in_x0 + 0x1fd) = iVar27 * 0x2000;
  iVar14 = (int)local_210 + iVar6 * 2;
  iVar27 = local_210._4_4_ + iVar14 * 2;
  *(int *)((long)in_x0 + 0xfec) = iVar16 * 0x1000;
  *(int *)(in_x0 + 0x1fe) = iVar2 * 0x800;
  local_238 = (ulong)local_238._4_4_ << 0x20;
  *(int *)((long)in_x0 + 0xff4) = iVar3 * 0x400;
  *(int *)(in_x0 + 0x1ff) = iVar4 * 0x200;
  *(int *)((long)in_x0 + 0xffc) = iVar5 * 0x100;
  *(int *)(in_x0 + 0x200) = iVar6 * 0x80;
  *(int *)((long)in_x0 + 0x1004) = iVar14 * 0x40;
  local_230._0_4_ = uVar15 + (int)local_230;
  *(int *)(in_x0 + 0x201) = iVar27 * 0x20;
  *(undefined4 *)(in_x0 + 0x204) = 0;
  *(uint *)((long)in_x0 + 0x1024) = uVar15;
  local_230._4_4_ = (int)local_230 + local_230._4_4_;
  local_228._0_4_ = local_230._4_4_ + (int)local_228;
  local_228._4_4_ = (int)local_228 + local_228._4_4_;
  local_220._0_4_ = local_228._4_4_ + (int)local_220;
  local_220._4_4_ = (int)local_220 + local_220._4_4_;
  local_218._0_4_ = local_220._4_4_ + (int)local_218;
  iVar14 = (int)local_208 + iVar27 * 2;
  local_218._4_4_ = (int)local_218 + local_218._4_4_;
  local_210._0_4_ = local_218._4_4_ + (int)local_210;
  *(int *)(in_x0 + 0x205) = (int)local_230;
  *(int *)((long)in_x0 + 0x102c) = local_230._4_4_;
  iVar27 = local_208._4_4_ + iVar14 * 2;
  local_210._4_4_ = (int)local_210 + local_210._4_4_;
  *(int *)(in_x0 + 0x206) = (int)local_228;
  *(int *)((long)in_x0 + 0x1034) = local_228._4_4_;
  *(int *)(in_x0 + 0x207) = (int)local_220;
  *(int *)((long)in_x0 + 0x103c) = local_220._4_4_;
  local_208._0_4_ = local_210._4_4_ + (int)local_208;
  *(int *)(in_x0 + 0x209) = (int)local_210;
  *(int *)((long)in_x0 + 0x104c) = local_210._4_4_;
  iVar16 = (int)local_200 + iVar27 * 2;
  *(int *)(in_x0 + 0x208) = (int)local_218;
  *(int *)((long)in_x0 + 0x1044) = local_218._4_4_;
  local_208._4_4_ = (int)local_208 + local_208._4_4_;
  *(int *)((long)in_x0 + 0x100c) = iVar14 * 0x10;
  *(int *)(in_x0 + 0x202) = iVar27 * 8;
  *(int *)(in_x0 + 0x20a) = (int)local_208;
  *(int *)((long)in_x0 + 0x1054) = local_208._4_4_;
  *(int *)((long)in_x0 + 0x1014) = iVar16 * 4;
  *(int *)(in_x0 + 0x203) = (local_200._4_4_ + iVar16 * 2) * 2;
  *(int *)(in_x0 + 0x20b) = local_208._4_4_ + (int)local_200;
  lVar38 = 0;
  local_1f8 = *(ComprDataIO **)((long)in_x0 + 0x101c);
  pCStack_1f0 = (ComprDataIO *)*(undefined8 *)((long)in_x0 + 0x1024);
  local_1e8 = (ComprDataIO *)*(undefined8 *)((long)in_x0 + 0x102c);
  pCStack_1e0 = (ComprDataIO *)*(undefined8 *)((long)in_x0 + 0x1034);
  local_1d8 = (ComprDataIO *)*(undefined8 *)((long)in_x0 + 0x103c);
  pCStack_1d0 = (ComprDataIO *)*(undefined8 *)((long)in_x0 + 0x1044);
  local_1c8 = (ComprDataIO *)*(undefined8 *)((long)in_x0 + 0x104c);
  uStack_1c0 = (ComprDataIO *)*(undefined8 *)((long)in_x0 + 0x1054);
  do {
    if ((local_75[lVar38] & 0xf) != 0) {
      lVar19 = (long)(int)(local_75[lVar38] & 0xf);
      uVar15 = *(uint *)((long)&local_1f8 + lVar19 * 4);
      *(uint *)((long)&local_1f8 + lVar19 * 4) = uVar15 + 1;
      *(short *)((long)in_x0 + (ulong)uVar15 * 2 + 0x1c60) = (short)lVar38;
    }
    lVar38 = lVar38 + 1;
  } while (lVar38 != 0x3c);
  ppCVar30 = in_x0 + 0x20c;
  uVar15 = 0;
  uVar17 = 1;
  uVar39 = 1;
  *(undefined4 *)((long)in_x0 + 0x105c) = 7;
LAB_001d9548:
  do {
    iVar14 = (int)uVar17;
    if (iVar14 == 0x10) {
      uVar24 = 0xf;
    }
    else if (uVar15 < *(uint *)((long)in_x0 + uVar39 * 4 + 0xfdc)) {
LAB_001da838:
      uVar24 = (ulong)((int)uVar17 - 1);
    }
    else {
      uVar28 = iVar14 + 1;
      if (iVar14 == 0xf) {
LAB_001da890:
        uVar17 = (ulong)uVar28;
        uVar24 = 0xf;
        uVar39 = 0x10;
      }
      else {
        uVar39 = (ulong)uVar28;
        if (*(uint *)((long)in_x0 + (ulong)uVar28 * 4 + 0xfdc) <= uVar15) {
          uVar28 = iVar14 + 2;
          if (iVar14 == 0xe) goto LAB_001da890;
          uVar39 = (ulong)uVar28;
          if (*(uint *)((long)in_x0 + (ulong)uVar28 * 4 + 0xfdc) <= uVar15) {
            uVar28 = iVar14 + 3;
            if (iVar14 == 0xd) goto LAB_001da890;
            uVar39 = (ulong)uVar28;
            if (*(uint *)((long)in_x0 + (ulong)uVar28 * 4 + 0xfdc) <= uVar15) {
              uVar28 = iVar14 + 4;
              if (iVar14 == 0xc) {
LAB_001da914:
                uVar17 = (ulong)uVar28;
                uVar39 = 0x10;
                uVar24 = 0xf;
              }
              else {
                if (*(uint *)((long)in_x0 + (ulong)uVar28 * 4 + 0xfdc) <= uVar15) {
                  uVar28 = iVar14 + 5;
                  if (iVar14 == 0xb) goto LAB_001da890;
                  uVar39 = (ulong)uVar28;
                  if (*(uint *)((long)in_x0 + (ulong)uVar28 * 4 + 0xfdc) <= uVar15) {
                    uVar28 = iVar14 + 6;
                    if (iVar14 == 10) goto LAB_001da890;
                    uVar39 = (ulong)uVar28;
                    if (*(uint *)((long)in_x0 + (ulong)uVar28 * 4 + 0xfdc) <= uVar15) {
                      uVar28 = iVar14 + 7;
                      if (iVar14 == 9) goto LAB_001da890;
                      uVar39 = (ulong)uVar28;
                      if (*(uint *)((long)in_x0 + (ulong)uVar28 * 4 + 0xfdc) <= uVar15) {
                        uVar28 = iVar14 + 8;
                        if (iVar14 == 8) goto LAB_001da890;
                        uVar39 = (ulong)uVar28;
                        if (*(uint *)((long)in_x0 + (ulong)uVar28 * 4 + 0xfdc) <= uVar15) {
                          uVar28 = iVar14 + 9;
                          if (iVar14 == 7) goto LAB_001da914;
                          if (uVar15 < *(uint *)((long)in_x0 + (ulong)uVar28 * 4 + 0xfdc))
                          goto LAB_001da96c;
                          uVar28 = iVar14 + 10;
                          if (iVar14 == 6) goto LAB_001da890;
                          uVar39 = (ulong)uVar28;
                          if (*(uint *)((long)in_x0 + (ulong)uVar28 * 4 + 0xfdc) <= uVar15) {
                            uVar28 = iVar14 + 0xb;
                            if (iVar14 == 5) goto LAB_001da890;
                            uVar39 = (ulong)uVar28;
                            if (*(uint *)((long)in_x0 + (ulong)uVar28 * 4 + 0xfdc) <= uVar15) {
                              uVar28 = iVar14 + 0xc;
                              if (iVar14 == 4) goto LAB_001da890;
                              uVar39 = (ulong)uVar28;
                              if (*(uint *)((long)in_x0 + (ulong)uVar28 * 4 + 0xfdc) <= uVar15) {
                                uVar28 = iVar14 + 0xd;
                                if (iVar14 == 3) goto LAB_001da890;
                                uVar39 = (ulong)uVar28;
                                if (*(uint *)((long)in_x0 + (ulong)uVar28 * 4 + 0xfdc) <= uVar15) {
                                  if (iVar14 == 2) {
                                    uVar24 = 0xf;
                                    uVar17 = 0x10;
                                    uVar39 = 0x10;
                                  }
                                  else {
                                    uVar24 = 0xf;
                                    uVar17 = 0x10;
                                    uVar39 = 0x10;
                                    if (uVar15 < *(uint *)(in_x0 + 0x203)) {
                                      uVar17 = 0xf;
                                      uVar39 = 0xf;
                                      goto LAB_001da838;
                                    }
                                  }
                                  goto LAB_001d9718;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                  goto LAB_001da8a0;
                }
LAB_001da96c:
                uVar17 = (ulong)uVar28;
                uVar24 = (ulong)(uVar28 - 1);
                uVar39 = uVar17;
              }
              goto LAB_001d9718;
            }
          }
        }
LAB_001da8a0:
        uVar17 = (ulong)uVar28;
        uVar24 = (ulong)(uVar28 - 1);
      }
    }
LAB_001d9718:
    *(Unpack *)ppCVar30 = SUB81(uVar17,0);
    uVar28 = (uVar15 - *(int *)((long)in_x0 + uVar24 * 4 + 0xfdc) >>
             (ulong)(0x10U - (int)uVar17 & 0x1f)) + *(int *)((long)in_x0 + uVar39 * 4 + 0x101c);
    if (0x3b < uVar28) {
      *(undefined2 *)((-0xc60 - (long)in_x0) + (long)ppCVar30 * 2) = 0;
      ppCVar30 = (ComprDataIO **)((long)ppCVar30 + 1);
      uVar15 = uVar15 + 0x200;
      if (ppCVar30 == in_x0 + 0x21c) break;
      goto LAB_001d9548;
    }
    uVar15 = uVar15 + 0x200;
    *(undefined2 *)((-0xc60 - (long)in_x0) + (long)ppCVar30 * 2) =
         *(undefined2 *)((long)in_x0 + (ulong)uVar28 * 2 + 0x1c60);
    ppCVar30 = (ComprDataIO **)((long)ppCVar30 + 1);
  } while (in_x0 + 0x21c != ppCVar30);
  uVar42 = (ulong)local_39 & 0xf;
  local_238 = 0;
  local_230 = 0;
  local_228 = 0;
  local_220 = 0;
  uVar41 = (ulong)local_38 & 0xf;
  local_218 = 0;
  local_210 = 0;
  local_208 = 0;
  local_200 = 0;
  uVar44 = (ulong)local_37 & 0xf;
  *(int *)((long)&local_238 + uVar42 * 4) = *(int *)((long)&local_238 + uVar42 * 4) + 1;
  uVar39 = (ulong)local_36 & 0xf;
  *(int *)((long)&local_238 + uVar41 * 4) = *(int *)((long)&local_238 + uVar41 * 4) + 1;
  *(int *)((long)&local_238 + uVar44 * 4) = *(int *)((long)&local_238 + uVar44 * 4) + 1;
  uVar24 = (ulong)local_35 & 0xf;
  *(int *)((long)&local_238 + uVar39 * 4) = *(int *)((long)&local_238 + uVar39 * 4) + 1;
  uVar25 = (ulong)local_34 & 0xf;
  *(int *)((long)&local_238 + uVar24 * 4) = *(int *)((long)&local_238 + uVar24 * 4) + 1;
  uVar17 = (ulong)local_33 & 0xf;
  uVar23 = (ulong)local_32 & 0xf;
  *(int *)((long)&local_238 + uVar25 * 4) = *(int *)((long)&local_238 + uVar25 * 4) + 1;
  uVar26 = (ulong)local_31 & 0xf;
  *(int *)((long)&local_238 + uVar17 * 4) = *(int *)((long)&local_238 + uVar17 * 4) + 1;
  *(int *)((long)&local_238 + uVar23 * 4) = *(int *)((long)&local_238 + uVar23 * 4) + 1;
  uVar29 = (ulong)local_30 & 0xf;
  *(int *)((long)&local_238 + uVar26 * 4) = *(int *)((long)&local_238 + uVar26 * 4) + 1;
  uVar31 = (ulong)local_2f & 0xf;
  *(int *)((long)&local_238 + uVar29 * 4) = *(int *)((long)&local_238 + uVar29 * 4) + 1;
  uVar32 = (ulong)local_2e & 0xf;
  *(int *)((long)&local_238 + uVar31 * 4) = *(int *)((long)&local_238 + uVar31 * 4) + 1;
  *(int *)((long)&local_238 + uVar32 * 4) = *(int *)((long)&local_238 + uVar32 * 4) + 1;
  uVar33 = (ulong)local_2d & 0xf;
  uVar34 = (ulong)local_2c & 0xf;
  *(int *)((long)&local_238 + uVar33 * 4) = *(int *)((long)&local_238 + uVar33 * 4) + 1;
  *(int *)((long)&local_238 + uVar34 * 4) = *(int *)((long)&local_238 + uVar34 * 4) + 1;
  uVar35 = (ulong)local_2b & 0xf;
  *(int *)((long)&local_238 + uVar35 * 4) = *(int *)((long)&local_238 + uVar35 * 4) + 1;
  uVar36 = (ulong)local_2a & 0xf;
  uVar43 = (ulong)local_29 & 0xf;
  *(int *)((long)&local_238 + uVar36 * 4) = *(int *)((long)&local_238 + uVar36 * 4) + 1;
  *(int *)((long)&local_238 + uVar43 * 4) = *(int *)((long)&local_238 + uVar43 * 4) + 1;
  uVar15 = local_238._4_4_;
  *(undefined8 *)((long)in_x0 + 0x2b4c) = 0;
  *(undefined8 *)((long)in_x0 + 0x2b54) = 0;
  *(undefined8 *)((long)in_x0 + 0x2b5c) = 0;
  *(undefined8 *)((long)in_x0 + 0x2b64) = 0;
  iVar14 = (int)local_230 + local_238._4_4_ * 2;
  *(undefined4 *)(in_x0 + 0x3e1) = 0;
  *(undefined2 *)((long)in_x0 + 0x2b6c) = 0;
  *(undefined8 *)((long)in_x0 + 0x1ec4) = 0x11;
  *(uint *)((long)in_x0 + 0x1ecc) = local_238._4_4_ << 0xf;
  *(int *)(in_x0 + 0x3da) = iVar14 * 0x4000;
  local_238 = (ulong)local_238._4_4_ << 0x20;
  iVar14 = local_230._4_4_ + iVar14 * 2;
  iVar27 = (int)local_228 + iVar14 * 2;
  iVar16 = local_228._4_4_ + iVar27 * 2;
  iVar2 = (int)local_220 + iVar16 * 2;
  iVar3 = local_220._4_4_ + iVar2 * 2;
  iVar4 = (int)local_218 + iVar3 * 2;
  *(int *)(in_x0 + 0x3db) = iVar27 * 0x1000;
  iVar27 = local_218._4_4_ + iVar4 * 2;
  iVar5 = (int)local_210 + iVar27 * 2;
  *(int *)((long)in_x0 + 0x1edc) = iVar16 * 0x800;
  *(int *)(in_x0 + 0x3dc) = iVar2 * 0x400;
  local_230._0_4_ = uVar15 + (int)local_230;
  iVar16 = local_210._4_4_ + iVar5 * 2;
  local_230._4_4_ = (int)local_230 + local_230._4_4_;
  local_228._0_4_ = local_230._4_4_ + (int)local_228;
  *(int *)((long)in_x0 + 0x1ed4) = iVar14 * 0x2000;
  iVar14 = (int)local_208 + iVar16 * 2;
  *(int *)((long)in_x0 + 0x1ee4) = iVar3 * 0x200;
  *(int *)(in_x0 + 0x3de) = iVar5 * 0x40;
  local_228._4_4_ = (int)local_228 + local_228._4_4_;
  local_220._0_4_ = local_228._4_4_ + (int)local_220;
  *(int *)((long)in_x0 + 0x1eec) = iVar27 * 0x80;
  iVar27 = local_208._4_4_ + iVar14 * 2;
  local_220._4_4_ = (int)local_220 + local_220._4_4_;
  local_218._0_4_ = local_220._4_4_ + (int)local_218;
  *(int *)((long)in_x0 + 0x1ef4) = iVar16 * 0x20;
  iVar16 = (int)local_200 + iVar27 * 2;
  local_218._4_4_ = (int)local_218 + local_218._4_4_;
  local_210._0_4_ = local_218._4_4_ + (int)local_210;
  *(int *)(in_x0 + 0x3df) = iVar14 * 0x10;
  local_210._4_4_ = (int)local_210 + local_210._4_4_;
  *(int *)(in_x0 + 0x3dd) = iVar4 * 0x100;
  *(int *)((long)in_x0 + 0x1efc) = iVar27 * 8;
  *(int *)(in_x0 + 0x3e0) = iVar16 * 4;
  *(int *)((long)in_x0 + 0x1f04) = (local_200._4_4_ + iVar16 * 2) * 2;
  local_208._0_4_ = local_210._4_4_ + (int)local_208;
  *(undefined4 *)((long)in_x0 + 0x1f0c) = 0;
  local_208._4_4_ = (int)local_208 + local_208._4_4_;
  *(uint *)(in_x0 + 0x3e2) = uVar15;
  *(int *)((long)in_x0 + 0x1f14) = (int)local_230;
  *(int *)(in_x0 + 0x3e3) = local_230._4_4_;
  *(int *)((long)in_x0 + 0x1f1c) = (int)local_228;
  *(int *)(in_x0 + 0x3e4) = local_228._4_4_;
  *(int *)((long)in_x0 + 0x1f24) = (int)local_220;
  *(int *)(in_x0 + 0x3e5) = local_220._4_4_;
  *(int *)((long)in_x0 + 0x1f2c) = (int)local_218;
  *(int *)(in_x0 + 0x3e6) = local_218._4_4_;
  *(int *)((long)in_x0 + 0x1f34) = (int)local_210;
  *(int *)(in_x0 + 999) = local_210._4_4_;
  *(int *)((long)in_x0 + 0x1f3c) = (int)local_208;
  *(int *)(in_x0 + 1000) = local_208._4_4_;
  *(int *)((long)in_x0 + 0x1f44) = local_208._4_4_ + (int)local_200;
  local_1f8 = in_x0[0x3e1];
  pCStack_1f0 = in_x0[0x3e2];
  local_1d8 = in_x0[0x3e5];
  pCStack_1d0 = in_x0[0x3e6];
  local_1c8 = in_x0[999];
  uStack_1c0 = in_x0[1000];
  local_1e8 = in_x0[0x3e3];
  pCStack_1e0 = in_x0[0x3e4];
  if ((local_39 & 0xf) != 0) {
    uVar15 = *(uint *)((long)&local_1f8 + uVar42 * 4);
    *(uint *)((long)&local_1f8 + uVar42 * 4) = uVar15 + 1;
    *(undefined2 *)((long)in_x0 + (ulong)uVar15 * 2 + 0x2b4c) = 0;
  }
  if ((local_38 & 0xf) != 0) {
    uVar15 = *(uint *)((long)&local_1f8 + uVar41 * 4);
    *(uint *)((long)&local_1f8 + uVar41 * 4) = uVar15 + 1;
    *(undefined2 *)((long)in_x0 + (ulong)uVar15 * 2 + 0x2b4c) = 1;
  }
  if ((local_37 & 0xf) != 0) {
    uVar15 = *(uint *)((long)&local_1f8 + uVar44 * 4);
    *(uint *)((long)&local_1f8 + uVar44 * 4) = uVar15 + 1;
    *(undefined2 *)((long)in_x0 + (ulong)uVar15 * 2 + 0x2b4c) = 2;
  }
  if ((local_36 & 0xf) != 0) {
    uVar15 = *(uint *)((long)&local_1f8 + uVar39 * 4);
    *(uint *)((long)&local_1f8 + uVar39 * 4) = uVar15 + 1;
    *(undefined2 *)((long)in_x0 + (ulong)uVar15 * 2 + 0x2b4c) = 3;
  }
  if ((local_35 & 0xf) != 0) {
    uVar15 = *(uint *)((long)&local_1f8 + uVar24 * 4);
    *(uint *)((long)&local_1f8 + uVar24 * 4) = uVar15 + 1;
    *(undefined2 *)((long)in_x0 + (ulong)uVar15 * 2 + 0x2b4c) = 4;
  }
  if ((local_34 & 0xf) != 0) {
    uVar15 = *(uint *)((long)&local_1f8 + uVar25 * 4);
    *(uint *)((long)&local_1f8 + uVar25 * 4) = uVar15 + 1;
    *(undefined2 *)((long)in_x0 + (ulong)uVar15 * 2 + 0x2b4c) = 5;
  }
  if ((local_33 & 0xf) != 0) {
    uVar15 = *(uint *)((long)&local_1f8 + uVar17 * 4);
    *(uint *)((long)&local_1f8 + uVar17 * 4) = uVar15 + 1;
    *(undefined2 *)((long)in_x0 + (ulong)uVar15 * 2 + 0x2b4c) = 6;
  }
  if ((local_32 & 0xf) != 0) {
    uVar15 = *(uint *)((long)&local_1f8 + uVar23 * 4);
    *(uint *)((long)&local_1f8 + uVar23 * 4) = uVar15 + 1;
    *(undefined2 *)((long)in_x0 + (ulong)uVar15 * 2 + 0x2b4c) = 7;
  }
  if ((local_31 & 0xf) != 0) {
    uVar15 = *(uint *)((long)&local_1f8 + uVar26 * 4);
    *(uint *)((long)&local_1f8 + uVar26 * 4) = uVar15 + 1;
    *(undefined2 *)((long)in_x0 + (ulong)uVar15 * 2 + 0x2b4c) = 8;
  }
  if ((local_30 & 0xf) != 0) {
    uVar15 = *(uint *)((long)&local_1f8 + uVar29 * 4);
    *(uint *)((long)&local_1f8 + uVar29 * 4) = uVar15 + 1;
    *(undefined2 *)((long)in_x0 + (ulong)uVar15 * 2 + 0x2b4c) = 9;
  }
  if ((local_2f & 0xf) != 0) {
    uVar15 = *(uint *)((long)&local_1f8 + uVar31 * 4);
    *(uint *)((long)&local_1f8 + uVar31 * 4) = uVar15 + 1;
    *(undefined2 *)((long)in_x0 + (ulong)uVar15 * 2 + 0x2b4c) = 10;
  }
  if ((local_2e & 0xf) != 0) {
    uVar15 = *(uint *)((long)&local_1f8 + uVar32 * 4);
    *(uint *)((long)&local_1f8 + uVar32 * 4) = uVar15 + 1;
    *(undefined2 *)((long)in_x0 + (ulong)uVar15 * 2 + 0x2b4c) = 0xb;
  }
  if ((local_2d & 0xf) != 0) {
    uVar15 = *(uint *)((long)&local_1f8 + uVar33 * 4);
    *(uint *)((long)&local_1f8 + uVar33 * 4) = uVar15 + 1;
    *(undefined2 *)((long)in_x0 + (ulong)uVar15 * 2 + 0x2b4c) = 0xc;
  }
  if ((local_2c & 0xf) != 0) {
    uVar15 = *(uint *)((long)&local_1f8 + uVar34 * 4);
    *(uint *)((long)&local_1f8 + uVar34 * 4) = uVar15 + 1;
    *(undefined2 *)((long)in_x0 + (ulong)uVar15 * 2 + 0x2b4c) = 0xd;
  }
  if ((local_2b & 0xf) != 0) {
    uVar15 = *(uint *)((long)&local_1f8 + uVar35 * 4);
    *(uint *)((long)&local_1f8 + uVar35 * 4) = uVar15 + 1;
    *(undefined2 *)((long)in_x0 + (ulong)uVar15 * 2 + 0x2b4c) = 0xe;
  }
  if ((local_2a & 0xf) != 0) {
    uVar15 = *(uint *)((long)&local_1f8 + uVar36 * 4);
    *(uint *)((long)&local_1f8 + uVar36 * 4) = uVar15 + 1;
    *(undefined2 *)((long)in_x0 + (ulong)uVar15 * 2 + 0x2b4c) = 0xf;
  }
  if ((local_29 & 0xf) != 0) {
    uVar15 = *(uint *)((long)&local_1f8 + uVar43 * 4);
    *(uint *)((long)&local_1f8 + uVar43 * 4) = uVar15 + 1;
    *(undefined2 *)((long)in_x0 + (ulong)uVar15 * 2 + 0x2b4c) = 0x10;
  }
  pUVar37 = (Unpack *)((long)in_x0 + 0x1f4c);
  uVar15 = 0;
  uVar17 = 1;
  uVar39 = 1;
  *(undefined4 *)(in_x0 + 0x3e9) = 7;
LAB_001d9db8:
  do {
    iVar14 = (int)uVar17;
    if (iVar14 == 0x10) {
      uVar24 = 0xf;
    }
    else if (uVar15 < *(uint *)((long)in_x0 + uVar39 * 4 + 0x1ec8)) {
LAB_001da848:
      uVar24 = (ulong)((int)uVar17 - 1);
    }
    else {
      uVar28 = iVar14 + 1;
      if (iVar14 == 0xf) {
LAB_001da880:
        uVar17 = (ulong)uVar28;
        uVar24 = 0xf;
        uVar39 = 0x10;
      }
      else {
        uVar39 = (ulong)uVar28;
        if (*(uint *)((long)in_x0 + (ulong)uVar28 * 4 + 0x1ec8) <= uVar15) {
          uVar28 = iVar14 + 2;
          if (iVar14 == 0xe) goto LAB_001da880;
          uVar39 = (ulong)uVar28;
          if (*(uint *)((long)in_x0 + (ulong)uVar28 * 4 + 0x1ec8) <= uVar15) {
            uVar28 = iVar14 + 3;
            if (iVar14 == 0xd) goto LAB_001da880;
            uVar39 = (ulong)uVar28;
            if (*(uint *)((long)in_x0 + (ulong)uVar28 * 4 + 0x1ec8) <= uVar15) {
              uVar28 = iVar14 + 4;
              if (iVar14 == 0xc) {
LAB_001da92c:
                uVar17 = (ulong)uVar28;
                uVar39 = 0x10;
                uVar24 = 0xf;
              }
              else {
                if (*(uint *)((long)in_x0 + (ulong)uVar28 * 4 + 0x1ec8) <= uVar15) {
                  uVar28 = iVar14 + 5;
                  if (iVar14 == 0xb) goto LAB_001da880;
                  uVar39 = (ulong)uVar28;
                  if (*(uint *)((long)in_x0 + (ulong)uVar28 * 4 + 0x1ec8) <= uVar15) {
                    uVar28 = iVar14 + 6;
                    if (iVar14 == 10) goto LAB_001da880;
                    uVar39 = (ulong)uVar28;
                    if (*(uint *)((long)in_x0 + (ulong)uVar28 * 4 + 0x1ec8) <= uVar15) {
                      uVar28 = iVar14 + 7;
                      if (iVar14 == 9) goto LAB_001da880;
                      uVar39 = (ulong)uVar28;
                      if (*(uint *)((long)in_x0 + (ulong)uVar28 * 4 + 0x1ec8) <= uVar15) {
                        uVar28 = iVar14 + 8;
                        if (iVar14 == 8) goto LAB_001da880;
                        uVar39 = (ulong)uVar28;
                        if (*(uint *)((long)in_x0 + (ulong)uVar28 * 4 + 0x1ec8) <= uVar15) {
                          uVar28 = iVar14 + 9;
                          if (iVar14 == 7) goto LAB_001da92c;
                          if (uVar15 < *(uint *)((long)in_x0 + (ulong)uVar28 * 4 + 0x1ec8))
                          goto LAB_001da97c;
                          uVar28 = iVar14 + 10;
                          if (iVar14 == 6) goto LAB_001da880;
                          uVar39 = (ulong)uVar28;
                          if (*(uint *)((long)in_x0 + (ulong)uVar28 * 4 + 0x1ec8) <= uVar15) {
                            uVar28 = iVar14 + 0xb;
                            if (iVar14 == 5) goto LAB_001da880;
                            uVar39 = (ulong)uVar28;
                            if (*(uint *)((long)in_x0 + (ulong)uVar28 * 4 + 0x1ec8) <= uVar15) {
                              uVar28 = iVar14 + 0xc;
                              if (iVar14 == 4) goto LAB_001da880;
                              uVar39 = (ulong)uVar28;
                              if (*(uint *)((long)in_x0 + (ulong)uVar28 * 4 + 0x1ec8) <= uVar15) {
                                uVar28 = iVar14 + 0xd;
                                if (iVar14 == 3) goto LAB_001da880;
                                uVar39 = (ulong)uVar28;
                                if (*(uint *)((long)in_x0 + (ulong)uVar28 * 4 + 0x1ec8) <= uVar15) {
                                  if (iVar14 == 2) {
                                    uVar24 = 0xf;
                                    uVar17 = 0x10;
                                    uVar39 = 0x10;
                                  }
                                  else {
                                    uVar24 = 0xf;
                                    uVar17 = 0x10;
                                    uVar39 = 0x10;
                                    if (uVar15 < *(uint *)((long)in_x0 + 0x1f04)) {
                                      uVar17 = 0xf;
                                      uVar39 = 0xf;
                                      goto LAB_001da848;
                                    }
                                  }
                                  goto LAB_001d9f88;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                  goto LAB_001da8c4;
                }
LAB_001da97c:
                uVar17 = (ulong)uVar28;
                uVar24 = (ulong)(uVar28 - 1);
                uVar39 = uVar17;
              }
              goto LAB_001d9f88;
            }
          }
        }
LAB_001da8c4:
        uVar17 = (ulong)uVar28;
        uVar24 = (ulong)(uVar28 - 1);
      }
    }
LAB_001d9f88:
    *pUVar37 = SUB81(uVar17,0);
    uVar28 = (uVar15 - *(int *)((long)in_x0 + uVar24 * 4 + 0x1ec8) >>
             (ulong)(0x10U - (int)uVar17 & 0x1f)) + *(int *)((long)in_x0 + uVar39 * 4 + 0x1f08);
    if (0x10 < uVar28) {
      *(undefined2 *)((-0x1b4c - (long)in_x0) + (long)pUVar37 * 2) = 0;
      pUVar37 = pUVar37 + 1;
      uVar15 = uVar15 + 0x200;
      if ((Unpack *)((long)in_x0 + 0x1fcc) == pUVar37) break;
      goto LAB_001d9db8;
    }
    uVar15 = uVar15 + 0x200;
    *(undefined2 *)((-0x1b4c - (long)in_x0) + (long)pUVar37 * 2) =
         *(undefined2 *)((long)in_x0 + (ulong)uVar28 * 2 + 0x2b4c);
    pUVar37 = pUVar37 + 1;
  } while ((Unpack *)((long)in_x0 + 0x1fcc) != pUVar37);
  local_238 = 0;
  local_230 = 0;
  local_228 = 0;
  local_220 = 0;
  local_218 = 0;
  local_210 = 0;
  local_208 = 0;
  local_200 = 0;
  *(undefined4 *)(in_x0 + 0x5b6) = 0x1c;
  pbVar20 = local_28;
  do {
    pbVar22 = pbVar20 + 1;
    *(int *)((long)&local_238 + ((ulong)*pbVar20 & 0xf) * 4) =
         *(int *)((long)&local_238 + ((ulong)*pbVar20 & 0xf) * 4) + 1;
    pbVar20 = pbVar22;
  } while (abStack_c != pbVar22);
  in_x0[0x747] = (ComprDataIO *)0x0;
  in_x0[0x748] = (ComprDataIO *)0x0;
  in_x0[0x749] = (ComprDataIO *)0x0;
  in_x0[0x74a] = (ComprDataIO *)0x0;
  in_x0[0x74b] = (ComprDataIO *)0x0;
  in_x0[0x74c] = (ComprDataIO *)0x0;
  in_x0[0x74d] = (ComprDataIO *)0x0;
  uVar15 = local_238._4_4_;
  *(undefined4 *)((long)in_x0 + 0x2df4) = 0;
  local_238 = (ulong)local_238._4_4_ << 0x20;
  iVar14 = (int)local_230 + uVar15 * 2;
  iVar27 = local_230._4_4_ + iVar14 * 2;
  iVar16 = (int)local_228 + iVar27 * 2;
  iVar2 = local_228._4_4_ + iVar16 * 2;
  iVar3 = (int)local_220 + iVar2 * 2;
  *(undefined4 *)((long)in_x0 + 0x2db4) = 0;
  *(uint *)(in_x0 + 0x5b7) = uVar15 << 0xf;
  iVar4 = local_220._4_4_ + iVar3 * 2;
  iVar5 = (int)local_218 + iVar4 * 2;
  iVar6 = local_218._4_4_ + iVar5 * 2;
  *(int *)(in_x0 + 0x5b8) = iVar27 * 0x2000;
  iVar27 = (int)local_210 + iVar6 * 2;
  iVar7 = local_210._4_4_ + iVar27 * 2;
  *(int *)(in_x0 + 0x5b9) = iVar2 * 0x800;
  *(int *)(in_x0 + 0x5ba) = iVar4 * 0x200;
  iVar2 = (int)local_208 + iVar7 * 2;
  *(int *)((long)in_x0 + 0x2dcc) = iVar3 * 0x400;
  iVar3 = local_208._4_4_ + iVar2 * 2;
  *(int *)((long)in_x0 + 0x2dbc) = iVar14 * 0x4000;
  *(int *)((long)in_x0 + 0x2dc4) = iVar16 * 0x1000;
  *(int *)((long)in_x0 + 0x2dd4) = iVar5 * 0x100;
  *(int *)(in_x0 + 0x5bb) = iVar6 * 0x80;
  *(int *)((long)in_x0 + 0x2ddc) = iVar27 * 0x40;
  *(int *)(in_x0 + 0x5bc) = iVar7 * 0x20;
  *(int *)((long)in_x0 + 0x2de4) = iVar2 * 0x10;
  *(int *)(in_x0 + 0x5bd) = iVar3 * 8;
  iVar14 = uVar15 + *(int *)((long)in_x0 + 0x2df4);
  iVar27 = (int)local_230 + iVar14;
  iVar16 = local_230._4_4_ + iVar27;
  iVar2 = (int)local_228 + iVar16;
  iVar4 = local_228._4_4_ + iVar2;
  iVar5 = (int)local_220 + iVar4;
  iVar6 = iVar5 + local_220._4_4_;
  iVar7 = iVar6 + (int)local_218;
  iVar3 = (int)local_200 + iVar3 * 2;
  iVar8 = iVar7 + local_218._4_4_;
  iVar9 = iVar8 + (int)local_210;
  iVar10 = iVar9 + local_210._4_4_;
  iVar11 = iVar10 + (int)local_208;
  *(int *)((long)in_x0 + 0x2dec) = iVar3 * 4;
  *(int *)(in_x0 + 0x5be) = (local_200._4_4_ + iVar3 * 2) * 2;
  iVar3 = iVar11 + local_208._4_4_;
  *(int *)(in_x0 + 0x5bf) = *(int *)((long)in_x0 + 0x2df4);
  *(int *)((long)in_x0 + 0x2dfc) = iVar14;
  *(int *)(in_x0 + 0x5c0) = iVar27;
  *(int *)((long)in_x0 + 0x2e04) = iVar16;
  *(int *)(in_x0 + 0x5c1) = iVar2;
  *(int *)((long)in_x0 + 0x2e0c) = iVar4;
  *(int *)(in_x0 + 0x5c2) = iVar5;
  *(int *)((long)in_x0 + 0x2e14) = iVar6;
  *(int *)(in_x0 + 0x5c3) = iVar7;
  *(int *)((long)in_x0 + 0x2e1c) = iVar8;
  *(int *)(in_x0 + 0x5c4) = iVar9;
  *(int *)((long)in_x0 + 0x2e24) = iVar10;
  *(int *)(in_x0 + 0x5c5) = iVar11;
  *(int *)((long)in_x0 + 0x2e2c) = iVar3;
  *(int *)(in_x0 + 0x5c6) = (int)local_200 + iVar3;
  lVar38 = 0;
  local_1f8 = *(ComprDataIO **)((long)in_x0 + 0x2df4);
  pCStack_1f0 = *(ComprDataIO **)((long)in_x0 + 0x2dfc);
  local_1e8 = *(ComprDataIO **)((long)in_x0 + 0x2e04);
  pCStack_1e0 = *(ComprDataIO **)((long)in_x0 + 0x2e0c);
  local_1d8 = *(ComprDataIO **)((long)in_x0 + 0x2e14);
  pCStack_1d0 = *(ComprDataIO **)((long)in_x0 + 0x2e1c);
  local_1c8 = *(ComprDataIO **)((long)in_x0 + 0x2e24);
  uStack_1c0 = *(ComprDataIO **)((long)in_x0 + 0x2e2c);
  do {
    if ((local_28[lVar38] & 0xf) != 0) {
      lVar19 = (long)(int)(local_28[lVar38] & 0xf);
      uVar15 = *(uint *)((long)&local_1f8 + lVar19 * 4);
      *(uint *)((long)&local_1f8 + lVar19 * 4) = uVar15 + 1;
      *(short *)((long)in_x0 + (ulong)uVar15 * 2 + 0x3a38) = (short)lVar38;
    }
    lVar38 = lVar38 + 1;
  } while (lVar38 != 0x1c);
  ppCVar30 = in_x0 + 0x5c7;
  uVar17 = 1;
  uVar39 = 1;
  *(undefined4 *)((long)in_x0 + 0x2e34) = 7;
LAB_001da238:
  do {
    iVar14 = (int)uVar17;
    if (iVar14 == 0x10) {
      uVar24 = 0xf;
    }
    else if (uVar40 < *(uint *)((long)in_x0 + uVar39 * 4 + 0x2db4)) {
LAB_001da858:
      uVar24 = (ulong)((int)uVar17 - 1);
    }
    else {
      uVar15 = iVar14 + 1;
      if (iVar14 == 0xf) {
LAB_001da860:
        uVar17 = (ulong)uVar15;
        uVar24 = 0xf;
        uVar39 = 0x10;
      }
      else {
        uVar39 = (ulong)uVar15;
        if (*(uint *)((long)in_x0 + (ulong)uVar15 * 4 + 0x2db4) <= uVar40) {
          uVar15 = iVar14 + 2;
          if (iVar14 == 0xe) goto LAB_001da860;
          uVar39 = (ulong)uVar15;
          if (*(uint *)((long)in_x0 + (ulong)uVar15 * 4 + 0x2db4) <= uVar40) {
            uVar15 = iVar14 + 3;
            if (iVar14 == 0xd) goto LAB_001da860;
            uVar39 = (ulong)uVar15;
            if (*(uint *)((long)in_x0 + (ulong)uVar15 * 4 + 0x2db4) <= uVar40) {
              uVar15 = iVar14 + 4;
              if (iVar14 == 0xc) {
LAB_001da8f4:
                uVar17 = (ulong)uVar15;
                uVar39 = 0x10;
                uVar24 = 0xf;
              }
              else {
                if (*(uint *)((long)in_x0 + (ulong)uVar15 * 4 + 0x2db4) <= uVar40) {
                  uVar15 = iVar14 + 5;
                  if (iVar14 == 0xb) goto LAB_001da860;
                  uVar39 = (ulong)uVar15;
                  if (*(uint *)((long)in_x0 + (ulong)uVar15 * 4 + 0x2db4) <= uVar40) {
                    uVar15 = iVar14 + 6;
                    if (iVar14 == 10) goto LAB_001da860;
                    uVar39 = (ulong)uVar15;
                    if (*(uint *)((long)in_x0 + (ulong)uVar15 * 4 + 0x2db4) <= uVar40) {
                      uVar15 = iVar14 + 7;
                      if (iVar14 == 9) goto LAB_001da860;
                      uVar39 = (ulong)uVar15;
                      if (*(uint *)((long)in_x0 + (ulong)uVar15 * 4 + 0x2db4) <= uVar40) {
                        uVar15 = iVar14 + 8;
                        if (iVar14 == 8) goto LAB_001da860;
                        uVar39 = (ulong)uVar15;
                        if (*(uint *)((long)in_x0 + (ulong)uVar15 * 4 + 0x2db4) <= uVar40) {
                          uVar15 = iVar14 + 9;
                          if (iVar14 == 7) goto LAB_001da8f4;
                          if (uVar40 < *(uint *)((long)in_x0 + (ulong)uVar15 * 4 + 0x2db4))
                          goto LAB_001da95c;
                          uVar15 = iVar14 + 10;
                          if (iVar14 == 6) goto LAB_001da860;
                          uVar39 = (ulong)uVar15;
                          if (*(uint *)((long)in_x0 + (ulong)uVar15 * 4 + 0x2db4) <= uVar40) {
                            uVar15 = iVar14 + 0xb;
                            if (iVar14 == 5) goto LAB_001da860;
                            uVar39 = (ulong)uVar15;
                            if (*(uint *)((long)in_x0 + (ulong)uVar15 * 4 + 0x2db4) <= uVar40) {
                              uVar15 = iVar14 + 0xc;
                              if (iVar14 == 4) goto LAB_001da860;
                              uVar39 = (ulong)uVar15;
                              if (*(uint *)((long)in_x0 + (ulong)uVar15 * 4 + 0x2db4) <= uVar40) {
                                uVar15 = iVar14 + 0xd;
                                if (iVar14 == 3) goto LAB_001da860;
                                uVar39 = (ulong)uVar15;
                                if (*(uint *)((long)in_x0 + (ulong)uVar15 * 4 + 0x2db4) <= uVar40) {
                                  if (iVar14 == 2) {
                                    uVar24 = 0xf;
                                    uVar17 = 0x10;
                                    uVar39 = 0x10;
                                  }
                                  else {
                                    uVar24 = 0xf;
                                    uVar17 = 0x10;
                                    uVar39 = 0x10;
                                    if (uVar40 < *(uint *)(in_x0 + 0x5be)) {
                                      uVar17 = 0xf;
                                      uVar39 = 0xf;
                                      goto LAB_001da858;
                                    }
                                  }
                                  goto LAB_001da408;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                  goto LAB_001da8b8;
                }
LAB_001da95c:
                uVar17 = (ulong)uVar15;
                uVar24 = (ulong)(uVar15 - 1);
                uVar39 = uVar17;
              }
              goto LAB_001da408;
            }
          }
        }
LAB_001da8b8:
        uVar17 = (ulong)uVar15;
        uVar24 = (ulong)(uVar15 - 1);
      }
    }
LAB_001da408:
    *(Unpack *)ppCVar30 = SUB81(uVar17,0);
    uVar15 = (uVar40 - *(int *)((long)in_x0 + uVar24 * 4 + 0x2db4) >>
             (ulong)(0x10U - (int)uVar17 & 0x1f)) + *(int *)((long)in_x0 + uVar39 * 4 + 0x2df4);
    if (0x1b < uVar15) {
      *(undefined2 *)((-0x2a38 - (long)in_x0) + (long)ppCVar30 * 2) = 0;
      ppCVar30 = (ComprDataIO **)((long)ppCVar30 + 1);
      uVar40 = uVar40 + 0x200;
      if (in_x0 + 0x5d7 == ppCVar30) break;
      goto LAB_001da238;
    }
    uVar40 = uVar40 + 0x200;
    *(undefined2 *)((-0x2a38 - (long)in_x0) + (long)ppCVar30 * 2) =
         *(undefined2 *)((long)in_x0 + (ulong)uVar15 * 2 + 0x3a38);
    ppCVar30 = (ComprDataIO **)((long)ppCVar30 + 1);
  } while (in_x0 + 0x5d7 != ppCVar30);
  memcpy((Unpack *)((long)in_x0 + 0xe6f4),local_1a1 + 1,0x194);
  lVar38 = 1;
LAB_001da488:
  lVar19 = local_8 - ___stack_chk_guard;
  if (lVar19 == 0) {
    return;
  }
LAB_001da9f4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar38,&__stack_chk_guard,lVar19);
}


