/*
 * Ghidra decompilation
 *
 * Function : _ZN6Unpack12ReadTables20Ev
 * Address  : 080f7794
 * Program  : drastic
 */


/* DWARF original prototype: bool ReadTables20(Unpack * this) */

bool __thiscall Unpack::ReadTables20(Unpack *this)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  ushort uVar5;
  undefined8 uVar6;
  bool bVar7;
  uint uVar8;
  uint LastPos;
  uint uVar9;
  byte *pbVar10;
  byte *pbVar11;
  byte *pbVar12;
  uint uVar13;
  uint I;
  uint BitField;
  uint Pos;
  uint BitField_1;
  uint Pos_1;
  uint I_2;
  uint Code;
  ushort uVar14;
  uint I_1;
  int Number;
  int N;
  uint BitField_2;
  uint Pos_2;
  int iVar15;
  int TableSize;
  byte *pbVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  uint uVar20;
  int iVar21;
  uint uVar22;
  uint uVar23;
  int iVar24;
  int iVar25;
  uint uVar26;
  uint uVar27;
  undefined *puVar28;
  ushort *puVar29;
  uint uVar30;
  uint LastPos_1;
  uint uVar31;
  int iVar32;
  uint uVar33;
  bool bVar34;
  undefined8 uVar35;
  undefined auVar36 [16];
  ushort *local_4f4;
  int local_4f0;
  uint LengthCount [16];
  uint CopyDecodePos [16];
  byte BitLength [19];
  byte local_441;
  byte Table [1028];
  int local_3c;
  
  TableSize = (this->Inp).InAddr;
  local_3c = __stack_chk_guard;
  if (this->ReadTop + -0x18 <= TableSize) {
    bVar7 = UnpReadBuf(this);
    if (!bVar7) {
LAB_080f89dc:
      bVar7 = false;
      goto LAB_080f8888;
    }
    TableSize = (this->Inp).InAddr;
  }
  iVar18 = (this->Inp).InBit;
  pbVar16 = (this->Inp).InBuf;
  pbVar11 = pbVar16 + TableSize;
  uVar19 = ((uint)pbVar11[2] | (uint)*pbVar11 << 0x10 | (uint)pbVar11[1] << 8) >>
           (8U - iVar18 & 0xff);
  uVar27 = uVar19 & 0x8000;
  this->UnpAudioBlock = uVar27;
  if ((uVar19 & 0x4000) == 0) {
    memset(this->UnpOldTable20,0,0x404);
  }
  uVar8 = iVar18 + 2;
  iVar18 = TableSize + (uVar8 >> 3);
  uVar8 = uVar8 & 7;
  if (uVar27 == 0) {
    TableSize = 0x176;
  }
  (this->Inp).InAddr = iVar18;
  (this->Inp).InBit = uVar8;
  if (uVar27 != 0) {
    iVar15 = ((uVar19 << 0x12) >> 0x1e) + 1;
    this->UnpChannels = iVar15;
    if (iVar15 <= this->UnpCurChannel) {
      this->UnpCurChannel = 0;
    }
    TableSize = iVar15 * 0x101;
    iVar18 = iVar18 + (uVar8 + 2 >> 3);
    uVar8 = uVar8 + 2 & 7;
    (this->Inp).InAddr = iVar18;
    (this->Inp).InBit = uVar8;
  }
  pbVar10 = (byte *)((int)CopyDecodePos + 0x3f);
  pbVar11 = pbVar10;
  do {
    uVar19 = 8 - uVar8;
    pbVar12 = pbVar16 + iVar18;
    bVar1 = *pbVar12;
    iVar18 = iVar18 + (uVar8 + 4 >> 3);
    uVar8 = uVar8 + 4 & 7;
    bVar2 = pbVar12[2];
    bVar3 = pbVar12[1];
    (this->Inp).InAddr = iVar18;
    (this->Inp).InBit = uVar8;
    pbVar11 = pbVar11 + 1;
    *pbVar11 = (byte)((((uint)bVar2 | (uint)bVar1 << 0x10 | (uint)bVar3 << 8) >> (uVar19 & 0xff)) >>
                     8) >> 4;
  } while (BitLength + 0x12 != pbVar11);
  (this->BlockTables).BD.MaxNum = 0x13;
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
  pbVar11 = pbVar10;
  do {
    pbVar11 = pbVar11 + 1;
    LengthCount[*pbVar11 & 0xf] = LengthCount[*pbVar11 & 0xf] + 1;
    uVar35 = LengthCount._0_8_;
  } while (BitLength + 0x12 != pbVar11);
  LengthCount._0_8_ = LengthCount._0_8_ & 0xffffffff00000000;
  uVar6 = LengthCount._0_8_;
  LengthCount[1] = SUB84(uVar35,4);
  *(undefined8 *)(this->BlockTables).BD.DecodeNum = 0;
  *(undefined8 *)((this->BlockTables).BD.DecodeNum + 4) = 0;
  iVar24 = LengthCount[2] + LengthCount[1] * 2;
  *(undefined8 *)((this->BlockTables).BD.DecodeNum + 8) = 0;
  *(undefined8 *)((this->BlockTables).BD.DecodeNum + 0xc) = 0;
  uVar13 = LengthCount[1] + LengthCount[2] + LengthCount[3];
  iVar15 = LengthCount[3] + iVar24 * 2;
  uVar31 = uVar13 + LengthCount[4];
  iVar32 = LengthCount[4] + iVar15 * 2;
  iVar25 = LengthCount[5] + iVar32 * 2;
  uVar20 = uVar31 + LengthCount[5];
  uVar33 = uVar20 + LengthCount[6];
  iVar21 = LengthCount[6] + iVar25 * 2;
  *(undefined8 *)((this->BlockTables).BD.DecodeNum + 0xf) = 0;
  (this->BlockTables).BD.DecodeLen[2] = iVar24 * 0x4000;
  iVar24 = LengthCount[7] + iVar21 * 2;
  uVar26 = uVar33 + LengthCount[7];
  (this->BlockTables).BD.DecodeLen[5] = iVar25 * 0x800;
  (this->BlockTables).BD.DecodeLen[3] = iVar15 * 0x2000;
  (this->BlockTables).BD.DecodeLen[0] = 0;
  (this->BlockTables).BD.DecodeLen[6] = iVar21 * 0x400;
  (this->BlockTables).BD.DecodeLen[4] = iVar32 * 0x1000;
  iVar21 = LengthCount[8] + iVar24 * 2;
  uVar22 = uVar26 + LengthCount[8];
  iVar15 = LengthCount[9] + iVar21 * 2;
  (this->BlockTables).BD.DecodeLen[7] = iVar24 * 0x200;
  uVar30 = uVar22 + LengthCount[9];
  (this->BlockTables).BD.DecodePos[0] = 0;
  I = 0;
  (this->BlockTables).BD.DecodeLen[8] = iVar21 * 0x100;
  (this->BlockTables).BD.DecodePos[1] = 0;
  (this->BlockTables).BD.DecodePos[8] = uVar26;
  (this->BlockTables).BD.DecodePos[4] = uVar13;
  (this->BlockTables).BD.DecodePos[2] = LengthCount[1];
  (this->BlockTables).BD.DecodePos[9] = uVar22;
  (this->BlockTables).BD.DecodePos[3] = LengthCount[1] + LengthCount[2];
  (this->BlockTables).BD.DecodePos[5] = uVar31;
  (this->BlockTables).BD.DecodeLen[1] = LengthCount[1] << 0xf;
  (this->BlockTables).BD.DecodeLen[9] = iVar15 * 0x80;
  (this->BlockTables).BD.DecodePos[10] = uVar30;
  (this->BlockTables).BD.DecodePos[6] = uVar20;
  (this->BlockTables).BD.DecodePos[7] = uVar33;
  iVar15 = LengthCount[10] + iVar15 * 2;
  uVar30 = uVar30 + LengthCount[10];
  uVar13 = uVar30 + LengthCount[11];
  iVar24 = LengthCount[11] + iVar15 * 2;
  (this->BlockTables).BD.DecodeLen[10] = iVar15 * 0x40;
  (this->BlockTables).BD.DecodePos[0xb] = uVar30;
  iVar15 = LengthCount[12] + iVar24 * 2;
  uVar20 = uVar13 + LengthCount[12];
  (this->BlockTables).BD.DecodePos[0xc] = uVar13;
  iVar21 = LengthCount[13] + iVar15 * 2;
  uVar13 = LengthCount[13] + uVar20;
  (this->BlockTables).BD.DecodePos[0xd] = uVar20;
  (this->BlockTables).BD.DecodeLen[0xb] = iVar24 * 0x20;
  (this->BlockTables).BD.DecodePos[0xe] = uVar13;
  (this->BlockTables).BD.DecodeLen[0xc] = iVar15 * 0x10;
  iVar15 = LengthCount[14] + iVar21 * 2;
  (this->BlockTables).BD.DecodeLen[0xd] = iVar21 * 8;
  (this->BlockTables).BD.DecodeLen[0xe] = iVar15 * 4;
  (this->BlockTables).BD.DecodeLen[0xf] = (LengthCount[15] + iVar15 * 2) * 2;
  (this->BlockTables).BD.DecodePos[0xf] = uVar13 + LengthCount[14];
  CopyDecodePos[0] = (this->BlockTables).BD.DecodePos[0];
  CopyDecodePos[1] = (this->BlockTables).BD.DecodePos[1];
  CopyDecodePos[2] = (this->BlockTables).BD.DecodePos[2];
  CopyDecodePos[3] = (this->BlockTables).BD.DecodePos[3];
  CopyDecodePos[6] = (this->BlockTables).BD.DecodePos[6];
  CopyDecodePos[5] = (this->BlockTables).BD.DecodePos[5];
  CopyDecodePos[4] = (this->BlockTables).BD.DecodePos[4];
  CopyDecodePos[7] = (this->BlockTables).BD.DecodePos[7];
  CopyDecodePos[8] = (this->BlockTables).BD.DecodePos[8];
  CopyDecodePos[9] = (this->BlockTables).BD.DecodePos[9];
  CopyDecodePos[10] = (this->BlockTables).BD.DecodePos[10];
  CopyDecodePos[11] = (this->BlockTables).BD.DecodePos[0xb];
  CopyDecodePos[12] = (this->BlockTables).BD.DecodePos[0xc];
  CopyDecodePos[13] = (this->BlockTables).BD.DecodePos[0xd];
  CopyDecodePos[14] = (this->BlockTables).BD.DecodePos[0xe];
  CopyDecodePos[15] = (this->BlockTables).BD.DecodePos[0xf];
  do {
    pbVar10 = pbVar10 + 1;
    uVar19 = *pbVar10 & 0xf;
    if ((*pbVar10 & 0xf) != 0) {
      uVar13 = CopyDecodePos[uVar19];
      CopyDecodePos[uVar19] = uVar13 + 1;
      (this->BlockTables).BD.DecodeNum[uVar13] = (ushort)I;
    }
    I = I + 1;
  } while (I != 0x13);
  puVar29 = (ushort *)((this->BlockTables).BD.QuickLen + 0x3fe);
  puVar28 = (undefined *)((int)&(this->BlockTables).BD.QuickBits + 3);
  iVar15 = 0;
  (this->BlockTables).BD.QuickBits = 7;
  uVar19 = 1;
  do {
    uVar27 = iVar15 * 0x200;
    if (uVar27 < (this->BlockTables).BD.DecodeLen[uVar19] || 0xf < uVar19) {
      uVar8 = 0x10 - uVar19;
      uVar9 = uVar19 - 1;
      uVar23 = uVar19;
      uVar19 = uVar19 & 0xff;
    }
    else {
      uVar23 = uVar19 + 1;
      if (uVar27 < (this->BlockTables).BD.DecodeLen[uVar19 + 1]) {
        uVar8 = 0x10 - uVar23;
        uVar9 = uVar19;
        uVar19 = uVar23 & 0xff;
      }
      else {
        uVar8 = 0;
        if (uVar23 == 0x10) {
LAB_080f7e3c:
          uVar9 = 0xf;
          uVar19 = uVar23;
        }
        else {
          uVar17 = uVar19 + 2;
          uVar9 = uVar23;
          if (uVar27 < (this->BlockTables).BD.DecodeLen[uVar19 + 2]) {
LAB_080f7e64:
            uVar23 = uVar17;
            uVar8 = 0x10 - uVar23;
            uVar19 = uVar23 & 0xff;
          }
          else {
            uVar23 = uVar17;
            if (uVar17 == 0x10) {
LAB_080f7ea0:
              uVar9 = 0xf;
              uVar19 = uVar23;
            }
            else {
              uVar9 = uVar19 + 3;
              uVar23 = uVar9;
              if ((this->BlockTables).BD.DecodeLen[uVar19 + 3] <= uVar27) {
                if (uVar9 == 0x10) goto LAB_080f7e3c;
                uVar23 = uVar19 + 4;
                uVar17 = uVar23;
                if (uVar27 < (this->BlockTables).BD.DecodeLen[uVar19 + 4]) goto LAB_080f7e64;
                if (uVar23 == 0x10) goto LAB_080f7ea0;
                uVar9 = uVar19 + 5;
                uVar23 = uVar9;
                if ((this->BlockTables).BD.DecodeLen[uVar19 + 5] <= uVar27) {
                  if (uVar9 != 0x10) {
                    uVar23 = uVar19 + 6;
                    uVar17 = uVar23;
                    if (uVar27 < (this->BlockTables).BD.DecodeLen[uVar19 + 6]) goto LAB_080f7e64;
                    if (uVar23 == 0x10) {
LAB_080f7e8c:
                      uVar8 = 0;
                      uVar9 = 0xf;
                      uVar19 = uVar23;
                      goto LAB_080f7d94;
                    }
                    uVar9 = uVar19 + 7;
                    uVar23 = uVar9;
                    if (uVar27 < (this->BlockTables).BD.DecodeLen[uVar19 + 7]) goto LAB_080f7e50;
                    if (uVar9 != 0x10) {
                      uVar23 = uVar19 + 8;
                      uVar17 = uVar23;
                      if (uVar27 < (this->BlockTables).BD.DecodeLen[uVar19 + 8]) goto LAB_080f7e64;
                      if (uVar23 == 0x10) goto LAB_080f7e8c;
                      uVar9 = uVar19 + 9;
                      uVar23 = uVar9;
                      if (uVar27 < (this->BlockTables).BD.DecodeLen[uVar19 + 9]) goto LAB_080f7e50;
                      if (uVar9 != 0x10) {
                        uVar23 = uVar19 + 10;
                        uVar17 = uVar23;
                        if (uVar27 < (this->BlockTables).BD.DecodeLen[uVar19 + 10])
                        goto LAB_080f7e64;
                        if (uVar23 == 0x10) goto LAB_080f7e8c;
                        uVar9 = uVar19 + 0xb;
                        uVar23 = uVar9;
                        if (uVar27 < (this->BlockTables).BD.DecodeLen[uVar19 + 0xb])
                        goto LAB_080f7e50;
                        if (uVar9 != 0x10) {
                          uVar23 = uVar19 + 0xc;
                          uVar17 = uVar23;
                          if (uVar27 < (this->BlockTables).BD.DecodeLen[uVar19 + 0xc])
                          goto LAB_080f7e64;
                          if (uVar23 == 0x10) goto LAB_080f7e8c;
                          uVar9 = uVar19 + 0xd;
                          uVar23 = uVar9;
                          if (uVar27 < (this->BlockTables).BD.DecodeLen[uVar19 + 0xd])
                          goto LAB_080f7e50;
                          if (uVar9 != 0x10) {
                            uVar23 = uVar19 + 0xe;
                            if (uVar27 < (this->BlockTables).BD.DecodeLen[uVar19 + 0xe]) {
                              uVar8 = 0x10 - uVar23;
                              uVar19 = uVar23 & 0xff;
                            }
                            else {
                              uVar23 = 0x10;
                              uVar8 = 0;
                              uVar9 = 0xf;
                              uVar19 = 0x10;
                            }
                            goto LAB_080f7d94;
                          }
                        }
                      }
                    }
                  }
                  uVar8 = 0;
                  uVar9 = 0xf;
                  uVar19 = uVar23;
                  goto LAB_080f7d94;
                }
              }
LAB_080f7e50:
              uVar9 = uVar17;
              uVar8 = 0x10 - uVar23;
              uVar19 = uVar23 & 0xff;
            }
          }
        }
      }
    }
LAB_080f7d94:
    puVar28 = puVar28 + 1;
    *puVar28 = (char)uVar19;
    uVar19 = (this->BlockTables).BD.DecodePos[uVar23] +
             (uVar27 - (this->BlockTables).BD.DecodeLen[uVar9] >> (uVar8 & 0xff));
    if (uVar19 < 0x13) {
      uVar14 = (this->BlockTables).BD.DecodeNum[uVar19];
    }
    else {
      uVar14 = 0;
    }
    iVar15 = iVar15 + 1;
    puVar29 = puVar29 + 1;
    *puVar29 = uVar14;
    uVar19 = uVar23;
  } while (iVar15 != 0x80);
  iVar21 = this->ReadTop;
  iVar15 = 0;
  LengthCount._0_8_ = uVar6;
LAB_080f7ecc:
  do {
    if (iVar21 + -4 <= iVar18) {
      bVar7 = UnpReadBuf(this);
      if (!bVar7) goto LAB_080f89dc;
      iVar18 = (this->Inp).InAddr;
      iVar21 = this->ReadTop;
    }
    uVar13 = (this->BlockTables).BD.QuickBits;
    pbVar16 = (this->Inp).InBuf;
    iVar24 = (this->Inp).InBit;
    pbVar11 = pbVar16 + iVar18;
    uVar27 = (this->BlockTables).BD.DecodeLen[uVar13];
    uVar19 = ((uint)pbVar11[2] | (uint)*pbVar11 << 0x10 | (uint)pbVar11[1] << 8) >>
             (8U - iVar24 & 0xff) & 0xfffe;
    if (uVar19 < uVar27) {
      uVar19 = uVar19 >> (0x10 - uVar13 & 0xff);
      uVar8 = (uint)(this->BlockTables).BD.QuickLen[uVar19] + iVar24;
      iVar18 = iVar18 + (uVar8 >> 3);
      uVar8 = uVar8 & 7;
      uVar5 = (this->BlockTables).BD.QuickNum[uVar19];
      (this->Inp).InAddr = iVar18;
      (this->Inp).InBit = uVar8;
    }
    else {
      uVar9 = uVar13 + 1;
      if (uVar9 < 0xf) {
        uVar8 = (this->BlockTables).BD.DecodeLen[uVar13 + 1];
        if (uVar19 < uVar8) {
LAB_080f8844:
          uVar23 = 0x10 - uVar9;
        }
        else {
          uVar9 = uVar13 + 2;
          if (uVar9 == 0xf) goto LAB_080f8830;
          uVar23 = (this->BlockTables).BD.DecodeLen[uVar13 + 2];
          uVar27 = uVar8;
          if (uVar19 < uVar23) goto LAB_080f8844;
          uVar9 = uVar13 + 3;
          if (uVar9 == 0xf) goto LAB_080f8830;
          uVar8 = (this->BlockTables).BD.DecodeLen[uVar13 + 3];
          uVar27 = uVar23;
          if (uVar19 < uVar8) goto LAB_080f8844;
          uVar9 = uVar13 + 4;
          if (uVar9 == 0xf) goto LAB_080f8830;
          uVar23 = (this->BlockTables).BD.DecodeLen[uVar13 + 4];
          uVar27 = uVar8;
          if (uVar19 < uVar23) goto LAB_080f8844;
          uVar9 = uVar13 + 5;
          if (uVar9 == 0xf) goto LAB_080f8830;
          uVar8 = (this->BlockTables).BD.DecodeLen[uVar13 + 5];
          uVar27 = uVar23;
          if (uVar19 < uVar8) goto LAB_080f8844;
          uVar9 = uVar13 + 6;
          if (uVar9 == 0xf) goto LAB_080f8830;
          uVar23 = (this->BlockTables).BD.DecodeLen[uVar13 + 6];
          uVar27 = uVar8;
          if (uVar19 < uVar23) goto LAB_080f8844;
          uVar9 = uVar13 + 7;
          if (uVar9 == 0xf) goto LAB_080f8830;
          uVar8 = (this->BlockTables).BD.DecodeLen[uVar13 + 7];
          uVar27 = uVar23;
          if (uVar19 < uVar8) goto LAB_080f8844;
          uVar9 = uVar13 + 8;
          if (uVar9 == 0xf) goto LAB_080f8830;
          uVar23 = (this->BlockTables).BD.DecodeLen[uVar13 + 8];
          uVar27 = uVar8;
          if (uVar19 < uVar23) goto LAB_080f8844;
          uVar9 = uVar13 + 9;
          if (uVar9 == 0xf) goto LAB_080f8830;
          uVar8 = (this->BlockTables).BD.DecodeLen[uVar13 + 9];
          uVar27 = uVar23;
          if (uVar19 < uVar8) goto LAB_080f8844;
          uVar9 = uVar13 + 10;
          if (uVar9 == 0xf) goto LAB_080f8830;
          uVar23 = (this->BlockTables).BD.DecodeLen[uVar13 + 10];
          uVar27 = uVar8;
          if (uVar19 < uVar23) goto LAB_080f8844;
          uVar9 = uVar13 + 0xb;
          if (uVar9 == 0xf) goto LAB_080f8830;
          uVar8 = (this->BlockTables).BD.DecodeLen[uVar13 + 0xb];
          uVar27 = uVar23;
          if (uVar19 < uVar8) goto LAB_080f8844;
          uVar9 = uVar13 + 0xc;
          if (uVar9 == 0xf) goto LAB_080f8830;
          uVar23 = (this->BlockTables).BD.DecodeLen[uVar13 + 0xc];
          uVar27 = uVar8;
          if (uVar19 < uVar23) goto LAB_080f8844;
          uVar9 = uVar13 + 0xd;
          if (uVar9 == 0xf) goto LAB_080f8830;
          uVar8 = (this->BlockTables).BD.DecodeLen[uVar13 + 0xd];
          uVar27 = uVar23;
          if (uVar19 < uVar8) goto LAB_080f8844;
          uVar9 = uVar13 + 0xe;
          if (uVar9 == 0xf) goto LAB_080f8830;
          uVar27 = uVar8;
          if (uVar19 < (this->BlockTables).BD.DecodeLen[uVar13 + 0xe]) goto LAB_080f8844;
          if (uVar13 == 0) goto LAB_080f8830;
          uVar27 = (this->BlockTables).BD.DecodeLen[0xe];
          if (uVar19 < uVar27) {
            uVar23 = 2;
            uVar9 = 0xe;
            uVar27 = (this->BlockTables).BD.DecodeLen[0xd];
          }
          else {
            uVar23 = 1;
            uVar9 = 0xf;
          }
        }
      }
      else {
LAB_080f8830:
        uVar23 = 1;
        uVar9 = 0xf;
        uVar27 = (this->BlockTables).BD.DecodeLen[0xe];
      }
      iVar18 = iVar18 + (iVar24 + uVar9 >> 3);
      uVar8 = iVar24 + uVar9 & 7;
      (this->Inp).InAddr = iVar18;
      (this->Inp).InBit = uVar8;
      uVar19 = (this->BlockTables).BD.DecodePos[uVar9] + (uVar19 - uVar27 >> (uVar23 & 0xff));
      if ((this->BlockTables).BD.MaxNum <= uVar19) {
        uVar19 = 0;
      }
      uVar5 = (this->BlockTables).BD.DecodeNum[uVar19];
    }
    Number = (int)uVar5;
    if ((uint)Number < 0x10) {
      iVar24 = iVar15 + 1;
      Table[iVar15] = this->UnpOldTable20[iVar15] + (char)uVar5 & 0xf;
    }
    else {
      iVar24 = iVar15;
      if (Number == 0x10) {
        pbVar11 = pbVar16 + iVar18;
        bVar1 = *pbVar11;
        iVar18 = iVar18 + (uVar8 + 2 >> 3);
        bVar2 = pbVar11[1];
        bVar3 = pbVar11[2];
        (this->Inp).InAddr = iVar18;
        (this->Inp).InBit = uVar8 + 2 & 7;
        if (iVar15 == 0) goto LAB_080f7ecc;
        if (TableSize <= iVar15) break;
        iVar25 = (((((uint)bVar3 | (uint)bVar1 << 0x10 | (uint)bVar2 << 8) >> (8 - uVar8 & 0xff)) <<
                  0x10) >> 0x1e) + 2;
        bVar4 = Table[iVar15 + -1];
        pbVar16 = Table + iVar15 + -1;
        do {
          iVar24 = iVar24 + 1;
          pbVar16 = pbVar16 + 1;
          *pbVar16 = bVar4;
          bVar7 = TableSize == iVar24;
          iVar15 = TableSize - iVar24;
          if (TableSize > iVar24) {
            bVar7 = iVar25 == 0;
            iVar15 = iVar25;
          }
          iVar25 = iVar25 + -1;
        } while (!bVar7 && iVar15 < 0 == (TableSize <= iVar24 && SBORROW4(TableSize,iVar24)));
      }
      else {
        pbVar11 = pbVar16 + iVar18;
        if (Number == 0x11) {
          uVar19 = uVar8 + 3;
          N = (((((uint)pbVar11[2] | (uint)*pbVar11 << 0x10 | (uint)pbVar11[1] << 8) >>
                (8 - uVar8 & 0xff)) << 0x10) >> 0x1d) + 3;
        }
        else {
          uVar19 = uVar8 + 7;
          N = (((((uint)pbVar11[2] | (uint)*pbVar11 << 0x10 | (uint)pbVar11[1] << 8) >>
                (8 - uVar8 & 0xff)) << 0x10) >> 0x19) + 0xb;
        }
        iVar18 = iVar18 + (uVar19 >> 3);
        (this->Inp).InAddr = iVar18;
        (this->Inp).InBit = uVar19 & 7;
        if (TableSize <= iVar15) break;
        pbVar16 = Table + iVar15 + -1;
        do {
          N = N + -1;
          iVar24 = iVar24 + 1;
          pbVar16 = pbVar16 + 1;
          *pbVar16 = '\0';
          bVar7 = TableSize == iVar24;
          iVar15 = TableSize - iVar24;
          if (TableSize > iVar24) {
            bVar7 = N == 0;
            iVar15 = N;
          }
        } while (!bVar7 && iVar15 < 0 == (TableSize <= iVar24 && SBORROW4(TableSize,iVar24)));
      }
    }
    iVar15 = iVar24;
  } while (iVar24 < TableSize);
  if (iVar21 < iVar18) {
    bVar7 = true;
  }
  else {
    if (this->UnpAudioBlock == 0) {
      MakeDecodeTables(this,Table,&(this->BlockTables).LD,0x12a);
      MakeDecodeTables(this,Table + 0x12a,&(this->BlockTables).DD,0x30);
      MakeDecodeTables(this,Table + 0x15a,&(this->BlockTables).RD,0x1c);
    }
    else if (0 < this->UnpChannels) {
      auVar36 = ZEXT816(0);
      local_4f4 = (ushort *)(this->MD[0].QuickLen + 0x3fe);
      local_4f0 = 0;
      pbVar11 = &local_441;
      do {
        pbVar12 = pbVar11 + 0x101;
        *(undefined4 *)(local_4f4 + -0x243) = 0x101;
        uVar35 = auVar36._0_8_;
        LengthCount[0] = (uint)uVar35;
        LengthCount[1] = SUB84(uVar35,4);
        LengthCount[2] = (uint)auVar36._8_8_;
        LengthCount[3] = SUB84(auVar36._8_8_,4);
        LengthCount[4] = (uint)uVar35;
        LengthCount[5] = SUB84(uVar35,4);
        LengthCount[6] = (uint)uVar35;
        LengthCount[7] = SUB84(uVar35,4);
        LengthCount[8] = (uint)uVar35;
        LengthCount[9] = SUB84(uVar35,4);
        LengthCount[10] = (uint)uVar35;
        LengthCount[11] = SUB84(uVar35,4);
        LengthCount[12] = (uint)uVar35;
        LengthCount[13] = SUB84(uVar35,4);
        LengthCount[14] = (uint)uVar35;
        LengthCount[15] = SUB84(uVar35,4);
        pbVar10 = pbVar11;
        do {
          pbVar10 = pbVar10 + 1;
          LengthCount[*pbVar10 & 0xf] = LengthCount[*pbVar10 & 0xf] + 1;
        } while (pbVar12 != pbVar10);
        LengthCount._0_8_ = LengthCount._0_8_ & 0xffffffff00000000;
        memset(local_4f4 + 0x401,0,0x202);
        *(undefined4 *)(local_4f4 + -0x241) = 0;
        *(undefined4 *)(local_4f4 + -0x221) = 0;
        *(undefined4 *)(local_4f4 + -0x21f) = 0;
        iVar18 = LengthCount[2] + LengthCount[1] * 2;
        *(uint *)(local_4f4 + -0x21d) = LengthCount[1];
        iVar15 = LengthCount[3] + iVar18 * 2;
        *(uint *)(local_4f4 + -0x21b) = LengthCount[1] + LengthCount[2];
        iVar32 = LengthCount[3] + LengthCount[1] + LengthCount[2];
        iVar24 = LengthCount[4] + iVar15 * 2;
        iVar25 = LengthCount[4] + iVar32;
        *(int *)(local_4f4 + -0x23d) = iVar18 * 0x4000;
        *(uint *)(local_4f4 + -0x23f) = LengthCount[1] << 0xf;
        iVar21 = LengthCount[5] + iVar24 * 2;
        iVar18 = LengthCount[5] + iVar25;
        *(int *)(local_4f4 + -0x23b) = iVar15 * 0x2000;
        *(int *)(local_4f4 + -0x217) = iVar25;
        *(int *)(local_4f4 + -0x219) = iVar32;
        *(int *)(local_4f4 + -0x239) = iVar24 * 0x1000;
        iVar24 = LengthCount[6] + iVar21 * 2;
        *(int *)(local_4f4 + -0x215) = iVar18;
        iVar18 = LengthCount[6] + iVar18;
        iVar15 = LengthCount[7] + iVar24 * 2;
        *(int *)(local_4f4 + -0x237) = iVar21 * 0x800;
        *(int *)(local_4f4 + -0x213) = iVar18;
        iVar18 = LengthCount[7] + iVar18;
        *(int *)(local_4f4 + -0x235) = iVar24 * 0x400;
        *(int *)(local_4f4 + -0x211) = iVar18;
        iVar18 = LengthCount[8] + iVar18;
        iVar25 = LengthCount[8] + iVar15 * 2;
        iVar24 = LengthCount[9] + iVar25 * 2;
        iVar21 = LengthCount[10] + iVar24 * 2;
        *(int *)(local_4f4 + -0x233) = iVar15 * 0x200;
        *(int *)(local_4f4 + -0x231) = iVar25 * 0x100;
        *(int *)(local_4f4 + -0x20f) = iVar18;
        iVar18 = LengthCount[9] + iVar18;
        iVar25 = LengthCount[10] + iVar18;
        *(int *)(local_4f4 + -0x20d) = iVar18;
        *(int *)(local_4f4 + -0x22f) = iVar24 * 0x80;
        *(int *)(local_4f4 + -0x22d) = iVar21 * 0x40;
        *(int *)(local_4f4 + -0x20b) = iVar25;
        iVar18 = LengthCount[11] + iVar21 * 2;
        iVar25 = LengthCount[11] + iVar25;
        iVar21 = LengthCount[12] + iVar25;
        iVar15 = LengthCount[12] + iVar18 * 2;
        *(int *)(local_4f4 + -0x209) = iVar25;
        iVar24 = LengthCount[13] + iVar15 * 2;
        *(int *)(local_4f4 + -0x22b) = iVar18 * 0x20;
        iVar18 = LengthCount[14] + iVar24 * 2;
        *(int *)(local_4f4 + -0x207) = iVar21;
        iVar21 = LengthCount[13] + iVar21;
        *(int *)(local_4f4 + -0x229) = iVar15 * 0x10;
        *(int *)(local_4f4 + -0x227) = iVar24 * 8;
        *(int *)(local_4f4 + -0x225) = iVar18 * 4;
        I_2 = 0;
        *(uint *)(local_4f4 + -0x223) = (LengthCount[15] + iVar18 * 2) * 2;
        *(int *)(local_4f4 + -0x205) = iVar21;
        *(uint *)(local_4f4 + -0x203) = LengthCount[14] + iVar21;
        CopyDecodePos[0] = *(uint *)(local_4f4 + -0x221);
        CopyDecodePos[1] = *(uint *)(local_4f4 + -0x21f);
        CopyDecodePos[2] = *(uint *)(local_4f4 + -0x21d);
        CopyDecodePos[3] = *(uint *)(local_4f4 + -0x21b);
        CopyDecodePos[4] = *(uint *)(local_4f4 + -0x219);
        CopyDecodePos[5] = *(uint *)(local_4f4 + -0x217);
        CopyDecodePos[6] = *(uint *)(local_4f4 + -0x215);
        CopyDecodePos[7] = *(uint *)(local_4f4 + -0x213);
        CopyDecodePos[8] = *(uint *)(local_4f4 + -0x211);
        CopyDecodePos[9] = *(uint *)(local_4f4 + -0x20f);
        CopyDecodePos[10] = *(uint *)(local_4f4 + -0x20d);
        CopyDecodePos[11] = *(uint *)(local_4f4 + -0x20b);
        CopyDecodePos[12] = *(uint *)(local_4f4 + -0x209);
        CopyDecodePos[13] = *(uint *)(local_4f4 + -0x207);
        CopyDecodePos[14] = *(uint *)(local_4f4 + -0x205);
        CopyDecodePos[15] = *(uint *)(local_4f4 + -0x203);
        do {
          pbVar11 = pbVar11 + 1;
          uVar19 = *pbVar11 & 0xf;
          if ((*pbVar11 & 0xf) != 0) {
            uVar13 = CopyDecodePos[uVar19];
            CopyDecodePos[uVar19] = uVar13 + 1;
            this->MD[local_4f0].DecodeNum[uVar13] = (ushort)I_2;
          }
          I_2 = I_2 + 1;
        } while (I_2 != 0x101);
        iVar18 = 0;
        pbVar16 = (byte *)((int)local_4f4 + -0x3ff);
        *(undefined4 *)(local_4f4 + -0x201) = 7;
        uVar19 = 1;
        puVar29 = local_4f4;
        do {
          uVar27 = iVar18 * 0x200;
          uVar8 = this->MD[local_4f0].DecodeLen[uVar19];
          bVar34 = 0xe < uVar19;
          bVar7 = uVar19 == 0xf;
          if (uVar19 < 0x10) {
            bVar34 = uVar27 <= uVar8;
            bVar7 = uVar8 == uVar27;
          }
          if (bVar34 && !bVar7) {
            uVar23 = 0x10 - uVar19;
            uVar8 = uVar19;
            uVar9 = uVar19 - 1;
            uVar19 = uVar19 & 0xff;
          }
          else {
            uVar23 = 0;
            uVar8 = uVar19 + 1;
            if (uVar27 < this->MD[local_4f0].DecodeLen[uVar19 + 1]) {
              uVar23 = 0x10 - uVar8;
              uVar9 = uVar19;
              uVar19 = uVar8 & 0xff;
            }
            else if (uVar8 == 0x10) {
LAB_080f87e8:
              uVar9 = 0xf;
              uVar19 = uVar8;
            }
            else {
              uVar17 = uVar19 + 2;
              uVar9 = uVar8;
              if (uVar27 < this->MD[local_4f0].DecodeLen[uVar19 + 2]) {
LAB_080f8788:
                uVar8 = uVar17;
                uVar23 = 0x10 - uVar8;
                uVar19 = uVar8 & 0xff;
              }
              else {
                uVar8 = uVar17;
                if (uVar17 == 0x10) {
LAB_080f87d8:
                  uVar9 = 0xf;
                  uVar19 = uVar8;
                }
                else {
                  uVar9 = uVar19 + 3;
                  uVar8 = uVar9;
                  if (this->MD[local_4f0].DecodeLen[uVar19 + 3] <= uVar27) {
                    if (uVar9 == 0x10) goto LAB_080f87e8;
                    uVar8 = uVar19 + 4;
                    uVar17 = uVar8;
                    if (uVar27 < this->MD[local_4f0].DecodeLen[uVar19 + 4]) goto LAB_080f8788;
                    if (uVar8 == 0x10) goto LAB_080f87d8;
                    uVar9 = uVar19 + 5;
                    uVar8 = uVar9;
                    if (this->MD[local_4f0].DecodeLen[uVar19 + 5] <= uVar27) {
                      if (uVar9 != 0x10) {
                        uVar8 = uVar19 + 6;
                        uVar17 = uVar8;
                        if (uVar27 < this->MD[local_4f0].DecodeLen[uVar19 + 6]) goto LAB_080f8788;
                        if (uVar8 == 0x10) {
LAB_080f87c4:
                          uVar23 = 0;
                          uVar9 = 0xf;
                          uVar19 = uVar8;
                          goto LAB_080f86a4;
                        }
                        uVar9 = uVar19 + 7;
                        uVar8 = uVar9;
                        if (uVar27 < this->MD[local_4f0].DecodeLen[uVar19 + 7]) goto LAB_080f879c;
                        if (uVar9 != 0x10) {
                          uVar8 = uVar19 + 8;
                          uVar17 = uVar8;
                          if (uVar27 < this->MD[local_4f0].DecodeLen[uVar19 + 8]) goto LAB_080f8788;
                          if (uVar8 == 0x10) goto LAB_080f87c4;
                          uVar9 = uVar19 + 9;
                          uVar8 = uVar9;
                          if (uVar27 < this->MD[local_4f0].DecodeLen[uVar19 + 9]) goto LAB_080f879c;
                          if (uVar9 != 0x10) {
                            uVar8 = uVar19 + 10;
                            uVar17 = uVar8;
                            if (uVar27 < this->MD[local_4f0].DecodeLen[uVar19 + 10])
                            goto LAB_080f8788;
                            if (uVar8 == 0x10) goto LAB_080f87c4;
                            uVar9 = uVar19 + 0xb;
                            uVar8 = uVar9;
                            if (uVar27 < this->MD[local_4f0].DecodeLen[uVar19 + 0xb])
                            goto LAB_080f879c;
                            if (uVar9 != 0x10) {
                              uVar8 = uVar19 + 0xc;
                              uVar17 = uVar8;
                              if (uVar27 < this->MD[local_4f0].DecodeLen[uVar19 + 0xc])
                              goto LAB_080f8788;
                              if (uVar8 == 0x10) goto LAB_080f87c4;
                              uVar9 = uVar19 + 0xd;
                              uVar8 = uVar9;
                              if (uVar27 < this->MD[local_4f0].DecodeLen[uVar19 + 0xd])
                              goto LAB_080f879c;
                              if (uVar9 != 0x10) {
                                uVar8 = uVar19 + 0xe;
                                if (uVar27 < this->MD[local_4f0].DecodeLen[uVar19 + 0xe]) {
                                  uVar23 = 0x10 - uVar8;
                                  uVar19 = uVar8 & 0xff;
                                }
                                else {
                                  uVar8 = 0x10;
                                  uVar23 = 0;
                                  uVar9 = 0xf;
                                  uVar19 = 0x10;
                                }
                                goto LAB_080f86a4;
                              }
                            }
                          }
                        }
                      }
                      uVar23 = 0;
                      uVar9 = 0xf;
                      uVar19 = uVar8;
                      goto LAB_080f86a4;
                    }
                  }
LAB_080f879c:
                  uVar9 = uVar17;
                  uVar23 = 0x10 - uVar8;
                  uVar19 = uVar8 & 0xff;
                }
              }
            }
          }
LAB_080f86a4:
          pbVar16 = pbVar16 + 1;
          *pbVar16 = (byte)uVar19;
          uVar19 = this->MD[local_4f0].DecodePos[uVar8] +
                   (uVar27 - this->MD[local_4f0].DecodeLen[uVar9] >> (uVar23 & 0xff));
          if (uVar19 < 0x101) {
            uVar14 = this->MD[local_4f0].DecodeNum[uVar19];
          }
          else {
            uVar14 = 0;
          }
          iVar18 = iVar18 + 1;
          puVar29 = puVar29 + 1;
          *puVar29 = uVar14;
          uVar19 = uVar8;
        } while (iVar18 != 0x80);
        local_4f0 = local_4f0 + 1;
        local_4f4 = local_4f4 + 0x776;
        pbVar11 = pbVar12;
      } while (local_4f0 < this->UnpChannels);
    }
    memcpy(this->UnpOldTable20,Table,0x404);
    bVar7 = true;
  }
LAB_080f8888:
  if (local_3c == __stack_chk_guard) {
    return bVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


