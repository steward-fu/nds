/*
 * Ghidra decompilation
 *
 * Function : un7z_file_to_memory_partial
 * Address  : 080c7cf4
 * Program  : drastic
 */


/* WARNING: Variable defined which should be unmapped: unpackSize */
/* WARNING: Unknown calling convention */

s32 un7z_file_to_memory_partial
              (char *zip_file_name,char *match_extension,u32 *_file_size,u8 *dest,
              u32 file_size_limit,u32 file_offset)

{
  int iVar1;
  SizeT SVar2;
  CSzFileItem *pCVar3;
  WRes WVar4;
  SRes SVar5;
  SRes res;
  size_t sVar6;
  size_t len;
  UInt16 *dest_00;
  char *pcVar7;
  char *ext;
  int iVar8;
  size_t unpack_size;
  SRes res_1;
  size_t sVar9;
  int written;
  ELzmaStatus EVar10;
  SRes res_2;
  int written_1;
  CSzFolder *p;
  CSzFolder *folder;
  uint uVar11;
  ELzmaFinishMode EVar12;
  CSzCoderInfo *pCVar13;
  CSzCoderInfo *coder;
  uint uVar14;
  uint uVar15;
  Byte *pBVar16;
  UInt16 *pUVar17;
  CSzFileItem *f;
  UInt16 *name;
  int iVar18;
  u32 uVar19;
  UInt32 UVar20;
  u32 folder_index;
  bool bVar21;
  UInt64 UVar22;
  undefined4 in_stack_fffdbe58;
  undefined4 in_stack_fffdbe5c;
  u64 unpackSize;
  int iStack_24198;
  uint uStack_24190;
  size_t inSize;
  SizeT inProcessed;
  SizeT outProcessed;
  ELzmaStatus status;
  ISzAlloc allocImp;
  ISzAlloc allocTempImp;
  CBuf buf;
  CFileInStream archiveStream;
  CBufferOutStream bufferOutStream;
  CSzArEx db;
  CLzma2Dec state;
  CLookToRead lookStream;
  Byte inBuf [65536];
  Byte outBuf [65536];
  
  iVar1 = __stack_chk_guard;
  *_file_size = 0;
  allocImp.Alloc = SzAlloc;
  allocImp.Free = SzFree;
  allocTempImp.Alloc = SzAllocTemp;
  allocTempImp.Free = SzFreeTemp;
  WVar4 = InFile_Open(&archiveStream.file,zip_file_name);
  if (WVar4 != 0) {
    iStack_24198 = -1;
    puts("can not open input file");
    goto LAB_080c7f94;
  }
  FileInStream_CreateVTable(&archiveStream);
  LookToRead_CreateVTable(&lookStream,0);
  lookStream.realStream = &archiveStream.s;
  LookToRead_Init(&lookStream);
  CrcGenerateTable();
  SzArEx_Init(&db);
  SVar5 = SzArEx_Open(&db,&lookStream.s,&allocImp,&allocTempImp);
  dest_00 = (UInt16 *)0x0;
  if (SVar5 == 0) {
    if (db.db.NumFiles != 0) {
      dest_00 = (UInt16 *)0x0;
      iVar18 = 0;
      uStack_24190 = 0;
      UVar20 = db.db.NumFiles;
      sVar9 = 0;
LAB_080c7e00:
      do {
        pCVar3 = db.db.Files;
        if (db.db.Files[sVar9].IsDir != '\0') goto code_r0x080c7e10;
        sVar6 = SzArEx_GetFileNameUtf16(&db,sVar9,(UInt16 *)0x0);
        if (uStack_24190 < sVar6) {
          SzFree(0,dest_00);
          dest_00 = (UInt16 *)SzAlloc(0,sVar6 << 1);
          uStack_24190 = sVar6;
          if (dest_00 == (UInt16 *)0x0) {
            iStack_24198 = -1;
            goto LAB_080c8054;
          }
        }
        SzArEx_GetFileNameUtf16(&db,sVar9,dest_00);
        UVar20 = db.FileIndexToFolderIndexMap[sVar9];
        p = db.db.Folders + UVar20;
        pCVar13 = db.db.Folders[UVar20].Coders;
        if (p->NumCoders != 1) {
          __printf_chk(1,"7Z: Multiple coders not supported");
          iStack_24198 = -1;
          goto LAB_080c8054;
        }
        uVar11 = *(uint *)&pCVar13->MethodID;
        uVar14 = *(uint *)((int)&pCVar13->MethodID + 4);
        if ((uVar14 != 0 || uVar11 != 0x21) &&
            ((uVar14 != 0 || uVar11 != 0x30101) && (uVar11 | uVar14) != 0)) {
          __printf_chk(1,"7Z: method ID %08X not supported.\n");
          iStack_24198 = -1;
          goto LAB_080c8054;
        }
        Buf_Init(&buf);
        sVar6 = (size_t)*dest_00;
        if (sVar6 != 0) {
          sVar6 = 0;
          pUVar17 = dest_00;
          do {
            pUVar17 = pUVar17 + 1;
            sVar6 = sVar6 + 1;
          } while (*pUVar17 != 0);
        }
        SVar5 = Utf16_To_Utf8Buf(&buf,dest_00,sVar6);
        if (((SVar5 == 0) && (pcVar7 = strrchr((char *)buf.data,0x2e), pcVar7 != (char *)0x0)) &&
           (iVar8 = strcasecmp(pcVar7 + 1,match_extension), iVar8 == 0)) {
          Buf_Free(&buf,&g_Alloc);
          uVar11 = *(uint *)&pCVar3[sVar9].Size;
          iVar8 = *(int *)((int)&pCVar3[sVar9].Size + 4);
          pUVar17 = (UInt16 *)(uint)(file_size_limit == 0 || dest == (u8 *)0x0);
          *_file_size = uVar11;
          iStack_24198 = 0;
          if (file_size_limit == 0 || dest == (u8 *)0x0) goto LAB_080c8054;
          if (iVar8 == 0 && uVar11 < file_size_limit + file_offset) goto LAB_080c8050;
          UVar22 = SzFolder_GetUnpackSize(p);
          uVar11 = (uint)UVar22;
          if ((int)(UVar22 >> 0x20) != 0) goto LAB_080c8050;
          uVar19 = iVar18 + file_offset;
          SzArEx_GetFolderStreamPos(&db,UVar20,(UInt32)pUVar17);
          LookInStream_SeekTo(&lookStream.s,CONCAT44(in_stack_fffdbe5c,in_stack_fffdbe58));
          uVar14 = *(uint *)&pCVar13->MethodID;
          uVar15 = *(uint *)((int)&pCVar13->MethodID + 4);
          bufferOutStream.s.Write = BufferOutStream_Write;
          bufferOutStream.bytes_remaining = file_size_limit;
          inSize = (size_t)pUVar17;
          bufferOutStream.buf = dest;
          bufferOutStream.buffer_pos = (u32)pUVar17;
          bufferOutStream.bytes_processed = (u32)pUVar17;
          bufferOutStream.start_offset = uVar19;
          if ((uVar14 | uVar15) == 0) {
            LookInStream_SeekTo(&lookStream.s,CONCAT44(in_stack_fffdbe5c,in_stack_fffdbe58));
            bufferOutStream.start_offset = (u32)pUVar17;
            goto LAB_080c8328;
          }
          if (uVar15 != 0 || uVar14 != 0x30101) {
            if (uVar15 == 0 && uVar14 == 0x21) {
              state.decoder.probs = pUVar17;
              state.decoder.dic = (Byte *)pUVar17;
              Lzma2Dec_Allocate(&state,*(pCVar13->Props).data,&allocImp);
              Lzma2Dec_Init(&state);
              uVar14 = 0;
              if (pUVar17 != (UInt16 *)inSize) {
                pBVar16 = inBuf + (int)pUVar17;
                goto LAB_080c81b8;
              }
              while( true ) {
                inSize = 0x10000;
                SVar5 = (*lookStream.s.Read)(&lookStream,inBuf,&inSize);
                if (SVar5 != 0) break;
                pUVar17 = (UInt16 *)0x0;
                pBVar16 = inBuf;
LAB_080c81b8:
                while( true ) {
                  bVar21 = uVar14 == 0;
                  inProcessed = inSize - (int)pUVar17;
                  EVar12 = inProcessed;
                  if (bVar21 && uVar11 < 0xffff || bVar21 && uVar11 == 0xffff) {
                    EVar12 = LZMA_FINISH_END;
                    outProcessed = uVar11;
                  }
                  if ((!bVar21 || uVar11 >= 0xffff) && (!bVar21 || uVar11 != 0xffff)) {
                    EVar12 = LZMA_FINISH_ANY;
                    outProcessed = 0x10000;
                  }
                  SVar5 = Lzma2Dec_DecodeToBuf
                                    (&state,outBuf,&outProcessed,pBVar16,&inProcessed,EVar12,&status
                                    );
                  SVar2 = inProcessed;
                  bVar21 = uVar11 < outProcessed;
                  uVar11 = uVar11 - outProcessed;
                  uVar14 = uVar14 - bVar21;
                  sVar9 = (*bufferOutStream.s.Write)(&bufferOutStream,outBuf,outProcessed);
                  file_size_limit = file_size_limit - sVar9;
                  if (((SVar5 != 0 || (int)file_size_limit < 1) || ((uVar11 | uVar14) == 0)) ||
                     ((inProcessed == 0 && (outProcessed == 0)))) goto LAB_080c83b4;
                  pUVar17 = (UInt16 *)((int)pUVar17 + SVar2);
                  if (pUVar17 == (UInt16 *)inSize) break;
                  pBVar16 = inBuf + (int)pUVar17;
                }
              }
              goto LAB_080c83b4;
            }
            goto LAB_080c8050;
          }
          state.decoder.probs = pUVar17;
          state.decoder.dic = (Byte *)pUVar17;
          LzmaDec_Allocate(&state.decoder,(pCVar13->Props).data,(pCVar13->Props).size,&allocImp);
          LzmaDec_Init(&state.decoder);
          uVar14 = 0;
          goto LAB_080c8414;
        }
        uVar11 = sVar9 + 1;
        iVar18 = iVar18 + *(int *)&pCVar3[sVar9].Size;
        UVar20 = db.db.NumFiles;
        sVar9 = uVar11;
      } while (uVar11 < db.db.NumFiles);
      goto LAB_080c7f68;
    }
    dest_00 = (UInt16 *)0x0;
  }
LAB_080c7f68:
  SzArEx_Free(&db,&allocImp);
  iStack_24198 = -1;
  goto LAB_080c7f84;
code_r0x080c7e10:
  iVar18 = 0;
  sVar9 = sVar9 + 1;
  if (UVar20 <= sVar9) goto LAB_080c7f68;
  goto LAB_080c7e00;
LAB_080c8414:
  if (pUVar17 == (UInt16 *)inSize) {
    inSize = 0x10000;
    SVar5 = (*lookStream.s.Read)(&lookStream,inBuf,&inSize);
    if (SVar5 != 0) goto LAB_080c83b4;
    pUVar17 = (UInt16 *)0x0;
    pBVar16 = inBuf;
  }
  else {
    pBVar16 = inBuf + (int)pUVar17;
  }
  bVar21 = uVar14 == 0;
  inProcessed = inSize - (int)pUVar17;
  EVar12 = inProcessed;
  if (bVar21 && uVar11 < 0xffff || bVar21 && uVar11 == 0xffff) {
    EVar12 = LZMA_FINISH_END;
    outProcessed = uVar11;
  }
  if ((!bVar21 || uVar11 >= 0xffff) && (!bVar21 || uVar11 != 0xffff)) {
    EVar12 = LZMA_FINISH_ANY;
    outProcessed = 0x10000;
  }
  uVar15 = LzmaDec_DecodeToBuf(&state.decoder,outBuf,&outProcessed,pBVar16,&inProcessed,EVar12,
                               &status);
  pUVar17 = (UInt16 *)((int)pUVar17 + inProcessed);
  bVar21 = uVar11 < outProcessed;
  uVar11 = uVar11 - outProcessed;
  uVar14 = uVar14 - bVar21;
  sVar9 = (*bufferOutStream.s.Write)(&bufferOutStream,outBuf,outProcessed);
  file_size_limit = file_size_limit - sVar9;
  if (uVar15 != 0) {
    uVar15 = 1;
  }
  if ((int)file_size_limit < 1) {
    uVar15 = uVar15 | 1;
  }
  if (((uVar15 != 0) || ((uVar11 | uVar14) == 0)) || ((inProcessed == 0 && (outProcessed == 0))))
  goto LAB_080c83b4;
  goto LAB_080c8414;
LAB_080c83b4:
  LzmaDec_Free(&state.decoder,&allocImp);
  if (file_size_limit != 0) {
    file_size_limit = 1;
  }
  iStack_24198 = -file_size_limit;
  goto LAB_080c8054;
LAB_080c8050:
  iStack_24198 = -1;
  goto LAB_080c8054;
  while (file_size_limit = file_size_limit - EVar10, file_size_limit != 0) {
LAB_080c8328:
    status = file_size_limit;
    if (0xffff < file_size_limit) {
      status = 0x10000;
    }
    SVar5 = (*lookStream.s.Read)(&lookStream,inBuf,&status);
    if ((SVar5 != 0) ||
       (EVar10 = (*bufferOutStream.s.Write)(&bufferOutStream,inBuf,status), EVar10 != status))
    goto LAB_080c8050;
  }
  iStack_24198 = 0;
LAB_080c8054:
  SzArEx_Free(&db,&allocImp);
LAB_080c7f84:
  SzFree(0,dest_00);
  File_Close(&archiveStream.file);
LAB_080c7f94:
  if (iVar1 == __stack_chk_guard) {
    return iStack_24198;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


