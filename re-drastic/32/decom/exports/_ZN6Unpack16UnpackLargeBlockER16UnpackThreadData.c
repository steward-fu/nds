/*
 * Ghidra decompilation
 *
 * Function : _ZN6Unpack16UnpackLargeBlockER16UnpackThreadData
 * Address  : 080feda8
 * Program  : drastic
 */


/* DWARF original prototype: bool UnpackLargeBlock(Unpack * this, UnpackThreadData * D) */

bool __thiscall Unpack::UnpackLargeBlock(Unpack *this,UnpackThreadData *D)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  ushort uVar6;
  int iVar7;
  int iVar8;
  uint LengthSlot;
  uint LowDist;
  int iVar9;
  int iVar10;
  int BlockBorder;
  byte *pbVar11;
  size_t SrcPtr;
  undefined8 *puVar12;
  uint uVar13;
  uint uVar14;
  uint I;
  uint LBits_1;
  uint I_1;
  undefined8 *puVar15;
  byte *Dest;
  uint uVar16;
  size_t sVar17;
  int iVar18;
  undefined8 *puVar19;
  UnpackBlockTables *Tables;
  uint uVar20;
  uint uVar21;
  uint Distance;
  uint uVar22;
  uint uVar23;
  uint BitField_1;
  uint Pos_1;
  uint Code_1;
  BitInput *Inp;
  int iVar24;
  uint uVar25;
  uint DBits;
  uint uVar26;
  byte *pbVar27;
  uint BitField;
  uint Pos;
  uint Code;
  uint LBits;
  uint uVar28;
  undefined8 *puVar29;
  byte *Src;
  bool bVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  int ReadBorder;
  int DataBorder;
  UnpackFilter Filter;
  
  iVar7 = __stack_chk_guard;
  if (((D->TableRead != false) ||
      (bVar30 = (D->BlockHeader).TablePresent, D->TableRead = true, bVar30 == false)) ||
     (((Tables = (UnpackBlockTables *)(uint)(D->Inp).ExternalBuffer,
       Tables != (UnpackBlockTables *)0x0 ||
       ((Tables = (UnpackBlockTables *)(this->ReadTop + -0x18), (D->Inp).InAddr < (int)Tables ||
        (bVar30 = UnpReadBuf(this), bVar30)))) &&
      (bVar30 = ReadTables(this,&D->Inp,(UnpackBlockHeader *)&D->BlockTables,Tables), bVar30)))) {
    iVar8 = (D->Inp).InAddr;
    iVar9 = (D->BlockHeader).BlockSize;
    if (iVar8 <= iVar9 + (D->BlockHeader).HeaderSize) {
      uVar13 = this->MaxWinMask;
      iVar10 = iVar9 + (D->BlockHeader).BlockStart + -1;
      iVar24 = D->DataSize + -0x10;
      iVar9 = iVar10;
      if (iVar24 <= iVar10) {
        iVar9 = iVar24;
      }
      uVar16 = this->UnpPtr;
LAB_080fee4c:
      sVar17 = uVar16 & uVar13;
      this->UnpPtr = sVar17;
      if (iVar8 < iVar9) goto LAB_080fee98;
joined_r0x080fee64:
      if ((iVar10 < iVar8) ||
         ((iVar10 == iVar8 && ((D->BlockHeader).BlockBitSize <= (D->Inp).InBit)))) {
LAB_080ff11c:
        bVar30 = true;
      }
      else {
        if (((iVar8 < iVar24) || (D->NoDataLeft != false)) && (iVar8 < D->DataSize)) {
LAB_080fee98:
          if (sVar17 != this->WriteBorder && (uVar13 & this->WriteBorder - sVar17) < 0x1004) {
            UnpWriteBuf(this);
            iVar8 = *(int *)((int)&this->DestUnpSize + 4);
            iVar18 = *(int *)((int)&this->WrittenFileSize + 4);
            bVar30 = *(uint *)&this->DestUnpSize < *(uint *)&this->WrittenFileSize;
            if ((int)(iVar8 - (iVar18 + (uint)bVar30)) < 0 !=
                (SBORROW4(iVar8,iVar18) != SBORROW4(iVar8 - iVar18,(uint)bVar30))) {
              bVar30 = false;
              goto LAB_080ff120;
            }
          }
          iVar8 = (D->Inp).InAddr;
          iVar18 = (D->Inp).InBit;
          pbVar11 = (D->Inp).InBuf;
          uVar25 = (D->BlockTables).LD.QuickBits;
          pbVar27 = pbVar11 + iVar8;
          uVar16 = (D->BlockTables).LD.DecodeLen[uVar25];
          uVar13 = ((uint)pbVar27[2] | (uint)*pbVar27 << 0x10 | (uint)pbVar27[1] << 8) >>
                   (8U - iVar18 & 0xff) & 0xfffe;
          if (uVar13 < uVar16) {
            uVar13 = uVar13 >> (0x10 - uVar25 & 0xff);
            uVar6 = (D->BlockTables).LD.QuickNum[uVar13];
            uVar23 = (uint)(D->BlockTables).LD.QuickLen[uVar13] + iVar18;
            iVar8 = iVar8 + (uVar23 >> 3);
            uVar23 = uVar23 & 7;
            (D->Inp).InAddr = iVar8;
            (D->Inp).InBit = uVar23;
          }
          else {
            uVar14 = uVar25 + 1;
            if (uVar14 < 0xf) {
              uVar23 = (D->BlockTables).LD.DecodeLen[uVar25 + 1];
              if (uVar13 < uVar23) {
LAB_080ff2ac:
                uVar20 = 0x10 - uVar14;
              }
              else {
                uVar14 = uVar25 + 2;
                if (uVar14 == 0xf) goto LAB_080ff268;
                uVar20 = (D->BlockTables).LD.DecodeLen[uVar25 + 2];
                uVar16 = uVar23;
                if (uVar13 < uVar20) goto LAB_080ff2ac;
                uVar14 = uVar25 + 3;
                if (uVar14 == 0xf) goto LAB_080ff268;
                uVar23 = (D->BlockTables).LD.DecodeLen[uVar25 + 3];
                uVar16 = uVar20;
                if (uVar13 < uVar23) goto LAB_080ff2ac;
                uVar14 = uVar25 + 4;
                if (uVar14 == 0xf) goto LAB_080ff268;
                uVar20 = (D->BlockTables).LD.DecodeLen[uVar25 + 4];
                uVar16 = uVar23;
                if (uVar13 < uVar20) goto LAB_080ff2ac;
                uVar14 = uVar25 + 5;
                if (uVar14 == 0xf) goto LAB_080ff268;
                uVar23 = (D->BlockTables).LD.DecodeLen[uVar25 + 5];
                uVar16 = uVar20;
                if (uVar13 < uVar23) goto LAB_080ff2ac;
                uVar14 = uVar25 + 6;
                if (uVar14 == 0xf) goto LAB_080ff268;
                uVar20 = (D->BlockTables).LD.DecodeLen[uVar25 + 6];
                uVar16 = uVar23;
                if (uVar13 < uVar20) goto LAB_080ff2ac;
                uVar14 = uVar25 + 7;
                if (uVar14 == 0xf) goto LAB_080ff268;
                uVar23 = (D->BlockTables).LD.DecodeLen[uVar25 + 7];
                uVar16 = uVar20;
                if (uVar13 < uVar23) goto LAB_080ff2ac;
                uVar14 = uVar25 + 8;
                if (uVar14 == 0xf) goto LAB_080ff268;
                uVar20 = (D->BlockTables).LD.DecodeLen[uVar25 + 8];
                uVar16 = uVar23;
                if (uVar13 < uVar20) goto LAB_080ff2ac;
                uVar14 = uVar25 + 9;
                if (uVar14 == 0xf) goto LAB_080ff268;
                uVar23 = (D->BlockTables).LD.DecodeLen[uVar25 + 9];
                uVar16 = uVar20;
                if (uVar13 < uVar23) goto LAB_080ff2ac;
                uVar14 = uVar25 + 10;
                if (uVar14 == 0xf) goto LAB_080ff268;
                uVar20 = (D->BlockTables).LD.DecodeLen[uVar25 + 10];
                uVar16 = uVar23;
                if (uVar13 < uVar20) goto LAB_080ff2ac;
                uVar14 = uVar25 + 0xb;
                if (uVar14 == 0xf) goto LAB_080ff268;
                uVar23 = (D->BlockTables).LD.DecodeLen[uVar25 + 0xb];
                uVar16 = uVar20;
                if (uVar13 < uVar23) goto LAB_080ff2ac;
                uVar14 = uVar25 + 0xc;
                if (uVar14 == 0xf) goto LAB_080ff268;
                uVar20 = (D->BlockTables).LD.DecodeLen[uVar25 + 0xc];
                uVar16 = uVar23;
                if (uVar13 < uVar20) goto LAB_080ff2ac;
                uVar14 = uVar25 + 0xd;
                if (uVar14 == 0xf) goto LAB_080ff268;
                uVar23 = (D->BlockTables).LD.DecodeLen[uVar25 + 0xd];
                uVar16 = uVar20;
                if (uVar13 < uVar23) goto LAB_080ff2ac;
                uVar14 = uVar25 + 0xe;
                if (uVar14 == 0xf) goto LAB_080ff268;
                uVar16 = uVar23;
                if (uVar13 < (D->BlockTables).LD.DecodeLen[uVar25 + 0xe]) goto LAB_080ff2ac;
                if (uVar25 == 0) goto LAB_080ff268;
                uVar16 = (D->BlockTables).LD.DecodeLen[0xe];
                if (uVar13 < uVar16) {
                  uVar20 = 2;
                  uVar14 = 0xe;
                  uVar16 = (D->BlockTables).LD.DecodeLen[0xd];
                }
                else {
                  uVar20 = 1;
                  uVar14 = 0xf;
                }
              }
            }
            else {
LAB_080ff268:
              uVar20 = 1;
              uVar14 = 0xf;
              uVar16 = (D->BlockTables).LD.DecodeLen[0xe];
            }
            uVar22 = (D->BlockTables).LD.MaxNum;
            iVar8 = iVar8 + (iVar18 + uVar14 >> 3);
            uVar23 = iVar18 + uVar14 & 7;
            (D->Inp).InAddr = iVar8;
            (D->Inp).InBit = uVar23;
            uVar13 = (D->BlockTables).LD.DecodePos[uVar14] + (uVar13 - uVar16 >> (uVar20 & 0xff));
            if (uVar22 <= uVar13) {
              uVar13 = 0;
            }
            uVar6 = (D->BlockTables).LD.DecodeNum[uVar13];
          }
          uVar13 = (uint)uVar6;
          if (uVar13 < 0x100) goto code_r0x080ff0dc;
          Inp = &D->Inp;
          if (uVar13 < 0x106) {
            if (uVar13 == 0x100) {
              bVar30 = ReadFilter(this,Inp,&Filter);
              if ((!bVar30) || (bVar30 = AddFilter(this,&Filter), !bVar30)) goto LAB_080ff11c;
              goto LAB_080ff254;
            }
            if (uVar13 == 0x101) {
              uVar25 = this->LastLength;
              if (uVar25 == 0) {
                uVar16 = this->UnpPtr;
                uVar13 = this->MaxWinMask;
                goto LAB_080fee4c;
              }
              uVar21 = this->OldDist[0];
            }
            else {
              uVar21 = *(uint *)((int)this + uVar13 * 4 + -0x3b4);
              if (((uVar13 != 0x102) &&
                  (*(undefined4 *)((int)this + uVar13 * 4 + -0x3b4) =
                        *(undefined4 *)((int)this + uVar13 * 4 + -0x3b8), uVar13 != 0x103)) &&
                 (*(undefined4 *)((int)this + uVar13 * 4 + -0x3b8) =
                       *(undefined4 *)((int)this + uVar13 * 4 + -0x3bc), uVar13 != 0x104)) {
                uVar16 = uVar13;
                if (uVar13 != 0x105) {
                  uVar16 = *(uint *)((int)this + uVar13 * 4 + -0x3c4);
                }
                *(undefined4 *)((int)this + uVar13 * 4 + -0x3bc) =
                     *(undefined4 *)((int)this + uVar13 * 4 + -0x3c0);
                if (uVar13 != 0x105) {
                  *(uint *)((int)this + uVar13 * 4 + -0x3c0) = uVar16;
                }
              }
              this->OldDist[0] = uVar21;
              uVar25 = DecodeNumber(this,Inp,&(D->BlockTables).RD);
              if (uVar25 < 8) {
                uVar25 = uVar25 + 2;
              }
              else {
                iVar18 = (D->Inp).InAddr;
                iVar8 = (D->Inp).InBit;
                uVar13 = (uVar25 >> 2) - 1;
                uVar16 = iVar8 + uVar13;
                pbVar27 = (D->Inp).InBuf + iVar18;
                bVar1 = *pbVar27;
                bVar2 = pbVar27[2];
                bVar3 = pbVar27[1];
                (D->Inp).InAddr = iVar18 + (uVar16 >> 3);
                (D->Inp).InBit = uVar16 & 7;
                uVar25 = ((uVar25 & 3 | 4) << (uVar13 & 0xff)) + 2 +
                         ((((uint)bVar2 | (uint)bVar1 << 0x10 | (uint)bVar3 << 8) >>
                           (8U - iVar8 & 0xff) & 0xffff) >> (0x10 - uVar13 & 0xff));
              }
              this->LastLength = uVar25;
            }
            CopyString(this,uVar25,uVar21);
            goto LAB_080ff254;
          }
          DataBorder = uVar13 - 0x104;
          uVar13 = uVar13 - 0x106;
          if (7 < uVar13) {
            pbVar27 = pbVar11 + iVar8;
            bVar1 = *pbVar27;
            uVar14 = (uVar13 >> 2) - 1;
            bVar2 = pbVar27[2];
            bVar3 = pbVar27[1];
            uVar16 = 8 - uVar23;
            iVar8 = iVar8 + (uVar23 + uVar14 >> 3);
            uVar23 = uVar23 + uVar14 & 7;
            (D->Inp).InAddr = iVar8;
            (D->Inp).InBit = uVar23;
            DataBorder = ((uVar13 & 3 | 4) << (uVar14 & 0xff)) + 2 +
                         ((((uint)bVar2 | (uint)bVar1 << 0x10 | (uint)bVar3 << 8) >> (uVar16 & 0xff)
                          & 0xffff) >> (0x10 - uVar14 & 0xff));
          }
          uVar25 = (D->BlockTables).DD.QuickBits;
          pbVar27 = pbVar11 + iVar8;
          uVar16 = (D->BlockTables).DD.DecodeLen[uVar25];
          uVar13 = ((uint)pbVar27[2] | (uint)*pbVar27 << 0x10 | (uint)pbVar27[1] << 8) >>
                   (8 - uVar23 & 0xff) & 0xfffe;
          if (uVar13 < uVar16) {
            uVar13 = uVar13 >> (0x10 - uVar25 & 0xff);
            uVar6 = (D->BlockTables).DD.QuickNum[uVar13];
            uVar23 = (D->BlockTables).DD.QuickLen[uVar13] + uVar23;
            iVar8 = iVar8 + (uVar23 >> 3);
            uVar23 = uVar23 & 7;
            (D->Inp).InAddr = iVar8;
            (D->Inp).InBit = uVar23;
          }
          else {
            uVar14 = uVar25 + 1;
            if (uVar14 < 0xf) {
              uVar20 = (D->BlockTables).DD.DecodeLen[uVar25 + 1];
              if (uVar13 < uVar20) {
LAB_080ff848:
                uVar20 = 0x10 - uVar14;
              }
              else {
                uVar14 = uVar25 + 2;
                if (uVar14 == 0xf) goto LAB_080ff7cc;
                uVar22 = (D->BlockTables).DD.DecodeLen[uVar25 + 2];
                uVar16 = uVar20;
                if (uVar13 < uVar22) goto LAB_080ff848;
                uVar14 = uVar25 + 3;
                if (uVar14 == 0xf) goto LAB_080ff7cc;
                uVar20 = (D->BlockTables).DD.DecodeLen[uVar25 + 3];
                uVar16 = uVar22;
                if (uVar13 < uVar20) goto LAB_080ff848;
                uVar14 = uVar25 + 4;
                if (uVar14 == 0xf) goto LAB_080ff7cc;
                uVar22 = (D->BlockTables).DD.DecodeLen[uVar25 + 4];
                uVar16 = uVar20;
                if (uVar13 < uVar22) goto LAB_080ff848;
                uVar14 = uVar25 + 5;
                if (uVar14 == 0xf) goto LAB_080ff7cc;
                uVar20 = (D->BlockTables).DD.DecodeLen[uVar25 + 5];
                uVar16 = uVar22;
                if (uVar13 < uVar20) goto LAB_080ff848;
                uVar14 = uVar25 + 6;
                if (uVar14 == 0xf) goto LAB_080ff7cc;
                uVar22 = (D->BlockTables).DD.DecodeLen[uVar25 + 6];
                uVar16 = uVar20;
                if (uVar13 < uVar22) goto LAB_080ff848;
                uVar14 = uVar25 + 7;
                if (uVar14 == 0xf) goto LAB_080ff7cc;
                uVar20 = (D->BlockTables).DD.DecodeLen[uVar25 + 7];
                uVar16 = uVar22;
                if (uVar13 < uVar20) goto LAB_080ff848;
                uVar14 = uVar25 + 8;
                if (uVar14 == 0xf) goto LAB_080ff7cc;
                uVar22 = (D->BlockTables).DD.DecodeLen[uVar25 + 8];
                uVar16 = uVar20;
                if (uVar13 < uVar22) goto LAB_080ff848;
                uVar14 = uVar25 + 9;
                if (uVar14 == 0xf) goto LAB_080ff7cc;
                uVar20 = (D->BlockTables).DD.DecodeLen[uVar25 + 9];
                uVar16 = uVar22;
                if (uVar13 < uVar20) goto LAB_080ff848;
                uVar14 = uVar25 + 10;
                if (uVar14 == 0xf) goto LAB_080ff7cc;
                uVar22 = (D->BlockTables).DD.DecodeLen[uVar25 + 10];
                uVar16 = uVar20;
                if (uVar13 < uVar22) goto LAB_080ff848;
                uVar14 = uVar25 + 0xb;
                if (uVar14 == 0xf) goto LAB_080ff7cc;
                uVar20 = (D->BlockTables).DD.DecodeLen[uVar25 + 0xb];
                uVar16 = uVar22;
                if (uVar13 < uVar20) goto LAB_080ff848;
                uVar14 = uVar25 + 0xc;
                if (uVar14 == 0xf) goto LAB_080ff7cc;
                uVar22 = (D->BlockTables).DD.DecodeLen[uVar25 + 0xc];
                uVar16 = uVar20;
                if (uVar13 < uVar22) goto LAB_080ff848;
                uVar14 = uVar25 + 0xd;
                if (uVar14 == 0xf) goto LAB_080ff7cc;
                uVar20 = (D->BlockTables).DD.DecodeLen[uVar25 + 0xd];
                uVar16 = uVar22;
                if (uVar13 < uVar20) goto LAB_080ff848;
                uVar14 = uVar25 + 0xe;
                if (uVar14 == 0xf) goto LAB_080ff7cc;
                uVar16 = uVar20;
                if (uVar13 < (D->BlockTables).DD.DecodeLen[uVar25 + 0xe]) goto LAB_080ff848;
                if (uVar25 == 0) goto LAB_080ff7cc;
                uVar16 = (D->BlockTables).DD.DecodeLen[0xe];
                if (uVar13 < uVar16) {
                  uVar20 = 2;
                  uVar14 = 0xe;
                  uVar16 = (D->BlockTables).DD.DecodeLen[0xd];
                }
                else {
                  uVar20 = 1;
                  uVar14 = 0xf;
                }
              }
            }
            else {
LAB_080ff7cc:
              uVar20 = 1;
              uVar14 = 0xf;
              uVar16 = (D->BlockTables).DD.DecodeLen[0xe];
            }
            uVar22 = (D->BlockTables).DD.MaxNum;
            iVar8 = iVar8 + (uVar23 + uVar14 >> 3);
            uVar23 = uVar23 + uVar14 & 7;
            (D->Inp).InAddr = iVar8;
            (D->Inp).InBit = uVar23;
            uVar13 = (D->BlockTables).DD.DecodePos[uVar14] + (uVar13 - uVar16 >> (uVar20 & 0xff));
            if (uVar22 <= uVar13) {
              uVar13 = 0;
            }
            uVar6 = (D->BlockTables).DD.DecodeNum[uVar13];
          }
          uVar13 = (uint)uVar6;
          if (uVar13 < 4) {
            uVar25 = uVar13 + 1;
          }
          else {
            uVar16 = (uVar6 >> 1) - 1;
            iVar18 = ((uVar13 & 1 | 2) << (uVar16 & 0xff)) + 1;
            if (uVar16 < 4) {
              pbVar27 = pbVar11 + iVar8;
              bVar1 = *pbVar27;
              bVar2 = pbVar27[3];
              bVar3 = pbVar27[1];
              bVar4 = pbVar27[2];
              bVar5 = pbVar27[4];
              (D->Inp).InAddr = iVar8 + (uVar23 + uVar16 >> 3);
              (D->Inp).InBit = uVar23 + uVar16 & 7;
              uVar25 = iVar18 + (((uint)(bVar5 >> (8 - uVar23 & 0xff)) |
                                 ((uint)bVar2 | (uint)bVar1 << 0x18 | (uint)bVar3 << 0x10 |
                                 (uint)bVar4 << 8) << uVar23) >> (0x20 - uVar16 & 0xff));
            }
            else {
              if (uVar16 != 4) {
                pbVar27 = pbVar11 + iVar8;
                bVar1 = *pbVar27;
                uVar13 = (uVar23 - 4) + uVar16;
                bVar2 = pbVar27[3];
                bVar3 = pbVar27[1];
                bVar4 = pbVar27[2];
                bVar5 = pbVar27[4];
                (D->Inp).InAddr = iVar8 + (uVar13 >> 3);
                (D->Inp).InBit = uVar13 & 7;
                iVar18 = iVar18 + (((uint)(bVar5 >> (8 - uVar23 & 0xff)) |
                                   ((uint)bVar2 | (uint)bVar1 << 0x18 | (uint)bVar3 << 0x10 |
                                   (uint)bVar4 << 8) << uVar23) >> (0x24 - uVar16 & 0xff)) * 0x10;
              }
              uVar25 = DecodeNumber(this,Inp,&(D->BlockTables).LDD);
              uVar25 = iVar18 + uVar25;
            }
            if (0x100 < uVar25) {
              if (uVar25 < 0x2001) {
                DataBorder = DataBorder + 1;
              }
              else if (uVar25 < 0x40001) {
                DataBorder = DataBorder + 2;
              }
              else {
                DataBorder = DataBorder + 3;
              }
            }
          }
          uVar26 = this->OldDist[0];
          this->OldDist[0] = uVar25;
          uVar16 = this->UnpPtr;
          uVar21 = this->OldDist[1];
          uVar28 = this->OldDist[2];
          uVar13 = this->MaxWinSize - 0x1001;
          this->OldDist[1] = uVar26;
          uVar23 = uVar16 - uVar25;
          this->OldDist[2] = uVar21;
          this->OldDist[3] = uVar28;
          this->LastLength = DataBorder;
          if (uVar13 <= uVar23 || uVar13 <= uVar16) {
            if (DataBorder == 0) {
              uVar13 = this->MaxWinMask;
              iVar8 = (D->Inp).InAddr;
            }
            else {
              uVar13 = this->MaxWinMask;
              uVar14 = DataBorder + uVar23;
              do {
                uVar13 = uVar13 & uVar23;
                uVar23 = uVar23 + 1;
                this->Window[uVar16] = this->Window[uVar13];
                uVar13 = this->MaxWinMask;
                uVar16 = this->UnpPtr + 1 & uVar13;
                this->UnpPtr = uVar16;
              } while (uVar23 != uVar14);
              iVar8 = (D->Inp).InAddr;
            }
            goto LAB_080fee4c;
          }
          this->UnpPtr = DataBorder + uVar16;
          puVar29 = (undefined8 *)(this->Window + uVar23);
          puVar15 = (undefined8 *)(this->Window + uVar16);
          if ((uint)DataBorder < 8) goto LAB_080ff6c4;
          iVar18 = uVar16 + 0x80;
          uVar13 = DataBorder - 8U >> 3;
          bVar30 = SBORROW4(uVar23,iVar18);
          iVar8 = uVar23 - iVar18;
          if ((int)uVar23 < iVar18) {
            bVar30 = SBORROW4(uVar16,iVar18 - uVar25);
            iVar8 = uVar16 - (iVar18 - uVar25);
          }
          uVar23 = uVar13 + 1;
          uVar16 = DataBorder;
          puVar12 = puVar15;
          puVar19 = puVar29;
          if (uVar23 < 2 || iVar8 < 0 != bVar30) goto LAB_080ff9a0;
          uVar13 = (uVar13 - 1 >> 1) + 1;
          puVar12 = puVar29;
          puVar19 = puVar15;
          if (DataBorder - 8U < 8) goto LAB_080ff66c;
          uVar16 = 0;
          do {
            uVar31 = *puVar12;
            uVar32 = puVar12[1];
            uVar16 = uVar16 + 1;
            puVar12 = puVar12 + 2;
            *puVar19 = uVar31;
            puVar19[1] = uVar32;
            puVar19 = puVar19 + 2;
          } while (uVar16 < uVar13);
          puVar12 = puVar29 + uVar13 * 2;
          puVar19 = puVar15 + uVar13 * 2;
          if (uVar13 * 2 - uVar23 != 0) {
LAB_080ff66c:
            *(byte *)puVar19 = *(byte *)puVar12;
            *(byte *)((int)puVar19 + 1) = *(byte *)((int)puVar12 + 1);
            *(byte *)((int)puVar19 + 2) = *(byte *)((int)puVar12 + 2);
            *(byte *)((int)puVar19 + 3) = *(byte *)((int)puVar12 + 3);
            *(byte *)((int)puVar19 + 4) = *(byte *)((int)puVar12 + 4);
            *(byte *)((int)puVar19 + 5) = *(byte *)((int)puVar12 + 5);
            *(byte *)((int)puVar19 + 6) = *(byte *)((int)puVar12 + 6);
            *(byte *)((int)puVar19 + 7) = *(byte *)((int)puVar12 + 7);
          }
          goto LAB_080ff6ac;
        }
        bVar30 = true;
        D->Incomplete = true;
      }
      goto LAB_080ff120;
    }
  }
  bVar30 = false;
  D->DamagedData = true;
LAB_080ff120:
  if (iVar7 == __stack_chk_guard) {
    return bVar30;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
code_r0x080ff0dc:
  sVar17 = this->UnpPtr;
  this->UnpPtr = sVar17 + 1;
  this->Window[sVar17] = (byte)uVar6;
  iVar8 = (D->Inp).InAddr;
  uVar13 = this->MaxWinMask;
  sVar17 = this->UnpPtr & uVar13;
  this->UnpPtr = sVar17;
  if (iVar9 <= iVar8) goto joined_r0x080fee64;
  goto LAB_080fee98;
LAB_080ff9a0:
  do {
    uVar16 = uVar16 - 8;
    *(byte *)puVar12 = *(byte *)puVar19;
    *(byte *)((int)puVar12 + 1) = *(byte *)((int)puVar19 + 1);
    *(byte *)((int)puVar12 + 2) = *(byte *)((int)puVar19 + 2);
    *(byte *)((int)puVar12 + 3) = *(byte *)((int)puVar19 + 3);
    *(byte *)((int)puVar12 + 4) = *(byte *)((int)puVar19 + 4);
    *(byte *)((int)puVar12 + 5) = *(byte *)((int)puVar19 + 5);
    *(byte *)((int)puVar12 + 6) = *(byte *)((int)puVar19 + 6);
    *(byte *)((int)puVar12 + 7) = *(byte *)((int)puVar19 + 7);
    puVar12 = puVar12 + 1;
    puVar19 = puVar19 + 1;
  } while (7 < uVar16);
LAB_080ff6ac:
  puVar29 = puVar29 + uVar23;
  puVar15 = puVar15 + uVar23;
  DataBorder = DataBorder & 7;
LAB_080ff6c4:
  if ((((DataBorder == 0) || (*(byte *)puVar15 = *(byte *)puVar29, DataBorder == 1)) ||
      ((*(byte *)((int)puVar15 + 1) = *(byte *)((int)puVar29 + 1), DataBorder == 2 ||
       ((*(byte *)((int)puVar15 + 2) = *(byte *)((int)puVar29 + 2), DataBorder == 3 ||
        (*(byte *)((int)puVar15 + 3) = *(byte *)((int)puVar29 + 3), DataBorder == 4)))))) ||
     ((*(byte *)((int)puVar15 + 4) = *(byte *)((int)puVar29 + 4), DataBorder == 5 ||
      (*(byte *)((int)puVar15 + 5) = *(byte *)((int)puVar29 + 5), DataBorder != 7)))) {
LAB_080ff254:
    iVar8 = (D->Inp).InAddr;
    uVar16 = this->UnpPtr;
    uVar13 = this->MaxWinMask;
  }
  else {
    *(byte *)((int)puVar15 + 6) = *(byte *)((int)puVar29 + 6);
    iVar8 = (D->Inp).InAddr;
    uVar16 = this->UnpPtr;
    uVar13 = this->MaxWinMask;
  }
  goto LAB_080fee4c;
}


