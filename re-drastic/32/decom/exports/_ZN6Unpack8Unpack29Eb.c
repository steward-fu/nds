/*
 * Ghidra decompilation
 *
 * Function : _ZN6Unpack8Unpack29Eb
 * Address  : 080fcd54
 * Program  : drastic
 */


/* WARNING: Type propagation algorithm not settling */
/* DWARF original prototype: void Unpack29(Unpack * this, bool Solid)
   Local variable NextCh:int[r0:4] conflicts with parameter, skipped.
   Local variable Ch_2:int[r0:4] conflicts with parameter, skipped. */

void __thiscall Unpack::Unpack29(Unpack *this,bool Solid)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  ushort uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  byte *pbVar9;
  undefined8 *puVar10;
  byte *Dest_1;
  int ReadCode;
  int Ch;
  int LengthNumber;
  int Ch_1;
  int Length;
  int Ch_3;
  int LowDist;
  int iVar11;
  int iVar12;
  uint uVar13;
  uint Pos_1;
  undefined8 *puVar14;
  byte *Dest;
  int Length_2;
  int Dist;
  uint BitField;
  uint Pos;
  size_t sVar15;
  uint Bits;
  uint BitField_1;
  int DistNumber;
  undefined (*pauVar16) [16];
  size_t sVar17;
  uint Code;
  uint Code_1;
  uint uVar18;
  int iVar19;
  uint I_1;
  int Number;
  uint I_2;
  uint Distance;
  size_t SrcPtr;
  byte *Src;
  uint uVar20;
  int BitLength;
  byte *pbVar21;
  uint uVar22;
  uint Distance_1;
  size_t __n;
  ModelPPM *this_00;
  uint Distance_2;
  int iVar23;
  int iVar24;
  uint *puVar25;
  int Length_1;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  DecodeTable *pDVar29;
  undefined (*pauVar30) [16];
  byte *Src_1;
  int Slot;
  uint uVar31;
  uint uVar32;
  bool bVar33;
  undefined auVar34 [16];
  undefined auVar35 [16];
  undefined auVar36 [16];
  
  if (Unpack29::DDecode[1] == 0) {
    puVar25 = (uint *)0x8145214;
    Dist = 0;
    BitLength = 0;
    Slot = 0;
    do {
      puVar25 = puVar25 + 1;
      uVar20 = *puVar25;
      if (0 < (int)uVar20) {
        iVar24 = 1 << (BitLength & 0xffU);
        uVar18 = (Slot << 0x1f) >> 0x1f & 3;
        if (uVar20 <= uVar18) {
          uVar18 = uVar20;
        }
        uVar8 = uVar20;
        if (((int)uVar20 < 8) || (iVar23 = Dist, iVar11 = Slot, uVar8 = uVar18, uVar18 != 0)) {
          iVar23 = Dist + iVar24;
          Unpack29::DDecode[Slot] = Dist;
          iVar11 = Slot + 1;
          uVar18 = uVar8;
          if (uVar8 != 1) {
            Unpack29::DDecode[iVar11] = iVar23;
            iVar23 = iVar23 + iVar24;
            iVar11 = Slot + 2;
            if (uVar8 != 2) {
              Unpack29::DDecode[iVar11] = iVar23;
              iVar11 = Slot + 3;
              iVar23 = iVar23 + iVar24;
              if (uVar8 != 3) {
                Unpack29::DDecode[iVar11] = iVar23;
                iVar11 = Slot + 4;
                iVar23 = iVar23 + iVar24;
                if (uVar8 != 4) {
                  Unpack29::DDecode[iVar11] = iVar23;
                  iVar11 = Slot + 5;
                  iVar23 = iVar23 + iVar24;
                  if (uVar8 != 5) {
                    Unpack29::DDecode[iVar11] = iVar23;
                    iVar11 = Slot + 6;
                    iVar23 = iVar23 + iVar24;
                    if (uVar8 != 6) {
                      Unpack29::DDecode[iVar11] = iVar23;
                      iVar11 = Slot + 7;
                      iVar23 = iVar23 + iVar24;
                      uVar18 = 7;
                    }
                  }
                }
              }
            }
          }
          if (uVar20 != uVar8) goto LAB_080fce6c;
        }
        else {
LAB_080fce6c:
          iVar12 = ((uVar20 - uVar8) - 4 >> 2) + 1;
          iVar1 = iVar12 * 4;
          if (2 < (uVar20 - 1) - uVar8) {
            iVar6 = iVar23 + iVar24;
            iVar19 = Slot + uVar8;
            auVar34._4_4_ = iVar24 << 2;
            auVar34._0_4_ = iVar24 << 2;
            auVar34._8_8_ = 0;
            auVar34 = auVar34 & auVar34 << 0x40;
            iVar7 = iVar6 + iVar24;
            auVar35._4_4_ = iVar6;
            auVar35._0_4_ = iVar23;
            auVar35._8_4_ = iVar7;
            auVar35._12_4_ = iVar7 + iVar24;
            *(ulonglong *)(Unpack29::DDecode + iVar19) = CONCAT44(iVar6,iVar23);
            *(ulonglong *)(Unpack29::DDecode + iVar19 + 2) = CONCAT44(iVar7 + iVar24,iVar7);
            auVar35 = VectorAdd(auVar34,auVar35,4);
            if (iVar12 != 1) {
              auVar36 = VectorAdd(auVar34,auVar35,4);
              *(longlong *)(Unpack29::DDecode + iVar19 + 4) = auVar35._0_8_;
              *(longlong *)(Unpack29::DDecode + iVar19 + 6) = auVar35._8_8_;
              if (iVar12 != 2) {
                auVar35 = VectorAdd(auVar36,auVar34,4);
                *(longlong *)(Unpack29::DDecode + iVar19 + 8) = auVar36._0_8_;
                *(longlong *)(Unpack29::DDecode + iVar19 + 10) = auVar36._8_8_;
                if (iVar12 != 3) {
                  auVar36 = VectorAdd(auVar35,auVar34,4);
                  *(longlong *)(Unpack29::DDecode + iVar19 + 0xc) = auVar35._0_8_;
                  *(longlong *)(Unpack29::DDecode + iVar19 + 0xe) = auVar35._8_8_;
                  if (iVar12 != 4) {
                    auVar35 = VectorAdd(auVar36,auVar34,4);
                    *(longlong *)(Unpack29::DDecode + iVar19 + 0x10) = auVar36._0_8_;
                    *(longlong *)(Unpack29::DDecode + iVar19 + 0x12) = auVar36._8_8_;
                    if (iVar12 != 5) {
                      auVar36 = VectorAdd(auVar35,auVar34,4);
                      *(longlong *)(Unpack29::DDecode + iVar19 + 0x14) = auVar35._0_8_;
                      *(longlong *)(Unpack29::DDecode + iVar19 + 0x16) = auVar35._8_8_;
                      if (iVar12 != 6) {
                        auVar35 = VectorAdd(auVar36,auVar34,4);
                        *(longlong *)(Unpack29::DDecode + iVar19 + 0x18) = auVar36._0_8_;
                        *(longlong *)(Unpack29::DDecode + iVar19 + 0x1a) = auVar36._8_8_;
                        if (iVar12 != 7) {
                          auVar36 = VectorAdd(auVar35,auVar34,4);
                          *(longlong *)(Unpack29::DDecode + iVar19 + 0x1c) = auVar35._0_8_;
                          *(longlong *)(Unpack29::DDecode + iVar19 + 0x1e) = auVar35._8_8_;
                          if (iVar12 != 8) {
                            auVar35 = VectorAdd(auVar36,auVar34,4);
                            *(longlong *)(Unpack29::DDecode + iVar19 + 0x20) = auVar36._0_8_;
                            *(longlong *)(Unpack29::DDecode + iVar19 + 0x22) = auVar36._8_8_;
                            if (iVar12 != 9) {
                              auVar36 = VectorAdd(auVar35,auVar34,4);
                              *(longlong *)(Unpack29::DDecode + iVar19 + 0x24) = auVar35._0_8_;
                              *(longlong *)(Unpack29::DDecode + iVar19 + 0x26) = auVar35._8_8_;
                              if (iVar12 != 10) {
                                auVar35 = VectorAdd(auVar36,auVar34,4);
                                *(longlong *)(Unpack29::DDecode + iVar19 + 0x28) = auVar36._0_8_;
                                *(longlong *)(Unpack29::DDecode + iVar19 + 0x2a) = auVar36._8_8_;
                                if (iVar12 != 0xb) {
                                  auVar36 = VectorAdd(auVar35,auVar34,4);
                                  *(longlong *)(Unpack29::DDecode + iVar19 + 0x2c) = auVar35._0_8_;
                                  *(longlong *)(Unpack29::DDecode + iVar19 + 0x2e) = auVar35._8_8_;
                                  if (iVar12 != 0xc) {
                                    auVar35 = VectorAdd(auVar36,auVar34,4);
                                    *(longlong *)(Unpack29::DDecode + iVar19 + 0x30) = auVar36._0_8_
                                    ;
                                    *(longlong *)(Unpack29::DDecode + iVar19 + 0x32) = auVar36._8_8_
                                    ;
                                    if (iVar12 != 0xd) {
                                      auVar36 = VectorAdd(auVar35,auVar34,4);
                                      *(longlong *)(Unpack29::DDecode + iVar19 + 0x34) =
                                           auVar35._0_8_;
                                      *(longlong *)(Unpack29::DDecode + iVar19 + 0x36) =
                                           auVar35._8_8_;
                                      if (iVar12 != 0xe) {
                                        auVar34 = VectorAdd(auVar36,auVar34,4);
                                        *(longlong *)(Unpack29::DDecode + iVar19 + 0x38) =
                                             auVar36._0_8_;
                                        *(longlong *)(Unpack29::DDecode + iVar19 + 0x3a) =
                                             auVar36._8_8_;
                                        if (iVar12 != 0xf) {
                                          *(longlong *)(Unpack29::DDecode + iVar19 + 0x3c) =
                                               auVar34._0_8_;
                                          *(longlong *)(Unpack29::DDecode + iVar19 + 0x3e) =
                                               auVar34._8_8_;
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
            iVar23 = iVar24 * iVar1 + iVar23;
            iVar11 = iVar11 + iVar1;
            uVar18 = uVar18 + iVar1;
            if (iVar1 == uVar20 - uVar8) goto LAB_080fd054;
          }
          Unpack29::DDecode[iVar11] = iVar23;
          if ((int)(uVar18 + 1) < (int)uVar20) {
            Unpack29::DDecode[iVar11 + 1] = iVar23 + iVar24;
            if ((int)(uVar18 + 2) < (int)uVar20) {
              Unpack29::DDecode[iVar11 + 2] = iVar23 + iVar24 + iVar24;
            }
          }
        }
LAB_080fd054:
        memset(Unpack29::DBits + Slot,BitLength,uVar20);
        Dist = iVar24 * (uVar20 - 1) + Dist + iVar24;
        Slot = Slot + uVar20;
      }
      BitLength = BitLength + 1;
    } while (puVar25 != (uint *)(Unpack29::DBitLengthCounts + 0x12));
  }
  this->FileExtracted = true;
  if (this->Suspended == false) {
    UnpInitData(this,Solid);
    bVar33 = UnpReadBuf30(this);
    if ((!bVar33) ||
       (((!Solid || (this->TablesRead == false)) && (bVar33 = ReadTables30(this), !bVar33)))) {
      return;
    }
  }
  iVar24 = (this->Inp).InAddr;
  uVar18 = this->UnpPtr;
  uVar20 = this->MaxWinMask;
LAB_080fd0cc:
  do {
    while( true ) {
      uVar18 = uVar18 & uVar20;
      this->UnpPtr = uVar18;
      if (this->ReadBorder < iVar24) {
        sVar17 = this->ReadTop;
        __n = sVar17 - iVar24;
        if ((int)__n < 0) goto LAB_080fdd38;
        if (0x4000 < iVar24) {
          if (__n != 0) {
            pbVar9 = (this->Inp).InBuf;
            memmove(pbVar9,pbVar9 + iVar24,__n);
          }
          (this->Inp).InAddr = 0;
          this->ReadTop = __n;
          sVar17 = __n;
        }
        iVar24 = ComprDataIO::UnpRead(this->UnpIO,(this->Inp).InBuf + sVar17,0x8000 - sVar17);
        if (iVar24 < 1) {
          this->ReadBorder = this->ReadTop + -0x1e;
          if (iVar24 == -1) goto LAB_080fdd38;
        }
        else {
          iVar24 = iVar24 + this->ReadTop;
          this->ReadTop = iVar24;
          this->ReadBorder = iVar24 + -0x1e;
        }
        uVar18 = this->UnpPtr;
        uVar20 = this->MaxWinMask;
      }
      uVar8 = this->WrPtr;
      bVar33 = uVar18 <= uVar8;
      if (uVar8 != uVar18) {
        bVar33 = 0x103 < (uVar20 & uVar8 - uVar18);
      }
      if (!bVar33) {
        UnpWriteBuf30(this);
        iVar24 = *(int *)((int)&this->DestUnpSize + 4);
        iVar23 = *(int *)((int)&this->WrittenFileSize + 4);
        bVar33 = *(uint *)&this->DestUnpSize < *(uint *)&this->WrittenFileSize;
        if ((int)(iVar24 - (iVar23 + (uint)bVar33)) < 0 !=
            (SBORROW4(iVar24,iVar23) != SBORROW4(iVar24 - iVar23,(uint)bVar33))) {
          return;
        }
        if (this->Suspended != false) {
          this->FileExtracted = false;
          return;
        }
      }
      if (this->UnpBlockType != 1) break;
      this_00 = &this->PPM;
      iVar24 = ModelPPM::DecodeChar(this_00);
      if (iVar24 == -1) goto LAB_080fdd28;
      if (iVar24 == this->PPMEscChar) {
        iVar23 = ModelPPM::DecodeChar(this_00);
        if (iVar23 == -1) {
LAB_080fdd28:
          ModelPPM::CleanUp(this_00);
          this->UnpBlockType = 0;
LAB_080fdd38:
          UnpWriteBuf30(this);
          return;
        }
        if (iVar23 == 0) {
          bVar33 = ReadTables30(this);
joined_r0x080fdf50:
          if (bVar33) goto LAB_080fd854;
          goto LAB_080fdd38;
        }
        if (iVar23 == 2) goto LAB_080fdd38;
        if (iVar23 == 3) {
          bVar33 = ReadVMCodePPM(this);
          goto joined_r0x080fdf50;
        }
        if (iVar23 != 4) {
          if (iVar23 != 5) goto LAB_080fd94c;
          iVar24 = SafePPMDecodeChar(this);
          if (iVar24 != -1) {
            uVar26 = iVar24 + 4;
            uVar28 = 1;
            goto LAB_080fdc48;
          }
          goto LAB_080fdd38;
        }
        iVar24 = 0;
        iVar23 = 0;
        while( true ) {
          uVar20 = ModelPPM::DecodeChar(this_00);
          if (uVar20 == 0xffffffff) goto LAB_080fdd28;
          bVar33 = iVar24 == 3;
          iVar24 = iVar24 + 1;
          if (bVar33) break;
          iVar23 = (uVar20 & 0xff) + iVar23 * 0x100;
        }
        CopyString(this,(uVar20 & 0xff) + 0x20,iVar23 + 2);
        iVar24 = (this->Inp).InAddr;
        uVar18 = this->UnpPtr;
        uVar20 = this->MaxWinMask;
      }
      else {
LAB_080fd94c:
        sVar15 = this->UnpPtr;
        this->UnpPtr = sVar15 + 1;
        this->Window[sVar15] = (byte)iVar24;
        iVar24 = (this->Inp).InAddr;
        uVar18 = this->UnpPtr;
        uVar20 = this->MaxWinMask;
      }
    }
    iVar24 = (this->Inp).InAddr;
    iVar23 = (this->Inp).InBit;
    pbVar9 = (this->Inp).InBuf;
    uVar26 = (this->BlockTables).LD.QuickBits;
    pbVar21 = pbVar9 + iVar24;
    uVar20 = ((uint)pbVar21[2] | (uint)*pbVar21 << 0x10 | (uint)pbVar21[1] << 8) >>
             (8U - iVar23 & 0xff) & 0xfffe;
    if (uVar20 < this->OldDist[uVar26 + 0x11]) {
      uVar20 = uVar20 >> (0x10 - uVar26 & 0xff);
      uVar5 = (this->BlockTables).LD.QuickNum[uVar20];
      uVar18 = (uint)(this->BlockTables).LD.QuickLen[uVar20] + iVar23;
      iVar24 = iVar24 + (uVar18 >> 3);
      uVar18 = uVar18 & 7;
      (this->Inp).InAddr = iVar24;
      (this->Inp).InBit = uVar18;
    }
    else {
      uVar8 = uVar26 + 1;
      if (uVar8 < 0xf) {
        uVar13 = this->OldDist[uVar26 + 0x11];
        if (uVar20 < this->OldDist[uVar26 + 0x12]) {
LAB_080fd974:
          uVar27 = 0x10 - uVar8;
        }
        else {
          uVar8 = uVar26 + 2;
          if (uVar8 == 0xf) goto LAB_080fd864;
          uVar13 = this->OldDist[uVar26 + 0x12];
          if (uVar20 < this->OldDist[uVar26 + 0x13]) goto LAB_080fd974;
          uVar8 = uVar26 + 3;
          if (uVar8 == 0xf) goto LAB_080fd864;
          uVar13 = this->OldDist[uVar26 + 0x13];
          if (uVar20 < this->OldDist[uVar26 + 0x14]) goto LAB_080fd974;
          uVar8 = uVar26 + 4;
          if (uVar8 == 0xf) goto LAB_080fd864;
          uVar13 = this->OldDist[uVar26 + 0x14];
          if (uVar20 < this->OldDist[uVar26 + 0x15]) goto LAB_080fd974;
          uVar8 = uVar26 + 5;
          if (uVar8 == 0xf) goto LAB_080fd864;
          uVar13 = this->OldDist[uVar26 + 0x15];
          if (uVar20 < this->OldDist[uVar26 + 0x16]) goto LAB_080fd974;
          uVar8 = uVar26 + 6;
          if (uVar8 == 0xf) goto LAB_080fd864;
          uVar13 = this->OldDist[uVar26 + 0x16];
          if (uVar20 < this->OldDist[uVar26 + 0x17]) goto LAB_080fd974;
          uVar8 = uVar26 + 7;
          if (uVar8 == 0xf) goto LAB_080fd864;
          uVar13 = this->OldDist[uVar26 + 0x17];
          if (uVar20 < this->OldDist[uVar26 + 0x18]) goto LAB_080fd974;
          uVar8 = uVar26 + 8;
          if (uVar8 == 0xf) goto LAB_080fd864;
          uVar13 = this->OldDist[uVar26 + 0x18];
          if (uVar20 < this->OldDist[uVar26 + 0x19]) goto LAB_080fd974;
          uVar8 = uVar26 + 9;
          if (uVar8 == 0xf) goto LAB_080fd864;
          uVar13 = this->OldDist[uVar26 + 0x19];
          if (uVar20 < this->OldDist[uVar26 + 0x1a]) goto LAB_080fd974;
          uVar8 = uVar26 + 10;
          if (uVar8 == 0xf) goto LAB_080fd864;
          uVar13 = this->OldDist[uVar26 + 0x1a];
          if (uVar20 < this->OldDist[uVar26 + 0x1b]) goto LAB_080fd974;
          uVar8 = uVar26 + 0xb;
          if (uVar8 == 0xf) goto LAB_080fd864;
          uVar13 = this->OldDist[uVar26 + 0x1b];
          if (uVar20 < this->OldDist[uVar26 + 0x1c]) goto LAB_080fd974;
          uVar8 = uVar26 + 0xc;
          if (uVar8 == 0xf) goto LAB_080fd864;
          uVar13 = this->OldDist[uVar26 + 0x1c];
          if (uVar20 < this->OldDist[uVar26 + 0x1d]) goto LAB_080fd974;
          uVar8 = uVar26 + 0xd;
          if (uVar8 == 0xf) goto LAB_080fd864;
          uVar13 = this->OldDist[uVar26 + 0x1d];
          if (uVar20 < this->OldDist[uVar26 + 0x1e]) goto LAB_080fd974;
          uVar8 = uVar26 + 0xe;
          if (uVar8 == 0xf) goto LAB_080fd864;
          uVar13 = this->OldDist[uVar26 + 0x1e];
          if (uVar20 < this->OldDist[uVar26 + 0x1f]) goto LAB_080fd974;
          if (uVar26 == 0) goto LAB_080fd864;
          uVar13 = (this->BlockTables).LD.DecodeLen[0xe];
          if (uVar20 < uVar13) {
            uVar27 = 2;
            uVar8 = 0xe;
            uVar13 = (this->BlockTables).LD.DecodeLen[0xd];
          }
          else {
            uVar27 = 1;
            uVar8 = 0xf;
          }
        }
      }
      else {
LAB_080fd864:
        uVar27 = 1;
        uVar8 = 0xf;
        uVar13 = (this->BlockTables).LD.DecodeLen[0xe];
      }
      uVar31 = (this->BlockTables).LD.MaxNum;
      iVar24 = iVar24 + (iVar23 + uVar8 >> 3);
      uVar18 = iVar23 + uVar8 & 7;
      (this->Inp).InAddr = iVar24;
      (this->Inp).InBit = uVar18;
      uVar20 = (this->BlockTables).LD.DecodePos[uVar8] + (uVar20 - uVar13 >> (uVar27 & 0xff));
      if (uVar31 <= uVar20) {
        uVar20 = 0;
      }
      uVar5 = (this->BlockTables).LD.DecodeNum[uVar20];
    }
    Number = (int)uVar5;
    if (0xff < (uint)Number) {
      if ((uint)Number < 0x10f) {
        if (Number == 0x100) {
          pbVar21 = pbVar9 + iVar24;
          uVar20 = ((uint)pbVar21[2] | (uint)*pbVar21 << 0x10 | (uint)pbVar21[1] << 8) >>
                   (8 - uVar18 & 0xff);
          if ((uVar20 & 0x8000) == 0) {
            (this->Inp).InAddr = iVar24 + (uVar18 + 2 >> 3);
            (this->Inp).InBit = uVar18 + 2 & 7;
            this->TablesRead = SUB41(((uVar20 ^ 0x4000) << 0x11) >> 0x1f,0);
            goto LAB_080fdd38;
          }
          (this->Inp).InAddr = iVar24 + (uVar18 + 1 >> 3);
          (this->Inp).InBit = uVar18 + 1 & 7;
          this->TablesRead = false;
          bVar33 = ReadTables30(this);
        }
        else {
          if (Number != 0x101) {
            if (Number == 0x102) {
              uVar26 = this->LastLength;
              if (uVar26 == 0) {
                uVar18 = this->UnpPtr;
                uVar20 = this->MaxWinMask;
                goto LAB_080fd0cc;
              }
              uVar28 = this->OldDist[0];
            }
            else {
              if (0x106 < (uint)Number) {
                uVar20 = (uint)*(byte *)((int)Unpack20::DDecode + Number + 0x91);
                uVar26 = *(byte *)((int)Unpack20::DDecode + Number + 0x89) + 1;
                if (uVar20 != 0) {
                  pbVar21 = pbVar9 + iVar24;
                  bVar2 = *pbVar21;
                  bVar3 = pbVar21[2];
                  bVar4 = pbVar21[1];
                  (this->Inp).InAddr = iVar24 + (uVar18 + uVar20 >> 3);
                  (this->Inp).InBit = uVar18 + uVar20 & 7;
                  uVar26 = uVar26 + ((((uint)bVar3 | (uint)bVar2 << 0x10 | (uint)bVar4 << 8) >>
                                      (8 - uVar18 & 0xff) & 0xffff) >> (0x10 - uVar20 & 0xff));
                }
                uVar32 = this->OldDist[0];
                this->OldDist[0] = uVar26;
                uVar8 = this->UnpPtr;
                this->LastLength = 2;
                uVar28 = this->OldDist[1];
                uVar22 = this->OldDist[2];
                uVar20 = this->MaxWinSize - 0x1001;
                this->OldDist[1] = uVar32;
                uVar18 = uVar8 - uVar26;
                this->OldDist[2] = uVar28;
                this->OldDist[3] = uVar22;
                if (uVar18 < uVar20 && uVar8 < uVar20) {
                  pbVar9 = this->Window;
                  this->UnpPtr = uVar8 + 2;
                  pbVar9[uVar8] = pbVar9[uVar18];
                  pbVar9[uVar8 + 1] = pbVar9[uVar18 + 1];
                  iVar24 = (this->Inp).InAddr;
                  uVar18 = this->UnpPtr;
                  uVar20 = this->MaxWinMask;
                }
                else {
                  this->Window[uVar8] = this->Window[uVar18 & this->MaxWinMask];
                  uVar20 = this->UnpPtr + 1 & this->MaxWinMask;
                  this->UnpPtr = uVar20;
                  this->Window[uVar20] = this->Window[this->MaxWinMask & uVar18 + 1];
                  uVar20 = this->MaxWinMask;
                  iVar24 = (this->Inp).InAddr;
                  uVar18 = this->UnpPtr + 1 & uVar20;
                  this->UnpPtr = uVar18;
                }
                goto LAB_080fd0cc;
              }
              uVar28 = *(uint *)((int)this + Number * 4 + -0x3b8);
              if ((Number != 0x103) &&
                 (*(undefined4 *)((int)this + Number * 4 + -0x3b8) =
                       *(undefined4 *)((int)this + Number * 4 + -0x3bc), 0x104 < (uint)Number)) {
                uVar26 = Number;
                if (Number == 0x106) {
                  uVar26 = this->OldDist[0];
                }
                *(undefined4 *)((int)this + Number * 4 + -0x3bc) =
                     *(undefined4 *)((int)this + Number * 4 + -0x3c0);
                if (Number == 0x106) {
                  this->OldDist[1] = uVar26;
                }
              }
              this->OldDist[0] = uVar28;
              uVar26 = DecodeNumber(this,&this->Inp,&(this->BlockTables).RD);
              uVar20 = (uint)""[uVar26];
              uVar26 = ""[uVar26] + 2;
              if (uVar20 != 0) {
                iVar24 = (this->Inp).InAddr;
                iVar23 = (this->Inp).InBit;
                uVar18 = iVar23 + uVar20;
                pbVar21 = (this->Inp).InBuf + iVar24;
                bVar2 = *pbVar21;
                bVar3 = pbVar21[2];
                bVar4 = pbVar21[1];
                (this->Inp).InAddr = iVar24 + (uVar18 >> 3);
                (this->Inp).InBit = uVar18 & 7;
                uVar26 = uVar26 + ((((uint)bVar3 | (uint)bVar2 << 0x10 | (uint)bVar4 << 8) >>
                                    (8U - iVar23 & 0xff) & 0xffff) >> (0x10 - uVar20 & 0xff));
              }
              this->LastLength = uVar26;
            }
LAB_080fdc48:
            CopyString(this,uVar26,uVar28);
            iVar24 = (this->Inp).InAddr;
            uVar18 = this->UnpPtr;
            uVar20 = this->MaxWinMask;
            goto LAB_080fd0cc;
          }
          bVar33 = ReadVMCode(this);
        }
        if (!bVar33) goto LAB_080fdd38;
LAB_080fd854:
        uVar18 = this->UnpPtr;
LAB_080fd858:
        uVar20 = this->MaxWinMask;
      }
      else {
        uVar20 = (uint)*(byte *)((int)Unpack20::DDecode + Number + 0x61);
        uVar8 = *(byte *)((int)Unpack20::DDecode + Number + 0x41) + 3;
        if (uVar20 != 0) {
          uVar13 = 8 - uVar18;
          pbVar21 = pbVar9 + iVar24;
          bVar2 = *pbVar21;
          iVar24 = iVar24 + (uVar18 + uVar20 >> 3);
          uVar18 = uVar18 + uVar20 & 7;
          bVar3 = pbVar21[2];
          bVar4 = pbVar21[1];
          (this->Inp).InAddr = iVar24;
          (this->Inp).InBit = uVar18;
          uVar8 = uVar8 + ((((uint)bVar3 | (uint)bVar2 << 0x10 | (uint)bVar4 << 8) >>
                            (uVar13 & 0xff) & 0xffff) >> (0x10 - uVar20 & 0xff));
        }
        pbVar21 = pbVar9 + iVar24;
        uVar26 = (this->BlockTables).DD.QuickBits;
        uVar28 = (this->BlockTables).DD.DecodeLen[uVar26];
        uVar20 = ((uint)pbVar21[2] | (uint)*pbVar21 << 0x10 | (uint)pbVar21[1] << 8) >>
                 (8 - uVar18 & 0xff) & 0xfffe;
        if (uVar20 < uVar28) {
          uVar20 = uVar20 >> (0x10 - uVar26 & 0xff);
          uVar5 = (this->BlockTables).DD.QuickNum[uVar20];
          uVar18 = (this->BlockTables).DD.QuickLen[uVar20] + uVar18;
          iVar24 = iVar24 + (uVar18 >> 3);
          uVar18 = uVar18 & 7;
          (this->Inp).InAddr = iVar24;
          (this->Inp).InBit = uVar18;
        }
        else {
          uVar13 = uVar26 + 1;
          if (uVar13 < 0xf) {
            uVar22 = (this->BlockTables).DD.DecodeLen[uVar26 + 1];
            if (uVar22 <= uVar20) {
              uVar13 = uVar26 + 2;
              if (uVar13 != 0xf) {
                uVar28 = (this->BlockTables).DD.DecodeLen[uVar26 + 2];
                if (uVar20 < uVar28) {
LAB_080fdd10:
                  uVar31 = 0x10 - uVar13;
                  uVar27 = uVar22;
                  goto LAB_080fd570;
                }
                uVar13 = uVar26 + 3;
                if (uVar13 != 0xf) {
                  uVar22 = (this->BlockTables).DD.DecodeLen[uVar26 + 3];
                  if (uVar20 < uVar22) goto LAB_080fdc9c;
                  uVar13 = uVar26 + 4;
                  if (uVar13 != 0xf) {
                    uVar28 = (this->BlockTables).DD.DecodeLen[uVar26 + 4];
                    if (uVar20 < uVar28) goto LAB_080fdd10;
                    uVar13 = uVar26 + 5;
                    if (uVar13 != 0xf) {
                      uVar22 = (this->BlockTables).DD.DecodeLen[uVar26 + 5];
                      if (uVar20 < uVar22) goto LAB_080fdc9c;
                      uVar13 = uVar26 + 6;
                      if (uVar13 != 0xf) {
                        uVar28 = (this->BlockTables).DD.DecodeLen[uVar26 + 6];
                        if (uVar20 < uVar28) goto LAB_080fdd10;
                        uVar13 = uVar26 + 7;
                        if (uVar13 != 0xf) {
                          uVar22 = (this->BlockTables).DD.DecodeLen[uVar26 + 7];
                          if (uVar20 < uVar22) goto LAB_080fdc9c;
                          uVar13 = uVar26 + 8;
                          if (uVar13 != 0xf) {
                            uVar28 = (this->BlockTables).DD.DecodeLen[uVar26 + 8];
                            if (uVar20 < uVar28) goto LAB_080fdd10;
                            uVar13 = uVar26 + 9;
                            if (uVar13 != 0xf) {
                              uVar27 = (this->BlockTables).DD.DecodeLen[uVar26 + 9];
                              if (uVar20 < uVar27) goto LAB_080fdc9c;
                              uVar13 = uVar26 + 10;
                              if (uVar13 != 0xf) {
                                uVar22 = (this->BlockTables).DD.DecodeLen[uVar26 + 10];
                                if (uVar20 < uVar22) {
                                  uVar31 = 0x10 - uVar13;
                                  goto LAB_080fd570;
                                }
                                uVar13 = uVar26 + 0xb;
                                if (uVar13 != 0xf) {
                                  uVar28 = (this->BlockTables).DD.DecodeLen[uVar26 + 0xb];
                                  if (uVar20 < uVar28) goto LAB_080fdd10;
                                  uVar13 = uVar26 + 0xc;
                                  if (uVar13 != 0xf) {
                                    uVar22 = (this->BlockTables).DD.DecodeLen[uVar26 + 0xc];
                                    if (uVar20 < uVar22) goto LAB_080fdc9c;
                                    uVar13 = uVar26 + 0xd;
                                    if (uVar13 != 0xf) {
                                      uVar28 = (this->BlockTables).DD.DecodeLen[uVar26 + 0xd];
                                      if (uVar20 < uVar28) goto LAB_080fdd10;
                                      uVar13 = uVar26 + 0xe;
                                      if (uVar13 != 0xf) {
                                        if (uVar20 < (this->BlockTables).DD.DecodeLen[uVar26 + 0xe])
                                        goto LAB_080fdc9c;
                                        if (uVar26 != 0) {
                                          uVar27 = (this->BlockTables).DD.DecodeLen[0xe];
                                          if (uVar20 < uVar27) {
                                            uVar31 = 2;
                                            uVar13 = 0xe;
                                            uVar27 = (this->BlockTables).DD.DecodeLen[0xd];
                                          }
                                          else {
                                            uVar31 = 1;
                                            uVar13 = 0xf;
                                          }
                                          goto LAB_080fd570;
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
              goto LAB_080fdb34;
            }
LAB_080fdc9c:
            uVar31 = 0x10 - uVar13;
            uVar27 = uVar28;
          }
          else {
LAB_080fdb34:
            uVar31 = 1;
            uVar13 = 0xf;
            uVar27 = (this->BlockTables).DD.DecodeLen[0xe];
          }
LAB_080fd570:
          iVar24 = iVar24 + (uVar18 + uVar13 >> 3);
          uVar18 = uVar18 + uVar13 & 7;
          (this->Inp).InAddr = iVar24;
          (this->Inp).InBit = uVar18;
          pDVar29 = &(this->BlockTables).DD;
          uVar20 = (this->BlockTables).DD.DecodePos[uVar13] + (uVar20 - uVar27 >> (uVar31 & 0xff));
          if (pDVar29->MaxNum <= uVar20) {
            uVar20 = 0;
          }
          uVar5 = pDVar29->DecodeNum[uVar20];
        }
        DistNumber = (int)uVar5;
        uVar20 = (uint)Unpack29::DBits[DistNumber];
        uVar13 = Unpack29::DDecode[DistNumber] + 1;
        if (uVar20 != 0) {
          if ((uint)DistNumber < 10) {
            pbVar21 = pbVar9 + iVar24;
            bVar2 = *pbVar21;
            bVar3 = pbVar21[2];
            bVar4 = pbVar21[1];
            (this->Inp).InAddr = iVar24 + (uVar18 + uVar20 >> 3);
            (this->Inp).InBit = uVar18 + uVar20 & 7;
            uVar13 = uVar13 + ((((uint)bVar3 | (uint)bVar2 << 0x10 | (uint)bVar4 << 8) >>
                                (8 - uVar18 & 0xff) & 0xffff) >> (0x10 - uVar20 & 0xff));
          }
          else {
            if (4 < uVar20) {
              pbVar21 = pbVar9 + iVar24;
              bVar2 = *pbVar21;
              uVar27 = (uVar18 - 4) + uVar20;
              bVar3 = pbVar21[2];
              bVar4 = pbVar21[1];
              (this->Inp).InAddr = iVar24 + (uVar27 >> 3);
              (this->Inp).InBit = uVar27 & 7;
              uVar13 = uVar13 + ((((uint)bVar3 | (uint)bVar2 << 0x10 | (uint)bVar4 << 8) >>
                                  (8 - uVar18 & 0xff) & 0xffff) >> (0x14 - uVar20 & 0xff)) * 0x10;
            }
            if (this->LowDistRepCount < 1) {
              uVar26 = DecodeNumber(this,&this->Inp,&(this->BlockTables).LDD);
              if (uVar26 == 0x10) {
                this->LowDistRepCount = 0xf;
                uVar13 = uVar13 + this->PrevLowDist;
              }
              else {
                uVar13 = uVar13 + uVar26;
                this->PrevLowDist = uVar26;
              }
            }
            else {
              this->LowDistRepCount = this->LowDistRepCount + -1;
              uVar13 = uVar13 + this->PrevLowDist;
            }
          }
        }
        if (0x1fff < uVar13) {
          if (uVar13 < 0x40000) {
            uVar8 = uVar8 + 1;
          }
          else {
            uVar8 = uVar8 + 2;
          }
        }
        this->LastLength = uVar8;
        uVar26 = this->OldDist[0];
        this->OldDist[0] = uVar13;
        uVar18 = this->UnpPtr;
        uVar22 = this->OldDist[1];
        uVar28 = this->OldDist[2];
        uVar20 = this->MaxWinSize - 0x1001;
        this->OldDist[1] = uVar26;
        uVar27 = uVar18 - uVar13;
        this->OldDist[2] = uVar22;
        this->OldDist[3] = uVar28;
        if (uVar18 < uVar20 && uVar27 < uVar20) {
          this->UnpPtr = uVar18 + uVar8;
          pauVar30 = (undefined (*) [16])(this->Window + uVar27);
          puVar10 = (undefined8 *)(this->Window + uVar18);
          if (7 < uVar8) {
            iVar23 = uVar18 + 0x80;
            uVar31 = uVar8 - 8;
            uVar20 = uVar31 >> 3;
            bVar33 = SBORROW4(uVar27,iVar23);
            iVar24 = uVar27 - iVar23;
            if ((int)uVar27 < iVar23) {
              bVar33 = SBORROW4(uVar18,iVar23 - uVar13);
              iVar24 = uVar18 - (iVar23 - uVar13);
            }
            puVar14 = puVar10;
            pauVar16 = pauVar30;
            if (uVar20 + 1 < 2 || iVar24 < 0 != bVar33) {
              do {
                uVar8 = uVar8 - 8;
                *(undefined *)puVar14 = (*pauVar16)[0];
                *(undefined *)((int)puVar14 + 1) = (*pauVar16)[1];
                *(undefined *)((int)puVar14 + 2) = (*pauVar16)[2];
                *(undefined *)((int)puVar14 + 3) = (*pauVar16)[3];
                *(undefined *)((int)puVar14 + 4) = (*pauVar16)[4];
                *(undefined *)((int)puVar14 + 5) = (*pauVar16)[5];
                *(undefined *)((int)puVar14 + 6) = (*pauVar16)[6];
                *(undefined *)((int)puVar14 + 7) = (*pauVar16)[7];
                puVar14 = puVar14 + 1;
                pauVar16 = (undefined (*) [16])(*pauVar16 + 8);
              } while (7 < uVar8);
            }
            else {
              uVar18 = (uVar20 - 1 >> 1) + 1;
              if (7 < uVar31) {
                uVar8 = 0;
                do {
                  auVar34 = *pauVar16;
                  uVar8 = uVar8 + 1;
                  pauVar16 = pauVar16 + 1;
                  *puVar14 = auVar34._0_8_;
                  puVar14[1] = auVar34._8_8_;
                  puVar14 = puVar14 + 2;
                } while (uVar8 < uVar18);
                pauVar16 = pauVar30 + uVar18;
                puVar14 = puVar10 + uVar18 * 2;
                if (uVar20 + 1 == uVar18 * 2) goto LAB_080fd778;
              }
              *(undefined *)puVar14 = (*pauVar16)[0];
              *(undefined *)((int)puVar14 + 1) = (*pauVar16)[1];
              *(undefined *)((int)puVar14 + 2) = (*pauVar16)[2];
              *(undefined *)((int)puVar14 + 3) = (*pauVar16)[3];
              *(undefined *)((int)puVar14 + 4) = (*pauVar16)[4];
              *(undefined *)((int)puVar14 + 5) = (*pauVar16)[5];
              *(undefined *)((int)puVar14 + 6) = (*pauVar16)[6];
              *(undefined *)((int)puVar14 + 7) = (*pauVar16)[7];
            }
LAB_080fd778:
            uVar8 = uVar31 + uVar20 * -8;
            pauVar30 = (undefined (*) [16])(*pauVar30 + (uVar31 & 0xfffffff8) + 8);
            puVar10 = puVar10 + uVar20 + 1;
          }
          if (((((uVar8 == 0) || (*(undefined *)puVar10 = (*pauVar30)[0], uVar8 == 1)) ||
               ((*(undefined *)((int)puVar10 + 1) = (*pauVar30)[1], uVar8 == 2 ||
                ((*(undefined *)((int)puVar10 + 2) = (*pauVar30)[2], uVar8 == 3 ||
                 (*(undefined *)((int)puVar10 + 3) = (*pauVar30)[3], uVar8 == 4)))))) ||
              (*(undefined *)((int)puVar10 + 4) = (*pauVar30)[4], uVar8 == 5)) ||
             (*(undefined *)((int)puVar10 + 5) = (*pauVar30)[5], uVar8 != 7)) goto LAB_080fd854;
          *(undefined *)((int)puVar10 + 6) = (*pauVar30)[6];
          iVar24 = (this->Inp).InAddr;
          uVar18 = this->UnpPtr;
          uVar20 = this->MaxWinMask;
          goto LAB_080fd0cc;
        }
        if (uVar8 == 0) goto LAB_080fd858;
        uVar20 = this->MaxWinMask;
        uVar8 = uVar8 + uVar27;
        do {
          uVar20 = uVar20 & uVar27;
          uVar27 = uVar27 + 1;
          this->Window[uVar18] = this->Window[uVar20];
          uVar20 = this->MaxWinMask;
          uVar18 = this->UnpPtr + 1 & uVar20;
          this->UnpPtr = uVar18;
        } while (uVar27 != uVar8);
      }
      iVar24 = (this->Inp).InAddr;
      goto LAB_080fd0cc;
    }
    sVar15 = this->UnpPtr;
    this->UnpPtr = sVar15 + 1;
    this->Window[sVar15] = (byte)uVar5;
    iVar24 = (this->Inp).InAddr;
    uVar18 = this->UnpPtr;
    uVar20 = this->MaxWinMask;
  } while( true );
}


