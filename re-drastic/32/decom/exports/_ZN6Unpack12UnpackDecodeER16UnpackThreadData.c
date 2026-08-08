/*
 * Ghidra decompilation
 *
 * Function : _ZN6Unpack12UnpackDecodeER16UnpackThreadData
 * Address  : 080f4b20
 * Program  : drastic
 */


/* DWARF original prototype: void UnpackDecode(Unpack * this, UnpackThreadData * D) */

void __thiscall Unpack::UnpackDecode(Unpack *this,UnpackThreadData *D)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  ushort uVar6;
  short sVar7;
  int iVar8;
  bool bVar9;
  ushort uVar10;
  UnpackDecodedItem *pUVar11;
  uint uVar12;
  uint uVar13;
  uint LengthSlot;
  uint LowDist;
  int iVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  uint I;
  BitInput *Inp;
  UnpackDecodedItem *pUVar18;
  int iVar19;
  ushort uVar20;
  int iVar21;
  int ReadBorder;
  uint uVar22;
  int iVar23;
  UnpackBlockTables *Tables;
  UnpackDecodedItem *CurItem;
  uint uVar24;
  uint LBits;
  uint I_1;
  uint uVar25;
  uint BitField;
  uint Pos;
  uint Code;
  uint BitField_1;
  uint Code_1;
  uint uVar26;
  byte *pbVar27;
  byte *pbVar28;
  uint Pos_1;
  uint DBits;
  ushort local_5c;
  UnpackFilter Filter;
  
  iVar8 = __stack_chk_guard;
  if (((D->TableRead != false) ||
      (bVar9 = (D->BlockHeader).TablePresent, D->TableRead = true, bVar9 == false)) ||
     (((Tables = (UnpackBlockTables *)(uint)(D->Inp).ExternalBuffer,
       Tables != (UnpackBlockTables *)0x0 ||
       ((Tables = (UnpackBlockTables *)(this->ReadTop + -0x18), (D->Inp).InAddr < (int)Tables ||
        (bVar9 = UnpReadBuf(this), bVar9)))) &&
      (bVar9 = ReadTables(this,&D->Inp,(UnpackBlockHeader *)&D->BlockTables,Tables), bVar9)))) {
    iVar19 = (D->Inp).InAddr;
    iVar14 = (D->BlockHeader).BlockSize;
    if (iVar19 <= iVar14 + (D->BlockHeader).HeaderSize) {
      iVar21 = D->DataSize + -0x10;
      iVar15 = iVar14 + (D->BlockHeader).BlockStart + -1;
      D->DecodedSize = 0;
      iVar14 = iVar21;
      if (iVar15 < iVar21) {
        iVar14 = iVar15;
      }
      do {
        if (iVar14 <= iVar19) {
          if ((iVar15 < iVar19) ||
             ((iVar15 == iVar19 && ((D->BlockHeader).BlockBitSize <= (D->Inp).InBit))))
          goto LAB_080f4e78;
          if (((iVar21 <= iVar19) && (D->NoDataLeft == false)) || (D->DataSize <= iVar19))
          goto LAB_080f5508;
        }
        uVar22 = D->DecodedSize;
        uVar16 = D->DecodedAllocated;
        if (uVar16 - 8 < uVar22) {
          D->DecodedAllocated = uVar16 * 2;
          pUVar11 = (UnpackDecodedItem *)realloc(D->Decoded,uVar16 * 0x18);
          D->Decoded = pUVar11;
          if (pUVar11 == (UnpackDecodedItem *)0x0) {
            ErrorHandler::MemoryError(&ErrHandler);
            pUVar11 = D->Decoded;
          }
          iVar19 = (D->Inp).InAddr;
          uVar22 = D->DecodedSize;
        }
        else {
          pUVar11 = D->Decoded;
        }
        pbVar28 = (D->Inp).InBuf;
        iVar23 = (D->Inp).InBit;
        uVar16 = (D->BlockTables).LD.QuickBits;
        pUVar11 = pUVar11 + uVar22;
        D->DecodedSize = uVar22 + 1;
        pbVar27 = pbVar28 + iVar19;
        uVar12 = (D->BlockTables).LD.DecodeLen[uVar16];
        uVar25 = ((uint)pbVar27[2] | (uint)*pbVar27 << 0x10 | (uint)pbVar27[1] << 8) >>
                 (8U - iVar23 & 0xff) & 0xfffe;
        if (uVar25 < uVar12) {
          uVar25 = uVar25 >> (0x10 - uVar16 & 0xff);
          uVar6 = (D->BlockTables).LD.QuickNum[uVar25];
          uVar26 = (uint)(D->BlockTables).LD.QuickLen[uVar25] + iVar23;
          iVar19 = iVar19 + (uVar26 >> 3);
          uVar26 = uVar26 & 7;
          (D->Inp).InAddr = iVar19;
          (D->Inp).InBit = uVar26;
        }
        else {
          uVar17 = uVar16 + 1;
          if (uVar17 < 0xf) {
            uVar26 = (D->BlockTables).LD.DecodeLen[uVar16 + 1];
            if (uVar25 < uVar26) {
LAB_080f4f68:
              uVar13 = 0x10 - uVar17;
            }
            else {
              uVar17 = uVar16 + 2;
              if (uVar17 == 0xf) goto LAB_080f4f08;
              uVar13 = (D->BlockTables).LD.DecodeLen[uVar16 + 2];
              uVar12 = uVar26;
              if (uVar25 < uVar13) goto LAB_080f4f68;
              uVar17 = uVar16 + 3;
              if (uVar17 == 0xf) goto LAB_080f4f08;
              uVar26 = (D->BlockTables).LD.DecodeLen[uVar16 + 3];
              uVar12 = uVar13;
              if (uVar25 < uVar26) goto LAB_080f4f68;
              uVar17 = uVar16 + 4;
              if (uVar17 == 0xf) goto LAB_080f4f08;
              uVar13 = (D->BlockTables).LD.DecodeLen[uVar16 + 4];
              uVar12 = uVar26;
              if (uVar25 < uVar13) goto LAB_080f4f68;
              uVar17 = uVar16 + 5;
              if (uVar17 == 0xf) goto LAB_080f4f08;
              uVar26 = (D->BlockTables).LD.DecodeLen[uVar16 + 5];
              uVar12 = uVar13;
              if (uVar25 < uVar26) goto LAB_080f4f68;
              uVar17 = uVar16 + 6;
              if (uVar17 == 0xf) goto LAB_080f4f08;
              uVar13 = (D->BlockTables).LD.DecodeLen[uVar16 + 6];
              uVar12 = uVar26;
              if (uVar25 < uVar13) goto LAB_080f4f68;
              uVar17 = uVar16 + 7;
              if (uVar17 == 0xf) goto LAB_080f4f08;
              uVar26 = (D->BlockTables).LD.DecodeLen[uVar16 + 7];
              uVar12 = uVar13;
              if (uVar25 < uVar26) goto LAB_080f4f68;
              uVar17 = uVar16 + 8;
              if (uVar17 == 0xf) goto LAB_080f4f08;
              uVar13 = (D->BlockTables).LD.DecodeLen[uVar16 + 8];
              uVar12 = uVar26;
              if (uVar25 < uVar13) goto LAB_080f4f68;
              uVar17 = uVar16 + 9;
              if (uVar17 == 0xf) goto LAB_080f4f08;
              uVar26 = (D->BlockTables).LD.DecodeLen[uVar16 + 9];
              uVar12 = uVar13;
              if (uVar25 < uVar26) goto LAB_080f4f68;
              uVar17 = uVar16 + 10;
              if (uVar17 == 0xf) goto LAB_080f4f08;
              uVar13 = (D->BlockTables).LD.DecodeLen[uVar16 + 10];
              uVar12 = uVar26;
              if (uVar25 < uVar13) goto LAB_080f4f68;
              uVar17 = uVar16 + 0xb;
              if (uVar17 == 0xf) goto LAB_080f4f08;
              uVar26 = (D->BlockTables).LD.DecodeLen[uVar16 + 0xb];
              uVar12 = uVar13;
              if (uVar25 < uVar26) goto LAB_080f4f68;
              uVar17 = uVar16 + 0xc;
              if (uVar17 == 0xf) goto LAB_080f4f08;
              uVar13 = (D->BlockTables).LD.DecodeLen[uVar16 + 0xc];
              uVar12 = uVar26;
              if (uVar25 < uVar13) goto LAB_080f4f68;
              uVar17 = uVar16 + 0xd;
              if (uVar17 == 0xf) goto LAB_080f4f08;
              uVar26 = (D->BlockTables).LD.DecodeLen[uVar16 + 0xd];
              uVar12 = uVar13;
              if (uVar25 < uVar26) goto LAB_080f4f68;
              uVar17 = uVar16 + 0xe;
              if (uVar17 == 0xf) goto LAB_080f4f08;
              uVar12 = uVar26;
              if (uVar25 < (D->BlockTables).LD.DecodeLen[uVar16 + 0xe]) goto LAB_080f4f68;
              if (uVar16 == 0) goto LAB_080f4f08;
              uVar12 = (D->BlockTables).LD.DecodeLen[0xe];
              if (uVar25 < uVar12) {
                uVar13 = 2;
                uVar17 = 0xe;
                uVar12 = (D->BlockTables).LD.DecodeLen[0xd];
              }
              else {
                uVar13 = 1;
                uVar17 = 0xf;
              }
            }
          }
          else {
LAB_080f4f08:
            uVar13 = 1;
            uVar17 = 0xf;
            uVar12 = (D->BlockTables).LD.DecodeLen[0xe];
          }
          uVar24 = (D->BlockTables).LD.MaxNum;
          iVar19 = iVar19 + (iVar23 + uVar17 >> 3);
          uVar26 = iVar23 + uVar17 & 7;
          (D->Inp).InAddr = iVar19;
          (D->Inp).InBit = uVar26;
          uVar25 = (D->BlockTables).LD.DecodePos[uVar17] + (uVar25 - uVar12 >> (uVar13 & 0xff));
          if (uVar24 <= uVar25) {
            uVar25 = 0;
          }
          uVar6 = (D->BlockTables).LD.DecodeNum[uVar25];
        }
        uVar25 = (uint)uVar6;
        if (uVar25 < 0x100) {
          if (((uVar22 + 1 < 2) || (pUVar11[-1].Type != UNPDT_LITERAL)) || (2 < pUVar11[-1].Length))
          {
            (pUVar11->field_2).Literal[0] = (byte)uVar6;
            iVar19 = (D->Inp).InAddr;
            pUVar11->Type = UNPDT_LITERAL;
            pUVar11->Length = 0;
          }
          else {
            uVar20 = pUVar11[-1].Length + 1;
            pUVar11[-1].Length = uVar20;
            *(byte *)((int)pUVar11 + (uVar20 - 4)) = (byte)uVar6;
            iVar19 = (D->Inp).InAddr;
            D->DecodedSize = D->DecodedSize - 1;
          }
        }
        else {
          Inp = &D->Inp;
          if (uVar25 < 0x106) {
            if (uVar25 == 0x100) {
              ReadFilter(this,Inp,&Filter);
              pUVar11->Type = UNPDT_FILTER;
              (pUVar11->field_2).Distance = Filter.BlockStart;
              pUVar18 = D->Decoded;
              uVar16 = D->DecodedSize;
              pUVar11->Length = (ushort)Filter.Type;
              D->DecodedSize = uVar16 + 1;
              pUVar18[uVar16].Type = UNPDT_FILTER;
              pUVar18[uVar16].field_2.Distance = Filter.BlockLength;
              pUVar11 = D->Decoded;
              uVar22 = D->DecodedSize;
              pUVar18[uVar16].Length = (ushort)Filter.Channels;
              D->DecodedSize = uVar22 + 1;
              pUVar11[uVar22].Type = UNPDT_FILTER;
              pUVar11[uVar22].field_2.Distance = Filter.Width;
              iVar19 = (D->Inp).InAddr;
              pUVar11[uVar22].Length = (ushort)Filter.PosR;
            }
            else if (uVar25 == 0x101) {
              pUVar11->Type = UNPDT_FULLREP;
            }
            else {
              pUVar11->Type = UNPDT_REP;
              (pUVar11->field_2).Distance = uVar25 - 0x102;
              uVar16 = DecodeNumber(this,Inp,&(D->BlockTables).RD);
              if (uVar16 < 8) {
                iVar19 = (D->Inp).InAddr;
                uVar10 = (short)uVar16 + 2;
              }
              else {
                iVar19 = (D->Inp).InAddr;
                iVar23 = (D->Inp).InBit;
                uVar25 = (uVar16 >> 2) - 1;
                uVar12 = iVar23 + uVar25;
                pbVar27 = (D->Inp).InBuf + iVar19;
                bVar1 = *pbVar27;
                iVar19 = iVar19 + (uVar12 >> 3);
                bVar2 = pbVar27[2];
                bVar3 = pbVar27[1];
                (D->Inp).InAddr = iVar19;
                (D->Inp).InBit = uVar12 & 7;
                uVar10 = (short)((uVar16 & 3 | 4) << (uVar25 & 0xff)) + 2 +
                         (short)((((uint)bVar2 | (uint)bVar1 << 0x10 | (uint)bVar3 << 8) >>
                                  (8U - iVar23 & 0xff) & 0xffff) >> (0x10 - uVar25 & 0xff));
              }
              pUVar11->Length = uVar10;
            }
          }
          else {
            local_5c = uVar6 - 0x104;
            uVar25 = uVar25 - 0x106;
            if (7 < uVar25) {
              pbVar27 = pbVar28 + iVar19;
              bVar1 = *pbVar27;
              uVar12 = (uVar25 >> 2) - 1;
              bVar2 = pbVar27[2];
              bVar3 = pbVar27[1];
              uVar17 = 8 - uVar26;
              iVar19 = iVar19 + (uVar26 + uVar12 >> 3);
              uVar26 = uVar26 + uVar12 & 7;
              (D->Inp).InAddr = iVar19;
              (D->Inp).InBit = uVar26;
              local_5c = (short)((uVar25 & 3 | 4) << (uVar12 & 0xff)) + 2 +
                         (short)((((uint)bVar2 | (uint)bVar1 << 0x10 | (uint)bVar3 << 8) >>
                                  (uVar17 & 0xff) & 0xffff) >> (0x10 - uVar12 & 0xff));
            }
            uVar16 = (D->BlockTables).DD.QuickBits;
            pbVar27 = pbVar28 + iVar19;
            uVar12 = (D->BlockTables).DD.DecodeLen[uVar16];
            uVar25 = ((uint)pbVar27[2] | (uint)*pbVar27 << 0x10 | (uint)pbVar27[1] << 8) >>
                     (8 - uVar26 & 0xff) & 0xfffe;
            if (uVar25 < uVar12) {
              uVar25 = uVar25 >> (0x10 - uVar16 & 0xff);
              uVar6 = (D->BlockTables).DD.QuickNum[uVar25];
              uVar26 = (D->BlockTables).DD.QuickLen[uVar25] + uVar26;
              iVar19 = iVar19 + (uVar26 >> 3);
              uVar26 = uVar26 & 7;
              (D->Inp).InAddr = iVar19;
              (D->Inp).InBit = uVar26;
            }
            else {
              uVar17 = uVar16 + 1;
              if (uVar17 < 0xf) {
                uVar13 = (D->BlockTables).DD.DecodeLen[uVar16 + 1];
                if (uVar13 <= uVar25) {
                  uVar17 = uVar16 + 2;
                  if (uVar17 != 0xf) {
                    uVar24 = (D->BlockTables).DD.DecodeLen[uVar16 + 2];
                    uVar12 = uVar13;
                    if (uVar25 < uVar24) {
LAB_080f54e4:
                      uVar13 = 0x10 - uVar17;
                      goto LAB_080f51b4;
                    }
                    uVar17 = uVar16 + 3;
                    if (uVar17 != 0xf) {
                      uVar12 = (D->BlockTables).DD.DecodeLen[uVar16 + 3];
                      if (uVar25 < uVar12) {
LAB_080f54ec:
                        uVar12 = uVar24;
                        uVar13 = 0x10 - uVar17;
                        goto LAB_080f51b4;
                      }
                      uVar17 = uVar16 + 4;
                      if (uVar17 != 0xf) {
                        uVar24 = (D->BlockTables).DD.DecodeLen[uVar16 + 4];
                        if (uVar25 < uVar24) goto LAB_080f54e4;
                        uVar17 = uVar16 + 5;
                        if (uVar17 != 0xf) {
                          uVar12 = (D->BlockTables).DD.DecodeLen[uVar16 + 5];
                          if (uVar25 < uVar12) goto LAB_080f54ec;
                          uVar17 = uVar16 + 6;
                          if (uVar17 != 0xf) {
                            uVar24 = (D->BlockTables).DD.DecodeLen[uVar16 + 6];
                            if (uVar25 < uVar24) goto LAB_080f54e4;
                            uVar17 = uVar16 + 7;
                            if (uVar17 != 0xf) {
                              uVar12 = (D->BlockTables).DD.DecodeLen[uVar16 + 7];
                              if (uVar25 < uVar12) goto LAB_080f54ec;
                              uVar17 = uVar16 + 8;
                              if (uVar17 != 0xf) {
                                uVar24 = (D->BlockTables).DD.DecodeLen[uVar16 + 8];
                                if (uVar25 < uVar24) goto LAB_080f54e4;
                                uVar17 = uVar16 + 9;
                                if (uVar17 != 0xf) {
                                  uVar12 = (D->BlockTables).DD.DecodeLen[uVar16 + 9];
                                  if (uVar25 < uVar12) goto LAB_080f54ec;
                                  uVar17 = uVar16 + 10;
                                  if (uVar17 != 0xf) {
                                    uVar24 = (D->BlockTables).DD.DecodeLen[uVar16 + 10];
                                    if (uVar25 < uVar24) goto LAB_080f54e4;
                                    uVar17 = uVar16 + 0xb;
                                    if (uVar17 != 0xf) {
                                      uVar12 = (D->BlockTables).DD.DecodeLen[uVar16 + 0xb];
                                      if (uVar25 < uVar12) goto LAB_080f54ec;
                                      uVar17 = uVar16 + 0xc;
                                      if (uVar17 != 0xf) {
                                        uVar24 = (D->BlockTables).DD.DecodeLen[uVar16 + 0xc];
                                        if (uVar25 < uVar24) goto LAB_080f54e4;
                                        uVar17 = uVar16 + 0xd;
                                        if (uVar17 != 0xf) {
                                          uVar12 = (D->BlockTables).DD.DecodeLen[uVar16 + 0xd];
                                          if (uVar25 < uVar12) goto LAB_080f54ec;
                                          uVar17 = uVar16 + 0xe;
                                          if (uVar17 != 0xf) {
                                            if (uVar25 < (D->BlockTables).DD.DecodeLen[uVar16 + 0xe]
                                               ) goto LAB_080f54e4;
                                            if (uVar16 != 0) {
                                              uVar12 = (D->BlockTables).DD.DecodeLen[0xe];
                                              if (uVar25 < uVar12) {
                                                uVar13 = 2;
                                                uVar17 = 0xe;
                                                uVar12 = (D->BlockTables).DD.DecodeLen[0xd];
                                              }
                                              else {
                                                uVar13 = 1;
                                                uVar17 = 0xf;
                                              }
                                              goto LAB_080f51b4;
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
                  goto LAB_080f52b0;
                }
                uVar13 = 0x10 - uVar17;
              }
              else {
LAB_080f52b0:
                uVar13 = 1;
                uVar17 = 0xf;
                uVar12 = (D->BlockTables).DD.DecodeLen[0xe];
              }
LAB_080f51b4:
              uVar24 = (D->BlockTables).DD.MaxNum;
              iVar19 = iVar19 + (uVar26 + uVar17 >> 3);
              uVar26 = uVar26 + uVar17 & 7;
              (D->Inp).InAddr = iVar19;
              (D->Inp).InBit = uVar26;
              uVar25 = (D->BlockTables).DD.DecodePos[uVar17] + (uVar25 - uVar12 >> (uVar13 & 0xff));
              if (uVar24 <= uVar25) {
                uVar25 = 0;
              }
              uVar6 = (D->BlockTables).DD.DecodeNum[uVar25];
            }
            uVar25 = (uint)uVar6;
            if (uVar25 < 4) {
              LowDist = uVar25 + 1;
            }
            else {
              uVar12 = (uVar6 >> 1) - 1;
              iVar23 = ((uVar25 & 1 | 2) << (uVar12 & 0xff)) + 1;
              if (uVar12 < 4) {
                pbVar27 = pbVar28 + iVar19;
                bVar1 = *pbVar27;
                bVar2 = pbVar27[3];
                bVar3 = pbVar27[1];
                bVar4 = pbVar27[2];
                bVar5 = pbVar27[4];
                (D->Inp).InAddr = iVar19 + (uVar26 + uVar12 >> 3);
                (D->Inp).InBit = uVar26 + uVar12 & 7;
                LowDist = iVar23 + (((uint)(bVar5 >> (8 - uVar26 & 0xff)) |
                                    ((uint)bVar2 | (uint)bVar1 << 0x18 | (uint)bVar3 << 0x10 |
                                    (uint)bVar4 << 8) << uVar26) >> (0x20 - uVar12 & 0xff));
              }
              else {
                if (uVar12 != 4) {
                  pbVar27 = pbVar28 + iVar19;
                  bVar1 = *pbVar27;
                  uVar25 = (uVar26 - 4) + uVar12;
                  bVar2 = pbVar27[3];
                  bVar3 = pbVar27[1];
                  bVar4 = pbVar27[2];
                  bVar5 = pbVar27[4];
                  (D->Inp).InAddr = iVar19 + (uVar25 >> 3);
                  (D->Inp).InBit = uVar25 & 7;
                  iVar23 = iVar23 + (((uint)(bVar5 >> (8 - uVar26 & 0xff)) |
                                     ((uint)bVar2 | (uint)bVar1 << 0x18 | (uint)bVar3 << 0x10 |
                                     (uint)bVar4 << 8) << uVar26) >> (0x24 - uVar12 & 0xff)) * 0x10;
                }
                uVar16 = DecodeNumber(this,Inp,&(D->BlockTables).LDD);
                LowDist = iVar23 + uVar16;
              }
              if (0x100 < LowDist) {
                if (LowDist < 0x2001) {
                  local_5c = local_5c + 1;
                }
                else {
                  if (LowDist < 0x40001) {
                    sVar7 = 2;
                  }
                  else {
                    sVar7 = 3;
                  }
                  local_5c = local_5c + sVar7;
                }
              }
            }
            pUVar11->Length = local_5c;
            (pUVar11->field_2).Distance = LowDist;
            iVar19 = (D->Inp).InAddr;
            pUVar11->Type = UNPDT_MATCH;
          }
        }
      } while( true );
    }
  }
  D->DamagedData = true;
LAB_080f4e78:
  if (iVar8 != __stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
LAB_080f5508:
  D->Incomplete = true;
  goto LAB_080f4e78;
}


