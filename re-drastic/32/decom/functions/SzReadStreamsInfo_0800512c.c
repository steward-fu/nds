/*
 * Ghidra decompilation
 *
 * Function : SzReadStreamsInfo
 * Address  : 0800512c
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

SRes SzReadStreamsInfo(CSzData *sd,UInt64 *dataOffset,CSzAr *p,UInt32 *numUnpackStreams,
                      UInt64 **unpackSizes,Byte **digestsDefined,UInt32 **digests,ISzAlloc *alloc,
                      ISzAlloc *allocTemp)

{
  uint uVar1;
  byte bVar2;
  Byte *pBVar3;
  int __result___21;
  int __result___22;
  int __result___23;
  int __result___24;
  int __result___25;
  int __result___26;
  int __result___15;
  int __result___16;
  int __result___11;
  int __result__;
  int __result___1;
  int __result___2;
  SRes res;
  int iVar4;
  int __result___4;
  CSzCoderInfo *pCVar5;
  CSzBindPair *pCVar6;
  int __result___12;
  int __result___13;
  int __result___14;
  int __result___17;
  int __result___18;
  SRes res_1;
  int __result___20;
  int __result___6;
  int __result___7;
  int __result___5;
  Byte *pBVar7;
  int __result___9;
  int __result___10;
  int __result___8;
  uint uVar8;
  UInt32 numSubstreams;
  int iVar9;
  byte *pbVar10;
  Byte *pBVar11;
  Byte *external;
  UInt32 *pUVar12;
  UInt32 numSubstreams_1;
  UInt32 numSubstreams_2;
  size_t i_2;
  UInt32 i_3;
  CSzFolder *folder_2;
  uint j;
  uint uVar13;
  CSzFolder *pCVar14;
  CSzFolder *folder;
  uint uVar15;
  uint idSize;
  UInt32 i_4;
  UInt32 i;
  UInt32 UVar16;
  UInt64 *pUVar17;
  int __result___3;
  UInt32 i_1;
  CSzCoderInfo *coder;
  CSzBindPair *bp;
  CSzFolder *folder_1;
  int __result___19;
  Byte mainByte;
  int iVar18;
  uint uVar19;
  UInt32 numBindPairs;
  UInt32 numPackStreams;
  UInt32 j_1;
  size_t numItems;
  UInt32 UVar20;
  CSzCoderInfo *pCVar21;
  UInt32 numOutStreams;
  CSzFolder *pCVar22;
  int iVar23;
  uint uVar24;
  int iVar25;
  byte *pbVar26;
  bool bVar27;
  undefined8 uVar28;
  ulonglong in_d17;
  UInt64 UVar29;
  ISzAlloc *in_stack_ffffff50;
  undefined4 in_stack_ffffff54;
  UInt32 local_a0;
  uint local_90;
  Byte *local_8c;
  Byte *digestsDefined2;
  UInt64 type;
  UInt64 type_1;
  UInt32 numStreams;
  UInt32 local_44;
  Byte longID [15];
  int local_2c;
  
  local_2c = __stack_chk_guard;
LAB_08005194:
  do {
    pBVar3 = (Byte *)SzReadNumber(sd,&type);
    if (pBVar3 != (Byte *)0x0) goto LAB_08005984;
    if (type._4_4_ != (int)(Byte *)type >> 0x1f) {
switchD_080051c8_caseD_1:
      pBVar3 = (Byte *)0x4;
      goto LAB_08005984;
    }
    pBVar3 = (Byte *)type;
    switch((Byte *)type) {
    case (Byte *)0x0:
      goto LAB_08005984;
    default:
      goto switchD_080051c8_caseD_1;
    case (Byte *)0x6:
      pBVar3 = (Byte *)SzReadNumber(sd,dataOffset);
      if (((pBVar3 != (Byte *)0x0) ||
          (pBVar3 = (Byte *)SzReadNumber32(sd,&p->NumPackStreams), pBVar3 != (Byte *)0x0)) ||
         (pBVar3 = (Byte *)SzWaitAttribute(sd,CONCAT44(in_stack_ffffff54,in_stack_ffffff50)),
         pBVar3 != (Byte *)0x0)) goto LAB_08005984;
      if (p->NumPackStreams == 0) {
        p->PackSizes = (UInt64 *)0x0;
LAB_0800528c:
        while( true ) {
          pBVar3 = (Byte *)SzReadNumber(sd,(UInt64 *)&numStreams);
          if (pBVar3 != (Byte *)0x0) goto LAB_08005984;
          if ((numStreams | local_44) == 0) break;
          if (local_44 == 0 && numStreams == 10) {
            in_stack_ffffff50 = alloc;
            pBVar3 = (Byte *)SzReadHashDigests(sd,p->NumPackStreams,&p->PackCRCsDefined,&p->PackCRCs
                                               ,alloc);
          }
          else {
            pBVar3 = (Byte *)SzSkeepData(sd);
          }
          if (pBVar3 != (Byte *)0x0) goto LAB_08005984;
        }
        if (p->PackCRCsDefined != (Byte *)0x0) goto LAB_08005194;
        if (p->NumPackStreams != 0) {
          pBVar3 = (Byte *)(*alloc->Alloc)(alloc,p->NumPackStreams);
          p->PackCRCsDefined = pBVar3;
          if (pBVar3 == (Byte *)0x0) goto LAB_0800559c;
        }
        if (p->NumPackStreams == 0) {
          p->PackCRCs = (UInt32 *)0x0;
          goto LAB_08005194;
        }
        pUVar12 = (UInt32 *)(*alloc->Alloc)(alloc,p->NumPackStreams << 2);
        p->PackCRCs = pUVar12;
        if (pUVar12 != (UInt32 *)0x0) {
          for (uVar8 = 0; uVar8 < p->NumPackStreams; uVar8 = uVar8 + 1) {
            p->PackCRCsDefined[uVar8] = '\0';
            p->PackCRCs[uVar8] = 0;
          }
          goto LAB_08005194;
        }
      }
      else {
        pUVar17 = (UInt64 *)(*alloc->Alloc)(alloc,p->NumPackStreams << 3);
        p->PackSizes = pUVar17;
        i_4 = 0;
        if (pUVar17 != (UInt64 *)0x0) {
          for (; i_4 < p->NumPackStreams; i_4 = i_4 + 1) {
            pBVar3 = (Byte *)SzReadNumber(sd,p->PackSizes + i_4);
            if (pBVar3 != (Byte *)0x0) goto LAB_08005984;
          }
          goto LAB_0800528c;
        }
      }
LAB_0800559c:
      pBVar3 = (Byte *)0x2;
      goto LAB_08005984;
    case (Byte *)0x7:
      pBVar3 = (Byte *)SzWaitAttribute(sd,CONCAT44(in_stack_ffffff54,in_stack_ffffff50));
      if ((pBVar3 != (Byte *)0x0) ||
         (pBVar3 = (Byte *)SzReadNumber32(sd,&p->NumFolders), pBVar3 != (Byte *)0x0))
      goto LAB_08005984;
      if (sd->Size == 0) {
LAB_08005e14:
        pBVar3 = (Byte *)0x10;
        goto LAB_08005984;
      }
      pBVar3 = sd->Data;
      sd->Size = sd->Size - 1;
      sd->Data = pBVar3 + 1;
      if (*pBVar3 != '\0') {
LAB_0800542c:
        pBVar3 = (Byte *)0x4;
        goto LAB_08005984;
      }
      if (p->NumFolders == 0) {
        p->Folders = (CSzFolder *)0x0;
      }
      else {
        pCVar22 = (CSzFolder *)(*alloc->Alloc)(alloc,p->NumFolders * 0x28);
        p->Folders = pCVar22;
        if (pCVar22 == (CSzFolder *)0x0) {
LAB_0800597c:
          pBVar3 = (Byte *)0x2;
          goto LAB_08005984;
        }
        for (uVar8 = 0; uVar8 < p->NumFolders; uVar8 = uVar8 + 1) {
          pCVar22 = p->Folders;
          pCVar22[uVar8].Coders = (CSzCoderInfo *)0x0;
          pCVar22[uVar8].BindPairs = (CSzBindPair *)0x0;
          pCVar22[uVar8].PackStreams = (UInt32 *)0x0;
          pCVar22[uVar8].UnpackSizes = (UInt64 *)0x0;
          pCVar22[uVar8].NumCoders = 0;
          pCVar22[uVar8].NumBindPairs = 0;
          pCVar22[uVar8].NumPackStreams = 0;
          pCVar22[uVar8].UnpackCRCDefined = 0;
          pCVar22[uVar8].UnpackCRC = 0;
          pCVar22[uVar8].NumUnpackStreams = 0;
        }
        for (local_90 = 0; local_90 < p->NumFolders; local_90 = local_90 + 1) {
          pCVar22 = p->Folders;
          pBVar3 = (Byte *)SzReadNumber32(sd,(UInt32 *)&type_1);
          if (pBVar3 == (Byte *)0x0) {
            if ((Byte *)0x20 < (Byte *)type_1) goto LAB_0800542c;
            pCVar14 = pCVar22 + local_90;
            pCVar14->NumCoders = (UInt32)(Byte *)type_1;
            if ((Byte *)type_1 == (Byte *)0x0) {
              pCVar22[local_90].Coders = (CSzCoderInfo *)0x0;
            }
            else {
              pCVar5 = (CSzCoderInfo *)(*alloc->Alloc)(alloc,(int)(Byte *)type_1 * 0x18);
              pCVar22[local_90].Coders = pCVar5;
              i_1 = 0;
              if (pCVar5 == (CSzCoderInfo *)0x0) goto LAB_0800597c;
              for (; i_1 < (Byte *)type_1; i_1 = i_1 + 1) {
                Buf_Init(&pCVar14->Coders[i_1].Props);
              }
            }
            uVar8 = 0;
            iVar18 = 0;
            for (local_8c = (Byte *)0x0; local_8c < (Byte *)type_1; local_8c = local_8c + 1) {
              pCVar21 = pCVar14->Coders;
              pCVar5 = pCVar21 + (int)local_8c;
              if (sd->Size == 0) goto LAB_08005e14;
              pbVar10 = sd->Data;
              sd->Size = sd->Size - 1;
              sd->Data = pbVar10 + 1;
              bVar2 = *pbVar10;
              uVar19 = (uint)bVar2;
              uVar15 = uVar19 & 0xf;
              for (i_2 = 0; i_2 < uVar15; i_2 = i_2 + 1) {
                if (sd->Size == 0) goto LAB_08005e14;
                pBVar3 = sd->Data;
                sd->Size = sd->Size - 1;
                sd->Data = pBVar3 + 1;
                longID[i_2] = *pBVar3;
              }
              if (8 < uVar15) goto LAB_0800542c;
              *(undefined4 *)&pCVar5->MethodID = 0;
              pbVar10 = longID + uVar15;
              uVar13 = 0;
              *(undefined4 *)((int)&pCVar5->MethodID + 4) = 0;
              while (uVar13 < uVar15) {
                uVar1 = uVar13 << 3;
                pbVar10 = pbVar10 + -1;
                uVar24 = *(uint *)((int)&pCVar5->MethodID + 4);
                uVar13 = uVar13 + 1;
                in_d17 = in_d17 & 0xffffffffffff0000 | (ulonglong)uVar1 & 0xffff;
                uVar28 = VectorShiftLeft((ulonglong)*pbVar10,in_d17,8,1);
                *(uint *)&pCVar5->MethodID = *(uint *)&pCVar5->MethodID | (uint)uVar28;
                *(uint *)((int)&pCVar5->MethodID + 4) = uVar24 | (uint)((ulonglong)uVar28 >> 0x20);
              }
              if ((bVar2 & 0x10) == 0) {
                pCVar21[(int)local_8c].NumInStreams = 1;
                pCVar5->NumOutStreams = 1;
              }
              else {
                pBVar3 = (Byte *)SzReadNumber32(sd,&pCVar5->NumInStreams);
                if ((pBVar3 != (Byte *)0x0) ||
                   (pBVar3 = (Byte *)SzReadNumber32(sd,&pCVar5->NumOutStreams),
                   pBVar3 != (Byte *)0x0)) goto LAB_08005c24;
                if ((0x20 < pCVar21[(int)local_8c].NumInStreams) || (0x20 < pCVar5->NumOutStreams))
                goto LAB_0800542c;
              }
              if ((bVar2 & 0x20) != 0) {
                numStreams = 0;
                local_44 = 0;
                pBVar3 = (Byte *)SzReadNumber(sd,(UInt64 *)&numStreams);
                if (pBVar3 != (Byte *)0x0) goto LAB_08005c24;
                iVar4 = Buf_Create(&pCVar5->Props,numStreams,alloc);
                if (iVar4 == 0) goto LAB_0800597c;
                pBVar11 = (pCVar5->Props).data;
                for (pBVar3 = pBVar11; (uint)((int)pBVar3 - (int)pBVar11) < numStreams;
                    pBVar3 = pBVar3 + 1) {
                  if (sd->Size == 0) goto LAB_08005e14;
                  pBVar7 = sd->Data;
                  sd->Size = sd->Size - 1;
                  sd->Data = pBVar7 + 1;
                  *pBVar3 = *pBVar7;
                }
              }
              while ((uVar19 & 0x80) != 0) {
                if (sd->Size == 0) goto LAB_08005e14;
                pbVar10 = sd->Data;
                uVar13 = sd->Size - 1;
                sd->Size = uVar13;
                pbVar26 = pbVar10 + 1;
                sd->Data = pbVar26;
                bVar2 = *pbVar10;
                uVar19 = (uint)bVar2;
                uVar15 = uVar19 & 0xf;
                if (uVar13 < uVar15) goto LAB_08005e14;
                sd->Data = pbVar26 + uVar15;
                sd->Size = uVar13 - uVar15;
                if (((bVar2 & 0x10) != 0) &&
                   ((pBVar3 = (Byte *)SzReadNumber32(sd,&numStreams), pBVar3 != (Byte *)0x0 ||
                    (pBVar3 = (Byte *)SzReadNumber32(sd,&numStreams), pBVar3 != (Byte *)0x0))))
                goto LAB_08005c24;
                if ((bVar2 & 0x20) != 0) {
                  numStreams = 0;
                  local_44 = 0;
                  pBVar3 = (Byte *)SzReadNumber(sd,(UInt64 *)&numStreams);
                  if (pBVar3 != (Byte *)0x0) goto LAB_08005c24;
                  uVar15 = sd->Size;
                  if ((local_44 != 0 || uVar15 <= numStreams) &&
                      (local_44 != 0 || numStreams != uVar15)) goto LAB_08005e14;
                  sd->Data = sd->Data + numStreams;
                  sd->Size = uVar15 - numStreams;
                }
              }
              uVar8 = uVar8 + pCVar21[(int)local_8c].NumInStreams;
              iVar18 = iVar18 + pCVar5->NumOutStreams;
            }
            if (iVar18 == 0) goto LAB_0800542c;
            uVar15 = iVar18 - 1;
            pCVar14->NumBindPairs = uVar15;
            if (uVar15 == 0) {
              pCVar14->BindPairs = (CSzBindPair *)0x0;
            }
            else {
              pCVar6 = (CSzBindPair *)(*alloc->Alloc)(alloc,uVar15 * 8);
              pCVar14->BindPairs = pCVar6;
              if (pCVar6 == (CSzBindPair *)0x0) goto LAB_0800597c;
              uVar19 = 0;
              do {
                pCVar6 = pCVar14->BindPairs;
                pBVar3 = (Byte *)SzReadNumber32(sd,&pCVar6[uVar19].InIndex);
                if ((pBVar3 != (Byte *)0x0) ||
                   (pBVar3 = (Byte *)SzReadNumber32(sd,&pCVar6[uVar19].OutIndex),
                   pBVar3 != (Byte *)0x0)) goto LAB_08005c24;
                uVar19 = uVar19 + 1;
              } while (uVar19 < uVar15);
              if (uVar8 < uVar15) goto LAB_0800542c;
            }
            UVar20 = uVar8 - uVar15;
            pCVar14->NumPackStreams = UVar20;
            if (UVar20 == 0) {
              pCVar14->PackStreams = (UInt32 *)0x0;
            }
            else {
              pUVar12 = (UInt32 *)(*alloc->Alloc)(alloc,UVar20 * 4);
              pCVar14->PackStreams = pUVar12;
              if (pUVar12 == (UInt32 *)0x0) goto LAB_0800597c;
              if (UVar20 == 1) {
                UVar20 = 0;
                while( true ) {
                  if (uVar8 == UVar20) goto LAB_0800542c;
                  i_3 = 0;
                  while( true ) {
                    if (i_3 == pCVar14->NumBindPairs) goto LAB_08006040;
                    if (pCVar14->BindPairs[i_3].InIndex == UVar20) break;
                    i_3 = i_3 + 1;
                  }
                  if ((int)i_3 < 0) break;
                  UVar20 = UVar20 + 1;
                }
LAB_08006040:
                *pUVar12 = UVar20;
                goto LAB_08005c2c;
              }
            }
            for (UVar16 = 0; UVar20 != UVar16; UVar16 = UVar16 + 1) {
              pBVar3 = (Byte *)SzReadNumber32(sd,pCVar14->PackStreams + UVar16);
              if (pBVar3 != (Byte *)0x0) goto LAB_08005c24;
            }
          }
          else {
LAB_08005c24:
            if (pBVar3 != (Byte *)0x0) goto LAB_08005984;
          }
LAB_08005c2c:
        }
      }
      pBVar3 = (Byte *)SzWaitAttribute(sd,CONCAT44(in_stack_ffffff54,in_stack_ffffff50));
      if (pBVar3 != (Byte *)0x0) goto LAB_08005984;
      for (uVar8 = 0; uVar8 < p->NumFolders; uVar8 = uVar8 + 1) {
        UVar16 = 0;
        pCVar22 = p->Folders + uVar8;
        for (UVar20 = 0; UVar20 != pCVar22->NumCoders; UVar20 = UVar20 + 1) {
          UVar16 = UVar16 + pCVar22->Coders[UVar20].NumOutStreams;
        }
        if (UVar16 == 0) {
          pCVar22->UnpackSizes = (UInt64 *)0x0;
        }
        else {
          pUVar17 = (UInt64 *)(*alloc->Alloc)(alloc,UVar16 << 3);
          pCVar22->UnpackSizes = pUVar17;
          if (pUVar17 == (UInt64 *)0x0) goto LAB_0800597c;
          j_1 = 0;
          do {
            pBVar3 = (Byte *)SzReadNumber(sd,pCVar22->UnpackSizes + j_1);
            if (pBVar3 != (Byte *)0x0) goto LAB_08005984;
            j_1 = j_1 + 1;
          } while (UVar16 != j_1);
        }
      }
      do {
        while( true ) {
          pBVar3 = (Byte *)SzReadNumber(sd,(UInt64 *)&numStreams);
          if (pBVar3 != (Byte *)0x0) goto LAB_08005984;
          if ((numStreams | local_44) == 0) goto LAB_08005194;
          if (local_44 != 0 || numStreams != 10) break;
          in_stack_ffffff50 = allocTemp;
          digestsDefined2 = pBVar3;
          type_1._0_4_ = pBVar3;
          pBVar3 = (Byte *)SzReadHashDigests(sd,p->NumFolders,&digestsDefined2,(UInt32 **)&type_1,
                                             allocTemp);
          if (pBVar3 == (Byte *)0x0) {
            for (uVar8 = 0; uVar8 < p->NumFolders; uVar8 = uVar8 + 1) {
              pCVar22 = p->Folders;
              pCVar22[uVar8].UnpackCRCDefined = (uint)digestsDefined2[uVar8];
              pCVar22[uVar8].UnpackCRC = *(UInt32 *)((Byte *)type_1 + uVar8 * 4);
            }
          }
          (*allocTemp->Free)(allocTemp,(Byte *)type_1);
          (*allocTemp->Free)(allocTemp,digestsDefined2);
          if (pBVar3 != (Byte *)0x0) goto LAB_08005928;
        }
        pBVar3 = (Byte *)SzSkeepData(sd);
      } while (pBVar3 == (Byte *)0x0);
      break;
    case (Byte *)0x8:
      pCVar22 = p->Folders;
      UVar20 = p->NumFolders;
      type_1._0_4_ = (Byte *)0x0;
      type_1._4_4_ = 0;
      pUVar12 = &pCVar22->NumUnpackStreams;
      while (pUVar12 + 10 != &pCVar22[UVar20 + 1].NumUnpackStreams) {
        *pUVar12 = 1;
        pUVar12 = pUVar12 + 10;
      }
      *numUnpackStreams = UVar20;
LAB_0800548c:
      while( true ) {
        pBVar3 = (Byte *)SzReadNumber(sd,&type_1);
        if (pBVar3 != (Byte *)0x0) goto LAB_08005984;
        if (type_1._4_4_ != 0 || (Byte *)type_1 != (Byte *)0xd) break;
        *numUnpackStreams = 0;
        for (UVar16 = 0; UVar20 != UVar16; UVar16 = UVar16 + 1) {
          pBVar3 = (Byte *)SzReadNumber32(sd,&numStreams);
          if (pBVar3 != (Byte *)0x0) goto LAB_08005928;
          pCVar22[UVar16].NumUnpackStreams = numStreams;
          *numUnpackStreams = *numUnpackStreams + numStreams;
        }
      }
      uVar8 = type_1._4_4_ - ((Byte *)type_1 < (Byte *)0x9);
      bVar27 = uVar8 == 0;
      if (bVar27 && (Byte *)type_1 == (Byte *)0x9 || bVar27 && (Byte *)type_1 == (Byte *)0xa) {
        uVar8 = 1;
      }
      if ((!bVar27 || (Byte *)type_1 != (Byte *)0x9) && (!bVar27 || (Byte *)type_1 != (Byte *)0xa))
      {
        uVar8 = 0;
      }
      if (((uint)(Byte *)type_1 | type_1._4_4_) == 0) {
        uVar8 = uVar8 | 1;
      }
      if (uVar8 == 0) goto code_r0x08005524;
      if (*numUnpackStreams == 0) {
        *unpackSizes = (UInt64 *)0x0;
        *digestsDefined = (Byte *)0x0;
        *digests = (UInt32 *)0x0;
      }
      else {
        pUVar17 = (UInt64 *)(*allocTemp->Alloc)(allocTemp,*numUnpackStreams << 3);
        *unpackSizes = pUVar17;
        if (pUVar17 == (UInt64 *)0x0) goto LAB_0800559c;
        pBVar3 = (Byte *)(*allocTemp->Alloc)(allocTemp,*numUnpackStreams);
        *digestsDefined = pBVar3;
        if (pBVar3 == (Byte *)0x0) goto LAB_0800559c;
        pUVar12 = (UInt32 *)(*allocTemp->Alloc)(allocTemp,*numUnpackStreams << 2);
        *digests = pUVar12;
        if (pUVar12 == (UInt32 *)0x0) goto LAB_0800559c;
      }
      iVar18 = 0;
      pCVar14 = pCVar22;
      for (local_a0 = 0; UVar20 != local_a0; local_a0 = local_a0 + 1) {
        UVar16 = pCVar14->NumUnpackStreams;
        iVar4 = iVar18;
        if (UVar16 != 0) {
          if (type_1._4_4_ == 0 && (Byte *)type_1 == (Byte *)0x9) {
            iVar23 = iVar18 + -1;
            iVar4 = iVar18 << 3;
            uVar8 = 0;
            iVar9 = 0;
            for (; iVar18 != iVar23 + UVar16; iVar18 = iVar18 + 1) {
              pBVar3 = (Byte *)SzReadNumber(sd,(UInt64 *)&numStreams);
              if (pBVar3 != (Byte *)0x0) goto LAB_08005928;
              pUVar12 = (UInt32 *)((int)*unpackSizes + iVar4);
              iVar4 = iVar4 + 8;
              *pUVar12 = numStreams;
              pUVar12[1] = local_44;
              bVar27 = CARRY4(uVar8,numStreams);
              uVar8 = uVar8 + numStreams;
              iVar9 = iVar9 + local_44 + (uint)bVar27;
            }
          }
          else {
            uVar8 = 0;
            iVar9 = 0;
          }
          pUVar17 = *unpackSizes;
          iVar4 = iVar18 + 1;
          UVar29 = SzFolder_GetUnpackSize(pCVar14);
          *(uint *)(pUVar17 + iVar18) = (uint)UVar29 - uVar8;
          *(uint *)((int)(pUVar17 + iVar18) + 4) =
               (int)(UVar29 >> 0x20) - (iVar9 + (uint)((uint)UVar29 < uVar8));
        }
        pCVar14 = pCVar14 + 1;
        iVar18 = iVar4;
      }
      if ((type_1._4_4_ == 0 && (Byte *)type_1 == (Byte *)0x9) &&
         (pBVar3 = (Byte *)SzReadNumber(sd,&type_1), pBVar3 != (Byte *)0x0)) break;
      for (uVar8 = 0; uVar8 < *numUnpackStreams; uVar8 = uVar8 + 1) {
        (*digestsDefined)[uVar8] = '\0';
        (*digests)[uVar8] = 0;
      }
      numItems = 0;
      for (pCVar14 = pCVar22; pCVar14 != pCVar22 + UVar20; pCVar14 = pCVar14 + 1) {
        if ((pCVar14->NumUnpackStreams != 1) || (pCVar14->UnpackCRCDefined == 0)) {
          numItems = numItems + pCVar14->NumUnpackStreams;
        }
      }
      iVar18 = 0;
      do {
        if (type_1._4_4_ != 0 || (Byte *)type_1 != (Byte *)0xa) {
          if (((uint)(Byte *)type_1 | type_1._4_4_) == 0) goto LAB_08005194;
          pBVar3 = (Byte *)SzSkeepData(sd);
          if (pBVar3 == (Byte *)0x0) goto LAB_08005908;
          break;
        }
        digestsDefined2 = (Byte *)0x0;
        numStreams = 0;
        in_stack_ffffff50 = allocTemp;
        pBVar3 = (Byte *)SzReadHashDigests(sd,numItems,&digestsDefined2,(UInt32 **)&numStreams,
                                           allocTemp);
        if (pBVar3 == (Byte *)0x0) {
          iVar4 = 0;
          for (pCVar14 = pCVar22; pCVar14 != pCVar22 + UVar20; pCVar14 = pCVar14 + 1) {
            UVar16 = pCVar14->NumUnpackStreams;
            if ((UVar16 == 1) && (pCVar14->UnpackCRCDefined != 0)) {
              (*digestsDefined)[iVar18] = '\x01';
              (*digests)[iVar18] = pCVar14->UnpackCRC;
              iVar18 = iVar18 + 1;
            }
            else {
              iVar23 = iVar4 - iVar18;
              iVar9 = iVar18 << 2;
              iVar25 = UVar16 + iVar18;
              for (; iVar18 != iVar25; iVar18 = iVar18 + 1) {
                (*digestsDefined)[iVar18] = digestsDefined2[iVar23 + iVar18];
                *(undefined4 *)((int)*digests + iVar9) =
                     *(undefined4 *)(numStreams + iVar9 + iVar23 * 4);
                iVar9 = iVar9 + 4;
              }
              iVar4 = iVar4 + UVar16;
              iVar18 = iVar25;
            }
          }
        }
        (*allocTemp->Free)(allocTemp,digestsDefined2);
        (*allocTemp->Free)(allocTemp,(void *)numStreams);
        if (pBVar3 != (Byte *)0x0) break;
LAB_08005908:
        pBVar3 = (Byte *)SzReadNumber(sd,&type_1);
      } while (pBVar3 == (Byte *)0x0);
    }
LAB_08005928:
    if (pBVar3 != (Byte *)0x0) {
LAB_08005984:
      if (local_2c == __stack_chk_guard) {
        return (SRes)pBVar3;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  } while( true );
code_r0x08005524:
  pBVar3 = (Byte *)SzSkeepData(sd);
  if (pBVar3 != (Byte *)0x0) goto LAB_08005928;
  goto LAB_0800548c;
}


