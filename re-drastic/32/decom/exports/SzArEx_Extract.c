/*
 * Ghidra decompilation
 *
 * Function : SzArEx_Extract
 * Address  : 080cb648
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

SRes SzArEx_Extract(CSzArEx *p,ILookInStream *inStream,UInt32 fileIndex,UInt32 *blockIndex,
                   Byte **outBuffer,size_t *outBufferSize,size_t *offset,size_t *outSizeProcessed,
                   ISzAlloc *allocMain,ISzAlloc *allocTemp)

{
  UInt64 *pUVar1;
  CSzBindPair *pCVar2;
  CSzCoderInfo *pCVar3;
  size_t unpackSize;
  SRes SVar4;
  int __result__;
  CSzFolder *pCVar5;
  UInt32 UVar6;
  CSzCoderInfo *pCVar7;
  CSzBindPair *pCVar8;
  _func_void_void_ptr_void_ptr *p_Var9;
  size_t sVar10;
  UInt32 *pUVar11;
  uint uVar12;
  UInt32 i_1;
  CSzFileItem *pCVar13;
  CSzFolder *folder_00;
  CSzFolder *folder;
  UInt32 UVar14;
  UInt32 folderIndex;
  int iVar15;
  Byte *pBVar16;
  CSzFileItem *pCVar17;
  int iVar18;
  int i;
  UInt32 UVar19;
  bool bVar20;
  UInt64 UVar21;
  UInt64 UVar22;
  UInt64 in_stack_ffffffa8;
  
  UVar14 = p->FileIndexToFolderIndexMap[fileIndex];
  *offset = 0;
  *outSizeProcessed = 0;
  if (UVar14 == 0xffffffff) {
    (*allocMain->Free)(allocMain,*outBuffer);
    *blockIndex = 0xffffffff;
    *outBuffer = (Byte *)0x0;
    *outBufferSize = 0;
    return 0;
  }
  pBVar16 = *outBuffer;
  if ((pBVar16 == (Byte *)0x0) || (UVar14 != *blockIndex)) {
    iVar15 = UVar14 * 4;
    pCVar5 = (p->db).Folders;
    folder_00 = pCVar5 + UVar14;
    if (folder_00->NumCoders != 0) {
      pCVar7 = pCVar5[UVar14].Coders;
      iVar18 = 0;
      pCVar3 = pCVar7 + folder_00->NumCoders;
      do {
        pUVar11 = &pCVar7->NumOutStreams;
        pCVar7 = pCVar7 + 1;
        iVar18 = iVar18 + *pUVar11;
      } while (pCVar7 != pCVar3);
      if ((iVar18 != 0) && (UVar19 = iVar18 - 1, -1 < (int)UVar19)) {
        do {
          if (folder_00->NumBindPairs == 0) {
LAB_080cb74c:
            sVar10 = *(size_t *)(folder_00->UnpackSizes + UVar19);
            if (*(size_t *)((int)(folder_00->UnpackSizes + UVar19) + 4) == 0) {
              UVar22 = p->dataPos;
              p_Var9 = allocMain->Free;
              UVar21 = p->PackStreamStartPositions[p->FolderStartPackStreamIndex[UVar14]];
              *blockIndex = UVar14;
              UVar21 = VectorAdd(UVar21,UVar22,8);
              (*p_Var9)(allocMain,pBVar16);
              *outBuffer = (Byte *)0x0;
              SVar4 = LookInStream_SeekTo(inStream,in_stack_ffffffa8);
              if (SVar4 != 0) {
                return SVar4;
              }
              *outBufferSize = sVar10;
              if (sVar10 == 0) {
                pBVar16 = *outBuffer;
                goto LAB_080cb80c;
              }
              pBVar16 = (Byte *)(*allocMain->Alloc)(allocMain,sVar10);
              *outBuffer = pBVar16;
              if (pBVar16 != (Byte *)0x0) goto LAB_080cb80c;
            }
            return 2;
          }
          if (UVar19 != folder_00->BindPairs->OutIndex) {
            UVar6 = 0;
            pCVar8 = folder_00->BindPairs;
            do {
              UVar6 = UVar6 + 1;
              if (UVar6 == folder_00->NumBindPairs) goto LAB_080cb74c;
              pCVar2 = pCVar8 + 1;
              pCVar8 = pCVar8 + 1;
            } while (UVar19 != pCVar2->OutIndex);
            if ((int)UVar6 < 0) goto LAB_080cb74c;
          }
          bVar20 = UVar19 != 0;
          UVar19 = UVar19 - 1;
        } while (bVar20);
      }
    }
    UVar22 = p->dataPos;
    p_Var9 = allocMain->Free;
    UVar21 = p->PackStreamStartPositions[p->FolderStartPackStreamIndex[UVar14]];
    *blockIndex = UVar14;
    UVar21 = VectorAdd(UVar21,UVar22,8);
    (*p_Var9)(allocMain,pBVar16);
    *outBuffer = (Byte *)0x0;
    SVar4 = LookInStream_SeekTo(inStream,in_stack_ffffffa8);
    if (SVar4 != 0) {
      return SVar4;
    }
    *outBufferSize = 0;
    pBVar16 = *outBuffer;
    sVar10 = 0;
LAB_080cb80c:
    SVar4 = SzFolder_Decode(folder_00,(p->db).PackSizes + p->FolderStartPackStreamIndex[UVar14],
                            inStream,UVar21,pBVar16,sVar10,allocTemp);
    if (SVar4 != 0) {
      return SVar4;
    }
    if ((folder_00->UnpackCRCDefined != 0) &&
       (UVar14 = CrcCalc(*outBuffer,sVar10), UVar14 != folder_00->UnpackCRC)) {
      return 3;
    }
  }
  else {
    iVar15 = UVar14 << 2;
  }
  sVar10 = 0;
  pCVar17 = (p->db).Files;
  pUVar11 = p->FolderStartFileIndex;
  *offset = 0;
  uVar12 = *(uint *)((int)pUVar11 + iVar15);
  if (uVar12 < fileIndex) {
    pCVar13 = pCVar17 + uVar12;
    do {
      pUVar1 = &pCVar13->Size;
      pCVar13 = pCVar13 + 1;
      sVar10 = sVar10 + *(int *)pUVar1;
    } while (pCVar17 + fileIndex != pCVar13);
    *offset = sVar10;
  }
  sVar10 = *(size_t *)&pCVar17[fileIndex].Size;
  *outSizeProcessed = sVar10;
  if (sVar10 + *offset <= *outBufferSize) {
    if ((pCVar17[fileIndex].CrcDefined != '\0') &&
       (UVar14 = CrcCalc(*outBuffer + *offset,sVar10), UVar14 != pCVar17[fileIndex].Crc)) {
      return 3;
    }
    return 0;
  }
  return 0xb;
}


