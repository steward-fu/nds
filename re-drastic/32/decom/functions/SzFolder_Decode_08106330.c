/*
 * Ghidra decompilation
 *
 * Function : SzFolder_Decode
 * Address  : 08106330
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

SRes SzFolder_Decode(CSzFolder *folder,UInt64 *packSizes,ILookInStream *inStream,UInt64 startPos,
                    Byte *outBuffer,size_t outSize,ISzAlloc *allocMain)

{
  undefined auVar1 [16];
  size_t sVar2;
  SizeT SVar3;
  int iVar4;
  Bool BVar5;
  UInt16 *pUVar6;
  int __result__;
  int __result___2;
  int __result___1;
  UInt16 *pUVar7;
  int __result___5;
  Byte *buf3;
  int __result___7;
  int __result___6;
  SRes res_1;
  int __result___3;
  SRes res;
  UInt16 *pUVar8;
  Byte *temp;
  int __result___4;
  undefined (*pauVar9) [16];
  uint uVar10;
  int iVar11;
  uint uVar12;
  UInt32 *pUVar13;
  CSzBindPair *pCVar14;
  Byte **ppBVar15;
  CSzCoderInfo *pCVar17;
  UInt16 *pUVar18;
  UInt32 UVar19;
  UInt16 *pUVar20;
  CSzCoderInfo *coder;
  SizeT dicPos;
  SizeT dicPos_1;
  SizeT outSizeCur;
  Byte *outBufCur;
  Byte *__dest;
  uint uVar21;
  UInt32 ci;
  UInt16 *in_r12;
  bool bVar22;
  undefined auVar23 [16];
  Byte *in_stack_fffffed0;
  ELzmaStatus *in_stack_fffffed4;
  Byte **local_114;
  UInt16 **local_110;
  UInt16 *local_e8;
  Byte *local_e4;
  Byte *inBuf_1;
  size_t lookahead;
  void *inBuf;
  size_t curSize;
  Byte *tempBuf [3];
  SizeT tempSizes [3];
  CLzma2Dec state;
  int local_2c;
  Byte **ppBVar16;
  
  UVar19 = folder->NumCoders;
  tempBuf[0] = (Byte *)0x0;
  tempBuf[1] = (Byte *)0x0;
  tempBuf[2] = (Byte *)0x0;
  tempSizes[0] = 0;
  tempSizes[1] = 0;
  local_2c = __stack_chk_guard;
  if (((((UVar19 - 1 < 4) && (pCVar17 = folder->Coders, pCVar17->NumInStreams == 1)) &&
       (pCVar17->NumOutStreams == 1)) &&
      (iVar4 = *(int *)&pCVar17->MethodID, bVar22 = *(int *)((int)&pCVar17->MethodID + 4) == 0,
      bVar22 && iVar4 != -1 || bVar22 && iVar4 == -1)) &&
     (((iVar4 == 0x21 || (iVar4 == 0x30101)) || (iVar4 == 0)))) {
    if (UVar19 == 1) {
      if (((folder->NumPackStreams == 1) && (*folder->PackStreams == 0)) &&
         (folder->NumBindPairs == 0)) {
LAB_08106528:
        uVar21 = 0;
        local_e8 = (UInt16 *)0x0;
        local_e4 = (Byte *)0x0;
        local_114 = tempBuf + 1;
        local_110 = (UInt16 **)(tempSizes + 1);
        do {
          iVar4 = *(int *)&pCVar17[uVar21].MethodID;
          iVar11 = *(int *)((int)&pCVar17[uVar21].MethodID + 4);
          if (((iVar4 == 0x21) || (iVar4 == 0x30101)) || (iVar4 == 0)) {
            if (UVar19 == 4) {
              pUVar7 = *(UInt16 **)(folder->UnpackSizes + uVar21);
              iVar4 = *(int *)((int)(folder->UnpackSizes + uVar21) + 4);
              state.decoder.prop.pb = 0;
              state.decoder.prop.lc = 3;
              state.decoder.prop.lp = 2;
              UVar19 = state.decoder.reps[uVar21 - 0xe];
              if (uVar21 < 2) {
                if ((iVar4 != 0) ||
                   (outBufCur = (Byte *)(*allocMain->Alloc)(allocMain,(size_t)pUVar7),
                   pUVar7 != (UInt16 *)0x0 && outBufCur == (Byte *)0x0)) goto LAB_08106db8;
                *local_114 = outBufCur;
                *local_110 = pUVar7;
              }
              else {
                pUVar6 = (UInt16 *)0x4;
                if (uVar21 != 2) goto LAB_081063a4;
                if ((iVar4 != 0 || outSize <= pUVar7) && (iVar4 != 0 || pUVar7 != (UInt16 *)outSize)
                   ) {
                  pUVar6 = (UInt16 *)0x5;
                  goto LAB_081063a4;
                }
                outBufCur = outBuffer + (outSize - (int)pUVar7);
                local_e8 = pUVar7;
                local_e4 = outBufCur;
              }
              if (UVar19 == 0) {
                iVar4 = 0;
              }
              else {
                if (3 < UVar19 - 1) {
                  auVar23 = ZEXT816(0);
                  uVar10 = 0;
                  pauVar9 = (undefined (*) [16])packSizes;
                  do {
                    auVar1 = *pauVar9;
                    uVar10 = uVar10 + 1;
                    pauVar9 = pauVar9 + 1;
                    auVar23 = VectorAdd(auVar23,auVar1,8);
                  } while (uVar10 < (UVar19 - 2 >> 1) + 1);
                  VectorAdd(auVar23._0_8_,auVar23._8_8_,8);
                }
                iVar4 = UVar19 << 3;
              }
            }
            else {
              iVar4 = 0;
              pUVar7 = (UInt16 *)outSize;
              outBufCur = outBuffer;
            }
            pUVar18 = *(UInt16 **)((int)packSizes + iVar4);
            pUVar20 = ((UInt16 **)((int)packSizes + iVar4))[1];
            pUVar6 = (UInt16 *)
                     LookInStream_SeekTo(inStream,CONCAT44(in_stack_fffffed4,in_stack_fffffed0));
            if (pUVar6 != (UInt16 *)0x0) goto LAB_081063a4;
            uVar10 = *(uint *)&pCVar17[uVar21].MethodID;
            uVar12 = *(uint *)((int)&pCVar17[uVar21].MethodID + 4);
            in_r12 = pUVar6;
            if ((uVar10 | uVar12) != 0) {
              if (uVar12 == 0 && uVar10 == 0x30101) {
                state.decoder.probs = pUVar6;
                state.decoder.dic = (Byte *)pUVar6;
                pUVar6 = (UInt16 *)
                         LzmaDec_AllocateProbs
                                   (&state.decoder,pCVar17[uVar21].Props.data,
                                    pCVar17[uVar21].Props.size,allocMain);
                if (pUVar6 != (UInt16 *)0x0) goto LAB_081063a4;
                state.decoder.dic = outBufCur;
                state.decoder.dicBufSize = (SizeT)pUVar7;
                LzmaDec_Init(&state.decoder);
                while( true ) {
                  bVar22 = pUVar20 != (UInt16 *)0x0;
                  if ((bVar22 || (UInt16 *)0x3fffe < pUVar18) &&
                      (bVar22 || pUVar18 != (UInt16 *)0x3ffff)) {
                    in_r12 = (UInt16 *)0x40000;
                  }
                  lookahead = (size_t)in_r12;
                  if (!bVar22 && (UInt16 *)0x3fffe >= pUVar18 ||
                      !bVar22 && pUVar18 == (UInt16 *)0x3ffff) {
                    lookahead = (size_t)pUVar18;
                  }
                  inBuf_1 = (Byte *)pUVar6;
                  pUVar8 = (UInt16 *)(*inStream->Look)(inStream,&inBuf_1,&lookahead);
                  SVar3 = state.decoder.dicPos;
                  if (pUVar8 != (UInt16 *)0x0) goto LAB_08106b60;
                  in_stack_fffffed4 = &curSize;
                  in_stack_fffffed0 = (Byte *)0x1;
                  inBuf = (void *)lookahead;
                  in_r12 = (UInt16 *)lookahead;
                  pUVar8 = (UInt16 *)
                           LzmaDec_DecodeToDic(&state.decoder,(SizeT)pUVar7,inBuf_1,(SizeT *)&inBuf,
                                               LZMA_FINISH_END,in_stack_fffffed4);
                  bVar22 = pUVar18 < inBuf;
                  pUVar18 = (UInt16 *)((int)pUVar18 - (int)inBuf);
                  lookahead = lookahead - (int)inBuf;
                  pUVar20 = (UInt16 *)((int)pUVar20 - (uint)bVar22);
                  if (pUVar8 != (UInt16 *)0x0) goto LAB_08106b60;
                  if ((state.decoder.dicPos == state.decoder.dicBufSize) ||
                     (SVar3 == state.decoder.dicPos && inBuf == (void *)0x0)) break;
                  pUVar8 = (UInt16 *)(*inStream->Skip)(inStream,(size_t)inBuf);
                  if (pUVar8 != (UInt16 *)0x0) goto LAB_08106b60;
                }
                if ((lookahead == 0 && (UInt16 *)state.decoder.dicBufSize == pUVar7) &&
                   (curSize == 1 || curSize == 4)) {
LAB_08106e0c:
                  LzmaDec_FreeProbs(&state.decoder,allocMain);
                  goto LAB_081065c8;
                }
              }
              else {
                if (uVar12 != 0 || uVar10 != 0x21) break;
                state.decoder.probs = pUVar6;
                state.decoder.dic = (Byte *)pUVar6;
                if (pCVar17[uVar21].Props.size != 1) goto LAB_08106744;
                pUVar6 = (UInt16 *)
                         Lzma2Dec_AllocateProbs(&state,*pCVar17[uVar21].Props.data,allocMain);
                if (pUVar6 != (UInt16 *)0x0) goto LAB_081063a4;
                state.decoder.dic = outBufCur;
                state.decoder.dicBufSize = (SizeT)pUVar7;
                Lzma2Dec_Init(&state);
                while( true ) {
                  bVar22 = pUVar20 != (UInt16 *)0x0;
                  if ((bVar22 || (UInt16 *)0x3fffe < pUVar18) &&
                      (bVar22 || pUVar18 != (UInt16 *)0x3ffff)) {
                    in_r12 = (UInt16 *)0x40000;
                  }
                  lookahead = (size_t)in_r12;
                  if (!bVar22 && (UInt16 *)0x3fffe >= pUVar18 ||
                      !bVar22 && pUVar18 == (UInt16 *)0x3ffff) {
                    lookahead = (size_t)pUVar18;
                  }
                  inBuf_1 = (Byte *)pUVar6;
                  pUVar8 = (UInt16 *)(*inStream->Look)(inStream,&inBuf_1,&lookahead);
                  SVar3 = state.decoder.dicPos;
                  if (pUVar8 != (UInt16 *)0x0) goto LAB_08106b60;
                  in_stack_fffffed4 = &curSize;
                  in_stack_fffffed0 = (Byte *)0x1;
                  inBuf = (void *)lookahead;
                  in_r12 = (UInt16 *)lookahead;
                  pUVar8 = (UInt16 *)
                           Lzma2Dec_DecodeToDic
                                     (&state,(SizeT)pUVar7,inBuf_1,(SizeT *)&inBuf,LZMA_FINISH_END,
                                      in_stack_fffffed4);
                  bVar22 = pUVar18 < inBuf;
                  pUVar18 = (UInt16 *)((int)pUVar18 - (int)inBuf);
                  lookahead = lookahead - (int)inBuf;
                  pUVar20 = (UInt16 *)((int)pUVar20 - (uint)bVar22);
                  if (pUVar8 != (UInt16 *)0x0) goto LAB_08106b60;
                  if ((state.decoder.dicPos == state.decoder.dicBufSize) ||
                     (SVar3 == state.decoder.dicPos && inBuf == (void *)0x0)) break;
                  pUVar8 = (UInt16 *)(*inStream->Skip)(inStream,(size_t)inBuf);
                  if (pUVar8 != (UInt16 *)0x0) goto LAB_08106b60;
                }
                if (((UInt16 *)state.decoder.dicBufSize == pUVar7 && lookahead == 0) &&
                   (curSize == 1)) goto LAB_08106e0c;
              }
              pUVar8 = (UInt16 *)0x1;
LAB_08106b60:
              LzmaDec_FreeProbs(&state.decoder,allocMain);
              pUVar6 = pUVar8;
              goto LAB_081063a4;
            }
            if (pUVar20 != (UInt16 *)0x0 || pUVar18 != pUVar7) {
LAB_08106744:
              pUVar6 = (UInt16 *)0x1;
              goto LAB_081063a4;
            }
            if (((uint)pUVar18 | (uint)pUVar20) != 0) {
              do {
                bVar22 = pUVar20 != (UInt16 *)0x0;
                if ((bVar22 || (UInt16 *)0x3fffe < pUVar18) &&
                    (bVar22 || pUVar18 != (UInt16 *)0x3ffff)) {
                  in_r12 = (UInt16 *)0x40000;
                }
                if (!bVar22 && (UInt16 *)0x3fffe >= pUVar18 ||
                    !bVar22 && pUVar18 == (UInt16 *)0x3ffff) {
                  in_r12 = pUVar18;
                }
                curSize = (size_t)in_r12;
                pUVar6 = (UInt16 *)(*inStream->Look)(inStream,&inBuf,&curSize);
                sVar2 = curSize;
                if (pUVar6 != (UInt16 *)0x0) goto LAB_081063a4;
                if (curSize == 0) goto LAB_08106a3c;
                memcpy(outBufCur,inBuf,curSize);
                pUVar6 = (UInt16 *)(*inStream->Skip)(inStream,sVar2);
                bVar22 = pUVar18 < sVar2;
                pUVar18 = (UInt16 *)((int)pUVar18 - sVar2);
                outBufCur = outBufCur + sVar2;
                pUVar20 = (UInt16 *)((int)pUVar20 - (uint)bVar22);
                if (pUVar6 != (UInt16 *)0x0) goto LAB_081063a4;
              } while (((uint)pUVar18 | (uint)pUVar20) != 0);
            }
          }
          else if (iVar11 == 0 && iVar4 == 0x303011b) {
            pUVar7 = *(UInt16 **)(packSizes + 1);
            iVar4 = *(int *)((int)packSizes + 0xc);
            if (uVar21 != 3) break;
            pUVar6 = (UInt16 *)
                     LookInStream_SeekTo(inStream,CONCAT44(in_stack_fffffed4,in_stack_fffffed0));
            if (pUVar6 != (UInt16 *)0x0) goto LAB_081063a4;
            if (iVar4 != 0) {
LAB_08106db8:
              pUVar6 = (UInt16 *)0x2;
              goto LAB_081063a4;
            }
            buf3 = (Byte *)(*allocMain->Alloc)(allocMain,(size_t)pUVar7);
            tempBuf[2] = buf3;
            __dest = buf3;
            if (buf3 == (Byte *)0x0) {
              if (pUVar7 != (UInt16 *)0x0) goto LAB_08106db8;
              __dest = (Byte *)0x0;
            }
            if (pUVar7 != (UInt16 *)0x0) {
              uVar10 = 0;
              pUVar18 = pUVar7;
              do {
                bVar22 = uVar10 != 0;
                if ((bVar22 || (UInt16 *)0x3fffe < pUVar18) &&
                    (bVar22 || pUVar18 != (UInt16 *)0x3ffff)) {
                  in_r12 = (UInt16 *)0x40000;
                }
                if (!bVar22 && (UInt16 *)0x3fffe >= pUVar18 ||
                    !bVar22 && pUVar18 == (UInt16 *)0x3ffff) {
                  in_r12 = pUVar18;
                }
                curSize = (size_t)in_r12;
                pUVar6 = (UInt16 *)(*inStream->Look)(inStream,&inBuf,&curSize);
                sVar2 = curSize;
                if (pUVar6 != (UInt16 *)0x0) goto LAB_081063a4;
                if (curSize == 0) goto LAB_08106a3c;
                memcpy(__dest,inBuf,curSize);
                pUVar6 = (UInt16 *)(*inStream->Skip)(inStream,sVar2);
                bVar22 = pUVar18 < sVar2;
                pUVar18 = (UInt16 *)((int)pUVar18 - sVar2);
                __dest = __dest + sVar2;
                uVar10 = uVar10 - bVar22;
                if (pUVar6 != (UInt16 *)0x0) goto LAB_081063a4;
              } while (((uint)pUVar18 | uVar10) != 0);
            }
            in_r12 = (UInt16 *)tempBuf[1];
            in_stack_fffffed0 = tempBuf[1];
            in_stack_fffffed4 = (ELzmaStatus *)tempSizes[1];
            pUVar6 = (UInt16 *)
                     Bcj2_Decode(local_e4,(SizeT)local_e8,tempBuf[0],tempSizes[0],tempSizes[1],buf3,
                                 (SizeT)pUVar7,outBuffer,outSize);
            if (pUVar6 != (UInt16 *)0x0) goto LAB_081063a4;
          }
          else {
            if (uVar21 != 1) break;
            if (iVar11 == 0 && iVar4 == 0x3030103) {
              in_stack_fffffed0 = (Byte *)0x0;
              curSize = 0;
              x86_Convert(outBuffer,outSize,0,&curSize,0);
            }
            else {
              if (iVar11 != 0 || iVar4 != 0x3030501) break;
              ARM_Convert(outBuffer,outSize,0,0);
            }
          }
LAB_081065c8:
          uVar21 = uVar21 + 1;
          local_114 = local_114 + -1;
          UVar19 = folder->NumCoders;
          local_110 = local_110 + -1;
          if (UVar19 <= uVar21) goto LAB_08106d00;
          pCVar17 = folder->Coders;
        } while( true );
      }
    }
    else if (UVar19 == 2) {
      iVar4 = *(int *)&pCVar17[1].MethodID;
      bVar22 = *(int *)((int)&pCVar17[1].MethodID + 4) == 0;
      if ((((((bVar22 && iVar4 != -1 || bVar22 && iVar4 == -1) && (pCVar17[1].NumInStreams == 1)) &&
            (pCVar17[1].NumOutStreams == 1)) &&
           ((folder->NumPackStreams == 1 && (*folder->PackStreams == 0)))) &&
          ((folder->NumBindPairs == 1 &&
           ((folder->BindPairs->InIndex == 1 && (folder->BindPairs->OutIndex == 0)))))) &&
         ((iVar4 == 0x3030103 || (iVar4 == 0x3030501)))) goto LAB_08106528;
    }
    else if (UVar19 == 4) {
      pUVar6 = (UInt16 *)0x4;
      if ((((pCVar17[1].NumInStreams != 1) || (pCVar17[1].NumOutStreams != 1)) ||
          (BVar5 = IS_SUPPORTED_CODER(pCVar17 + 1), BVar5 == 0)) ||
         (((pCVar17[2].NumInStreams != 1 || (pCVar17[2].NumOutStreams != 1)) ||
          (BVar5 = IS_SUPPORTED_CODER(pCVar17 + 2), BVar5 == 0)))) goto LAB_081063a4;
      if ((*(int *)((int)&pCVar17[3].MethodID + 4) == 0 && *(int *)&pCVar17[3].MethodID == 0x303011b
          ) && (pCVar17[3].NumInStreams == 4)) {
        if ((pCVar17[3].NumOutStreams != 1) || (folder->NumPackStreams != 4)) {
          pUVar6 = (UInt16 *)0x4;
          goto LAB_081063a4;
        }
        pUVar13 = folder->PackStreams;
        pUVar6 = (UInt16 *)0x4;
        if (((((*pUVar13 != 2) || (pUVar13[1] != 6)) || (pUVar13[2] != 1)) ||
            ((pUVar13[3] != 0 || (folder->NumBindPairs != 3)))) ||
           (pCVar14 = folder->BindPairs, pCVar14->InIndex != 5)) goto LAB_081063a4;
        if ((pCVar14->OutIndex == 0) && (pCVar14[1].InIndex == 4)) {
          pUVar6 = (UInt16 *)0x4;
          if ((pCVar14[1].OutIndex == 1) &&
             ((pCVar14[2].InIndex == 3 && (pCVar14[2].OutIndex == 2)))) goto LAB_08106528;
          goto LAB_081063a4;
        }
      }
    }
  }
  pUVar6 = (UInt16 *)0x4;
LAB_081063a4:
  ppBVar15 = tempBuf;
  do {
    ppBVar16 = ppBVar15 + 1;
    (*allocMain->Free)(allocMain,*ppBVar15);
    ppBVar15 = ppBVar16;
  } while (ppBVar16 != (Byte **)tempSizes);
  if (local_2c == __stack_chk_guard) {
    return (SRes)pUVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_08106a3c:
  pUVar6 = (UInt16 *)0x6;
  goto LAB_081063a4;
LAB_08106d00:
  pUVar6 = (UInt16 *)0x0;
  goto LAB_081063a4;
}


