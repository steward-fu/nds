/*
 * Ghidra decompilation
 *
 * Function : ReadTables30
 * Address  : 080fa310
 * Program  : drastic
 */


/* DWARF original prototype: bool ReadTables30(Unpack * this) */

bool __thiscall Unpack::ReadTables30(Unpack *this)

{
  byte bVar1;
  ushort uVar2;
  bool bVar3;
  uint uVar4;
  uint BitField;
  byte *pbVar5;
  int ReadCode;
  uint uVar6;
  byte *pbVar7;
  byte *pbVar8;
  int extraout_r1;
  int extraout_r1_00;
  byte *pbVar9;
  uint BitField_1;
  uint Pos;
  uint BitField_2;
  uint Pos_1;
  uint Code;
  ushort uVar10;
  BitInput *this_00;
  ushort *puVar11;
  ushort *puVar12;
  uint I;
  uint uVar13;
  uint I_2;
  int Number;
  int iVar14;
  uint uVar15;
  uint uVar16;
  int I_1;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  undefined *puVar20;
  size_t __n;
  int N;
  int N_1;
  int iVar21;
  int iVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  size_t sVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  uint LastPos;
  uint LengthCount [16];
  uint CopyDecodePos [16];
  byte BitLength [20];
  byte Table [404];
  int local_2c;
  ushort auStack_28 [2];
  
  local_2c = __stack_chk_guard;
  if (((this->Inp).InAddr < this->ReadTop + -0x18) || (bVar3 = UnpReadBuf30(this), bVar3)) {
    this_00 = &this->Inp;
    BitInput::faddbits(this_00,-(this->Inp).InBit & 7);
    uVar4 = BitInput::fgetbits(this_00);
    if ((uVar4 & 0x8000) != 0) {
      this->UnpBlockType = 1;
      bVar3 = ModelPPM::DecodeInit(&this->PPM,this,&this->PPMEscChar);
      goto LAB_080fa9d0;
    }
    puVar12 = this->MD[3].QuickNum + 0x390;
    this->UnpBlockType = 0;
    this->PrevLowDist = 0;
    this->LowDistRepCount = 0;
    if ((uVar4 & 0x4000) == 0) {
      memset(this->UnpOldTable,0,0x1ae);
    }
    iVar14 = 0;
    BitInput::faddbits(this_00,2);
    do {
      while( true ) {
        uVar4 = BitInput::fgetbits(this_00);
        BitInput::faddbits(this_00,4);
        bVar3 = (uVar4 >> 0xc & 0xff) != 0xf;
        if (bVar3) {
          puVar12 = (ushort *)((int)auStack_28 + iVar14);
        }
        bVar1 = (byte)(uVar4 >> 0xc);
        if (!bVar3) break;
        *(byte *)(puVar12 + -0xd6) = bVar1;
LAB_080fa3d4:
        iVar14 = iVar14 + 1;
        if (0x13 < iVar14) goto LAB_080fa480;
      }
      uVar4 = BitInput::fgetbits(this_00);
      uVar15 = (uVar4 << 0xc) >> 0x18;
      BitInput::faddbits(this_00,4);
      if (uVar15 == 0) {
        puVar12 = (ushort *)((int)auStack_28 + iVar14);
        BitLength[iVar14] = bVar1;
        goto LAB_080fa3d4;
      }
      if (iVar14 < 0x14) {
        pbVar7 = BitLength;
        pbVar9 = pbVar7 + iVar14 + -1;
        puVar11 = (ushort *)(uVar15 + 1);
        iVar21 = iVar14;
        do {
          iVar14 = iVar21 + 1;
          pbVar9 = pbVar9 + 1;
          *pbVar9 = '\0';
          if (iVar14 < 0x14) {
            pbVar7 = (byte *)0x1;
          }
          if (iVar14 != 0x13 && iVar21 + -0x12 < 0 == SBORROW4(iVar14,0x13)) {
            pbVar7 = (byte *)0x0;
          }
          puVar12 = (ushort *)((int)puVar11 + -1);
          if ((int)puVar11 < 1) {
            pbVar7 = (byte *)0x0;
          }
          puVar11 = puVar12;
          iVar21 = iVar14;
        } while (pbVar7 != (byte *)0x0);
      }
    } while (iVar14 < 0x14);
LAB_080fa480:
    pbVar8 = (byte *)((int)CopyDecodePos + 0x3f);
    LengthCount[0] = 0;
    LengthCount[1] = 0;
    LengthCount[2] = 0;
    LengthCount[3] = 0;
    (this->BlockTables).BD.MaxNum = 0x14;
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
    pbVar5 = pbVar8;
    do {
      pbVar5 = pbVar5 + 1;
      LengthCount[*pbVar5 & 0xf] = LengthCount[*pbVar5 & 0xf] + 1;
    } while (BitLength + 0x13 != pbVar5);
    uVar4 = LengthCount[1];
    I = 0;
    iVar30 = LengthCount[2] + LengthCount[1] * 2;
    uVar27 = LengthCount[1] + LengthCount[2];
    *(undefined8 *)(this->BlockTables).BD.DecodeNum = 0;
    *(undefined8 *)((this->BlockTables).BD.DecodeNum + 4) = 0;
    *(undefined8 *)((this->BlockTables).BD.DecodeNum + 8) = 0;
    *(undefined8 *)((this->BlockTables).BD.DecodeNum + 0xc) = 0;
    uVar19 = uVar27 + LengthCount[3];
    iVar14 = LengthCount[3] + iVar30 * 2;
    *(undefined8 *)((this->BlockTables).BD.DecodeNum + 0x10) = 0;
    iVar31 = LengthCount[4] + iVar14 * 2;
    (this->BlockTables).BD.DecodeLen[0] = 0;
    uVar17 = uVar19 + LengthCount[4];
    uVar24 = uVar17 + LengthCount[5];
    iVar21 = LengthCount[5] + iVar31 * 2;
    iVar32 = LengthCount[6] + iVar21 * 2;
    uVar26 = uVar24 + LengthCount[6];
    iVar22 = LengthCount[7] + iVar32 * 2;
    LengthCount._0_8_ = (ulonglong)LengthCount[1] << 0x20;
    uVar28 = uVar26 + LengthCount[7];
    (this->BlockTables).BD.DecodeLen[2] = iVar30 * 0x4000;
    (this->BlockTables).BD.DecodeLen[3] = iVar14 * 0x2000;
    iVar30 = LengthCount[8] + iVar22 * 2;
    (this->BlockTables).BD.DecodeLen[4] = iVar31 * 0x1000;
    uVar23 = uVar28 + LengthCount[8];
    (this->BlockTables).BD.DecodeLen[5] = iVar21 * 0x800;
    (this->BlockTables).BD.DecodeLen[6] = iVar32 * 0x400;
    (this->BlockTables).BD.DecodeLen[7] = iVar22 * 0x200;
    (this->BlockTables).BD.DecodePos[0] = 0;
    (this->BlockTables).BD.DecodePos[5] = uVar17;
    iVar14 = LengthCount[9] + iVar30 * 2;
    (this->BlockTables).BD.DecodePos[9] = uVar23;
    (this->BlockTables).BD.DecodeLen[8] = iVar30 * 0x100;
    uVar23 = uVar23 + LengthCount[9];
    (this->BlockTables).BD.DecodePos[6] = uVar24;
    (this->BlockTables).BD.DecodePos[7] = uVar26;
    (this->BlockTables).BD.DecodePos[4] = uVar19;
    (this->BlockTables).BD.DecodePos[3] = uVar27;
    (this->BlockTables).BD.DecodePos[10] = uVar23;
    uVar23 = uVar23 + LengthCount[10];
    uVar17 = uVar23 + LengthCount[11];
    (this->BlockTables).BD.DecodePos[2] = uVar4;
    (this->BlockTables).BD.DecodePos[0xb] = uVar23;
    (this->BlockTables).BD.DecodePos[8] = uVar28;
    (this->BlockTables).BD.DecodeLen[1] = uVar4 << 0xf;
    (this->BlockTables).BD.DecodePos[0xc] = uVar17;
    (this->BlockTables).BD.DecodeLen[9] = iVar14 * 0x80;
    iVar22 = LengthCount[10] + iVar14 * 2;
    (this->BlockTables).BD.DecodePos[1] = 0;
    iVar21 = LengthCount[11] + iVar22 * 2;
    uVar17 = uVar17 + LengthCount[12];
    iVar14 = LengthCount[12] + iVar21 * 2;
    (this->BlockTables).BD.DecodeLen[10] = iVar22 * 0x40;
    uVar4 = LengthCount[13] + uVar17;
    (this->BlockTables).BD.DecodePos[0xd] = uVar17;
    iVar22 = LengthCount[13] + iVar14 * 2;
    (this->BlockTables).BD.DecodeLen[0xb] = iVar21 * 0x20;
    iVar21 = LengthCount[14] + iVar22 * 2;
    (this->BlockTables).BD.DecodeLen[0xc] = iVar14 * 0x10;
    (this->BlockTables).BD.DecodePos[0xe] = uVar4;
    (this->BlockTables).BD.DecodeLen[0xd] = iVar22 * 8;
    (this->BlockTables).BD.DecodeLen[0xe] = iVar21 * 4;
    (this->BlockTables).BD.DecodeLen[0xf] = (LengthCount[15] + iVar21 * 2) * 2;
    (this->BlockTables).BD.DecodePos[0xf] = uVar4 + LengthCount[14];
    CopyDecodePos[0] = (this->BlockTables).BD.DecodePos[0];
    CopyDecodePos[1] = (this->BlockTables).BD.DecodePos[1];
    CopyDecodePos[3] = (this->BlockTables).BD.DecodePos[3];
    CopyDecodePos[5] = (this->BlockTables).BD.DecodePos[5];
    CopyDecodePos[2] = (this->BlockTables).BD.DecodePos[2];
    CopyDecodePos[4] = (this->BlockTables).BD.DecodePos[4];
    CopyDecodePos[6] = (this->BlockTables).BD.DecodePos[6];
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
      pbVar8 = pbVar8 + 1;
      uVar15 = *pbVar8 & 0xf;
      if ((*pbVar8 & 0xf) != 0) {
        uVar4 = CopyDecodePos[uVar15];
        CopyDecodePos[uVar15] = uVar4 + 1;
        (this->BlockTables).BD.DecodeNum[uVar4] = (ushort)I;
      }
      I = I + 1;
    } while (I != 0x14);
    puVar12 = (ushort *)((this->BlockTables).BD.QuickLen + 0x3fe);
    puVar20 = (undefined *)((int)&(this->BlockTables).BD.QuickBits + 3);
    (this->BlockTables).BD.QuickBits = 7;
    iVar14 = 0;
    uVar15 = 1;
    do {
      uVar25 = iVar14 * 0x200;
      if (uVar25 < (this->BlockTables).BD.DecodeLen[uVar15] || 0xf < uVar15) {
        uVar13 = 0x10 - uVar15;
        uVar6 = uVar15 - 1;
        uVar18 = uVar15;
        uVar15 = uVar15 & 0xff;
      }
      else {
        uVar18 = uVar15 + 1;
        if (uVar25 < (this->BlockTables).BD.DecodeLen[uVar15 + 1]) {
          uVar13 = 0x10 - uVar18;
          uVar6 = uVar15;
          uVar15 = uVar18 & 0xff;
        }
        else {
          uVar13 = 0;
          if (uVar18 == 0x10) {
LAB_080faa50:
            uVar6 = 0xf;
            uVar15 = uVar18;
          }
          else {
            uVar16 = uVar15 + 2;
            uVar6 = uVar18;
            if (uVar25 < (this->BlockTables).BD.DecodeLen[uVar15 + 2]) {
LAB_080fa99c:
              uVar18 = uVar16;
              uVar13 = 0x10 - uVar18;
              uVar15 = uVar18 & 0xff;
            }
            else {
              uVar18 = uVar16;
              if (uVar16 == 0x10) {
LAB_080faa3c:
                uVar6 = 0xf;
                uVar15 = uVar18;
              }
              else {
                uVar6 = uVar15 + 3;
                uVar18 = uVar6;
                if ((this->BlockTables).BD.DecodeLen[uVar15 + 3] <= uVar25) {
                  if (uVar6 == 0x10) goto LAB_080faa50;
                  uVar18 = uVar15 + 4;
                  uVar16 = uVar18;
                  if (uVar25 < (this->BlockTables).BD.DecodeLen[uVar15 + 4]) goto LAB_080fa99c;
                  if (uVar18 == 0x10) goto LAB_080faa3c;
                  uVar6 = uVar15 + 5;
                  uVar18 = uVar6;
                  if ((this->BlockTables).BD.DecodeLen[uVar15 + 5] <= uVar25) {
                    if (uVar6 != 0x10) {
                      uVar18 = uVar15 + 6;
                      uVar16 = uVar18;
                      if (uVar25 < (this->BlockTables).BD.DecodeLen[uVar15 + 6]) goto LAB_080fa99c;
                      if (uVar18 == 0x10) {
LAB_080faa28:
                        uVar13 = 0;
                        uVar6 = 0xf;
                        uVar15 = uVar18;
                        goto LAB_080fa8ec;
                      }
                      uVar6 = uVar15 + 7;
                      uVar18 = uVar6;
                      if (uVar25 < (this->BlockTables).BD.DecodeLen[uVar15 + 7]) goto LAB_080faa00;
                      if (uVar6 != 0x10) {
                        uVar18 = uVar15 + 8;
                        uVar16 = uVar18;
                        if (uVar25 < (this->BlockTables).BD.DecodeLen[uVar15 + 8])
                        goto LAB_080fa99c;
                        if (uVar18 == 0x10) goto LAB_080faa28;
                        uVar6 = uVar15 + 9;
                        uVar18 = uVar6;
                        if (uVar25 < (this->BlockTables).BD.DecodeLen[uVar15 + 9])
                        goto LAB_080faa00;
                        if (uVar6 != 0x10) {
                          uVar18 = uVar15 + 10;
                          uVar16 = uVar18;
                          if (uVar25 < (this->BlockTables).BD.DecodeLen[uVar15 + 10])
                          goto LAB_080fa99c;
                          if (uVar18 == 0x10) goto LAB_080faa28;
                          uVar6 = uVar15 + 0xb;
                          uVar18 = uVar6;
                          if (uVar25 < (this->BlockTables).BD.DecodeLen[uVar15 + 0xb])
                          goto LAB_080faa00;
                          if (uVar6 != 0x10) {
                            uVar18 = uVar15 + 0xc;
                            uVar16 = uVar18;
                            if (uVar25 < (this->BlockTables).BD.DecodeLen[uVar15 + 0xc])
                            goto LAB_080fa99c;
                            if (uVar18 == 0x10) goto LAB_080faa28;
                            uVar6 = uVar15 + 0xd;
                            uVar18 = uVar6;
                            if (uVar25 < (this->BlockTables).BD.DecodeLen[uVar15 + 0xd])
                            goto LAB_080faa00;
                            if (uVar6 != 0x10) {
                              uVar18 = uVar15 + 0xe;
                              if (uVar25 < (this->BlockTables).BD.DecodeLen[uVar15 + 0xe]) {
                                uVar13 = 0x10 - uVar18;
                                uVar15 = uVar18 & 0xff;
                              }
                              else {
                                uVar18 = 0x10;
                                uVar13 = 0;
                                uVar6 = 0xf;
                                uVar15 = 0x10;
                              }
                              goto LAB_080fa8ec;
                            }
                          }
                        }
                      }
                    }
                    uVar13 = 0;
                    uVar6 = 0xf;
                    uVar15 = uVar18;
                    goto LAB_080fa8ec;
                  }
                }
LAB_080faa00:
                uVar6 = uVar16;
                uVar13 = 0x10 - uVar18;
                uVar15 = uVar18 & 0xff;
              }
            }
          }
        }
      }
LAB_080fa8ec:
      puVar20 = puVar20 + 1;
      *puVar20 = (char)uVar15;
      iVar14 = iVar14 + 1;
      uVar15 = (this->BlockTables).BD.DecodePos[uVar18] +
               (uVar25 - (this->BlockTables).BD.DecodeLen[uVar6] >> (uVar13 & 0xff));
      if (uVar15 < 0x14) {
        uVar10 = (this->BlockTables).BD.DecodeNum[uVar15];
      }
      else {
        uVar10 = 0;
      }
      puVar12 = puVar12 + 1;
      *puVar12 = uVar10;
      uVar15 = uVar18;
    } while (iVar14 != 0x80);
    sVar29 = this->ReadTop;
    iVar14 = 0;
LAB_080faa7c:
    do {
      iVar21 = (this->Inp).InAddr;
      if ((int)(sVar29 - 4) <= iVar21) {
        __n = sVar29 - iVar21;
        if ((int)__n < 0) goto LAB_080fa9cc;
        if (0x4000 < iVar21) {
          if (__n != 0) {
            pbVar7 = (this->Inp).InBuf;
            memmove(pbVar7,pbVar7 + iVar21,__n);
          }
          (this->Inp).InAddr = 0;
          this->ReadTop = __n;
          sVar29 = __n;
        }
        iVar21 = ComprDataIO::UnpRead(this->UnpIO,(this->Inp).InBuf + sVar29,0x8000 - sVar29);
        sVar29 = this->ReadTop;
        if (iVar21 < 1) {
          this->ReadBorder = sVar29 - 0x1e;
          if (iVar21 == -1) goto LAB_080fa9cc;
        }
        else {
          sVar29 = iVar21 + sVar29;
          this->ReadTop = sVar29;
          this->ReadBorder = sVar29 - 0x1e;
        }
        iVar21 = (this->Inp).InAddr;
      }
      uVar4 = (this->BlockTables).BD.QuickBits;
      iVar22 = (this->Inp).InBit;
      pbVar5 = (this->Inp).InBuf + iVar21;
      uVar25 = (this->BlockTables).BD.DecodeLen[uVar4];
      uVar15 = ((uint)pbVar5[2] | (uint)*pbVar5 << 0x10 | (uint)pbVar5[1] << 8) >>
               (8U - iVar22 & 0xff) & 0xfffe;
      if (uVar15 < uVar25) {
        uVar15 = uVar15 >> (0x10 - uVar4 & 0xff);
        uVar25 = (uint)(this->BlockTables).BD.QuickLen[uVar15] + iVar22;
        uVar2 = (this->BlockTables).BD.QuickNum[uVar15];
        (this->Inp).InAddr = iVar21 + (uVar25 >> 3);
        (this->Inp).InBit = uVar25 & 7;
      }
      else {
        uVar13 = uVar4 + 1;
        if (uVar13 < 0xf) {
          uVar6 = (this->BlockTables).BD.DecodeLen[uVar4 + 1];
          if (uVar6 <= uVar15) {
            uVar13 = uVar4 + 2;
            if (uVar13 != 0xf) {
              uVar23 = (this->BlockTables).BD.DecodeLen[uVar4 + 2];
              uVar25 = uVar6;
              if (uVar15 < uVar23) goto LAB_080fae10;
              uVar13 = uVar4 + 3;
              if (uVar13 != 0xf) {
                uVar25 = (this->BlockTables).BD.DecodeLen[uVar4 + 3];
                if (uVar15 < uVar25) {
                  uVar25 = 0x10 - uVar13;
                  goto LAB_080facbc;
                }
                uVar13 = uVar4 + 4;
                if (uVar13 != 0xf) {
                  uVar6 = (this->BlockTables).BD.DecodeLen[uVar4 + 4];
                  if (uVar15 < uVar6) goto LAB_080fae10;
                  uVar13 = uVar4 + 5;
                  if (uVar13 != 0xf) {
                    uVar18 = (this->BlockTables).BD.DecodeLen[uVar4 + 5];
                    uVar25 = uVar6;
                    if (uVar15 < uVar18) goto LAB_080fae10;
                    uVar13 = uVar4 + 6;
                    if (uVar13 != 0xf) {
                      uVar6 = (this->BlockTables).BD.DecodeLen[uVar4 + 6];
                      uVar25 = uVar18;
                      if (uVar15 < uVar6) goto LAB_080fae10;
                      uVar13 = uVar4 + 7;
                      if (uVar13 != 0xf) {
                        uVar18 = (this->BlockTables).BD.DecodeLen[uVar4 + 7];
                        uVar25 = uVar6;
                        if (uVar15 < uVar18) goto LAB_080fae10;
                        uVar13 = uVar4 + 8;
                        if (uVar13 != 0xf) {
                          uVar6 = (this->BlockTables).BD.DecodeLen[uVar4 + 8];
                          uVar25 = uVar18;
                          if (uVar15 < uVar6) goto LAB_080fae10;
                          uVar13 = uVar4 + 9;
                          if (uVar13 != 0xf) {
                            uVar18 = (this->BlockTables).BD.DecodeLen[uVar4 + 9];
                            uVar25 = uVar6;
                            if (uVar15 < uVar18) goto LAB_080fae10;
                            uVar13 = uVar4 + 10;
                            if (uVar13 != 0xf) {
                              uVar6 = (this->BlockTables).BD.DecodeLen[uVar4 + 10];
                              uVar25 = uVar18;
                              if (uVar15 < uVar6) goto LAB_080fae10;
                              uVar13 = uVar4 + 0xb;
                              if (uVar13 != 0xf) {
                                uVar18 = (this->BlockTables).BD.DecodeLen[uVar4 + 0xb];
                                uVar25 = uVar6;
                                if (uVar15 < uVar18) goto LAB_080fae10;
                                uVar13 = uVar4 + 0xc;
                                if (uVar13 != 0xf) {
                                  uVar6 = (this->BlockTables).BD.DecodeLen[uVar4 + 0xc];
                                  uVar25 = uVar18;
                                  if (uVar15 < uVar6) goto LAB_080fae10;
                                  uVar13 = uVar4 + 0xd;
                                  if (uVar13 != 0xf) {
                                    uVar18 = (this->BlockTables).BD.DecodeLen[uVar4 + 0xd];
                                    uVar25 = uVar6;
                                    if (uVar15 < uVar18) goto LAB_080fae10;
                                    uVar13 = uVar4 + 0xe;
                                    if (uVar13 != 0xf) {
                                      uVar25 = uVar18;
                                      if (uVar15 < (this->BlockTables).BD.DecodeLen[uVar4 + 0xe])
                                      goto LAB_080fae10;
                                      if (uVar4 != 0) {
                                        uVar23 = (this->BlockTables).BD.DecodeLen[0xe];
                                        if (uVar15 < uVar23) {
                                          uVar25 = 2;
                                          uVar13 = 0xe;
                                          uVar23 = (this->BlockTables).BD.DecodeLen[0xd];
                                        }
                                        else {
                                          uVar25 = 1;
                                          uVar13 = 0xf;
                                        }
                                        goto LAB_080facbc;
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
            goto LAB_080fadfc;
          }
LAB_080fae10:
          uVar23 = uVar25;
          uVar25 = 0x10 - uVar13;
        }
        else {
LAB_080fadfc:
          uVar25 = 1;
          uVar13 = 0xf;
          uVar23 = (this->BlockTables).BD.DecodeLen[0xe];
        }
LAB_080facbc:
        (this->Inp).InAddr = iVar21 + (iVar22 + uVar13 >> 3);
        (this->Inp).InBit = iVar22 + uVar13 & 7;
        uVar15 = (this->BlockTables).BD.DecodePos[uVar13] + (uVar15 - uVar23 >> (uVar25 & 0xff));
        if ((this->BlockTables).BD.MaxNum <= uVar15) {
          uVar15 = 0;
        }
        uVar2 = (this->BlockTables).BD.DecodeNum[uVar15];
      }
      Number = (int)uVar2;
      if ((uint)Number < 0x10) {
        iVar22 = iVar14 + 1;
        Table[iVar14] = this->UnpOldTable[iVar14] + (char)uVar2 & 0xf;
      }
      else if ((uint)Number < 0x12) {
        if (Number == 0x10) {
          uVar4 = BitInput::fgetbits(this_00);
          iVar21 = (uVar4 >> 0xd) + 3;
          BitInput::faddbits(this_00,3);
          iVar30 = extraout_r1_00;
        }
        else {
          uVar4 = BitInput::fgetbits(this_00);
          iVar21 = (uVar4 >> 9) + 0xb;
          BitInput::faddbits(this_00,7);
          iVar30 = extraout_r1;
        }
        if (iVar14 == 0) {
          sVar29 = this->ReadTop;
          goto LAB_080faa7c;
        }
        if (0x193 < iVar14) goto LAB_080fa9b0;
        bVar1 = BitLength[iVar14 + 0x13];
        pbVar7 = BitLength + iVar14 + 0x13;
        do {
          iVar21 = iVar21 + -1;
          iVar22 = iVar14 + 1;
          pbVar7 = pbVar7 + 1;
          *pbVar7 = bVar1;
          if (iVar22 < 0x194) {
            iVar30 = 1;
          }
          if (iVar22 != 0x193 && iVar14 + -0x192 < 0 == SBORROW4(iVar22,0x193)) {
            iVar30 = 0;
          }
          if (iVar21 < 1) {
            iVar30 = 0;
          }
          iVar14 = iVar22;
        } while (iVar30 != 0);
        sVar29 = this->ReadTop;
      }
      else {
        if (Number == 0x12) {
          uVar4 = BitInput::fgetbits(this_00);
          iVar21 = (uVar4 >> 0xd) + 3;
          BitInput::faddbits(this_00,3);
        }
        else {
          uVar4 = BitInput::fgetbits(this_00);
          iVar21 = (uVar4 >> 9) + 0xb;
          BitInput::faddbits(this_00,7);
        }
        if (0x193 < iVar14) {
LAB_080fa9b0:
          sVar29 = this->ReadTop;
          break;
        }
        pbVar7 = BitLength + iVar14 + 0x13;
        iVar22 = iVar14;
        do {
          iVar21 = iVar21 + -1;
          iVar22 = iVar22 + 1;
          pbVar7 = pbVar7 + 1;
          *pbVar7 = '\0';
        } while (iVar22 < 0x194 && 0 < iVar21);
        sVar29 = this->ReadTop;
      }
      iVar14 = iVar22;
    } while (iVar22 < 0x194);
    iVar14 = (this->Inp).InAddr;
    bVar3 = true;
    this->TablesRead = true;
    if (iVar14 <= (int)sVar29) {
      MakeDecodeTables(this,Table,&(this->BlockTables).LD,299);
      MakeDecodeTables(this,Table + 299,&(this->BlockTables).DD,0x3c);
      MakeDecodeTables(this,Table + 0x167,&(this->BlockTables).LDD,0x11);
      MakeDecodeTables(this,Table + 0x178,&(this->BlockTables).RD,0x1c);
      memcpy(this->UnpOldTable,Table,0x1ae);
      goto LAB_080fa9d0;
    }
  }
LAB_080fa9cc:
  bVar3 = false;
LAB_080fa9d0:
  if (local_2c == __stack_chk_guard) {
    return bVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


