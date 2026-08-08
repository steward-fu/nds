/*
 * Ghidra decompilation
 *
 * Function : _ZN6Unpack7Unpack5Eb
 * Address  : 080ffa2c
 * Program  : drastic
 */


/* DWARF original prototype: void Unpack5(Unpack * this, bool Solid) */

void __thiscall Unpack::Unpack5(Unpack *this,bool Solid)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  ushort uVar7;
  int iVar8;
  bool bVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  byte *pbVar13;
  int ReadCode;
  uint I_1;
  uint LengthSlot;
  uint I_3;
  uint DBits;
  size_t SrcPtr;
  uint LowDist;
  ushort *puVar14;
  int iVar15;
  ushort *puVar16;
  int iVar17;
  int iVar18;
  size_t *psVar19;
  ushort *puVar20;
  int iVar21;
  UnpackBlockTables *Tables;
  ushort *puVar22;
  uint I_2;
  uint uVar23;
  uint I_4;
  uint I_5;
  uint I_6;
  uint I_7;
  BitInput *Inp;
  uint uVar24;
  uint ByteCount;
  ushort *__n;
  uint uVar25;
  uint Distance;
  size_t SrcPtr_1;
  byte BlockFlags;
  uint uVar26;
  byte SavedCheckSum;
  byte *pbVar27;
  uint I;
  uint uVar28;
  int BlockSize;
  uint uVar29;
  size_t sVar30;
  uint BitField;
  uint Pos;
  uint Code;
  uint LBits;
  uint BitField_1;
  uint Pos_1;
  uint Code_1;
  byte *pbVar31;
  uint uVar32;
  DecodeTable *pDVar33;
  UnpackFilter Filter;
  
  iVar8 = __stack_chk_guard;
  this->FileExtracted = true;
  if (this->Suspended != false) {
LAB_080ffa7c:
    uVar29 = this->UnpPtr;
    uVar32 = this->MaxWinMask;
    Inp = &this->Inp;
    puVar20 = (ushort *)Inp->InAddr;
LAB_080ffa94:
    do {
      sVar30 = uVar29 & uVar32;
      this->UnpPtr = sVar30;
      if (this->ReadBorder <= (int)puVar20) {
        while( true ) {
          BlockSize = (this->BlockHeader).BlockSize;
          puVar14 = (ushort *)(this->BlockHeader).BlockStart;
          do {
            if (((int)puVar20 < (int)puVar14 + BlockSize) &&
               (((ushort *)((int)puVar14 + BlockSize + -1) != puVar20 ||
                ((this->Inp).InBit < (this->BlockHeader).BlockBitSize)))) {
              bVar9 = UnpReadBuf(this);
              if (!bVar9) goto LAB_08100818;
              sVar30 = this->UnpPtr;
              uVar32 = this->MaxWinMask;
              goto LAB_080ffd38;
            }
            if ((this->BlockHeader).LastBlockInFile != false) goto LAB_08100818;
            bVar9 = (this->Inp).ExternalBuffer;
            (this->BlockHeader).HeaderSize = 0;
            if ((bVar9 == false) &&
               (puVar16 = (ushort *)this->ReadTop, (int)(puVar16 + -3) <= (int)puVar20)) {
              __n = (ushort *)((int)puVar16 - (int)puVar20);
              if ((int)__n < 0) goto LAB_080ffbcc;
              puVar22 = puVar20;
              if ((int)puVar20 < 0x4001) {
                puVar22 = puVar16;
              }
              (this->BlockHeader).BlockSize = BlockSize - ((int)puVar20 - (int)puVar14);
              if (0x4000 < (int)puVar20) {
                if (__n != (ushort *)0x0) {
                  pbVar13 = (this->Inp).InBuf;
                  memmove(pbVar13,pbVar13 + (int)puVar22,(size_t)__n);
                }
                (this->Inp).InAddr = 0;
                this->ReadTop = (int)__n;
                puVar16 = __n;
                puVar22 = __n;
              }
              iVar17 = ComprDataIO::UnpRead
                                 (this->UnpIO,(this->Inp).InBuf + (int)puVar22,0x8000 - (int)puVar16
                                 );
              iVar18 = (this->Inp).InAddr;
              iVar21 = this->ReadTop;
              iVar15 = (this->BlockHeader).BlockSize;
              (this->BlockHeader).BlockStart = iVar18;
              if (0 < iVar17) {
                iVar21 = iVar17 + iVar21;
                this->ReadTop = iVar21;
              }
              iVar21 = iVar21 + -0x1e;
              this->ReadBorder = iVar21;
              if (iVar15 != -1) {
                iVar15 = iVar18 + iVar15 + -1;
                if (iVar15 < iVar21) {
                  iVar21 = iVar15;
                }
                this->ReadBorder = iVar21;
              }
              if (iVar17 == -1) goto LAB_080ffbcc;
            }
            BitInput::faddbits(Inp,-(this->Inp).InBit & 7);
            uVar10 = BitInput::fgetbits(Inp);
            uVar29 = uVar10 >> 8;
            BitInput::faddbits(Inp,8);
            uVar32 = ((uVar29 & 0xff) << 0x1b) >> 0x1e;
            uVar24 = uVar32 + 1;
            if (uVar24 == 4) goto LAB_080ffbcc;
            BlockSize = 0;
            (this->BlockHeader).BlockBitSize = (uVar29 & 7) + 1;
            (this->BlockHeader).HeaderSize = uVar32 + 3;
            uVar11 = BitInput::fgetbits(Inp);
            BitInput::faddbits(Inp,8);
            I = 0;
            do {
              uVar12 = BitInput::fgetbits(Inp);
              uVar28 = I + 1;
              BlockSize = BlockSize + ((uVar12 >> 8) << ((I & 0x1f) << 3));
              uVar32 = (this->Inp).InBit + 8;
              puVar14 = (ushort *)((this->Inp).InAddr + (uVar32 >> 3));
              (this->Inp).InAddr = (int)puVar14;
              (this->Inp).InBit = uVar32 & 7;
              I = uVar28;
            } while (uVar28 < uVar24);
            (this->BlockHeader).BlockSize = BlockSize;
            if ((uVar11 << 0x10) >> 0x18 !=
                ((uVar29 ^ 0x5a ^ BlockSize ^ BlockSize >> 8 ^ BlockSize >> 0x10) & 0xff))
            goto LAB_080ffbcc;
            iVar21 = this->ReadBorder;
            cVar1 = (char)(uVar10 >> 8);
            iVar17 = (int)puVar14 + (BlockSize - 1U);
            (this->BlockHeader).BlockStart = (int)puVar14;
            (this->BlockHeader).LastBlockInFile = SUB41(((uVar29 & 0xff) << 0x19) >> 0x1f,0);
            if (iVar17 <= iVar21) {
              iVar21 = iVar17;
            }
            this->ReadBorder = iVar21;
            (this->BlockHeader).TablePresent = (bool)((byte)(cVar1 >> 7) >> 7);
            puVar20 = puVar14;
          } while (-1 < cVar1);
          Tables = (UnpackBlockTables *)(uint)(this->Inp).ExternalBuffer;
          if ((((Tables == (UnpackBlockTables *)0x0) &&
               (Tables = (UnpackBlockTables *)(this->ReadTop + -0x18), (int)Tables <= (int)puVar14))
              && (bVar9 = UnpReadBuf(this), !bVar9)) ||
             (bVar9 = ReadTables(this,Inp,(UnpackBlockHeader *)&this->BlockTables,Tables), !bVar9))
          break;
          puVar20 = (ushort *)(this->Inp).InAddr;
        }
        goto LAB_080ffbcc;
      }
LAB_080ffd38:
      if (this->WriteBorder != sVar30 && (uVar32 & this->WriteBorder - sVar30) < 0x1004) {
        UnpWriteBuf(this);
        iVar21 = *(int *)((int)&this->WrittenFileSize + 4);
        iVar17 = *(int *)((int)&this->DestUnpSize + 4);
        bVar9 = *(uint *)&this->DestUnpSize < *(uint *)&this->WrittenFileSize;
        if ((int)(iVar17 - (iVar21 + (uint)bVar9)) < 0 !=
            (SBORROW4(iVar17,iVar21) != SBORROW4(iVar17 - iVar21,(uint)bVar9))) goto LAB_080ffbcc;
        if (this->Suspended != false) {
          this->FileExtracted = false;
          goto LAB_080ffbcc;
        }
      }
      iVar21 = (this->Inp).InAddr;
      iVar17 = (this->Inp).InBit;
      pbVar13 = (this->Inp).InBuf;
      uVar10 = (this->BlockTables).LD.QuickBits;
      pbVar27 = pbVar13 + iVar21;
      uVar29 = ((uint)pbVar27[2] | (uint)*pbVar27 << 0x10 | (uint)pbVar27[1] << 8) >>
               (8U - iVar17 & 0xff) & 0xfffe;
      if (uVar29 < this->OldDist[uVar10 + 0x11]) {
        uVar29 = uVar29 >> (0x10 - uVar10 & 0xff);
        uVar7 = (this->BlockTables).LD.QuickNum[uVar29];
        uVar32 = (uint)(this->BlockTables).LD.QuickLen[uVar29] + iVar17;
        puVar20 = (ushort *)(iVar21 + (uVar32 >> 3));
        uVar32 = uVar32 & 7;
        (this->Inp).InAddr = (int)puVar20;
        (this->Inp).InBit = uVar32;
      }
      else {
        uVar24 = uVar10 + 1;
        if (uVar24 < 0xf) {
          uVar28 = this->OldDist[uVar10 + 0x11];
          if (uVar29 < this->OldDist[uVar10 + 0x12]) {
LAB_081000dc:
            uVar25 = 0x10 - uVar24;
          }
          else {
            uVar24 = uVar10 + 2;
            if (uVar24 == 0xf) goto LAB_081000c8;
            uVar28 = this->OldDist[uVar10 + 0x12];
            if (uVar29 < this->OldDist[uVar10 + 0x13]) goto LAB_081000dc;
            uVar24 = uVar10 + 3;
            if (uVar24 == 0xf) goto LAB_081000c8;
            uVar28 = this->OldDist[uVar10 + 0x13];
            if (uVar29 < this->OldDist[uVar10 + 0x14]) goto LAB_081000dc;
            uVar24 = uVar10 + 4;
            if (uVar24 == 0xf) goto LAB_081000c8;
            uVar28 = this->OldDist[uVar10 + 0x14];
            if (uVar29 < this->OldDist[uVar10 + 0x15]) goto LAB_081000dc;
            uVar24 = uVar10 + 5;
            if (uVar24 == 0xf) goto LAB_081000c8;
            uVar28 = this->OldDist[uVar10 + 0x15];
            if (uVar29 < this->OldDist[uVar10 + 0x16]) goto LAB_081000dc;
            uVar24 = uVar10 + 6;
            if (uVar24 == 0xf) goto LAB_081000c8;
            uVar28 = this->OldDist[uVar10 + 0x16];
            if (uVar29 < this->OldDist[uVar10 + 0x17]) goto LAB_081000dc;
            uVar24 = uVar10 + 7;
            if (uVar24 == 0xf) goto LAB_081000c8;
            uVar28 = this->OldDist[uVar10 + 0x17];
            if (uVar29 < this->OldDist[uVar10 + 0x18]) goto LAB_081000dc;
            uVar24 = uVar10 + 8;
            if (uVar24 == 0xf) goto LAB_081000c8;
            uVar28 = this->OldDist[uVar10 + 0x18];
            if (uVar29 < this->OldDist[uVar10 + 0x19]) goto LAB_081000dc;
            uVar24 = uVar10 + 9;
            if (uVar24 == 0xf) goto LAB_081000c8;
            uVar28 = this->OldDist[uVar10 + 0x19];
            if (uVar29 < this->OldDist[uVar10 + 0x1a]) goto LAB_081000dc;
            uVar24 = uVar10 + 10;
            if (uVar24 == 0xf) goto LAB_081000c8;
            uVar28 = this->OldDist[uVar10 + 0x1a];
            if (uVar29 < this->OldDist[uVar10 + 0x1b]) goto LAB_081000dc;
            uVar24 = uVar10 + 0xb;
            if (uVar24 == 0xf) goto LAB_081000c8;
            uVar28 = this->OldDist[uVar10 + 0x1b];
            if (uVar29 < this->OldDist[uVar10 + 0x1c]) goto LAB_081000dc;
            uVar24 = uVar10 + 0xc;
            if (uVar24 == 0xf) goto LAB_081000c8;
            uVar28 = this->OldDist[uVar10 + 0x1c];
            if (uVar29 < this->OldDist[uVar10 + 0x1d]) goto LAB_081000dc;
            uVar24 = uVar10 + 0xd;
            if (uVar24 == 0xf) goto LAB_081000c8;
            uVar28 = this->OldDist[uVar10 + 0x1d];
            if (uVar29 < this->OldDist[uVar10 + 0x1e]) goto LAB_081000dc;
            uVar24 = uVar10 + 0xe;
            if (uVar24 == 0xf) goto LAB_081000c8;
            uVar28 = this->OldDist[uVar10 + 0x1e];
            if (uVar29 < this->OldDist[uVar10 + 0x1f]) goto LAB_081000dc;
            if (uVar10 == 0) goto LAB_081000c8;
            uVar28 = (this->BlockTables).LD.DecodeLen[0xe];
            if (uVar29 < uVar28) {
              uVar25 = 2;
              uVar24 = 0xe;
              uVar28 = (this->BlockTables).LD.DecodeLen[0xd];
            }
            else {
              uVar25 = 1;
              uVar24 = 0xf;
            }
          }
        }
        else {
LAB_081000c8:
          uVar25 = 1;
          uVar24 = 0xf;
          uVar28 = (this->BlockTables).LD.DecodeLen[0xe];
        }
        uVar26 = (this->BlockTables).LD.MaxNum;
        puVar20 = (ushort *)(iVar21 + (iVar17 + uVar24 >> 3));
        uVar32 = iVar17 + uVar24 & 7;
        (this->Inp).InAddr = (int)puVar20;
        (this->Inp).InBit = uVar32;
        uVar29 = (this->BlockTables).LD.DecodePos[uVar24] + (uVar29 - uVar28 >> (uVar25 & 0xff));
        if (uVar26 <= uVar29) {
          uVar29 = 0;
        }
        uVar7 = (this->BlockTables).LD.DecodeNum[uVar29];
      }
      uVar29 = (uint)uVar7;
      if (0xff < uVar29) {
        if (uVar29 < 0x106) {
          if (uVar29 == 0x100) {
            bVar9 = ReadFilter(this,Inp,&Filter);
            if ((!bVar9) || (bVar9 = AddFilter(this,&Filter), !bVar9)) goto LAB_08100818;
            uVar29 = this->UnpPtr;
            uVar32 = this->MaxWinMask;
            puVar20 = (ushort *)(this->Inp).InAddr;
            goto LAB_080ffa94;
          }
          if (uVar29 == 0x101) {
            uVar10 = this->LastLength;
            if (uVar10 == 0) {
              uVar29 = this->UnpPtr;
              uVar32 = this->MaxWinMask;
              goto LAB_080ffa94;
            }
            LowDist = this->OldDist[0];
            if (this->Fragmented != false) {
              FragmentedWindow::CopyString
                        (&this->FragWindow,uVar10,LowDist,&this->UnpPtr,this->MaxWinMask);
              uVar32 = this->MaxWinMask;
              puVar20 = (ushort *)(this->Inp).InAddr;
              uVar29 = this->UnpPtr;
              goto LAB_080ffa94;
            }
          }
          else {
            LowDist = *(uint *)((int)this + uVar29 * 4 + -0x3b4);
            if (((uVar29 != 0x102) &&
                (*(undefined4 *)((int)this + uVar29 * 4 + -0x3b4) =
                      *(undefined4 *)((int)this + uVar29 * 4 + -0x3b8), uVar29 != 0x103)) &&
               ((*(undefined4 *)((int)this + uVar29 * 4 + -0x3b8) =
                      *(undefined4 *)((int)this + uVar29 * 4 + -0x3bc), uVar29 != 0x104 &&
                (*(undefined4 *)((int)this + uVar29 * 4 + -0x3bc) =
                      *(undefined4 *)((int)this + uVar29 * 4 + -0x3c0), uVar29 != 0x105)))) {
              *(undefined4 *)((int)this + uVar29 * 4 + -0x3c0) =
                   *(undefined4 *)((int)this + uVar29 * 4 + -0x3c4);
            }
            this->OldDist[0] = LowDist;
            uVar10 = DecodeNumber(this,Inp,&(this->BlockTables).RD);
            if (uVar10 < 8) {
              uVar10 = uVar10 + 2;
              this->LastLength = uVar10;
              if (this->Fragmented != false) {
                uVar29 = this->UnpPtr;
                uVar24 = uVar29 - LowDist;
                uVar32 = this->MaxWinMask;
LAB_08100728:
                uVar28 = uVar24 + uVar10;
                uVar25 = (this->FragWindow).MemSize[0];
                if (uVar29 < uVar25) goto LAB_081007f4;
LAB_08100740:
                psVar19 = (this->FragWindow).MemSize;
                I_6 = 1;
                do {
                  psVar19 = psVar19 + 1;
                  if (uVar29 < *psVar19) {
                    pbVar13 = (this->FragWindow).Mem[I_6] +
                              (uVar29 - (int)(this->FragWindow).Mem[I_6 + 0x1f]);
                    goto LAB_0810077c;
                  }
                  I_6 = I_6 + 1;
                } while (I_6 != 0x20);
                pbVar13 = (this->FragWindow).Mem[0];
LAB_0810077c:
                uVar29 = uVar24 & uVar32;
                uVar24 = uVar24 + 1;
                if (uVar29 < uVar25) goto LAB_0810080c;
LAB_0810078c:
                psVar19 = (this->FragWindow).MemSize;
                I_7 = 1;
                do {
                  psVar19 = psVar19 + 1;
                  if (uVar29 < *psVar19) {
                    pbVar31 = (this->FragWindow).Mem[I_7] +
                              (uVar29 - (int)(this->FragWindow).Mem[I_7 + 0x1f]);
                    goto LAB_081007c8;
                  }
                  I_7 = I_7 + 1;
                } while (I_7 != 0x20);
                pbVar31 = (this->FragWindow).Mem[0];
LAB_081007c8:
                do {
                  *pbVar13 = *pbVar31;
                  uVar29 = this->UnpPtr + 1 & uVar32;
                  this->UnpPtr = uVar29;
                  if (uVar24 == uVar28) goto LAB_08100540;
                  uVar25 = (this->FragWindow).MemSize[0];
                  if (uVar25 <= uVar29) goto LAB_08100740;
LAB_081007f4:
                  pbVar13 = (this->FragWindow).Mem[0] + uVar29;
                  uVar29 = uVar24 & uVar32;
                  uVar24 = uVar24 + 1;
                  if (uVar25 <= uVar29) goto LAB_0810078c;
LAB_0810080c:
                  pbVar31 = (this->FragWindow).Mem[0] + uVar29;
                } while( true );
              }
            }
            else {
              iVar21 = (this->Inp).InAddr;
              iVar17 = (this->Inp).InBit;
              uVar29 = (uVar10 >> 2) - 1;
              uVar32 = iVar17 + uVar29;
              pbVar27 = (this->Inp).InBuf + iVar21;
              bVar4 = *pbVar27;
              puVar14 = (ushort *)(iVar21 + (uVar32 >> 3));
              bVar5 = pbVar27[2];
              bVar6 = pbVar27[1];
              (this->Inp).InAddr = (int)puVar14;
              (this->Inp).InBit = uVar32 & 7;
              uVar10 = ((uVar10 & 3 | 4) << (uVar29 & 0xff)) + 2 +
                       ((((uint)bVar5 | (uint)bVar4 << 0x10 | (uint)bVar6 << 8) >>
                         (8U - iVar17 & 0xff) & 0xffff) >> (0x10 - uVar29 & 0xff));
              this->LastLength = uVar10;
              if (this->Fragmented != false) {
                uVar29 = this->UnpPtr;
                uVar32 = this->MaxWinMask;
                puVar20 = (this->PPM).BinSumm[0x79] + 0x20;
                if (uVar10 == 0) {
                  puVar20 = puVar14;
                }
                uVar24 = uVar29 - LowDist;
                if (uVar10 != 0) goto LAB_08100728;
                goto LAB_080ffa94;
              }
            }
          }
        }
        else {
          uVar10 = uVar29 - 0x104;
          uVar29 = uVar29 - 0x106;
          if (7 < uVar29) {
            pbVar27 = pbVar13 + (int)puVar20;
            bVar4 = *pbVar27;
            uVar28 = (uVar29 >> 2) - 1;
            uVar24 = 8 - uVar32;
            bVar5 = pbVar27[2];
            puVar20 = (ushort *)((int)puVar20 + (uVar32 + uVar28 >> 3));
            bVar6 = pbVar27[1];
            uVar32 = uVar32 + uVar28 & 7;
            (this->Inp).InAddr = (int)puVar20;
            (this->Inp).InBit = uVar32;
            uVar10 = ((uVar29 & 3 | 4) << (uVar28 & 0xff)) + 2 +
                     ((((uint)bVar5 | (uint)bVar4 << 0x10 | (uint)bVar6 << 8) >> (uVar24 & 0xff) &
                      0xffff) >> (0x10 - uVar28 & 0xff));
          }
          pbVar27 = pbVar13 + (int)puVar20;
          uVar11 = (this->BlockTables).DD.QuickBits;
          uVar24 = (this->BlockTables).DD.DecodeLen[uVar11];
          uVar29 = ((uint)pbVar27[2] | (uint)*pbVar27 << 0x10 | (uint)pbVar27[1] << 8) >>
                   (8 - uVar32 & 0xff) & 0xfffe;
          if (uVar29 < uVar24) {
            uVar29 = uVar29 >> (0x10 - uVar11 & 0xff);
            uVar7 = (this->BlockTables).DD.QuickNum[uVar29];
            uVar32 = (this->BlockTables).DD.QuickLen[uVar29] + uVar32;
            iVar21 = (int)puVar20 + (uVar32 >> 3);
            uVar32 = uVar32 & 7;
            (this->Inp).InAddr = iVar21;
            (this->Inp).InBit = uVar32;
          }
          else {
            uVar28 = uVar11 + 1;
            if (uVar28 < 0xf) {
              uVar25 = (this->BlockTables).DD.DecodeLen[uVar11 + 1];
              if (uVar25 <= uVar29) {
                uVar28 = uVar11 + 2;
                if (uVar28 != 0xf) {
                  uVar26 = (this->BlockTables).DD.DecodeLen[uVar11 + 2];
                  uVar24 = uVar25;
                  if (uVar29 < uVar26) goto LAB_0810068c;
                  uVar28 = uVar11 + 3;
                  if (uVar28 == 0xf) goto LAB_08100678;
                  uVar25 = (this->BlockTables).DD.DecodeLen[uVar11 + 3];
                  uVar24 = uVar26;
                  if (uVar29 < uVar25) goto LAB_0810068c;
                  uVar28 = uVar11 + 4;
                  if (uVar28 == 0xf) goto LAB_08100678;
                  uVar26 = (this->BlockTables).DD.DecodeLen[uVar11 + 4];
                  uVar24 = uVar25;
                  if (uVar29 < uVar26) goto LAB_0810068c;
                  uVar28 = uVar11 + 5;
                  if (uVar28 == 0xf) goto LAB_08100678;
                  uVar25 = (this->BlockTables).DD.DecodeLen[uVar11 + 5];
                  uVar24 = uVar26;
                  if (uVar29 < uVar25) goto LAB_0810068c;
                  uVar28 = uVar11 + 6;
                  if (uVar28 == 0xf) goto LAB_08100678;
                  uVar26 = (this->BlockTables).DD.DecodeLen[uVar11 + 6];
                  uVar24 = uVar25;
                  if (uVar29 < uVar26) goto LAB_0810068c;
                  uVar28 = uVar11 + 7;
                  if (uVar28 != 0xf) {
                    uVar24 = (this->BlockTables).DD.DecodeLen[uVar11 + 7];
                    if (uVar29 < uVar24) {
                      uVar24 = 0x10 - uVar28;
                      goto LAB_08100370;
                    }
                    uVar28 = uVar11 + 8;
                    if (uVar28 != 0xf) {
                      uVar25 = (this->BlockTables).DD.DecodeLen[uVar11 + 8];
                      if (uVar29 < uVar25) goto LAB_0810068c;
                      uVar28 = uVar11 + 9;
                      if (uVar28 != 0xf) {
                        uVar26 = (this->BlockTables).DD.DecodeLen[uVar11 + 9];
                        uVar24 = uVar25;
                        if (uVar29 < uVar26) goto LAB_0810068c;
                        uVar28 = uVar11 + 10;
                        if (uVar28 != 0xf) {
                          uVar25 = (this->BlockTables).DD.DecodeLen[uVar11 + 10];
                          uVar24 = uVar26;
                          if (uVar29 < uVar25) goto LAB_0810068c;
                          uVar28 = uVar11 + 0xb;
                          if (uVar28 != 0xf) {
                            uVar26 = (this->BlockTables).DD.DecodeLen[uVar11 + 0xb];
                            uVar24 = uVar25;
                            if (uVar29 < uVar26) goto LAB_0810068c;
                            uVar28 = uVar11 + 0xc;
                            if (uVar28 != 0xf) {
                              uVar25 = (this->BlockTables).DD.DecodeLen[uVar11 + 0xc];
                              uVar24 = uVar26;
                              if (uVar29 < uVar25) goto LAB_0810068c;
                              uVar28 = uVar11 + 0xd;
                              if (uVar28 != 0xf) {
                                uVar26 = (this->BlockTables).DD.DecodeLen[uVar11 + 0xd];
                                uVar24 = uVar25;
                                if (uVar29 < uVar26) goto LAB_0810068c;
                                uVar28 = uVar11 + 0xe;
                                if (uVar28 != 0xf) {
                                  uVar24 = uVar26;
                                  if (uVar29 < (this->BlockTables).DD.DecodeLen[uVar11 + 0xe])
                                  goto LAB_0810068c;
                                  if (uVar11 != 0) {
                                    uVar26 = (this->BlockTables).DD.DecodeLen[0xe];
                                    if (uVar29 < uVar26) {
                                      uVar24 = 2;
                                      uVar28 = 0xe;
                                      uVar26 = (this->BlockTables).DD.DecodeLen[0xd];
                                    }
                                    else {
                                      uVar24 = 1;
                                      uVar28 = 0xf;
                                    }
                                    goto LAB_08100370;
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
                goto LAB_08100678;
              }
LAB_0810068c:
              uVar26 = uVar24;
              uVar24 = 0x10 - uVar28;
            }
            else {
LAB_08100678:
              uVar24 = 1;
              uVar28 = 0xf;
              uVar26 = (this->BlockTables).DD.DecodeLen[0xe];
            }
LAB_08100370:
            iVar21 = (int)puVar20 + (uVar32 + uVar28 >> 3);
            uVar32 = uVar32 + uVar28 & 7;
            (this->Inp).InAddr = iVar21;
            (this->Inp).InBit = uVar32;
            pDVar33 = &(this->BlockTables).DD;
            uVar29 = (this->BlockTables).DD.DecodePos[uVar28] + (uVar29 - uVar26 >> (uVar24 & 0xff))
            ;
            if (pDVar33->MaxNum <= uVar29) {
              uVar29 = 0;
            }
            uVar7 = pDVar33->DecodeNum[uVar29];
          }
          uVar29 = (uint)uVar7;
          if (uVar29 < 4) {
            LowDist = uVar29 + 1;
          }
          else {
            uVar24 = (uVar7 >> 1) - 1;
            iVar17 = ((uVar29 & 1 | 2) << (uVar24 & 0xff)) + 1;
            if (uVar24 < 4) {
              pbVar27 = pbVar13 + iVar21;
              bVar4 = *pbVar27;
              bVar5 = pbVar27[3];
              bVar6 = pbVar27[1];
              bVar2 = pbVar27[2];
              bVar3 = pbVar27[4];
              (this->Inp).InAddr = iVar21 + (uVar32 + uVar24 >> 3);
              (this->Inp).InBit = uVar32 + uVar24 & 7;
              LowDist = iVar17 + (((uint)(bVar3 >> (8 - uVar32 & 0xff)) |
                                  ((uint)bVar5 | (uint)bVar4 << 0x18 | (uint)bVar6 << 0x10 |
                                  (uint)bVar2 << 8) << uVar32) >> (0x20 - uVar24 & 0xff));
            }
            else {
              if (uVar24 != 4) {
                pbVar27 = pbVar13 + iVar21;
                bVar4 = *pbVar27;
                uVar29 = (uVar32 - 4) + uVar24;
                bVar5 = pbVar27[3];
                bVar6 = pbVar27[1];
                bVar2 = pbVar27[2];
                bVar3 = pbVar27[4];
                (this->Inp).InAddr = iVar21 + (uVar29 >> 3);
                (this->Inp).InBit = uVar29 & 7;
                iVar17 = iVar17 + (((uint)(bVar3 >> (8 - uVar32 & 0xff)) |
                                   ((uint)bVar5 | (uint)bVar4 << 0x18 | (uint)bVar6 << 0x10 |
                                   (uint)bVar2 << 8) << uVar32) >> (0x24 - uVar24 & 0xff)) * 0x10;
              }
              uVar11 = DecodeNumber(this,Inp,&(this->BlockTables).LDD);
              LowDist = uVar11 + iVar17;
            }
            if (0x100 < LowDist) {
              if (LowDist < 0x2001) {
                uVar10 = uVar10 + 1;
              }
              else if (LowDist < 0x40001) {
                uVar10 = uVar10 + 2;
              }
              else {
                uVar10 = uVar10 + 3;
              }
            }
          }
          uVar11 = this->OldDist[0];
          uVar12 = this->OldDist[1];
          uVar23 = this->OldDist[2];
          bVar9 = this->Fragmented;
          this->OldDist[0] = LowDist;
          this->OldDist[1] = uVar11;
          this->LastLength = uVar10;
          this->OldDist[2] = uVar12;
          this->OldDist[3] = uVar23;
          if (bVar9 != false) {
            uVar29 = this->UnpPtr;
            uVar24 = uVar29 - LowDist;
            uVar32 = this->MaxWinMask;
            if (uVar10 == 0) {
              puVar20 = (ushort *)(this->Inp).InAddr;
            }
            else {
              uVar28 = uVar10 + uVar24;
              do {
                uVar25 = (this->FragWindow).MemSize[0];
                if (uVar29 < uVar25) {
                  pbVar13 = (this->FragWindow).Mem[0] + uVar29;
                }
                else {
                  psVar19 = (this->FragWindow).MemSize;
                  I_4 = 1;
                  do {
                    psVar19 = psVar19 + 1;
                    if (uVar29 < *psVar19) {
                      pbVar13 = (this->FragWindow).Mem[I_4] +
                                (uVar29 - (int)(this->FragWindow).Mem[I_4 + 0x1f]);
                      goto LAB_081004d4;
                    }
                    I_4 = I_4 + 1;
                  } while (I_4 != 0x20);
                  pbVar13 = (this->FragWindow).Mem[0];
                }
LAB_081004d4:
                uVar29 = uVar32 & uVar24;
                uVar24 = uVar24 + 1;
                if (uVar29 < uVar25) {
                  pbVar31 = (this->FragWindow).Mem[0] + uVar29;
                }
                else {
                  psVar19 = (this->FragWindow).MemSize;
                  I_5 = 1;
                  do {
                    psVar19 = psVar19 + 1;
                    if (uVar29 < *psVar19) {
                      pbVar31 = (this->FragWindow).Mem[I_5] +
                                (uVar29 - (int)(this->FragWindow).Mem[I_5 + 0x1f]);
                      goto LAB_08100520;
                    }
                    I_5 = I_5 + 1;
                  } while (I_5 != 0x20);
                  pbVar31 = (this->FragWindow).Mem[0];
                }
LAB_08100520:
                *pbVar13 = *pbVar31;
                uVar29 = this->UnpPtr + 1 & uVar32;
                this->UnpPtr = uVar29;
              } while (uVar28 != uVar24);
LAB_08100540:
              uVar32 = this->MaxWinMask;
              puVar20 = (ushort *)(this->Inp).InAddr;
            }
            goto LAB_080ffa94;
          }
        }
        CopyString(this,uVar10,LowDist);
        uVar29 = this->UnpPtr;
        uVar32 = this->MaxWinMask;
        puVar20 = (ushort *)(this->Inp).InAddr;
        goto LAB_080ffa94;
      }
      if (this->Fragmented == false) {
        sVar30 = this->UnpPtr;
        this->UnpPtr = sVar30 + 1;
        this->Window[sVar30] = (byte)uVar7;
        uVar29 = this->UnpPtr;
        uVar32 = this->MaxWinMask;
        puVar20 = (ushort *)(this->Inp).InAddr;
      }
      else {
        uVar32 = this->UnpPtr;
        uVar29 = (this->FragWindow).MemSize[0];
        this->UnpPtr = uVar32 + 1;
        if (uVar32 < uVar29) {
          pbVar13 = (this->FragWindow).Mem[0] + uVar32;
        }
        else {
          I_2 = 1;
          psVar19 = (this->FragWindow).MemSize;
          do {
            psVar19 = psVar19 + 1;
            if (uVar32 < *psVar19) {
              pbVar13 = (this->FragWindow).Mem[I_2] +
                        (uVar32 - (int)(this->FragWindow).Mem[I_2 + 0x1f]);
              goto LAB_0810055c;
            }
            I_2 = I_2 + 1;
          } while (I_2 != 0x20);
          pbVar13 = (this->FragWindow).Mem[0];
        }
LAB_0810055c:
        *pbVar13 = (byte)uVar7;
        uVar29 = this->UnpPtr;
        uVar32 = this->MaxWinMask;
        puVar20 = (ushort *)(this->Inp).InAddr;
      }
    } while( true );
  }
  UnpInitData(this,Solid);
  bVar9 = UnpReadBuf(this);
  if (bVar9) {
    bVar9 = ReadBlockHeader(this,&this->Inp,&this->BlockHeader);
    if ((bVar9) &&
       (bVar9 = ReadTables(this,&this->Inp,&this->BlockHeader,&this->BlockTables), bVar9))
    goto LAB_080ffa7c;
  }
  goto LAB_080ffbcc;
LAB_08100818:
  UnpWriteBuf(this);
LAB_080ffbcc:
  if (iVar8 != __stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


