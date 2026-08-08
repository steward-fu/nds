/*
 * Ghidra decompilation
 *
 * Function : MakeDecodeTables
 * Address  : 080f71b0
 * Program  : drastic
 */


/* DWARF original prototype: void MakeDecodeTables(Unpack * this, byte * LengthTable, DecodeTable *
   Dec, uint Size) */

void __thiscall Unpack::MakeDecodeTables(Unpack *this,byte *LengthTable,DecodeTable *Dec,uint Size)

{
  uint uVar1;
  uint uVar2;
  byte *pbVar3;
  uint uVar5;
  int iVar6;
  uint LastPos;
  uint uVar7;
  ushort uVar8;
  uint uVar9;
  uint BitField;
  uint Pos;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  ushort *puVar16;
  undefined *puVar17;
  int iVar18;
  int iVar19;
  bool bVar20;
  uint LengthCount [16];
  uint CopyDecodePos [16];
  int local_2c;
  byte *pbVar4;
  
  local_2c = __stack_chk_guard;
  Dec->MaxNum = Size;
  LengthCount[0] = 0;
  LengthCount[1] = 0;
  LengthCount[2] = 0;
  LengthCount[3] = 0;
  LengthCount[4] = 0;
  LengthCount[5] = 0;
  LengthCount[6] = 0;
  LengthCount[7] = 0;
  LengthCount[8] = 0;
  LengthCount[9] = 0;
  LengthCount[10] = 0;
  LengthCount[11] = 0;
  LengthCount[12] = 0;
  LengthCount[13] = 0;
  LengthCount[14] = 0;
  LengthCount[15] = 0;
  if (Size != 0) {
    pbVar4 = LengthTable;
    do {
      pbVar3 = pbVar4 + 1;
      LengthCount[*pbVar4 & 0xf] = LengthCount[*pbVar4 & 0xf] + 1;
      pbVar4 = pbVar3;
    } while (LengthTable + Size != pbVar3);
  }
  uVar10 = 0;
  LengthCount._0_8_ = LengthCount._0_8_ & 0xffffffff00000000;
  memset(Dec->DecodeNum,0,Size << 1);
  Dec->DecodeLen[0] = 0;
  Dec->DecodePos[0] = 0;
  bVar20 = Size != 0;
  if (bVar20) {
    LengthTable = LengthTable + -1;
  }
  Dec->DecodePos[1] = LengthCount[0];
  iVar14 = LengthCount[2] + LengthCount[1] * 2;
  iVar18 = LengthCount[3] + iVar14 * 2;
  iVar6 = LengthCount[4] + iVar18 * 2;
  Dec->DecodeLen[2] = iVar14 * 0x4000;
  Dec->DecodeLen[3] = iVar18 * 0x2000;
  iVar18 = LengthCount[5] + iVar6 * 2;
  iVar14 = LengthCount[6] + iVar18 * 2;
  uVar2 = LengthCount[2] + LengthCount[1] + LengthCount[0];
  Dec->DecodeLen[4] = iVar6 * 0x1000;
  uVar5 = LengthCount[3] + uVar2;
  Dec->DecodePos[2] = LengthCount[1] + LengthCount[0];
  Dec->DecodePos[3] = uVar2;
  Dec->DecodePos[4] = uVar5;
  iVar6 = LengthCount[7] + iVar14 * 2;
  Dec->DecodeLen[5] = iVar18 * 0x800;
  iVar18 = LengthCount[8] + iVar6 * 2;
  Dec->DecodeLen[6] = iVar14 * 0x400;
  uVar5 = LengthCount[4] + uVar5;
  Dec->DecodeLen[7] = iVar6 * 0x200;
  uVar2 = LengthCount[5] + uVar5;
  Dec->DecodePos[5] = uVar5;
  uVar5 = LengthCount[6] + uVar2;
  iVar14 = LengthCount[9] + iVar18 * 2;
  Dec->DecodePos[6] = uVar2;
  Dec->DecodePos[7] = uVar5;
  uVar5 = LengthCount[7] + uVar5;
  Dec->DecodeLen[8] = iVar18 * 0x100;
  Dec->DecodePos[8] = uVar5;
  uVar5 = LengthCount[8] + uVar5;
  iVar6 = LengthCount[10] + iVar14 * 2;
  Dec->DecodeLen[9] = iVar14 * 0x80;
  Dec->DecodeLen[10] = iVar6 * 0x40;
  Dec->DecodeLen[1] = LengthCount[1] << 0xf;
  Dec->DecodePos[9] = uVar5;
  uVar5 = LengthCount[9] + uVar5;
  uVar15 = LengthCount[10] + uVar5;
  Dec->DecodePos[10] = uVar5;
  Dec->DecodePos[0xb] = uVar15;
  iVar18 = LengthCount[11] + iVar6 * 2;
  uVar15 = LengthCount[11] + uVar15;
  uVar2 = LengthCount[12] + uVar15;
  iVar6 = LengthCount[12] + iVar18 * 2;
  Dec->DecodePos[0xc] = uVar15;
  iVar19 = LengthCount[13] + iVar6 * 2;
  Dec->DecodePos[0xd] = uVar2;
  iVar14 = LengthCount[14] + iVar19 * 2;
  uVar2 = LengthCount[13] + uVar2;
  Dec->DecodeLen[0xb] = iVar18 * 0x20;
  Dec->DecodeLen[0xc] = iVar6 * 0x10;
  Dec->DecodeLen[0xd] = iVar19 * 8;
  Dec->DecodePos[0xe] = uVar2;
  Dec->DecodeLen[0xe] = iVar14 * 4;
  Dec->DecodeLen[0xf] = (LengthCount[15] + iVar14 * 2) * 2;
  Dec->DecodePos[0xf] = uVar2 + LengthCount[14];
  CopyDecodePos[0] = Dec->DecodePos[0];
  CopyDecodePos[1] = Dec->DecodePos[1];
  CopyDecodePos[2] = Dec->DecodePos[2];
  CopyDecodePos[3] = Dec->DecodePos[3];
  CopyDecodePos[4] = Dec->DecodePos[4];
  CopyDecodePos[5] = Dec->DecodePos[5];
  CopyDecodePos[6] = Dec->DecodePos[6];
  CopyDecodePos[7] = Dec->DecodePos[7];
  uVar2 = Dec->DecodePos[0xc];
  CopyDecodePos[8] = Dec->DecodePos[8];
  CopyDecodePos[9] = Dec->DecodePos[9];
  CopyDecodePos[10] = Dec->DecodePos[10];
  CopyDecodePos[11] = Dec->DecodePos[0xb];
  CopyDecodePos[12] = uVar2;
  if (bVar20) {
    uVar2 = 0x644;
  }
  CopyDecodePos[13] = Dec->DecodePos[0xd];
  CopyDecodePos[14] = Dec->DecodePos[0xe];
  CopyDecodePos[15] = Dec->DecodePos[0xf];
  if (bVar20) {
    do {
      LengthTable = LengthTable + 1;
      uVar9 = *LengthTable & 0xf;
      if ((*LengthTable & 0xf) != 0) {
        uVar5 = CopyDecodePos[uVar9];
        CopyDecodePos[uVar9] = uVar5 + 1;
        *(short *)((int)Dec->DecodeLen + (uVar5 + uVar2) * 2 + -4) = (short)uVar10;
      }
      uVar10 = uVar10 + 1;
    } while (Size != uVar10);
    if ((Size - 0x12a < 9) && ((1 << (Size - 0x12a & 0xff) & 0x103U) != 0)) {
      iVar14 = 6;
      iVar6 = 0x400;
      uVar10 = 10;
      goto LAB_080f74cc;
    }
  }
  iVar14 = 9;
  iVar6 = 0x80;
  uVar10 = 7;
LAB_080f74cc:
  puVar17 = (undefined *)((int)&Dec->QuickBits + 3);
  Dec->QuickBits = uVar10;
  puVar16 = (ushort *)(Dec->QuickLen + 0x3fe);
  iVar18 = 0;
  uVar9 = 1;
  do {
    uVar1 = iVar18 << iVar14;
    if (uVar1 < Dec->DecodeLen[uVar9] || 0xf < uVar9) {
      uVar7 = 0x10 - uVar9;
      uVar12 = uVar9 - 1;
      uVar13 = uVar9;
      uVar9 = uVar9 & 0xff;
    }
    else {
      uVar13 = uVar9 + 1;
      if (uVar1 < Dec->DecodeLen[uVar9 + 1]) {
        uVar7 = 0x10 - uVar13;
        uVar12 = uVar9;
        uVar9 = uVar13 & 0xff;
      }
      else {
        uVar7 = 0;
        if (uVar13 == 0x10) {
LAB_080f773c:
          uVar12 = 0xf;
          uVar9 = uVar13;
        }
        else {
          uVar11 = uVar9 + 2;
          uVar12 = uVar13;
          if (uVar1 < Dec->DecodeLen[uVar9 + 2]) {
LAB_080f76d8:
            uVar13 = uVar11;
            uVar7 = 0x10 - uVar13;
            uVar9 = uVar13 & 0xff;
          }
          else {
            uVar13 = uVar11;
            if (uVar11 == 0x10) {
LAB_080f7728:
              uVar12 = 0xf;
              uVar9 = uVar13;
            }
            else {
              uVar12 = uVar9 + 3;
              uVar13 = uVar12;
              if (Dec->DecodeLen[uVar9 + 3] <= uVar1) {
                if (uVar12 == 0x10) goto LAB_080f773c;
                uVar13 = uVar9 + 4;
                uVar11 = uVar13;
                if (uVar1 < Dec->DecodeLen[uVar9 + 4]) goto LAB_080f76d8;
                if (uVar13 == 0x10) goto LAB_080f7728;
                uVar12 = uVar9 + 5;
                uVar13 = uVar12;
                if (Dec->DecodeLen[uVar9 + 5] <= uVar1) {
                  if (uVar12 != 0x10) {
                    uVar13 = uVar9 + 6;
                    uVar11 = uVar13;
                    if (uVar1 < Dec->DecodeLen[uVar9 + 6]) goto LAB_080f76d8;
                    if (uVar13 == 0x10) {
LAB_080f7714:
                      uVar7 = 0;
                      uVar12 = 0xf;
                      uVar9 = uVar13;
                      goto LAB_080f7624;
                    }
                    uVar12 = uVar9 + 7;
                    uVar13 = uVar12;
                    if (uVar1 < Dec->DecodeLen[uVar9 + 7]) goto LAB_080f76ec;
                    if (uVar12 != 0x10) {
                      uVar13 = uVar9 + 8;
                      uVar11 = uVar13;
                      if (uVar1 < Dec->DecodeLen[uVar9 + 8]) goto LAB_080f76d8;
                      if (uVar13 == 0x10) goto LAB_080f7714;
                      uVar12 = uVar9 + 9;
                      uVar13 = uVar12;
                      if (uVar1 < Dec->DecodeLen[uVar9 + 9]) goto LAB_080f76ec;
                      if (uVar12 != 0x10) {
                        uVar13 = uVar9 + 10;
                        uVar11 = uVar13;
                        if (uVar1 < Dec->DecodeLen[uVar9 + 10]) goto LAB_080f76d8;
                        if (uVar13 == 0x10) goto LAB_080f7714;
                        uVar12 = uVar9 + 0xb;
                        uVar13 = uVar12;
                        if (uVar1 < Dec->DecodeLen[uVar9 + 0xb]) goto LAB_080f76ec;
                        if (uVar12 != 0x10) {
                          uVar13 = uVar9 + 0xc;
                          uVar11 = uVar13;
                          if (uVar1 < Dec->DecodeLen[uVar9 + 0xc]) goto LAB_080f76d8;
                          if (uVar13 == 0x10) goto LAB_080f7714;
                          uVar12 = uVar9 + 0xd;
                          uVar13 = uVar12;
                          if (uVar1 < Dec->DecodeLen[uVar9 + 0xd]) goto LAB_080f76ec;
                          if (uVar12 != 0x10) {
                            uVar13 = uVar9 + 0xe;
                            if (uVar1 < Dec->DecodeLen[uVar9 + 0xe]) {
                              uVar7 = 0x10 - uVar13;
                              uVar9 = uVar13 & 0xff;
                            }
                            else {
                              uVar13 = 0x10;
                              uVar7 = 0;
                              uVar12 = 0xf;
                              uVar9 = 0x10;
                            }
                            goto LAB_080f7624;
                          }
                        }
                      }
                    }
                  }
                  uVar7 = 0;
                  uVar12 = 0xf;
                  uVar9 = uVar13;
                  goto LAB_080f7624;
                }
              }
LAB_080f76ec:
              uVar12 = uVar11;
              uVar7 = 0x10 - uVar13;
              uVar9 = uVar13 & 0xff;
            }
          }
        }
      }
    }
LAB_080f7624:
    puVar17 = puVar17 + 1;
    *puVar17 = (char)uVar9;
    uVar9 = Dec->DecodePos[uVar13] + (uVar1 - Dec->DecodeLen[uVar12] >> (uVar7 & 0xff));
    if (uVar9 < Size) {
      uVar8 = Dec->DecodeNum[uVar9];
    }
    else {
      uVar8 = 0;
    }
    iVar18 = iVar18 + 1;
    puVar16 = puVar16 + 1;
    *puVar16 = uVar8;
    uVar9 = uVar13;
    if (iVar18 == iVar6) {
      if (local_2c != __stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
  } while( true );
}


