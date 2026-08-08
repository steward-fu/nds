/*
 * Ghidra decompilation
 *
 * Function : _ZN6Unpack9Unpack5MTEb
 * Address  : 08100950
 * Program  : drastic
 */


/* DWARF original prototype: void Unpack5MT(Unpack * this, bool Solid) */

void __thiscall Unpack::Unpack5MT(Unpack *this,bool Solid)

{
  bool bVar1;
  UnpackDecodedItem *pUVar2;
  UnpackDecodedItem *pUVar3;
  undefined2 uVar4;
  byte bVar5;
  UnpackThreadData *pUVar8;
  int ReadSize;
  uint MaxBlockPerThread;
  bool bVar6;
  bool bVar7;
  ThreadPool *this_00;
  size_t SrcPtr_1;
  undefined8 *puVar9;
  uint uVar10;
  uint uVar11;
  int extraout_r1;
  UnpackThreadData *pUVar12;
  byte *Dest_1;
  size_t SrcPtr_2;
  byte *pbVar13;
  bool *pbVar14;
  UNP_DEC_TYPE UVar15;
  uint I;
  uint I_1;
  uint uVar16;
  undefined8 *puVar17;
  size_t SrcPtr;
  size_t sVar18;
  byte *Dest_2;
  uint uVar19;
  UnpackThreadData *CurData_1;
  int BufPos;
  int iVar20;
  UnpackThreadData *CurData;
  size_t __n;
  int DataLeft;
  UnpackDecodedItem *Item;
  int iVar21;
  UnpackThreadDataList *UTD;
  uint DecodedAllocated;
  uint uVar22;
  UnpackThreadDataList *pUVar23;
  UnpackDecodedItem *pUVar24;
  UnpackDecodedItem *Decoded;
  int iVar25;
  UnpackDecodedItem *pUVar26;
  UnpackDecodedItem *Border;
  uint uVar27;
  uint uVar28;
  uint BlockNumber;
  undefined8 *puVar29;
  byte *Src_1;
  undefined8 *puVar30;
  byte *Src;
  uint uVar31;
  uint Distance;
  uint uVar32;
  int iVar33;
  uint uVar34;
  bool bVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  uint BlockNumberMT;
  uint local_190;
  uint local_188;
  int local_17c;
  byte *Src_2;
  undefined8 *local_168;
  size_t local_160;
  UnpackFilter Filter;
  UnpackThreadDataList UTDArray [32];
  int local_2c;
  
  local_2c = __stack_chk_guard;
  InitMT(this);
  UnpInitData(this,Solid);
  uVar19 = this->MaxUserThreads;
  if ((uVar19 & 0x7fffffff) == 0) {
    pUVar8 = this->UnpThreadData;
  }
  else {
    pUVar8 = this->UnpThreadData;
    pbVar14 = &pUVar8->LargeBlock;
    do {
      *pbVar14 = false;
      pbVar14[2] = false;
      pbVar14 = pbVar14 + 0x4ae4;
    } while (pbVar14 != &pUVar8[uVar19 * 2].LargeBlock);
  }
  iVar25 = (this->BlockHeader).BlockBitSize;
  iVar20 = (this->BlockHeader).BlockStart;
  iVar21 = (this->BlockHeader).HeaderSize;
  bVar1 = (this->BlockHeader).LastBlockInFile;
  bVar7 = (this->BlockHeader).TablePresent;
  uVar4 = *(undefined2 *)&(this->BlockHeader).field_0x12;
  (pUVar8->BlockHeader).BlockSize = (this->BlockHeader).BlockSize;
  (pUVar8->BlockHeader).BlockBitSize = iVar25;
  uVar28 = 0;
  local_17c = 0;
  (pUVar8->BlockHeader).BlockStart = iVar20;
  (pUVar8->BlockHeader).HeaderSize = iVar21;
  (pUVar8->BlockHeader).LastBlockInFile = bVar1;
  (pUVar8->BlockHeader).TablePresent = bVar7;
  *(undefined2 *)&(pUVar8->BlockHeader).field_0x12 = uVar4;
  bVar1 = false;
  memcpy(&pUVar8->BlockTables,&this->BlockTables,0x4a9c);
  local_160 = 0;
LAB_08100a48:
  do {
    iVar20 = ComprDataIO::UnpRead
                       (this->UnpIO,this->ReadBufMT + local_160,0x400000 - local_160 & 0xfffffff0);
    if ((iVar20 < 0) || (local_160 = local_160 + iVar20, local_160 == 0)) goto LAB_08100ca0;
    do {
      if ((int)local_160 <= local_17c) goto LAB_08100a48;
      uVar11 = this->MaxUserThreads;
      local_188 = 0;
      local_190 = 0;
      if ((uVar11 & 0x7fffffff) != 0) {
        do {
          uVar28 = local_188;
          pUVar8 = this->UnpThreadData;
          pUVar8[uVar28].UnpackPtr = this;
          local_188 = uVar28;
          if (pUVar8[uVar28].Incomplete == false) {
            BitInput::SetExternalBuffer(&pUVar8[uVar28].Inp,this->ReadBufMT + local_17c);
            pUVar8[uVar28].Inp.InAddr = 0;
            pUVar8[uVar28].Inp.InBit = 0;
            pUVar8[uVar28].DataSize = local_160 - local_17c;
            if (local_160 - local_17c == 0) {
              uVar11 = this->MaxUserThreads;
              bVar7 = false;
              goto LAB_08100b8c;
            }
            pUVar8[uVar28].DamagedData = false;
            pUVar8[uVar28].TableRead = false;
            pUVar8[uVar28].Incomplete = false;
            pUVar8[uVar28].ThreadNumber = uVar28;
            pUVar8[uVar28].NoDataLeft = iVar20 == 0;
LAB_08100df8:
            pUVar8[uVar28].HeaderRead = true;
            bVar7 = ReadBlockHeader(this,&pUVar8[uVar28].Inp,&pUVar8[uVar28].BlockHeader);
            if (!bVar7) {
              uVar11 = this->MaxUserThreads;
              bVar7 = true;
              goto LAB_08100b8c;
            }
            uVar11 = this->MaxUserThreads;
          }
          else {
            pUVar8[uVar28].DataSize = local_160;
            pUVar8[uVar28].Incomplete = false;
            pUVar8[uVar28].ThreadNumber = uVar28;
            pUVar8[uVar28].NoDataLeft = iVar20 == 0;
            if (pUVar8[uVar28].HeaderRead == false) goto LAB_08100df8;
          }
          if (bVar1) {
            iVar21 = pUVar8[uVar28].BlockHeader.BlockSize;
LAB_08100b20:
            bVar1 = true;
            pUVar8[uVar28].LargeBlock = true;
          }
          else {
            iVar21 = pUVar8[uVar28].BlockHeader.BlockSize;
            if (0x20000 < iVar21) goto LAB_08100b20;
            local_190 = local_190 + 1;
          }
          local_188 = uVar28 + 1;
          local_17c = local_17c + iVar21 + pUVar8[uVar28].BlockHeader.HeaderSize;
          if ((int)(local_160 - local_17c) < 0) {
LAB_08100e28:
            bVar7 = false;
            goto LAB_08100b8c;
          }
          bVar5 = pUVar8[uVar28].BlockHeader.LastBlockInFile;
          if ((int)(local_160 - local_17c) < 0x400) {
            bVar5 = bVar5 | 1;
          }
          if (bVar5 != 0) goto LAB_08100e28;
        } while (local_188 < uVar11 << 1);
      }
      bVar7 = false;
LAB_08100b8c:
      uVar19 = __aeabi_uidiv(local_190,uVar11);
      __aeabi_uidivmod(local_190,uVar11);
      if (extraout_r1 != 0) {
        uVar19 = uVar19 + 1;
      }
      if (local_190 == 0) {
LAB_08100c28:
        if (local_188 == 0) {
LAB_0810192c:
          if (!bVar7) goto LAB_08100a48;
          goto LAB_08100ca0;
        }
      }
      else {
        if (local_188 != 1) {
          iVar21 = 0;
          uVar27 = 0;
          UTD = UTDArray;
          uVar22 = local_190;
          do {
            this_00 = this->UnpThreadPool;
            uVar32 = uVar22;
            if (uVar19 < uVar22) {
              uVar32 = uVar19;
            }
            uVar27 = uVar19 + uVar27;
            uVar22 = uVar22 - uVar19;
            pUVar8 = (UnpackThreadData *)((int)&this->UnpThreadData->UnpackPtr + iVar21);
            iVar21 = iVar21 + uVar19 * 0x4ae4;
            UTD->D = pUVar8;
            UTD->BlockCount = uVar32;
            ThreadPool::AddTask(this_00,UnpackDecodeThread,UTD);
            UTD = UTD + 1;
          } while (uVar27 < local_190);
          goto LAB_08100c28;
        }
        uVar27 = 0;
        iVar21 = 0;
        uVar22 = local_190;
        pUVar23 = UTDArray;
        do {
          pUVar8 = this->UnpThreadData;
          uVar27 = uVar19 + uVar27;
          uVar32 = uVar22;
          if (uVar19 < uVar22) {
            uVar32 = uVar19;
          }
          uVar22 = uVar22 - uVar19;
          pUVar23->BlockCount = uVar32;
          pUVar8 = (UnpackThreadData *)((int)&pUVar8->UnpackPtr + iVar21);
          iVar21 = iVar21 + uVar19 * 0x4ae4;
          pUVar23->D = pUVar8;
          UnpackDecode(this,pUVar8);
          pUVar23 = pUVar23 + 1;
        } while (uVar27 < local_190);
      }
      local_190 = 0;
      ThreadPool::WaitDone(this->UnpThreadPool);
      do {
        pUVar8 = this->UnpThreadData + local_190;
        if (pUVar8->LargeBlock == false) {
          pUVar24 = pUVar8->Decoded;
          pUVar26 = pUVar24 + pUVar8->DecodedSize;
          if (pUVar24 < pUVar26) {
            do {
              while( true ) {
                uVar19 = this->UnpPtr & this->MaxWinMask;
                this->UnpPtr = uVar19;
                if (uVar19 != this->WriteBorder &&
                    (this->MaxWinMask & this->WriteBorder - uVar19) < 0x1004) {
                  UnpWriteBuf(this);
                  iVar21 = *(int *)((int)&this->WrittenFileSize + 4);
                  iVar25 = *(int *)((int)&this->DestUnpSize + 4);
                  bVar6 = *(uint *)&this->DestUnpSize < *(uint *)&this->WrittenFileSize;
                  if ((int)(iVar25 - (iVar21 + (uint)bVar6)) < 0 !=
                      (SBORROW4(iVar25,iVar21) != SBORROW4(iVar25 - iVar21,(uint)bVar6)))
                  goto LAB_08100ca0;
                }
                UVar15 = pUVar24->Type;
                if (UVar15 != UNPDT_LITERAL) break;
                pbVar13 = &pUVar24->field_0x7;
                I = 0;
                do {
                  uVar19 = this->UnpPtr;
                  I = I + 1;
                  this->UnpPtr = uVar19 + 1;
                  pbVar13 = pbVar13 + 1;
                  this->Window[this->MaxWinMask & uVar19] = *pbVar13;
                } while (I <= pUVar24->Length);
joined_r0x08101610:
                pUVar24 = pUVar24 + 1;
                if (pUVar26 <= pUVar24) goto LAB_08100f20;
              }
              if (UVar15 != UNPDT_MATCH) {
                if (UVar15 == UNPDT_REP) {
                  uVar11 = (pUVar24->field_2).Distance;
                  uVar31 = this->OldDist[uVar11];
                  if (((uVar11 != 0) &&
                      (this->OldDist[uVar11] = this->OldDist[uVar11 - 1], uVar11 != 1)) &&
                     (this->OldDist[uVar11 - 1] = this->OldDist[uVar11 - 2], uVar11 != 2)) {
                    uVar16 = uVar11;
                    if (uVar11 != 3) {
                      uVar16 = this->OldDist[uVar11 - 4];
                    }
                    this->OldDist[uVar11 - 2] = this->OldDist[uVar11 - 3];
                    if (uVar11 != 3) {
                      this->OldDist[uVar11 - 3] = uVar16;
                    }
                  }
                  uVar27 = this->UnpPtr;
                  uVar32 = (uint)pUVar24->Length;
                  this->OldDist[0] = uVar31;
                  uVar22 = this->MaxWinSize - 0x1001;
                  uVar19 = uVar27 - uVar31;
                  this->LastLength = uVar32;
                  if (uVar22 <= uVar19 || uVar22 <= uVar27) {
                    if (uVar32 != 0) {
                      uVar22 = this->MaxWinMask;
                      uVar32 = uVar32 + uVar19;
                      do {
                        uVar22 = uVar22 & uVar19;
                        uVar19 = uVar19 + 1;
                        this->Window[uVar27] = this->Window[uVar22];
                        uVar22 = this->MaxWinMask;
                        uVar27 = this->UnpPtr + 1 & uVar22;
                        this->UnpPtr = uVar27;
                      } while (uVar19 != uVar32);
                    }
                    goto joined_r0x08101610;
                  }
                  this->UnpPtr = uVar32 + uVar27;
                  puVar29 = (undefined8 *)(this->Window + uVar19);
                  puVar30 = (undefined8 *)(this->Window + uVar27);
                  if (7 < uVar32) {
                    uVar32 = uVar32 - 8;
                    uVar10 = uVar27 + 0x80;
                    uVar22 = uVar10 - uVar31;
                    bVar35 = SBORROW4(uVar10,uVar19);
                    iVar21 = uVar10 - uVar19;
                    bVar6 = uVar10 == uVar19;
                    if ((int)uVar19 < (int)uVar10) {
                      bVar35 = SBORROW4(uVar22,uVar27);
                      iVar21 = uVar22 - uVar27;
                      bVar6 = uVar22 == uVar27;
                    }
                    uVar22 = (uVar32 >> 3) + 1;
                    uVar19 = uVar32;
                    puVar9 = puVar29;
                    puVar17 = puVar30;
                    if (uVar22 < 2 || !bVar6 && iVar21 < 0 == bVar35) {
                      while( true ) {
                        *(byte *)puVar17 = *(byte *)puVar9;
                        *(byte *)((int)puVar17 + 1) = *(byte *)((int)puVar9 + 1);
                        *(byte *)((int)puVar17 + 2) = *(byte *)((int)puVar9 + 2);
                        *(byte *)((int)puVar17 + 3) = *(byte *)((int)puVar9 + 3);
                        *(byte *)((int)puVar17 + 4) = *(byte *)((int)puVar9 + 4);
                        *(byte *)((int)puVar17 + 5) = *(byte *)((int)puVar9 + 5);
                        *(byte *)((int)puVar17 + 6) = *(byte *)((int)puVar9 + 6);
                        *(byte *)((int)puVar17 + 7) = *(byte *)((int)puVar9 + 7);
                        if (uVar19 < 8) break;
                        uVar19 = uVar19 - 8;
                        puVar9 = puVar9 + 1;
                        puVar17 = puVar17 + 1;
                      }
                    }
                    else {
                      uVar19 = ((uVar32 >> 3) - 1 >> 1) + 1;
                      if (7 < uVar32) {
                        uVar27 = 0;
                        do {
                          uVar36 = *puVar9;
                          uVar37 = puVar9[1];
                          uVar27 = uVar27 + 1;
                          puVar9 = puVar9 + 2;
                          *puVar17 = uVar36;
                          puVar17[1] = uVar37;
                          puVar17 = puVar17 + 2;
                        } while (uVar27 < uVar19);
                        puVar9 = puVar29 + uVar19 * 2;
                        puVar17 = puVar30 + uVar19 * 2;
                        if (uVar22 == uVar19 * 2) goto LAB_08101120;
                      }
                      *(byte *)puVar17 = *(byte *)puVar9;
                      *(byte *)((int)puVar17 + 1) = *(byte *)((int)puVar9 + 1);
                      *(byte *)((int)puVar17 + 2) = *(byte *)((int)puVar9 + 2);
                      *(byte *)((int)puVar17 + 3) = *(byte *)((int)puVar9 + 3);
                      *(byte *)((int)puVar17 + 4) = *(byte *)((int)puVar9 + 4);
                      *(byte *)((int)puVar17 + 5) = *(byte *)((int)puVar9 + 5);
                      *(byte *)((int)puVar17 + 6) = *(byte *)((int)puVar9 + 6);
                      *(byte *)((int)puVar17 + 7) = *(byte *)((int)puVar9 + 7);
                    }
LAB_08101120:
                    uVar32 = uVar32 + (uVar32 >> 3) * -8;
                    puVar29 = puVar29 + uVar22;
                    puVar30 = puVar30 + uVar22;
                  }
                  if (((uVar32 != 0) && (*(byte *)puVar30 = *(byte *)puVar29, uVar32 != 1)) &&
                     ((*(byte *)((int)puVar30 + 1) = *(byte *)((int)puVar29 + 1), uVar32 != 2 &&
                      ((((*(byte *)((int)puVar30 + 2) = *(byte *)((int)puVar29 + 2), uVar32 != 3 &&
                         (*(byte *)((int)puVar30 + 3) = *(byte *)((int)puVar29 + 3), uVar32 != 4))
                        && (*(byte *)((int)puVar30 + 4) = *(byte *)((int)puVar29 + 4), uVar32 != 5))
                       && (*(byte *)((int)puVar30 + 5) = *(byte *)((int)puVar29 + 5), uVar32 == 7)))
                      ))) {
                    *(byte *)((int)puVar30 + 6) = *(byte *)((int)puVar29 + 6);
                  }
                }
                else if (UVar15 == UNPDT_FULLREP) {
                  uVar19 = this->LastLength;
                  if (uVar19 != 0) {
                    uVar27 = this->UnpPtr;
                    uVar32 = this->MaxWinSize - 0x1001;
                    uVar22 = uVar27 - this->OldDist[0];
                    if (uVar27 < uVar32 && uVar22 < uVar32) {
                      this->UnpPtr = uVar19 + uVar27;
                      puVar30 = (undefined8 *)(this->Window + uVar22);
                      local_168 = (undefined8 *)(this->Window + uVar27);
                      if (7 < uVar19) {
                        uVar34 = uVar27 + 0x80;
                        uVar10 = uVar34 - this->OldDist[0];
                        uVar32 = uVar19 - 8 >> 3;
                        bVar35 = SBORROW4(uVar34,uVar22);
                        iVar21 = uVar34 - uVar22;
                        bVar6 = uVar34 == uVar22;
                        if ((int)uVar22 < (int)uVar34) {
                          bVar35 = SBORROW4(uVar10,uVar27);
                          iVar21 = uVar10 - uVar27;
                          bVar6 = uVar10 == uVar27;
                        }
                        uVar27 = uVar32 + 1;
                        uVar22 = uVar19;
                        puVar29 = puVar30;
                        puVar9 = local_168;
                        if (uVar27 < 2 || !bVar6 && iVar21 < 0 == bVar35) {
                          do {
                            uVar22 = uVar22 - 8;
                            *(byte *)puVar9 = *(byte *)puVar29;
                            *(byte *)((int)puVar9 + 1) = *(byte *)((int)puVar29 + 1);
                            *(byte *)((int)puVar9 + 2) = *(byte *)((int)puVar29 + 2);
                            *(byte *)((int)puVar9 + 3) = *(byte *)((int)puVar29 + 3);
                            *(byte *)((int)puVar9 + 4) = *(byte *)((int)puVar29 + 4);
                            *(byte *)((int)puVar9 + 5) = *(byte *)((int)puVar29 + 5);
                            *(byte *)((int)puVar9 + 6) = *(byte *)((int)puVar29 + 6);
                            *(byte *)((int)puVar9 + 7) = *(byte *)((int)puVar29 + 7);
                            puVar29 = puVar29 + 1;
                            puVar9 = puVar9 + 1;
                          } while (7 < uVar22);
                        }
                        else {
                          uVar22 = (uVar32 - 1 >> 1) + 1;
                          if (7 < uVar19 - 8) {
                            uVar32 = 0;
                            puVar29 = local_168;
                            puVar9 = puVar30;
                            do {
                              uVar36 = *puVar9;
                              uVar37 = puVar9[1];
                              uVar32 = uVar32 + 1;
                              puVar9 = puVar9 + 2;
                              *puVar29 = uVar36;
                              puVar29[1] = uVar37;
                              puVar29 = puVar29 + 2;
                            } while (uVar32 < uVar22);
                            puVar29 = puVar30 + uVar22 * 2;
                            puVar9 = local_168 + uVar22 * 2;
                            if (uVar27 == uVar22 * 2) goto LAB_081012ec;
                          }
                          *(byte *)puVar9 = *(byte *)puVar29;
                          *(byte *)((int)puVar9 + 1) = *(byte *)((int)puVar29 + 1);
                          *(byte *)((int)puVar9 + 2) = *(byte *)((int)puVar29 + 2);
                          *(byte *)((int)puVar9 + 3) = *(byte *)((int)puVar29 + 3);
                          *(byte *)((int)puVar9 + 4) = *(byte *)((int)puVar29 + 4);
                          *(byte *)((int)puVar9 + 5) = *(byte *)((int)puVar29 + 5);
                          *(byte *)((int)puVar9 + 6) = *(byte *)((int)puVar29 + 6);
                          *(byte *)((int)puVar9 + 7) = *(byte *)((int)puVar29 + 7);
                        }
LAB_081012ec:
                        uVar19 = uVar19 & 7;
                        puVar30 = puVar30 + uVar27;
                        local_168 = local_168 + uVar27;
                        if (uVar19 == 0) goto joined_r0x08101610;
                      }
                      *(byte *)local_168 = *(byte *)puVar30;
                      if (((uVar19 != 1) &&
                          (*(byte *)((int)local_168 + 1) = *(byte *)((int)puVar30 + 1), uVar19 != 2)
                          ) && ((*(byte *)((int)local_168 + 2) = *(byte *)((int)puVar30 + 2),
                                uVar19 != 3 &&
                                (((*(byte *)((int)local_168 + 3) = *(byte *)((int)puVar30 + 3),
                                  uVar19 != 4 &&
                                  (*(byte *)((int)local_168 + 4) = *(byte *)((int)puVar30 + 4),
                                  uVar19 != 5)) &&
                                 (*(byte *)((int)local_168 + 5) = *(byte *)((int)puVar30 + 5),
                                 uVar19 == 7)))))) {
                        pUVar24 = pUVar24 + 1;
                        *(byte *)((int)local_168 + 6) = *(byte *)((int)puVar30 + 6);
                        goto joined_r0x08100fa0;
                      }
                    }
                    else {
                      uVar32 = this->MaxWinMask;
                      uVar19 = uVar19 + uVar22;
                      do {
                        uVar32 = uVar32 & uVar22;
                        uVar22 = uVar22 + 1;
                        this->Window[uVar27] = this->Window[uVar32];
                        uVar32 = this->MaxWinMask;
                        uVar27 = this->UnpPtr + 1 & uVar32;
                        this->UnpPtr = uVar27;
                      } while (uVar22 != uVar19);
                    }
                  }
                }
                else if (UVar15 == UNPDT_FILTER) {
                  Filter.BlockStart = (pUVar24->field_2).Distance;
                  Filter.BlockLength = pUVar24[1].field_2.Distance;
                  pUVar2 = pUVar24 + 1;
                  Filter.Type = (byte)pUVar24->Length;
                  pUVar3 = pUVar24 + 2;
                  Filter.Width = pUVar24[2].field_2.Distance;
                  pUVar24 = pUVar24 + 3;
                  Filter.Channels = (byte)pUVar2->Length;
                  Filter.PosR = (byte)pUVar3->Length;
                  AddFilter(this,&Filter);
                  goto joined_r0x08100fa0;
                }
                goto joined_r0x08101610;
              }
              uVar32 = (uint)pUVar24->Length;
              uVar11 = this->OldDist[0];
              uVar16 = this->OldDist[1];
              uVar31 = this->OldDist[2];
              this->OldDist[0] = (uint)pUVar24->field_2;
              sVar18 = this->MaxWinSize;
              this->OldDist[1] = uVar11;
              this->OldDist[2] = uVar16;
              uVar27 = this->UnpPtr;
              this->OldDist[3] = uVar31;
              this->LastLength = uVar32;
              uVar11 = (pUVar24->field_2).Distance;
              uVar22 = sVar18 - 0x1001;
              uVar19 = uVar27 - uVar11;
              if (uVar22 <= uVar27 || uVar22 <= uVar19) {
                if (uVar32 != 0) {
                  uVar22 = this->MaxWinMask;
                  uVar32 = uVar32 + uVar19;
                  do {
                    uVar22 = uVar22 & uVar19;
                    uVar19 = uVar19 + 1;
                    this->Window[uVar27] = this->Window[uVar22];
                    uVar22 = this->MaxWinMask;
                    uVar27 = this->UnpPtr + 1 & uVar22;
                    this->UnpPtr = uVar27;
                  } while (uVar19 != uVar32);
                }
                goto joined_r0x08101610;
              }
              this->UnpPtr = uVar27 + uVar32;
              local_168 = (undefined8 *)(this->Window + uVar19);
              puVar30 = (undefined8 *)(this->Window + uVar27);
              if (7 < uVar32) {
                iVar33 = uVar27 + 0x80;
                uVar32 = uVar32 - 8;
                iVar25 = iVar33 - uVar11;
                uVar22 = uVar32 >> 3;
                bVar6 = SBORROW4(uVar19,iVar33);
                iVar21 = uVar19 - iVar33;
                if ((int)uVar19 < iVar33) {
                  bVar6 = SBORROW4(uVar27,iVar25);
                  iVar21 = uVar27 - iVar25;
                }
                uVar27 = uVar22 + 1;
                uVar19 = uVar32;
                puVar29 = puVar30;
                puVar9 = local_168;
                if (uVar27 < 2 || iVar21 < 0 != bVar6) {
                  while( true ) {
                    *(byte *)puVar29 = *(byte *)puVar9;
                    *(byte *)((int)puVar29 + 1) = *(byte *)((int)puVar9 + 1);
                    *(byte *)((int)puVar29 + 2) = *(byte *)((int)puVar9 + 2);
                    *(byte *)((int)puVar29 + 3) = *(byte *)((int)puVar9 + 3);
                    *(byte *)((int)puVar29 + 4) = *(byte *)((int)puVar9 + 4);
                    *(byte *)((int)puVar29 + 5) = *(byte *)((int)puVar9 + 5);
                    *(byte *)((int)puVar29 + 6) = *(byte *)((int)puVar9 + 6);
                    *(byte *)((int)puVar29 + 7) = *(byte *)((int)puVar9 + 7);
                    if (uVar19 < 8) break;
                    uVar19 = uVar19 - 8;
                    puVar29 = puVar29 + 1;
                    puVar9 = puVar9 + 1;
                  }
                }
                else {
                  uVar19 = (uVar22 - 1 >> 1) + 1;
                  puVar29 = local_168;
                  puVar9 = puVar30;
                  if (7 < uVar32) {
                    uVar10 = 0;
                    puVar29 = puVar30;
                    puVar9 = local_168;
                    do {
                      uVar36 = *puVar9;
                      uVar37 = puVar9[1];
                      uVar10 = uVar10 + 1;
                      puVar9 = puVar9 + 2;
                      *puVar29 = uVar36;
                      puVar29[1] = uVar37;
                      puVar29 = puVar29 + 2;
                    } while (uVar10 < uVar19);
                    puVar29 = local_168 + uVar19 * 2;
                    puVar9 = puVar30 + uVar19 * 2;
                    if (uVar19 * 2 - uVar27 == 0) goto LAB_081014d4;
                  }
                  *(byte *)puVar9 = *(byte *)puVar29;
                  *(byte *)((int)puVar9 + 1) = *(byte *)((int)puVar29 + 1);
                  *(byte *)((int)puVar9 + 2) = *(byte *)((int)puVar29 + 2);
                  *(byte *)((int)puVar9 + 3) = *(byte *)((int)puVar29 + 3);
                  *(byte *)((int)puVar9 + 4) = *(byte *)((int)puVar29 + 4);
                  *(byte *)((int)puVar9 + 5) = *(byte *)((int)puVar29 + 5);
                  *(byte *)((int)puVar9 + 6) = *(byte *)((int)puVar29 + 6);
                  *(byte *)((int)puVar9 + 7) = *(byte *)((int)puVar29 + 7);
                }
LAB_081014d4:
                uVar32 = uVar32 + uVar22 * -8;
                puVar30 = puVar30 + uVar27;
                local_168 = local_168 + uVar27;
              }
              if ((((uVar32 == 0) || (*(byte *)puVar30 = *(byte *)local_168, uVar32 == 1)) ||
                  (*(byte *)((int)puVar30 + 1) = *(byte *)((int)local_168 + 1), uVar32 == 2)) ||
                 (((*(byte *)((int)puVar30 + 2) = *(byte *)((int)local_168 + 2), uVar32 == 3 ||
                   (*(byte *)((int)puVar30 + 3) = *(byte *)((int)local_168 + 3), uVar32 == 4)) ||
                  ((*(byte *)((int)puVar30 + 4) = *(byte *)((int)local_168 + 4), uVar32 == 5 ||
                   (*(byte *)((int)puVar30 + 5) = *(byte *)((int)local_168 + 5), uVar32 != 7))))))
              goto joined_r0x08101610;
              pUVar24 = pUVar24 + 1;
              *(byte *)((int)puVar30 + 6) = *(byte *)((int)local_168 + 6);
joined_r0x08100fa0:
            } while (pUVar24 < pUVar26);
LAB_08100f20:
            if (pUVar8->LargeBlock != false) goto LAB_08100c78;
          }
        }
        else {
LAB_08100c78:
          bVar6 = UnpackLargeBlock(this,pUVar8);
          if (!bVar6) goto LAB_08100ca0;
        }
        if (pUVar8->DamagedData != false) goto LAB_08100ca0;
        if (pUVar8->Incomplete != false) {
          pbVar13 = (pUVar8->Inp).InBuf + (pUVar8->Inp).InAddr;
          iVar20 = (int)pbVar13 - (int)this->ReadBufMT;
          if ((int)local_160 <= iVar20) goto LAB_08100ca0;
          local_160 = local_160 - iVar20;
          memmove(this->ReadBufMT,pbVar13,local_160);
          pbVar13 = this->ReadBufMT;
          iVar21 = (pUVar8->Inp).InAddr;
          (pUVar8->Inp).InAddr = 0;
          iVar25 = (pUVar8->BlockHeader).BlockSize;
          (pUVar8->Inp).InBuf = pbVar13;
          iVar20 = (pUVar8->BlockHeader).BlockStart;
          (pUVar8->BlockHeader).BlockStart = 0;
          (pUVar8->BlockHeader).HeaderSize = 0;
          (pUVar8->BlockHeader).BlockSize = iVar25 - (iVar21 - iVar20);
          if (local_190 != 0) {
            pUVar12 = this->UnpThreadData;
            pUVar24 = pUVar12->Decoded;
            uVar11 = pUVar12->DecodedAllocated;
            memcpy(pUVar12,pUVar8,0x4ae4);
            pUVar12 = this->UnpThreadData;
            pUVar12->Decoded = pUVar24;
            pUVar12->DecodedAllocated = uVar11;
            pUVar8->Incomplete = false;
          }
          local_17c = 0;
          goto LAB_0810192c;
        }
        if ((pUVar8->BlockHeader).LastBlockInFile != false) goto LAB_08100ca0;
        local_190 = local_190 + 1;
      } while (local_188 != local_190);
      if (bVar7) goto LAB_08100ca0;
      __n = local_160 - local_17c;
    } while (0x3ff < (int)__n);
    if ((int)__n < 0) {
LAB_08100ca0:
      UnpWriteBuf(this);
      pUVar12 = this->UnpThreadData;
      iVar25 = pUVar12[uVar28].BlockHeader.BlockBitSize;
      iVar20 = pUVar12[uVar28].BlockHeader.BlockStart;
      iVar21 = pUVar12[uVar28].BlockHeader.HeaderSize;
      pUVar8 = pUVar12 + uVar28;
      bVar1 = (pUVar8->BlockHeader).LastBlockInFile;
      bVar7 = (pUVar8->BlockHeader).TablePresent;
      uVar4 = *(undefined2 *)&(pUVar8->BlockHeader).field_0x12;
      (this->BlockHeader).BlockSize = pUVar12[uVar28].BlockHeader.BlockSize;
      (this->BlockHeader).BlockBitSize = iVar25;
      (this->BlockHeader).BlockStart = iVar20;
      (this->BlockHeader).HeaderSize = iVar21;
      (this->BlockHeader).LastBlockInFile = bVar1;
      (this->BlockHeader).TablePresent = bVar7;
      *(undefined2 *)&(this->BlockHeader).field_0x12 = uVar4;
      memcpy(&this->BlockTables,&pUVar12[uVar28].BlockTables,0x4a9c);
      if (local_2c == __stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    if (__n != 0) {
      memmove(this->ReadBufMT,this->ReadBufMT + local_17c,__n);
    }
    local_17c = 0;
    local_160 = __n;
  } while( true );
}


