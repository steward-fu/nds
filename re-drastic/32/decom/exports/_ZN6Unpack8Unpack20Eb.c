/*
 * Ghidra decompilation
 *
 * Function : _ZN6Unpack8Unpack20Eb
 * Address  : 080f8ac8
 * Program  : drastic
 */


/* DWARF original prototype: void Unpack20(Unpack * this, bool Solid) */

void __thiscall Unpack::Unpack20(Unpack *this,bool Solid)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  ushort uVar4;
  byte bVar5;
  uint uVar7;
  uint uVar8;
  int ReadCode;
  uint Bits;
  int DistNumber;
  undefined8 *puVar9;
  byte *Src_1;
  bool bVar6;
  size_t SrcPtr_2;
  byte *Src_2;
  uint Pos;
  int LengthNumber;
  byte *Src;
  int iVar10;
  uint uVar11;
  int AudioNumber;
  uint uVar12;
  int iVar13;
  DecodeTable *pDVar14;
  undefined8 *puVar15;
  byte *Dest_1;
  uint Distance_2;
  byte *Dest;
  size_t sVar16;
  int iVar17;
  uint uVar18;
  uint I_2;
  int Number;
  int Length_1;
  byte *Dest_2;
  uint I;
  undefined8 *puVar19;
  int Length;
  size_t __n;
  uint I_3;
  uint Distance;
  int iVar20;
  byte *pbVar21;
  uint BitField_1;
  uint Pos_1;
  uint BitField_3;
  uint Code_1;
  uint Code_3;
  uint I_1;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  size_t SrcPtr_1;
  uint BitField;
  size_t SrcPtr;
  undefined8 *puVar26;
  uint Code;
  byte *pbVar27;
  uint uVar28;
  uint BitField_2;
  uint Pos_2;
  uint Pos_3;
  uint Distance_1;
  uint Code_2;
  uint uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  int64 *local_44;
  
  if (this->Suspended == false) {
    UnpInitData(this,Solid);
    bVar6 = UnpReadBuf(this);
    if (!bVar6) {
      return;
    }
    if ((!Solid) && (bVar6 = ReadTables20(this), !bVar6)) {
      return;
    }
    iVar17 = *(int *)&this->DestUnpSize;
    iVar10 = *(int *)((int)&this->DestUnpSize + 4) - (uint)(iVar17 == 0);
    *(int *)&this->DestUnpSize = iVar17 + -1;
    *(int *)((int)&this->DestUnpSize + 4) = iVar10;
  }
  else {
    iVar10 = *(int *)((int)&this->DestUnpSize + 4);
    this->UnpPtr = this->WrPtr;
  }
  local_44 = &this->DestUnpSize;
  while (-1 < iVar10) {
    iVar10 = (this->Inp).InAddr;
    sVar16 = this->ReadTop;
    uVar22 = this->MaxWinMask;
    uVar7 = uVar22 & this->UnpPtr;
    this->UnpPtr = uVar7;
    if ((int)(sVar16 - 0x1d) <= iVar10) {
      __n = sVar16 - iVar10;
      if ((int)__n < 0) goto LAB_080f8f58;
      (this->BlockHeader).BlockSize =
           (this->BlockHeader).BlockSize - (iVar10 - (this->BlockHeader).BlockStart);
      if (0x4000 < iVar10) {
        if (__n != 0) {
          pbVar21 = (this->Inp).InBuf;
          memmove(pbVar21,pbVar21 + iVar10,__n);
        }
        (this->Inp).InAddr = 0;
        this->ReadTop = __n;
        sVar16 = __n;
      }
      iVar17 = ComprDataIO::UnpRead(this->UnpIO,(this->Inp).InBuf + sVar16,0x8000 - sVar16);
      iVar10 = (this->Inp).InAddr;
      sVar16 = this->ReadTop;
      iVar20 = (this->BlockHeader).BlockSize;
      (this->BlockHeader).BlockStart = iVar10;
      if (0 < iVar17) {
        sVar16 = iVar17 + sVar16;
      }
      iVar13 = sVar16 - 0x1e;
      if (0 < iVar17) {
        this->ReadTop = sVar16;
      }
      this->ReadBorder = iVar13;
      if (iVar20 != -1) {
        iVar20 = iVar10 + iVar20 + -1;
        if (iVar13 <= iVar20) {
          iVar20 = iVar13;
        }
        this->ReadBorder = iVar20;
      }
      if (iVar17 == -1) goto LAB_080f8f58;
      uVar7 = this->UnpPtr;
      uVar22 = this->MaxWinMask;
    }
    uVar11 = this->WrPtr;
    if (uVar11 != uVar7 && (uVar11 - uVar7 & uVar22) < 0x10e) {
      this->UnpSomeRead = true;
      if (uVar7 < uVar11) {
        ComprDataIO::UnpWrite(this->UnpIO,this->Window + uVar11,-uVar11 & uVar22);
        ComprDataIO::UnpWrite(this->UnpIO,this->Window,this->UnpPtr);
        this->UnpAllBuf = true;
      }
      else {
        ComprDataIO::UnpWrite(this->UnpIO,this->Window + uVar11,uVar7 - uVar11);
      }
      uVar7 = this->UnpPtr;
      this->WrPtr = uVar7;
      if (this->Suspended != false) {
        return;
      }
      iVar10 = (this->Inp).InAddr;
    }
    if (this->UnpAudioBlock == 0) {
      iVar17 = (this->Inp).InBit;
      pbVar21 = (this->Inp).InBuf;
      uVar18 = (this->BlockTables).LD.QuickBits;
      pbVar27 = pbVar21 + iVar10;
      uVar22 = ((uint)pbVar27[2] | (uint)*pbVar27 << 0x10 | (uint)pbVar27[1] << 8) >>
               (8U - iVar17 & 0xff) & 0xfffe;
      if (uVar22 < this->OldDist[uVar18 + 0x11]) {
        uVar22 = uVar22 >> (0x10 - uVar18 & 0xff);
        uVar4 = (this->BlockTables).LD.QuickNum[uVar22];
        uVar11 = (uint)(this->BlockTables).LD.QuickLen[uVar22] + iVar17;
        iVar10 = iVar10 + (uVar11 >> 3);
        uVar11 = uVar11 & 7;
        (this->Inp).InAddr = iVar10;
        (this->Inp).InBit = uVar11;
      }
      else {
        uVar23 = uVar18 + 1;
        if (uVar23 < 0xf) {
          uVar8 = this->OldDist[uVar18 + 0x11];
          if (uVar22 < this->OldDist[uVar18 + 0x12]) {
LAB_080f9820:
            uVar12 = 0x10 - uVar23;
          }
          else {
            uVar23 = uVar18 + 2;
            if (uVar23 == 0xf) goto LAB_080f9770;
            uVar8 = this->OldDist[uVar18 + 0x12];
            if (uVar22 < this->OldDist[uVar18 + 0x13]) goto LAB_080f9820;
            uVar23 = uVar18 + 3;
            if (uVar23 == 0xf) goto LAB_080f9770;
            uVar8 = this->OldDist[uVar18 + 0x13];
            if (uVar22 < this->OldDist[uVar18 + 0x14]) goto LAB_080f9820;
            uVar23 = uVar18 + 4;
            if (uVar23 == 0xf) goto LAB_080f9770;
            uVar8 = this->OldDist[uVar18 + 0x14];
            if (uVar22 < this->OldDist[uVar18 + 0x15]) goto LAB_080f9820;
            uVar23 = uVar18 + 5;
            if (uVar23 == 0xf) goto LAB_080f9770;
            uVar8 = this->OldDist[uVar18 + 0x15];
            if (uVar22 < this->OldDist[uVar18 + 0x16]) goto LAB_080f9820;
            uVar23 = uVar18 + 6;
            if (uVar23 == 0xf) goto LAB_080f9770;
            uVar8 = this->OldDist[uVar18 + 0x16];
            if (uVar22 < this->OldDist[uVar18 + 0x17]) goto LAB_080f9820;
            uVar23 = uVar18 + 7;
            if (uVar23 == 0xf) goto LAB_080f9770;
            uVar8 = this->OldDist[uVar18 + 0x17];
            if (uVar22 < this->OldDist[uVar18 + 0x18]) goto LAB_080f9820;
            uVar23 = uVar18 + 8;
            if (uVar23 == 0xf) goto LAB_080f9770;
            uVar8 = this->OldDist[uVar18 + 0x18];
            if (uVar22 < this->OldDist[uVar18 + 0x19]) goto LAB_080f9820;
            uVar23 = uVar18 + 9;
            if (uVar23 == 0xf) goto LAB_080f9770;
            uVar8 = this->OldDist[uVar18 + 0x19];
            if (uVar22 < this->OldDist[uVar18 + 0x1a]) goto LAB_080f9820;
            uVar23 = uVar18 + 10;
            if (uVar23 == 0xf) goto LAB_080f9770;
            uVar8 = this->OldDist[uVar18 + 0x1a];
            if (uVar22 < this->OldDist[uVar18 + 0x1b]) goto LAB_080f9820;
            uVar23 = uVar18 + 0xb;
            if (uVar23 == 0xf) goto LAB_080f9770;
            uVar8 = this->OldDist[uVar18 + 0x1b];
            if (uVar22 < this->OldDist[uVar18 + 0x1c]) goto LAB_080f9820;
            uVar23 = uVar18 + 0xc;
            if (uVar23 == 0xf) goto LAB_080f9770;
            uVar8 = this->OldDist[uVar18 + 0x1c];
            if (uVar22 < this->OldDist[uVar18 + 0x1d]) goto LAB_080f9820;
            uVar23 = uVar18 + 0xd;
            if (uVar23 == 0xf) goto LAB_080f9770;
            uVar8 = this->OldDist[uVar18 + 0x1d];
            if (uVar22 < this->OldDist[uVar18 + 0x1e]) goto LAB_080f9820;
            uVar23 = uVar18 + 0xe;
            if (uVar23 == 0xf) goto LAB_080f9770;
            uVar8 = this->OldDist[uVar18 + 0x1e];
            if (uVar22 < this->OldDist[uVar18 + 0x1f]) goto LAB_080f9820;
            if (uVar18 == 0) goto LAB_080f9770;
            uVar8 = (this->BlockTables).LD.DecodeLen[0xe];
            if (uVar22 < uVar8) {
              uVar12 = 2;
              uVar23 = 0xe;
              uVar8 = (this->BlockTables).LD.DecodeLen[0xd];
            }
            else {
              uVar12 = 1;
              uVar23 = 0xf;
            }
          }
        }
        else {
LAB_080f9770:
          uVar12 = 1;
          uVar23 = 0xf;
          uVar8 = (this->BlockTables).LD.DecodeLen[0xe];
        }
        uVar24 = (this->BlockTables).LD.MaxNum;
        iVar10 = iVar10 + (iVar17 + uVar23 >> 3);
        uVar11 = iVar17 + uVar23 & 7;
        (this->Inp).InAddr = iVar10;
        (this->Inp).InBit = uVar11;
        uVar22 = (this->BlockTables).LD.DecodePos[uVar23] + (uVar22 - uVar8 >> (uVar12 & 0xff));
        if (uVar24 <= uVar22) {
          uVar22 = 0;
        }
        uVar4 = (this->BlockTables).LD.DecodeNum[uVar22];
      }
      Number = (int)uVar4;
      if ((uint)Number < 0x100) {
        this->UnpPtr = uVar7 + 1;
        this->Window[uVar7] = (byte)uVar4;
        goto LAB_080f8f30;
      }
      if ((uint)Number < 0x10e) {
        if (Number == 0x10d) goto LAB_080f97cc;
        if (Number == 0x100) {
          uVar22 = this->OldDistPtr;
          uVar7 = this->LastLength;
          uVar18 = this->LastDist;
          uVar11 = *(uint *)local_44;
          iVar10 = *(int *)((int)&this->DestUnpSize + 4);
          this->OldDistPtr = uVar22 + 1;
          this->OldDist[uVar22 & 3] = uVar18;
          *(uint *)local_44 = uVar11 - uVar7;
          *(uint *)((int)&this->DestUnpSize + 4) = iVar10 - (uint)(uVar11 < uVar7);
          CopyString(this,uVar7,uVar18);
          iVar10 = *(int *)((int)&this->DestUnpSize + 4);
        }
        else if ((uint)Number < 0x105) {
          uVar12 = this->OldDistPtr;
          pbVar27 = pbVar21 + iVar10;
          uVar18 = (this->BlockTables).RD.QuickBits;
          uVar8 = this->OldDist[uVar12 - Number & 3];
          uVar23 = (this->BlockTables).RD.DecodeLen[uVar18];
          uVar22 = ((uint)pbVar27[2] | (uint)*pbVar27 << 0x10 | (uint)pbVar27[1] << 8) >>
                   (8 - uVar11 & 0xff) & 0xfffe;
          if (uVar22 < uVar23) {
            uVar22 = uVar22 >> (0x10 - uVar18 & 0xff);
            uVar4 = (this->BlockTables).RD.QuickNum[uVar22];
            uVar11 = (this->BlockTables).RD.QuickLen[uVar22] + uVar11;
            iVar10 = iVar10 + (uVar11 >> 3);
            uVar11 = uVar11 & 7;
            (this->Inp).InAddr = iVar10;
            (this->Inp).InBit = uVar11;
          }
          else {
            uVar24 = uVar18 + 1;
            if (uVar24 < 0xf) {
              uVar25 = (this->BlockTables).RD.DecodeLen[uVar18 + 1];
              if (uVar22 < uVar25) {
LAB_080fa1c4:
                uVar25 = 0x10 - uVar24;
              }
              else {
                uVar24 = uVar18 + 2;
                if (uVar24 == 0xf) goto LAB_080fa1ac;
                uVar29 = (this->BlockTables).RD.DecodeLen[uVar18 + 2];
                uVar23 = uVar25;
                if (uVar22 < uVar29) goto LAB_080fa1c4;
                uVar24 = uVar18 + 3;
                if (uVar24 == 0xf) goto LAB_080fa1ac;
                uVar25 = (this->BlockTables).RD.DecodeLen[uVar18 + 3];
                uVar23 = uVar29;
                if (uVar22 < uVar25) goto LAB_080fa1c4;
                uVar24 = uVar18 + 4;
                if (uVar24 == 0xf) goto LAB_080fa1ac;
                uVar29 = (this->BlockTables).RD.DecodeLen[uVar18 + 4];
                uVar23 = uVar25;
                if (uVar22 < uVar29) goto LAB_080fa1c4;
                uVar24 = uVar18 + 5;
                if (uVar24 == 0xf) goto LAB_080fa1ac;
                uVar25 = (this->BlockTables).RD.DecodeLen[uVar18 + 5];
                uVar23 = uVar29;
                if (uVar22 < uVar25) goto LAB_080fa1c4;
                uVar24 = uVar18 + 6;
                if (uVar24 == 0xf) goto LAB_080fa1ac;
                uVar29 = (this->BlockTables).RD.DecodeLen[uVar18 + 6];
                uVar23 = uVar25;
                if (uVar22 < uVar29) goto LAB_080fa1c4;
                uVar24 = uVar18 + 7;
                if (uVar24 == 0xf) goto LAB_080fa1ac;
                uVar25 = (this->BlockTables).RD.DecodeLen[uVar18 + 7];
                uVar23 = uVar29;
                if (uVar22 < uVar25) goto LAB_080fa1c4;
                uVar24 = uVar18 + 8;
                if (uVar24 == 0xf) goto LAB_080fa1ac;
                uVar29 = (this->BlockTables).RD.DecodeLen[uVar18 + 8];
                uVar23 = uVar25;
                if (uVar22 < uVar29) goto LAB_080fa1c4;
                uVar24 = uVar18 + 9;
                if (uVar24 == 0xf) goto LAB_080fa1ac;
                uVar25 = (this->BlockTables).RD.DecodeLen[uVar18 + 9];
                uVar23 = uVar29;
                if (uVar22 < uVar25) goto LAB_080fa1c4;
                uVar24 = uVar18 + 10;
                if (uVar24 == 0xf) goto LAB_080fa1ac;
                uVar29 = (this->BlockTables).RD.DecodeLen[uVar18 + 10];
                uVar23 = uVar25;
                if (uVar22 < uVar29) goto LAB_080fa1c4;
                uVar24 = uVar18 + 0xb;
                if (uVar24 == 0xf) goto LAB_080fa1ac;
                uVar25 = (this->BlockTables).RD.DecodeLen[uVar18 + 0xb];
                uVar23 = uVar29;
                if (uVar22 < uVar25) goto LAB_080fa1c4;
                uVar24 = uVar18 + 0xc;
                if (uVar24 == 0xf) goto LAB_080fa1ac;
                uVar29 = (this->BlockTables).RD.DecodeLen[uVar18 + 0xc];
                uVar23 = uVar25;
                if (uVar22 < uVar29) goto LAB_080fa1c4;
                uVar24 = uVar18 + 0xd;
                if (uVar24 == 0xf) goto LAB_080fa1ac;
                uVar25 = (this->BlockTables).RD.DecodeLen[uVar18 + 0xd];
                uVar23 = uVar29;
                if (uVar22 < uVar25) goto LAB_080fa1c4;
                uVar24 = uVar18 + 0xe;
                if (uVar24 == 0xf) goto LAB_080fa1ac;
                uVar23 = uVar25;
                if (uVar22 < (this->BlockTables).RD.DecodeLen[uVar18 + 0xe]) goto LAB_080fa1c4;
                if (uVar18 == 0) goto LAB_080fa1ac;
                uVar23 = (this->BlockTables).RD.DecodeLen[0xe];
                if (uVar22 < uVar23) {
                  uVar23 = (this->BlockTables).RD.DecodeLen[0xd];
                  uVar25 = 2;
                  uVar24 = 0xe;
                }
                else {
                  uVar25 = 1;
                  uVar24 = 0xf;
                }
              }
            }
            else {
LAB_080fa1ac:
              uVar25 = 1;
              uVar23 = (this->BlockTables).RD.DecodeLen[0xe];
              uVar24 = 0xf;
            }
            iVar10 = iVar10 + (uVar11 + uVar24 >> 3);
            uVar11 = uVar11 + uVar24 & 7;
            (this->Inp).InAddr = iVar10;
            (this->Inp).InBit = uVar11;
            uVar22 = (this->BlockTables).RD.DecodePos[uVar24] + (uVar22 - uVar23 >> (uVar25 & 0xff))
            ;
            if ((this->BlockTables).RD.MaxNum <= uVar22) {
              uVar22 = 0;
            }
            uVar4 = (this->BlockTables).RD.DecodeNum[uVar22];
          }
          LengthNumber = (int)uVar4;
          uVar23 = (uint)""[LengthNumber];
          uVar22 = ""[LengthNumber] + 2;
          if (uVar23 != 0) {
            pbVar27 = pbVar21 + iVar10;
            bVar1 = *pbVar27;
            bVar2 = pbVar27[2];
            bVar3 = pbVar27[1];
            (this->Inp).InAddr = iVar10 + (uVar11 + uVar23 >> 3);
            (this->Inp).InBit = uVar11 + uVar23 & 7;
            uVar22 = uVar22 + ((((uint)bVar2 | (uint)bVar1 << 0x10 | (uint)bVar3 << 8) >>
                                (8 - uVar11 & 0xff) & 0xffff) >> (0x10 - uVar23 & 0xff));
          }
          if (0x100 < uVar8) {
            if (uVar8 < 0x2000) {
              uVar22 = uVar22 + 1;
            }
            else if (uVar8 < 0x40000) {
              uVar22 = uVar22 + 2;
            }
            else {
              uVar22 = uVar22 + 3;
            }
          }
          uVar11 = *(uint *)local_44;
          iVar10 = *(int *)((int)&this->DestUnpSize + 4);
          uVar23 = uVar7 - uVar8;
          this->OldDistPtr = uVar12 + 1;
          uVar24 = this->MaxWinSize - 0x1001;
          this->OldDist[uVar12 & 3] = uVar8;
          iVar10 = iVar10 - (uint)(uVar11 < uVar22);
          this->LastLength = uVar22;
          this->LastDist = uVar8;
          *(uint *)local_44 = uVar11 - uVar22;
          *(int *)((int)&this->DestUnpSize + 4) = iVar10;
          if (uVar7 < uVar24 && uVar23 < uVar24) {
            this->UnpPtr = uVar22 + uVar7;
            puVar9 = (undefined8 *)(this->Window + uVar23);
            puVar15 = (undefined8 *)(this->Window + uVar7);
            if (7 < uVar22) {
              iVar17 = uVar7 + 0x80;
              uVar12 = uVar22 - 8;
              uVar11 = uVar12 >> 3;
              bVar6 = SBORROW4(uVar23,iVar17);
              iVar10 = uVar23 - iVar17;
              if ((int)uVar23 < iVar17) {
                bVar6 = SBORROW4(uVar7,iVar17 - uVar8);
                iVar10 = uVar7 - (iVar17 - uVar8);
              }
              uVar7 = uVar11 + 1;
              puVar19 = puVar9;
              puVar26 = puVar15;
              if (uVar7 < 2 || iVar10 < 0 != bVar6) {
                do {
                  uVar22 = uVar22 - 8;
                  *(byte *)puVar26 = *(byte *)puVar19;
                  *(byte *)((int)puVar26 + 1) = *(byte *)((int)puVar19 + 1);
                  *(byte *)((int)puVar26 + 2) = *(byte *)((int)puVar19 + 2);
                  *(byte *)((int)puVar26 + 3) = *(byte *)((int)puVar19 + 3);
                  *(byte *)((int)puVar26 + 4) = *(byte *)((int)puVar19 + 4);
                  *(byte *)((int)puVar26 + 5) = *(byte *)((int)puVar19 + 5);
                  *(byte *)((int)puVar26 + 6) = *(byte *)((int)puVar19 + 6);
                  *(byte *)((int)puVar26 + 7) = *(byte *)((int)puVar19 + 7);
                  puVar19 = puVar19 + 1;
                  puVar26 = puVar26 + 1;
                } while (7 < uVar22);
              }
              else {
                uVar22 = (uVar11 - 1 >> 1) + 1;
                puVar19 = puVar15;
                puVar26 = puVar9;
                if (7 < uVar12) {
                  uVar23 = 0;
                  do {
                    uVar30 = *puVar26;
                    uVar31 = puVar26[1];
                    uVar23 = uVar23 + 1;
                    puVar26 = puVar26 + 2;
                    *puVar19 = uVar30;
                    puVar19[1] = uVar31;
                    puVar19 = puVar19 + 2;
                  } while (uVar23 < uVar22);
                  puVar19 = puVar15 + uVar22 * 2;
                  puVar26 = puVar9 + uVar22 * 2;
                  if (uVar7 == uVar22 * 2) goto LAB_080f9e3c;
                }
                *(byte *)puVar19 = *(byte *)puVar26;
                *(byte *)((int)puVar19 + 1) = *(byte *)((int)puVar26 + 1);
                *(byte *)((int)puVar19 + 2) = *(byte *)((int)puVar26 + 2);
                *(byte *)((int)puVar19 + 3) = *(byte *)((int)puVar26 + 3);
                *(byte *)((int)puVar19 + 4) = *(byte *)((int)puVar26 + 4);
                *(byte *)((int)puVar19 + 5) = *(byte *)((int)puVar26 + 5);
                *(byte *)((int)puVar19 + 6) = *(byte *)((int)puVar26 + 6);
                *(byte *)((int)puVar19 + 7) = *(byte *)((int)puVar26 + 7);
              }
LAB_080f9e3c:
              uVar22 = uVar12 + uVar11 * -8;
              puVar9 = puVar9 + uVar7;
              puVar15 = puVar15 + uVar7;
            }
            if (((uVar22 == 0) || (*(byte *)puVar15 = *(byte *)puVar9, uVar22 == 1)) ||
               ((*(byte *)((int)puVar15 + 1) = *(byte *)((int)puVar9 + 1), uVar22 == 2 ||
                (((*(byte *)((int)puVar15 + 2) = *(byte *)((int)puVar9 + 2), uVar22 == 3 ||
                  (*(byte *)((int)puVar15 + 3) = *(byte *)((int)puVar9 + 3), uVar22 == 4)) ||
                 (*(byte *)((int)puVar15 + 4) = *(byte *)((int)puVar9 + 4), uVar22 == 5))))))
            goto LAB_080f97dc;
            *(byte *)((int)puVar15 + 5) = *(byte *)((int)puVar9 + 5);
joined_r0x080f9768:
            if (uVar22 != 7) goto LAB_080f97dc;
            *(byte *)((int)puVar15 + 6) = *(byte *)((int)puVar9 + 6);
            iVar10 = *(int *)((int)&this->DestUnpSize + 4);
          }
          else if (uVar22 != 0) {
            uVar11 = this->MaxWinMask;
            uVar22 = uVar22 + uVar23;
            do {
              uVar11 = uVar11 & uVar23;
              uVar23 = uVar23 + 1;
              this->Window[uVar7] = this->Window[uVar11];
              uVar11 = this->MaxWinMask;
              uVar7 = this->UnpPtr + 1 & uVar11;
              this->UnpPtr = uVar7;
            } while (uVar23 != uVar22);
            goto LAB_080f97dc;
          }
        }
        else {
          uVar22 = (uint)*(byte *)((int)Unpack20::DDecode + Number + 0x93);
          uVar18 = *(byte *)((int)Unpack20::DDecode + Number + 0x8b) + 1;
          if (uVar22 != 0) {
            pbVar27 = pbVar21 + iVar10;
            bVar1 = *pbVar27;
            bVar2 = pbVar27[2];
            bVar3 = pbVar27[1];
            (this->Inp).InAddr = iVar10 + (uVar11 + uVar22 >> 3);
            (this->Inp).InBit = uVar11 + uVar22 & 7;
            uVar18 = uVar18 + ((((uint)bVar2 | (uint)bVar1 << 0x10 | (uint)bVar3 << 8) >>
                                (8 - uVar11 & 0xff) & 0xffff) >> (0x10 - uVar22 & 0xff));
          }
          uVar22 = uVar7 - uVar18;
          uVar8 = this->OldDistPtr;
          uVar11 = *(uint *)local_44;
          iVar10 = *(int *)((int)&this->DestUnpSize + 4);
          uVar23 = this->MaxWinSize - 0x1001;
          this->OldDistPtr = uVar8 + 1;
          this->OldDist[uVar8 & 3] = uVar18;
          this->LastLength = 2;
          this->LastDist = uVar18;
          *(uint *)local_44 = uVar11 - 2;
          *(uint *)((int)&this->DestUnpSize + 4) = iVar10 - (uint)(uVar11 < 2);
          if (uVar22 < uVar23 && uVar7 < uVar23) {
            pbVar21 = this->Window;
            this->UnpPtr = uVar7 + 2;
            pbVar21[uVar7] = pbVar21[uVar22];
            pbVar21[uVar7 + 1] = pbVar21[uVar22 + 1];
            iVar10 = *(int *)((int)&this->DestUnpSize + 4);
          }
          else {
            this->Window[uVar7] = this->Window[uVar22 & this->MaxWinMask];
            uVar7 = this->UnpPtr + 1 & this->MaxWinMask;
            this->UnpPtr = uVar7;
            this->Window[uVar7] = this->Window[this->MaxWinMask & uVar22 + 1];
            iVar10 = *(int *)((int)&this->DestUnpSize + 4);
            this->UnpPtr = this->MaxWinMask & this->UnpPtr + 1;
          }
        }
      }
      else {
        uVar23 = (uint)*(byte *)((int)Unpack20::DDecode + Number + 0x62);
        uVar22 = *(byte *)((int)Unpack20::DDecode + Number + 0x42) + 3;
        if (uVar23 != 0) {
          uVar8 = 8 - uVar11;
          pbVar27 = pbVar21 + iVar10;
          bVar1 = *pbVar27;
          iVar10 = iVar10 + (uVar11 + uVar23 >> 3);
          uVar11 = uVar11 + uVar23 & 7;
          bVar2 = pbVar27[2];
          bVar3 = pbVar27[1];
          (this->Inp).InAddr = iVar10;
          (this->Inp).InBit = uVar11;
          uVar22 = uVar22 + ((((uint)bVar2 | (uint)bVar1 << 0x10 | (uint)bVar3 << 8) >>
                              (uVar8 & 0xff) & 0xffff) >> (0x10 - uVar23 & 0xff));
        }
        pbVar27 = pbVar21 + iVar10;
        uVar18 = (this->BlockTables).DD.QuickBits;
        uVar8 = (this->BlockTables).DD.DecodeLen[uVar18];
        uVar23 = ((uint)pbVar27[2] | (uint)*pbVar27 << 0x10 | (uint)pbVar27[1] << 8) >>
                 (8 - uVar11 & 0xff) & 0xfffe;
        if (uVar23 < uVar8) {
          uVar23 = uVar23 >> (0x10 - uVar18 & 0xff);
          uVar4 = (this->BlockTables).DD.QuickNum[uVar23];
          uVar11 = (this->BlockTables).DD.QuickLen[uVar23] + uVar11;
          iVar10 = iVar10 + (uVar11 >> 3);
          uVar11 = uVar11 & 7;
          (this->Inp).InAddr = iVar10;
          (this->Inp).InBit = uVar11;
        }
        else {
          uVar12 = uVar18 + 1;
          if (uVar12 < 0xf) {
            uVar24 = (this->BlockTables).DD.DecodeLen[uVar18 + 1];
            if (uVar23 < uVar24) {
LAB_080f9a58:
              uVar24 = 0x10 - uVar12;
            }
            else {
              uVar12 = uVar18 + 2;
              if (uVar12 == 0xf) goto LAB_080f9a08;
              uVar25 = (this->BlockTables).DD.DecodeLen[uVar18 + 2];
              uVar8 = uVar24;
              if (uVar23 < uVar25) goto LAB_080f9a58;
              uVar12 = uVar18 + 3;
              if (uVar12 == 0xf) goto LAB_080f9a08;
              uVar24 = (this->BlockTables).DD.DecodeLen[uVar18 + 3];
              uVar8 = uVar25;
              if (uVar23 < uVar24) goto LAB_080f9a58;
              uVar12 = uVar18 + 4;
              if (uVar12 == 0xf) goto LAB_080f9a08;
              uVar25 = (this->BlockTables).DD.DecodeLen[uVar18 + 4];
              uVar8 = uVar24;
              if (uVar23 < uVar25) goto LAB_080f9a58;
              uVar12 = uVar18 + 5;
              if (uVar12 == 0xf) goto LAB_080f9a08;
              uVar24 = (this->BlockTables).DD.DecodeLen[uVar18 + 5];
              uVar8 = uVar25;
              if (uVar23 < uVar24) goto LAB_080f9a58;
              uVar12 = uVar18 + 6;
              if (uVar12 == 0xf) goto LAB_080f9a08;
              uVar25 = (this->BlockTables).DD.DecodeLen[uVar18 + 6];
              uVar8 = uVar24;
              if (uVar23 < uVar25) goto LAB_080f9a58;
              uVar12 = uVar18 + 7;
              if (uVar12 == 0xf) goto LAB_080f9a08;
              uVar24 = (this->BlockTables).DD.DecodeLen[uVar18 + 7];
              uVar8 = uVar25;
              if (uVar23 < uVar24) goto LAB_080f9a58;
              uVar12 = uVar18 + 8;
              if (uVar12 == 0xf) goto LAB_080f9a08;
              uVar25 = (this->BlockTables).DD.DecodeLen[uVar18 + 8];
              uVar8 = uVar24;
              if (uVar23 < uVar25) goto LAB_080f9a58;
              uVar12 = uVar18 + 9;
              if (uVar12 == 0xf) goto LAB_080f9a08;
              uVar24 = (this->BlockTables).DD.DecodeLen[uVar18 + 9];
              uVar8 = uVar25;
              if (uVar23 < uVar24) goto LAB_080f9a58;
              uVar12 = uVar18 + 10;
              if (uVar12 == 0xf) goto LAB_080f9a08;
              uVar25 = (this->BlockTables).DD.DecodeLen[uVar18 + 10];
              uVar8 = uVar24;
              if (uVar23 < uVar25) goto LAB_080f9a58;
              uVar12 = uVar18 + 0xb;
              if (uVar12 == 0xf) goto LAB_080f9a08;
              uVar24 = (this->BlockTables).DD.DecodeLen[uVar18 + 0xb];
              uVar8 = uVar25;
              if (uVar23 < uVar24) goto LAB_080f9a58;
              uVar12 = uVar18 + 0xc;
              if (uVar12 == 0xf) goto LAB_080f9a08;
              uVar25 = (this->BlockTables).DD.DecodeLen[uVar18 + 0xc];
              uVar8 = uVar24;
              if (uVar23 < uVar25) goto LAB_080f9a58;
              uVar12 = uVar18 + 0xd;
              if (uVar12 == 0xf) goto LAB_080f9a08;
              uVar24 = (this->BlockTables).DD.DecodeLen[uVar18 + 0xd];
              uVar8 = uVar25;
              if (uVar23 < uVar24) goto LAB_080f9a58;
              uVar12 = uVar18 + 0xe;
              if (uVar12 == 0xf) goto LAB_080f9a08;
              uVar8 = uVar24;
              if (uVar23 < (this->BlockTables).DD.DecodeLen[uVar18 + 0xe]) goto LAB_080f9a58;
              if (uVar18 == 0) goto LAB_080f9a08;
              uVar8 = (this->BlockTables).DD.DecodeLen[0xe];
              if (uVar23 < uVar8) {
                uVar24 = 2;
                uVar12 = 0xe;
                uVar8 = (this->BlockTables).DD.DecodeLen[0xd];
              }
              else {
                uVar24 = 1;
                uVar12 = 0xf;
              }
            }
          }
          else {
LAB_080f9a08:
            uVar24 = 1;
            uVar12 = 0xf;
            uVar8 = (this->BlockTables).DD.DecodeLen[0xe];
          }
          iVar10 = iVar10 + (uVar11 + uVar12 >> 3);
          uVar11 = uVar11 + uVar12 & 7;
          (this->Inp).InAddr = iVar10;
          (this->Inp).InBit = uVar11;
          pDVar14 = &(this->BlockTables).DD;
          uVar23 = (this->BlockTables).DD.DecodePos[uVar12] + (uVar23 - uVar8 >> (uVar24 & 0xff));
          if (pDVar14->MaxNum <= uVar23) {
            uVar23 = 0;
          }
          uVar4 = pDVar14->DecodeNum[uVar23];
        }
        DistNumber = (int)uVar4;
        uVar23 = (uint)""[DistNumber];
        uVar8 = Unpack20::DDecode[DistNumber] + 1;
        if (uVar23 != 0) {
          pbVar27 = pbVar21 + iVar10;
          bVar1 = *pbVar27;
          bVar2 = pbVar27[2];
          bVar3 = pbVar27[1];
          (this->Inp).InAddr = iVar10 + (uVar11 + uVar23 >> 3);
          (this->Inp).InBit = uVar11 + uVar23 & 7;
          uVar8 = uVar8 + ((((uint)bVar2 | (uint)bVar1 << 0x10 | (uint)bVar3 << 8) >>
                            (8 - uVar11 & 0xff) & 0xffff) >> (0x10 - uVar23 & 0xff));
        }
        if (0x1fff < uVar8) {
          if (uVar8 < 0x40000) {
            uVar22 = uVar22 + 1;
          }
          else {
            uVar22 = uVar22 + 2;
          }
        }
        uVar24 = uVar7 - uVar8;
        uVar12 = this->OldDistPtr;
        uVar11 = *(uint *)local_44;
        uVar23 = this->MaxWinSize - 0x1001;
        iVar10 = *(int *)((int)&this->DestUnpSize + 4) - (uint)(uVar11 < uVar22);
        this->OldDistPtr = uVar12 + 1;
        this->OldDist[uVar12 & 3] = uVar8;
        this->LastLength = uVar22;
        this->LastDist = uVar8;
        *(uint *)local_44 = uVar11 - uVar22;
        *(int *)((int)&this->DestUnpSize + 4) = iVar10;
        if (uVar7 < uVar23 && uVar24 < uVar23) {
          this->UnpPtr = uVar22 + uVar7;
          puVar9 = (undefined8 *)(this->Window + uVar24);
          puVar15 = (undefined8 *)(this->Window + uVar7);
          if (7 < uVar22) {
            iVar17 = uVar7 + 0x80;
            uVar23 = uVar22 - 8;
            uVar11 = uVar23 >> 3;
            bVar6 = SBORROW4(uVar24,iVar17);
            iVar10 = uVar24 - iVar17;
            if ((int)uVar24 < iVar17) {
              bVar6 = SBORROW4(uVar7,iVar17 - uVar8);
              iVar10 = uVar7 - (iVar17 - uVar8);
            }
            uVar7 = uVar11 + 1;
            puVar19 = puVar9;
            puVar26 = puVar15;
            if (uVar7 < 2 || iVar10 < 0 != bVar6) {
              do {
                uVar22 = uVar22 - 8;
                *(byte *)puVar26 = *(byte *)puVar19;
                *(byte *)((int)puVar26 + 1) = *(byte *)((int)puVar19 + 1);
                *(byte *)((int)puVar26 + 2) = *(byte *)((int)puVar19 + 2);
                *(byte *)((int)puVar26 + 3) = *(byte *)((int)puVar19 + 3);
                *(byte *)((int)puVar26 + 4) = *(byte *)((int)puVar19 + 4);
                *(byte *)((int)puVar26 + 5) = *(byte *)((int)puVar19 + 5);
                *(byte *)((int)puVar26 + 6) = *(byte *)((int)puVar19 + 6);
                *(byte *)((int)puVar26 + 7) = *(byte *)((int)puVar19 + 7);
                puVar19 = puVar19 + 1;
                puVar26 = puVar26 + 1;
              } while (7 < uVar22);
            }
            else {
              uVar22 = (uVar11 - 1 >> 1) + 1;
              puVar19 = puVar15;
              puVar26 = puVar9;
              if (7 < uVar23) {
                uVar8 = 0;
                do {
                  uVar30 = *puVar26;
                  uVar31 = puVar26[1];
                  uVar8 = uVar8 + 1;
                  puVar26 = puVar26 + 2;
                  *puVar19 = uVar30;
                  puVar19[1] = uVar31;
                  puVar19 = puVar19 + 2;
                } while (uVar8 < uVar22);
                puVar19 = puVar15 + uVar22 * 2;
                puVar26 = puVar9 + uVar22 * 2;
                if (uVar22 * 2 - uVar7 == 0) goto LAB_080f96f4;
              }
              *(byte *)puVar19 = *(byte *)puVar26;
              *(byte *)((int)puVar19 + 1) = *(byte *)((int)puVar26 + 1);
              *(byte *)((int)puVar19 + 2) = *(byte *)((int)puVar26 + 2);
              *(byte *)((int)puVar19 + 3) = *(byte *)((int)puVar26 + 3);
              *(byte *)((int)puVar19 + 4) = *(byte *)((int)puVar26 + 4);
              *(byte *)((int)puVar19 + 5) = *(byte *)((int)puVar26 + 5);
              *(byte *)((int)puVar19 + 6) = *(byte *)((int)puVar26 + 6);
              *(byte *)((int)puVar19 + 7) = *(byte *)((int)puVar26 + 7);
            }
LAB_080f96f4:
            uVar22 = uVar23 + uVar11 * -8;
            puVar9 = puVar9 + uVar7;
            puVar15 = puVar15 + uVar7;
          }
          if ((((uVar22 == 0) || (*(byte *)puVar15 = *(byte *)puVar9, uVar22 == 1)) ||
              (*(byte *)((int)puVar15 + 1) = *(byte *)((int)puVar9 + 1), uVar22 == 2)) ||
             (((*(byte *)((int)puVar15 + 2) = *(byte *)((int)puVar9 + 2), uVar22 == 3 ||
               (*(byte *)((int)puVar15 + 3) = *(byte *)((int)puVar9 + 3), uVar22 == 4)) ||
              (*(byte *)((int)puVar15 + 4) = *(byte *)((int)puVar9 + 4), uVar22 == 5))))
          goto LAB_080f97dc;
          *(byte *)((int)puVar15 + 5) = *(byte *)((int)puVar9 + 5);
          goto joined_r0x080f9768;
        }
        if (uVar22 != 0) {
          uVar11 = this->MaxWinMask;
          uVar22 = uVar22 + uVar24;
          do {
            uVar11 = uVar11 & uVar24;
            uVar24 = uVar24 + 1;
            this->Window[uVar7] = this->Window[uVar11];
            uVar11 = this->MaxWinMask;
            uVar7 = this->UnpPtr + 1 & uVar11;
            this->UnpPtr = uVar7;
          } while (uVar24 != uVar22);
LAB_080f97dc:
          iVar10 = *(int *)((int)&this->DestUnpSize + 4);
        }
      }
    }
    else {
      iVar17 = (this->Inp).InBit;
      iVar20 = this->UnpCurChannel;
      pbVar27 = (this->Inp).InBuf + iVar10;
      uVar18 = this->MD[iVar20].QuickBits;
      uVar28 = this->MD[iVar20].DecodeLen[uVar18];
      uVar22 = ((uint)pbVar27[2] | (uint)*pbVar27 << 0x10 | (uint)pbVar27[1] << 8) >>
               (8U - iVar17 & 0xff) & 0xfffe;
      if (uVar22 < uVar28) {
        uVar22 = uVar22 >> (0x10 - uVar18 & 0xff);
        uVar11 = (uint)this->MD[iVar20].QuickLen[uVar22] + iVar17;
        (this->Inp).InAddr = iVar10 + (uVar11 >> 3);
        (this->Inp).InBit = uVar11 & 7;
        uVar4 = this->MD[iVar20].QuickNum[uVar22];
      }
      else {
        uVar11 = uVar18 + 1;
        if (uVar11 < 0xf) {
          if (uVar22 < this->MD[iVar20].DecodeLen[uVar18 + 1]) {
            uVar23 = 0x10 - uVar11;
          }
          else {
            uVar11 = uVar18 + 2;
            if (uVar11 == 0xf) {
LAB_080f9a60:
              uVar23 = 1;
              uVar28 = this->MD[iVar20].DecodeLen[0xe];
            }
            else if (uVar22 < this->MD[iVar20].DecodeLen[uVar18 + 2]) {
              uVar23 = 0x10 - uVar11;
              uVar28 = this->MD[iVar20].DecodeLen[uVar18 + 1];
            }
            else {
              uVar11 = uVar18 + 3;
              if (uVar11 == 0xf) goto LAB_080f9a60;
              if (uVar22 < this->MD[iVar20].DecodeLen[uVar18 + 3]) {
                uVar23 = 0x10 - uVar11;
                uVar28 = this->MD[iVar20].DecodeLen[uVar18 + 2];
              }
              else {
                uVar11 = uVar18 + 4;
                if (uVar11 == 0xf) goto LAB_080f9a60;
                if (uVar22 < this->MD[iVar20].DecodeLen[uVar18 + 4]) {
                  uVar23 = 0x10 - uVar11;
                  uVar28 = this->MD[iVar20].DecodeLen[uVar18 + 3];
                }
                else {
                  uVar11 = uVar18 + 5;
                  if (uVar11 == 0xf) {
LAB_080f9828:
                    uVar23 = 1;
                    uVar28 = this->MD[iVar20].DecodeLen[0xe];
                  }
                  else if (uVar22 < this->MD[iVar20].DecodeLen[uVar18 + 5]) {
                    uVar23 = 0x10 - uVar11;
                    uVar28 = this->MD[iVar20].DecodeLen[uVar18 + 4];
                  }
                  else {
                    uVar11 = uVar18 + 6;
                    if (uVar11 == 0xf) goto LAB_080f9828;
                    if (uVar22 < this->MD[iVar20].DecodeLen[uVar18 + 6]) {
                      uVar23 = 0x10 - uVar11;
                      uVar28 = this->MD[iVar20].DecodeLen[uVar18 + 5];
                    }
                    else {
                      uVar11 = uVar18 + 7;
                      if (uVar11 == 0xf) goto LAB_080f9828;
                      if (uVar22 < this->MD[iVar20].DecodeLen[uVar18 + 7]) {
                        uVar23 = 0x10 - uVar11;
                        uVar28 = this->MD[iVar20].DecodeLen[uVar18 + 6];
                      }
                      else {
                        uVar11 = uVar18 + 8;
                        if (uVar11 == 0xf) goto LAB_080f9828;
                        if (uVar22 < this->MD[iVar20].DecodeLen[uVar18 + 8]) {
                          uVar23 = 0x10 - uVar11;
                          uVar28 = this->MD[iVar20].DecodeLen[uVar18 + 7];
                        }
                        else {
                          uVar11 = uVar18 + 9;
                          if (uVar11 == 0xf) goto LAB_080f9828;
                          if (uVar22 < this->MD[iVar20].DecodeLen[uVar18 + 9]) {
                            uVar23 = 0x10 - uVar11;
                            uVar28 = this->MD[iVar20].DecodeLen[uVar18 + 8];
                          }
                          else {
                            uVar11 = uVar18 + 10;
                            if (uVar11 == 0xf) goto LAB_080f9828;
                            if (uVar22 < this->MD[iVar20].DecodeLen[uVar18 + 10]) {
                              uVar23 = 0x10 - uVar11;
                              uVar28 = this->MD[iVar20].DecodeLen[uVar18 + 9];
                            }
                            else {
                              uVar11 = uVar18 + 0xb;
                              if (uVar11 == 0xf) goto LAB_080f9828;
                              if (uVar22 < this->MD[iVar20].DecodeLen[uVar18 + 0xb]) {
                                uVar23 = 0x10 - uVar11;
                                uVar28 = this->MD[iVar20].DecodeLen[uVar18 + 10];
                              }
                              else {
                                uVar11 = uVar18 + 0xc;
                                if (uVar11 == 0xf) goto LAB_080f9828;
                                if (uVar22 < this->MD[iVar20].DecodeLen[uVar18 + 0xc]) {
                                  uVar23 = 0x10 - uVar11;
                                  uVar28 = this->MD[iVar20].DecodeLen[uVar18 + 0xb];
                                }
                                else {
                                  uVar11 = uVar18 + 0xd;
                                  if (uVar11 == 0xf) goto LAB_080f9828;
                                  if (uVar22 < this->MD[iVar20].DecodeLen[uVar18 + 0xd]) {
                                    uVar23 = 0x10 - uVar11;
                                    uVar28 = this->MD[iVar20].DecodeLen[uVar18 + 0xc];
                                  }
                                  else {
                                    uVar11 = uVar18 + 0xe;
                                    if (uVar11 == 0xf) goto LAB_080f9828;
                                    if (uVar22 < this->MD[iVar20].DecodeLen[uVar18 + 0xe]) {
                                      uVar23 = 0x10 - uVar11;
                                      uVar28 = this->MD[iVar20].DecodeLen[uVar18 + 0xd];
                                    }
                                    else if (uVar18 == 0) {
                                      uVar23 = 1;
                                      uVar11 = 0xf;
                                      uVar28 = this->MD[iVar20].DecodeLen[0xe];
                                    }
                                    else {
                                      uVar28 = this->MD[iVar20].DecodeLen[0xe];
                                      if (uVar22 < uVar28) {
                                        uVar23 = 2;
                                        uVar28 = this->MD[iVar20].DecodeLen[0xd];
                                        uVar11 = 0xe;
                                      }
                                      else {
                                        uVar23 = 1;
                                        uVar11 = 0xf;
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
          }
        }
        else {
          uVar23 = 1;
          uVar28 = this->MD[iVar20].DecodeLen[0xe];
          uVar11 = 0xf;
        }
        (this->Inp).InAddr = iVar10 + (iVar17 + uVar11 >> 3);
        (this->Inp).InBit = iVar17 + uVar11 & 7;
        uVar22 = this->MD[iVar20].DecodePos[uVar11] + (uVar22 - uVar28 >> (uVar23 & 0xff));
        if (this->MD[iVar20].MaxNum <= uVar22) {
          uVar22 = 0;
        }
        uVar4 = this->MD[iVar20].DecodeNum[uVar22];
      }
      if (uVar4 == 0x100) {
LAB_080f97cc:
        bVar6 = ReadTables20(this);
        if (bVar6) goto LAB_080f97dc;
        break;
      }
      pbVar21 = this->Window;
      this->UnpPtr = uVar7 + 1;
      bVar5 = DecodeAudio(this,(uint)uVar4);
      pbVar21[uVar7] = bVar5;
      iVar10 = this->UnpCurChannel + 1;
      this->UnpCurChannel = iVar10;
      if (iVar10 == this->UnpChannels) {
        this->UnpCurChannel = 0;
      }
LAB_080f8f30:
      iVar10 = *(int *)((int)&this->DestUnpSize + 4) - (uint)(*(int *)local_44 == 0);
      *(int *)local_44 = *(int *)local_44 + -1;
      *(int *)((int)&this->DestUnpSize + 4) = iVar10;
    }
  }
  iVar10 = (this->Inp).InAddr;
  sVar16 = this->ReadTop;
LAB_080f8f58:
  if (iVar10 + 4 < (int)sVar16) {
    if (this->UnpAudioBlock == 0) {
      uVar18 = DecodeNumber(this,&this->Inp,&(this->BlockTables).LD);
      if (uVar18 != 0x10d) goto LAB_080f8f9c;
    }
    else {
      uVar18 = DecodeNumber(this,&this->Inp,this->MD + this->UnpCurChannel);
      if (uVar18 != 0x100) goto LAB_080f8f9c;
    }
    ReadTables20(this);
  }
LAB_080f8f9c:
  uVar7 = this->UnpPtr;
  uVar22 = this->WrPtr;
  if ((uVar7 == uVar22) || (this->UnpSomeRead = true, uVar22 <= uVar7)) {
    ComprDataIO::UnpWrite(this->UnpIO,this->Window + uVar22,uVar7 - uVar22);
  }
  else {
    ComprDataIO::UnpWrite(this->UnpIO,this->Window + uVar22,this->MaxWinMask & -uVar22);
    ComprDataIO::UnpWrite(this->UnpIO,this->Window,this->UnpPtr);
    this->UnpAllBuf = true;
  }
  this->WrPtr = this->UnpPtr;
  return;
}


