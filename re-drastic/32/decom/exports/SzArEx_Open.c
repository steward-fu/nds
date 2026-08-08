/*
 * Ghidra decompilation
 *
 * Function : SzArEx_Open
 * Address  : 080ca760
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

SRes SzArEx_Open(CSzArEx *p,ILookInStream *inStream,ISzAlloc *allocMain,ISzAlloc *allocTemp)

{
  int iVar1;
  int __result__;
  int __result___2;
  UInt32 UVar2;
  int __result___3;
  CSzFolder *pCVar3;
  int __result___1;
  int iVar4;
  SRes res;
  int __result___11;
  int __result___9;
  int __result___10;
  size_t size;
  int __result___12;
  SRes res_1;
  int __result___5;
  int __result___6;
  int __result___7;
  size_t *psVar5;
  Byte *b;
  Byte *b_1;
  int __result___4;
  int __result___8;
  UInt32 *pUVar6;
  UInt64 *pUVar7;
  Byte defined_1;
  Byte defined;
  uint uVar8;
  CSzFolder *pCVar9;
  CSzFolder *pCVar10;
  Byte *b_2;
  UInt64 *pUVar11;
  Byte *external;
  Byte *external_1;
  UInt32 i;
  byte *pbVar12;
  uint uVar13;
  Byte *pBVar14;
  CSzFileItem *f_1;
  CSzFileItem *pCVar15;
  CSzFileItem *f;
  size_t pos_1;
  CSzFileItem *file;
  UInt32 UVar16;
  UInt64 *pUVar17;
  undefined *size_00;
  size_t namesSize;
  Byte *pBVar18;
  Byte BVar19;
  CSzFolder *folder;
  int iVar20;
  bool bVar21;
  size_t nextHeaderSizeT;
  uint uVar22;
  uint uVar23;
  undefined8 uVar24;
  UInt64 UVar25;
  UInt64 in_stack_fffffef0;
  UInt64 offset;
  CSzFolder *local_f8;
  CSzFileItem *local_f0;
  size_t local_d8;
  UInt64 *unpackSizes;
  Byte *digestsDefined;
  UInt32 *digests;
  Byte *emptyStreamVector;
  Byte *emptyFileVector;
  Byte *lwtVector;
  UInt32 numUnpackStreams;
  UInt32 numFiles;
  Int64 startArcPos;
  UInt64 type;
  UInt64 type_1;
  CBuf buffer;
  CSzData sd;
  UInt64 type_2;
  Int64 pos;
  CSzFolder *local_78;
  CSzFolder *local_74;
  CSzFolder *local_70;
  CSzFolder *local_6c;
  CSzFolder *local_68;
  CSzFolder *local_64;
  Byte header [32];
  
  iVar1 = __stack_chk_guard;
  startArcPos._0_4_ = 0;
  startArcPos._4_4_ = 0;
  local_f8 = (CSzFolder *)(*inStream->Seek)(inStream,&startArcPos,SZ_SEEK_CUR);
  if ((local_f8 != (CSzFolder *)0x0) ||
     (local_f8 = (CSzFolder *)LookInStream_Read2(inStream,header,0x20,0x11),
     local_f8 != (CSzFolder *)0x0)) goto LAB_080ca7cc;
  if ((header[0] != k7zSignature[0]) ||
     ((((header[1] != k7zSignature[1] || (k7zSignature[2] != header[2])) ||
       (header[3] != k7zSignature[3])) ||
      ((header[4] != k7zSignature[4] || (header[5] != k7zSignature[5])))))) goto LAB_080ca8fc;
  if (header[6] == '\0') {
    *(uint *)&p->startPosAfterHeader = (uint)startArcPos + 0x20;
    *(uint *)((int)&p->startPosAfterHeader + 4) =
         startArcPos._4_4_ + (uint)(0xffffffdf < (uint)startArcPos);
    UVar2 = CrcCalc(header + 0xc,0x14);
    if (UVar2 != header._8_4_) {
      local_f8 = (CSzFolder *)0x3;
      goto LAB_080ca7cc;
    }
    nextHeaderSizeT = (size_t)header._20_8_;
    if (SUB84(header._20_8_,4) != 0) {
LAB_080ca8f4:
      local_f8 = (CSzFolder *)0x2;
      goto LAB_080ca7cc;
    }
    if (nextHeaderSizeT == 0) {
      local_f8 = (CSzFolder *)0x0;
      goto LAB_080ca7d8;
    }
    uVar24 = VectorAdd(header._12_8_,header._20_8_,8);
    uVar13 = SUB84(header._12_8_,4);
    uVar22 = (uint)header._12_8_;
    uVar8 = (uint)((ulonglong)uVar24 >> 0x20);
    uVar23 = (uint)uVar24;
    bVar21 = uVar8 <= uVar13;
    if (uVar13 == uVar8) {
      bVar21 = uVar23 <= uVar22;
    }
    if (bVar21 && (uVar13 != uVar8 || uVar22 != uVar23)) {
LAB_080ca8fc:
      local_f8 = (CSzFolder *)0x11;
      goto LAB_080ca7cc;
    }
    uVar8 = uVar8 + (0xffffffdf < uVar23);
    bVar21 = uVar8 <= uVar13;
    if (uVar13 == uVar8) {
      bVar21 = uVar23 + 0x20 <= uVar22;
    }
    if (bVar21 && (uVar13 != uVar8 || uVar22 != uVar23 + 0x20)) goto LAB_080ca8fc;
    pos._0_4_ = (CSzFolder *)0x0;
    pos._4_4_ = (CSzFolder *)0x0;
    local_f8 = (CSzFolder *)(*inStream->Seek)(inStream,(Int64 *)(CSzAr *)&pos,SZ_SEEK_END);
    if (local_f8 != (CSzFolder *)0x0) goto LAB_080ca7cc;
    pCVar3 = (CSzFolder *)(uVar22 + (uint)startArcPos);
    pCVar9 = (CSzFolder *)(uVar13 + startArcPos._4_4_ + (uint)CARRY4(uVar22,(uint)startArcPos));
    bVar21 = pos._4_4_ <= pCVar9;
    if (pCVar9 == pos._4_4_) {
      bVar21 = (CSzFolder *)pos <= pCVar3;
    }
    if (bVar21 && (pCVar9 != pos._4_4_ || pCVar3 != (CSzFolder *)pos)) {
LAB_080ca9d8:
      local_f8 = (CSzFolder *)0x6;
      goto LAB_080ca7cc;
    }
    pCVar10 = (CSzFolder *)((int)&pCVar9->Coders + (uint)((CSzFolder *)0xffffffdf < pCVar3));
    bVar21 = pCVar10 <= pos._4_4_;
    if (pos._4_4_ == pCVar10) {
      bVar21 = &pCVar3->UnpackCRC <= (CSzFolder *)pos;
    }
    if (!bVar21) goto LAB_080ca9d8;
    pCVar9 = (CSzFolder *)
             ((int)&pCVar9->Coders +
             (uint)CARRY4((uint)pCVar3,nextHeaderSizeT + 0x20) +
             (uint)(0xffffffdf < nextHeaderSizeT));
    bVar21 = pCVar9 <= pos._4_4_;
    if (pos._4_4_ == pCVar9) {
      bVar21 = (CSzFolder *)((int)&pCVar3->UnpackCRC + nextHeaderSizeT) <= (CSzFolder *)pos;
    }
    if (!bVar21) goto LAB_080ca9d8;
    local_f8 = (CSzFolder *)LookInStream_SeekTo(inStream,in_stack_fffffef0);
    if (local_f8 != (CSzFolder *)0x0) goto LAB_080ca7cc;
    iVar4 = Buf_Create(&buffer,nextHeaderSizeT,allocTemp);
    if (iVar4 == 0) goto LAB_080ca8f4;
    local_f8 = (CSzFolder *)LookInStream_Read(inStream,buffer.data,nextHeaderSizeT);
    if (local_f8 != (CSzFolder *)0x0) {
LAB_080caa24:
      Buf_Free(&buffer,allocTemp);
      goto LAB_080ca7cc;
    }
    UVar2 = CrcCalc(buffer.data,nextHeaderSizeT);
    if (header._28_4_ != UVar2) {
      local_f8 = (CSzFolder *)0x10;
      goto LAB_080caa24;
    }
    sd.Data = buffer.data;
    sd.Size = buffer.size;
    local_f8 = (CSzFolder *)SzReadNumber(&sd,&type);
    if (local_f8 == (CSzFolder *)0x0) {
      if (type._4_4_ == 0 && (int)type == 0x17) {
        Buf_Init((CBuf *)&type_2);
        offset = CONCAT44(&lwtVector,&emptyFileVector);
        UVar25 = p->startPosAfterHeader;
        emptyFileVector = (Byte *)local_f8;
        lwtVector = (Byte *)local_f8;
        numUnpackStreams = (UInt32)local_f8;
        numFiles = (UInt32)local_f8;
        pos._0_4_ = local_f8;
        pos._4_4_ = local_f8;
        local_78 = local_f8;
        local_74 = local_f8;
        local_70 = local_f8;
        local_6c = local_f8;
        local_68 = local_f8;
        local_64 = local_f8;
        local_f8 = (CSzFolder *)
                   SzReadStreamsInfo(&sd,&type_1,(CSzAr *)&pos,&numFiles,(UInt64 **)&emptyFileVector
                                     ,&lwtVector,(UInt32 **)&numUnpackStreams,allocTemp,allocTemp);
        pCVar3 = local_74;
        if (local_f8 == (CSzFolder *)0x0) {
          uVar8 = (uint)UVar25;
          bVar21 = CARRY4(uVar8,(uint)type_1);
          type_1._0_4_ = uVar8 + (uint)type_1;
          type_1._4_4_ = (int)(UVar25 >> 0x20) + type_1._4_4_ + (uint)bVar21;
          if (local_68 == (CSzFolder *)0x1) {
            UVar25 = SzFolder_GetUnpackSize(local_74);
            size = (size_t)UVar25;
            local_f8 = (CSzFolder *)LookInStream_SeekTo(inStream,offset);
            if (local_f8 == (CSzFolder *)0x0) {
              iVar4 = Buf_Create((CBuf *)&type_2,size,allocTemp);
              if (iVar4 == 0) {
                local_f8 = (CSzFolder *)0x2;
              }
              else {
                local_f8 = (CSzFolder *)
                           SzFolder_Decode(pCVar3,(UInt64 *)(CSzFolder *)pos,inStream,
                                           CONCAT44(type_1._4_4_,(uint)type_1),(Byte *)type_2,size,
                                           allocTemp);
                if (((local_f8 == (CSzFolder *)0x0) && (pCVar3->UnpackCRCDefined != 0)) &&
                   (UVar2 = CrcCalc((Byte *)type_2,size), UVar2 != pCVar3->UnpackCRC)) {
                  local_f8 = (CSzFolder *)0x3;
                }
              }
            }
          }
          else {
            local_f8 = (CSzFolder *)0x10;
          }
        }
        SzAr_Free((CSzAr *)&pos,allocTemp);
        (*allocTemp->Free)(allocTemp,emptyFileVector);
        (*allocTemp->Free)(allocTemp,lwtVector);
        (*allocTemp->Free)(allocTemp,(void *)numUnpackStreams);
        if (local_f8 == (CSzFolder *)0x0) {
          Buf_Free(&buffer,allocTemp);
          buffer.data = (Byte *)type_2;
          buffer.size = type_2._4_4_;
          sd.Data = (Byte *)type_2;
          sd.Size = type_2._4_4_;
          local_f8 = (CSzFolder *)SzReadNumber(&sd,&type);
          if (local_f8 == (CSzFolder *)0x0) goto LAB_080caa7c;
        }
        else {
          Buf_Free((CBuf *)&type_2,allocTemp);
        }
        goto LAB_080caa90;
      }
LAB_080caa7c:
      if (type._4_4_ != 0 || (int)type != 1) {
        local_f8 = (CSzFolder *)0x4;
        goto LAB_080caa90;
      }
      unpackSizes = (UInt64 *)0x0;
      digestsDefined = (Byte *)0x0;
      digests = (UInt32 *)0x0;
      emptyStreamVector = (Byte *)0x0;
      emptyFileVector = (Byte *)0x0;
      lwtVector = (Byte *)0x0;
      numUnpackStreams = 0;
      numFiles = 0;
      pCVar3 = (CSzFolder *)SzReadNumber(&sd,&type_1);
      local_f8 = pCVar3;
      if (pCVar3 == (CSzFolder *)0x0) {
        if (type_1._4_4_ == 0 && (uint)type_1 == 2) {
          while (local_f8 = (CSzFolder *)SzReadNumber(&sd,(UInt64 *)(CSzAr *)&pos),
                local_f8 == (CSzFolder *)0x0) {
            if (((uint)(CSzFolder *)pos | (uint)pos._4_4_) == 0) {
              local_f8 = (CSzFolder *)SzReadNumber(&sd,&type_1);
              if (local_f8 == (CSzFolder *)0x0) goto LAB_080caaf8;
              break;
            }
            SzSkeepData(&sd);
          }
        }
        else {
LAB_080caaf8:
          if (type_1._4_4_ == 0 && (uint)type_1 == 4) {
            local_f8 = (CSzFolder *)
                       SzReadStreamsInfo(&sd,&p->dataPos,&p->db,&numUnpackStreams,&unpackSizes,
                                         &digestsDefined,&digests,allocMain,allocTemp);
            if (local_f8 == (CSzFolder *)0x0) {
              p->dataPos = CONCAT44(*(int *)((int)&p->dataPos + 4) +
                                    *(int *)((int)&p->startPosAfterHeader + 4) +
                                    (uint)CARRY4(*(uint *)&p->dataPos,
                                                 *(uint *)&p->startPosAfterHeader),
                                    *(uint *)&p->dataPos + *(uint *)&p->startPosAfterHeader);
              local_f8 = (CSzFolder *)SzReadNumber(&sd,&type_1);
              if (local_f8 == (CSzFolder *)0x0) goto LAB_080cab04;
            }
          }
          else {
LAB_080cab04:
            local_f8 = pCVar3;
            if (((uint)type_1 | type_1._4_4_) != 0) {
              if (type_1._4_4_ == 0 && (uint)type_1 == 5) {
                local_f8 = (CSzFolder *)SzReadNumber32(&sd,&numFiles);
                if (local_f8 == (CSzFolder *)0x0) {
                  (p->db).NumFiles = numFiles;
                  if (numFiles == 0) {
                    local_f0 = (CSzFileItem *)numFiles;
LAB_080cacf4:
                    (p->db).Files = local_f0;
                    pBVar14 = &local_f0->HasStream;
                    for (UVar2 = 0; UVar2 != numFiles; UVar2 = UVar2 + 1) {
                      *pBVar14 = '\x01';
                      pBVar14[1] = '\0';
                      pBVar14[2] = '\0';
                      pBVar14[3] = '\0';
                      pBVar14[4] = '\0';
                      pBVar14 = pBVar14 + 0x20;
                    }
                    local_d8 = 0;
LAB_080caec0:
                    while( true ) {
                      local_f8 = (CSzFolder *)SzReadNumber(&sd,&type_2);
                      if (local_f8 != (CSzFolder *)0x0) goto LAB_080cab20;
                      if (((uint)(Byte *)type_2 | type_2._4_4_) == 0) {
                        UVar2 = 0;
                        iVar4 = 0;
                        iVar20 = 0;
                        goto LAB_080cb310;
                      }
                      local_f8 = (CSzFolder *)SzReadNumber(&sd,(UInt64 *)(CSzAr *)&pos);
                      if (local_f8 != (CSzFolder *)0x0) goto LAB_080cab20;
                      bVar21 = pos._4_4_ == (CSzFolder *)0x0;
                      if (pos._4_4_ == (CSzFolder *)0x0) {
                        bVar21 = (CSzFolder *)pos <= sd.Size;
                      }
                      if (!bVar21) goto LAB_080cab18;
                      if (type_2._4_4_ == (int)(Byte *)type_2 >> 0x1f) break;
switchD_080caf74_caseD_10:
                      sd.Size = sd.Size - (int)(CSzFolder *)pos;
                      sd.Data = sd.Data + (int)(CSzFolder *)pos;
                    }
                    switch((Byte *)type_2) {
                    case (Byte *)0xe:
                      local_f8 = (CSzFolder *)
                                 SzReadBoolVector(&sd,numFiles,&emptyStreamVector,allocTemp);
                      if (local_f8 != (CSzFolder *)0x0) goto LAB_080cab20;
                      local_d8 = 0;
                      pBVar14 = emptyStreamVector;
                      while (emptyStreamVector + numFiles != pBVar14) {
                        pBVar18 = pBVar14 + 1;
                        BVar19 = *pBVar14;
                        pBVar14 = pBVar18;
                        if (BVar19 != '\0') {
                          local_d8 = local_d8 + 1;
                        }
                      }
                      goto LAB_080caec0;
                    case (Byte *)0xf:
                      goto switchD_080caf74_caseD_f;
                    default:
                      goto switchD_080caf74_caseD_10;
                    case (Byte *)0x11:
                      if (sd.Size != 0) {
                        sd.Size = sd.Size - 1;
                        pBVar14 = sd.Data + 1;
                        BVar19 = *sd.Data;
                        sd.Data = pBVar14;
                        if (BVar19 != '\0') {
LAB_080cb454:
                          local_f8 = (CSzFolder *)0x4;
                          goto LAB_080cab20;
                        }
                        size_00 = (undefined *)((int)&((CSzFolder *)pos)[-1].NumUnpackStreams + 3);
                        if (((uint)size_00 & 1) != 0) goto LAB_080cab18;
                        iVar4 = Buf_Create(&p->FileNames,(size_t)size_00,allocMain);
                        if (iVar4 == 0) goto LAB_080caf60;
                        if (numFiles == 0xffffffff) {
                          p->FileNameOffsets = (size_t *)0x0;
                        }
                        else {
                          psVar5 = (size_t *)(*allocMain->Alloc)(allocMain,(numFiles + 1) * 4);
                          p->FileNameOffsets = psVar5;
                          if (psVar5 == (size_t *)0x0) goto LAB_080caf60;
                        }
                        memcpy((p->FileNames).data,sd.Data,(size_t)size_00);
                        psVar5 = p->FileNameOffsets;
                        pos_1 = 0;
                        for (i = 0; numFiles != i; i = i + 1) {
                          psVar5[i] = pos_1;
                          while( true ) {
                            if ((uint)size_00 >> 1 <= pos_1) goto LAB_080cab18;
                            if ((sd.Data[pos_1 * 2] == '\0') && (sd.Data[pos_1 * 2 + 1] == '\0'))
                            break;
                            pos_1 = pos_1 + 1;
                          }
                          pos_1 = pos_1 + 1;
                        }
                        psVar5[numFiles] = pos_1;
                        if (((uint)size_00 >> 1 != pos_1) || (sd.Size < size_00)) goto LAB_080cab18;
                        sd.Size = sd.Size - (int)size_00;
                        sd.Data = sd.Data + (int)size_00;
                        goto LAB_080caec0;
                      }
                      break;
                    case (Byte *)0x14:
                      local_f8 = (CSzFolder *)SzReadBoolVector2(&sd,numFiles,&lwtVector,allocTemp);
                      if (local_f8 != (CSzFolder *)0x0) goto LAB_080cab20;
                      if (sd.Size != 0) {
                        sd.Size = sd.Size - 1;
                        pBVar18 = sd.Data + 1;
                        BVar19 = *sd.Data;
                        pCVar15 = local_f0;
                        pBVar14 = lwtVector;
                        sd.Data = pBVar18;
                        if (BVar19 != '\0') goto LAB_080cb454;
                        while ((uint)((int)pBVar14 - (int)lwtVector) < numFiles) {
                          BVar19 = *pBVar14;
                          (pCVar15->MTime).Low = 0;
                          (pCVar15->MTime).High = 0;
                          pCVar15->MTimeDefined = BVar19;
                          if (BVar19 != '\0') {
                            uVar8 = 0;
                            do {
                              if (sd.Size == 0) goto LAB_080cab18;
                              sd.Size = sd.Size - 1;
                              pbVar12 = sd.Data + 1;
                              b = (Byte *)(uint)*sd.Data;
                              uVar13 = uVar8 & 0xff;
                              uVar8 = uVar8 + 8;
                              (pCVar15->MTime).Low = (pCVar15->MTime).Low | (int)b << uVar13;
                              sd.Data = pbVar12;
                            } while (uVar8 != 0x20);
                            uVar8 = 0;
                            (pCVar15->MTime).High = 0;
                            do {
                              sd.Data = pbVar12;
                              if (sd.Size == 0) goto LAB_080cab18;
                              sd.Size = sd.Size - 1;
                              sd.Data = pbVar12 + 1;
                              b_1 = (Byte *)(uint)*pbVar12;
                              uVar13 = uVar8 & 0xff;
                              uVar8 = uVar8 + 8;
                              (pCVar15->MTime).High = (pCVar15->MTime).High | (int)b_1 << uVar13;
                              pbVar12 = sd.Data;
                            } while (uVar8 != 0x20);
                          }
                          pCVar15 = pCVar15 + 1;
                          pBVar14 = pBVar14 + 1;
                        }
LAB_080cb470:
                        (*allocTemp->Free)(allocTemp,lwtVector);
                        lwtVector = (Byte *)0x0;
                        goto LAB_080caec0;
                      }
                      break;
                    case (Byte *)0x15:
                      local_f8 = (CSzFolder *)SzReadBoolVector2(&sd,numFiles,&lwtVector,allocTemp);
                      if (local_f8 != (CSzFolder *)0x0) goto LAB_080cab20;
                      if (sd.Size != 0) {
                        sd.Size = sd.Size - 1;
                        pBVar14 = sd.Data + 1;
                        BVar19 = *sd.Data;
                        sd.Data = pBVar14;
                        if (BVar19 == '\0') {
                          pBVar14 = lwtVector;
                          pCVar15 = local_f0;
                          while (lwtVector + numFiles != pBVar14) {
                            BVar19 = *pBVar14;
                            pCVar15->Attrib = 0;
                            pCVar15->AttribDefined = BVar19;
                            if (BVar19 != '\0') {
                              uVar8 = 0;
                              do {
                                if (sd.Size == 0) goto LAB_080cab18;
                                sd.Size = sd.Size - 1;
                                pBVar18 = sd.Data + 1;
                                b_2 = (Byte *)(uint)*sd.Data;
                                uVar13 = uVar8 & 0xff;
                                uVar8 = uVar8 + 8;
                                pCVar15->Attrib = pCVar15->Attrib | (int)b_2 << uVar13;
                                sd.Data = pBVar18;
                              } while (uVar8 != 0x20);
                            }
                            pCVar15 = pCVar15 + 1;
                            pBVar14 = pBVar14 + 1;
                          }
                          goto LAB_080cb470;
                        }
                        goto LAB_080cb454;
                      }
                    }
                    local_f8 = (CSzFolder *)0x10;
                    goto LAB_080cab20;
                  }
                  local_f0 = (CSzFileItem *)(*allocMain->Alloc)(allocMain,numFiles << 5);
                  if (local_f0 != (CSzFileItem *)0x0) goto LAB_080cacf4;
                  goto LAB_080caf60;
                }
              }
              else {
LAB_080cab18:
                local_f8 = (CSzFolder *)0x10;
              }
            }
          }
        }
      }
      goto LAB_080cab20;
    }
    goto LAB_080caa90;
  }
  local_f8 = (CSzFolder *)0x4;
LAB_080ca7cc:
  SzArEx_Free(p,allocMain);
LAB_080ca7d8:
  if (iVar1 == __stack_chk_guard) {
    return (SRes)local_f8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_080cb310:
  if (UVar2 == numFiles) goto LAB_080cb408;
  local_f0->IsAnti = '\0';
  if (emptyStreamVector == (Byte *)0x0) {
    local_f0->HasStream = '\x01';
LAB_080cb340:
    local_f0->IsDir = '\0';
    UVar25 = unpackSizes[iVar4];
    local_f0->Crc = digests[iVar4];
    local_f0->Size = UVar25;
    pBVar14 = digestsDefined + iVar4;
    iVar4 = iVar4 + 1;
    local_f0->CrcDefined = *pBVar14;
  }
  else {
    BVar19 = emptyStreamVector[UVar2];
    local_f0->HasStream = BVar19 == '\0';
    if (BVar19 == '\0') goto LAB_080cb340;
    if (emptyFileVector != (Byte *)0x0) {
      BVar19 = emptyFileVector[iVar20];
    }
    else {
      BVar19 = '\x01';
    }
    iVar20 = iVar20 + 1;
    *(Byte **)&local_f0->Size = (Byte *)type_2;
    if (emptyFileVector != (Byte *)0x0) {
      BVar19 = BVar19 == '\0';
    }
    *(size_t *)((int)&local_f0->Size + 4) = type_2._4_4_;
    local_f0->Crc = 0;
    local_f0->IsDir = BVar19;
    local_f0->CrcDefined = '\0';
  }
  UVar2 = UVar2 + 1;
  local_f0 = local_f0 + 1;
  goto LAB_080cb310;
LAB_080cb408:
  UVar2 = (p->db).NumFolders;
  if (UVar2 == 0) {
    p->FolderStartPackStreamIndex = (UInt32 *)0x0;
    UVar2 = 0;
LAB_080cb420:
    UVar16 = (p->db).NumPackStreams;
    if (UVar16 == 0) {
      p->PackStreamStartPositions = (UInt64 *)0x0;
    }
    else {
      pUVar7 = (UInt64 *)(*allocMain->Alloc)(allocMain,UVar16 << 3);
      p->PackStreamStartPositions = pUVar7;
      if (pUVar7 == (UInt64 *)0x0) goto LAB_080caf60;
      UVar2 = (p->db).NumPackStreams;
      UVar25 = 0;
      pUVar11 = pUVar7;
      while (pUVar11 != pUVar7 + UVar2) {
        pUVar17 = (p->db).PackSizes;
        *pUVar11 = UVar25;
        UVar25 = VectorAdd(UVar25,*(undefined8 *)((int)pUVar11 + ((int)pUVar17 - (int)pUVar7)),8);
        pUVar11 = pUVar11 + 1;
      }
      UVar2 = (p->db).NumFolders;
    }
    if (UVar2 == 0) {
      p->FolderStartFileIndex = (UInt32 *)0x0;
    }
    else {
      pUVar6 = (UInt32 *)(*allocMain->Alloc)(allocMain,UVar2 << 2);
      p->FolderStartFileIndex = pUVar6;
      if (pUVar6 == (UInt32 *)0x0) goto LAB_080caf60;
    }
    UVar2 = (p->db).NumFiles;
    if (UVar2 == 0) {
      p->FileIndexToFolderIndexMap = (UInt32 *)0x0;
      local_f8 = (CSzFolder *)0x0;
    }
    else {
      pUVar6 = (UInt32 *)(*allocMain->Alloc)(allocMain,UVar2 << 2);
      p->FileIndexToFolderIndexMap = pUVar6;
      if (pUVar6 == (UInt32 *)0x0) goto LAB_080caf60;
      uVar13 = 0;
      UVar2 = 0;
      for (uVar8 = 0; local_f8 = pCVar3, uVar8 < (p->db).NumFiles; uVar8 = uVar8 + 1) {
        BVar19 = (p->db).Files[uVar8].HasStream;
        if (BVar19 == '\0' && uVar13 == 0) {
          uVar13 = 0;
          p->FileIndexToFolderIndexMap[uVar8] = 0xffffffff;
        }
        else {
          if (uVar13 == 0) {
            iVar4 = UVar2 << 2;
            iVar20 = UVar2 * 0x28;
            while( true ) {
              if ((p->db).NumFolders <= UVar2) goto LAB_080cab18;
              pCVar9 = (p->db).Folders;
              *(uint *)((int)p->FolderStartFileIndex + iVar4) = uVar8;
              iVar4 = iVar4 + 4;
              if (*(int *)((int)&pCVar9->NumUnpackStreams + iVar20) != 0) break;
              UVar2 = UVar2 + 1;
              iVar20 = iVar20 + 0x28;
            }
          }
          p->FileIndexToFolderIndexMap[uVar8] = UVar2;
          if ((BVar19 != '\0') &&
             (uVar13 = uVar13 + 1, (p->db).Folders[UVar2].NumUnpackStreams <= uVar13)) {
            UVar2 = UVar2 + 1;
            uVar13 = 0;
          }
        }
      }
    }
  }
  else {
    pUVar6 = (UInt32 *)(*allocMain->Alloc)(allocMain,UVar2 << 2);
    p->FolderStartPackStreamIndex = pUVar6;
    if (pUVar6 != (UInt32 *)0x0) {
      UVar16 = 0;
      for (uVar8 = 0; UVar2 = (p->db).NumFolders, uVar8 < UVar2; uVar8 = uVar8 + 1) {
        pCVar9 = (p->db).Folders;
        pUVar6[uVar8] = UVar16;
        UVar16 = UVar16 + pCVar9[uVar8].NumPackStreams;
      }
      goto LAB_080cb420;
    }
LAB_080caf60:
    local_f8 = (CSzFolder *)0x2;
  }
LAB_080cab20:
  (*allocTemp->Free)(allocTemp,unpackSizes);
  (*allocTemp->Free)(allocTemp,digestsDefined);
  (*allocTemp->Free)(allocTemp,digests);
  (*allocTemp->Free)(allocTemp,emptyStreamVector);
  (*allocTemp->Free)(allocTemp,emptyFileVector);
  (*allocTemp->Free)(allocTemp,lwtVector);
LAB_080caa90:
  Buf_Free(&buffer,allocTemp);
  if (local_f8 == (CSzFolder *)0x0) goto LAB_080ca7d8;
  goto LAB_080ca7cc;
switchD_080caf74_caseD_f:
  local_f8 = (CSzFolder *)SzReadBoolVector(&sd,local_d8,&emptyFileVector,allocTemp);
  if (local_f8 != (CSzFolder *)0x0) goto LAB_080cab20;
  goto LAB_080caec0;
}


