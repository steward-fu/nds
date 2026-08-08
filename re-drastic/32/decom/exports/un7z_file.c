/*
 * Ghidra decompilation
 *
 * Function : un7z_file
 * Address  : 080c7200
 * Program  : drastic
 */


/* WARNING: Variable defined which should be unmapped: unpackSize */
/* WARNING: Restarted to delay deadcode elimination for space: ram */
/* WARNING: Unknown calling convention */

u8 * un7z_file(char *path,char *match_extension,u32 *_file_size,char *dest_file_name)

{
  UInt64 *pUVar1;
  int iVar2;
  WRes WVar3;
  size_t sVar4;
  SRes res;
  size_t sVar5;
  size_t len;
  UInt16 *dest;
  SRes SVar6;
  char *pcVar7;
  char *ext;
  int iVar8;
  size_t unpack_size;
  u8 *puVar9;
  SRes res_1;
  SRes res_2;
  UInt16 *pUVar10;
  Byte *pBVar11;
  int j;
  size_t bytes_to_write;
  CSzFileItem *pCVar12;
  uint uVar13;
  uint uVar14;
  size_t sVar15;
  CSzFileItem *f;
  UInt32 UVar16;
  u32 folder_index;
  CSzCoderInfo *pCVar17;
  CSzCoderInfo *coder;
  uint uVar18;
  CSzFolder *folder;
  uint uVar19;
  uint uVar20;
  UInt16 *name;
  bool bVar21;
  UInt64 UVar22;
  undefined4 in_stack_fffdbe50;
  undefined4 in_stack_fffdbe54;
  u64 unpackSize;
  uint uStack_24198;
  int iStack_24194;
  s64 out_write_offset_1;
  undefined8 uStack_24188;
  u8 *puStack_24180;
  UInt32 blockIndex;
  Byte *outBuffer;
  size_t outBufferSize;
  size_t offset;
  size_t outSizeProcessed;
  size_t inSize;
  SizeT inProcessed;
  SizeT outProcessed;
  size_t bytes_to_read;
  ISzAlloc allocImp;
  ISzAlloc allocTempImp;
  CBuf buf;
  CFileOutStream fileOutStream;
  CFileInStream archiveStream;
  CSzArEx db;
  CLzma2Dec state;
  CLookToRead lookStream;
  Byte inBuf [65536];
  Byte outBuf [65536];
  
  iVar2 = __stack_chk_guard;
  allocImp.Alloc = SzAlloc;
  *_file_size = 0;
  allocImp.Free = SzFree;
  allocTempImp.Alloc = SzAllocTemp;
  allocTempImp.Free = SzFreeTemp;
  WVar3 = InFile_Open(&archiveStream.file,path);
  if (WVar3 == 0) {
    FileInStream_CreateVTable(&archiveStream);
    LookToRead_CreateVTable(&lookStream,0);
    lookStream.realStream = &archiveStream.s;
    LookToRead_Init(&lookStream);
    CrcGenerateTable();
    SzArEx_Init(&db);
    sVar4 = SzArEx_Open(&db,&lookStream.s,&allocImp,&allocTempImp);
    if (sVar4 == 0) {
      blockIndex = 0xffffffff;
      outBuffer = (Byte *)0x0;
      outBufferSize = (size_t)outBuffer;
      if (db.db.NumFiles != 0) {
        uVar18 = 0;
        dest = (UInt16 *)0x0;
        uStack_24198 = 0;
        UVar16 = db.db.NumFiles;
        sVar15 = 0;
LAB_080c7330:
        while( true ) {
          pCVar12 = db.db.Files;
          offset = sVar4;
          outSizeProcessed = sVar4;
          if (db.db.Files[sVar15].IsDir != '\0') goto code_r0x080c7348;
          sVar5 = SzArEx_GetFileNameUtf16(&db,sVar15,(UInt16 *)0x0);
          if (uStack_24198 < sVar5) {
            SzFree(0,dest);
            dest = (UInt16 *)SzAlloc(0,sVar5 << 1);
            uStack_24198 = sVar5;
            if (dest == (UInt16 *)0x0) {
              SzArEx_Free(&db,&allocImp);
              SzFree(0,0);
              File_Close(&archiveStream.file);
              goto LAB_080c758c;
            }
          }
          SzArEx_GetFileNameUtf16(&db,sVar15,dest);
          Buf_Init(&buf);
          sVar5 = (size_t)*dest;
          if (sVar5 != 0) {
            sVar5 = 0;
            pUVar10 = dest;
            do {
              pUVar10 = pUVar10 + 1;
              sVar5 = sVar5 + 1;
            } while (*pUVar10 != 0);
          }
          SVar6 = Utf16_To_Utf8Buf(&buf,dest,sVar5);
          if (((SVar6 == 0) && (pcVar7 = strrchr((char *)buf.data,0x2e), pcVar7 != (char *)0x0)) &&
             (iVar8 = strcasecmp(pcVar7 + 1,match_extension), iVar8 == 0)) break;
          uVar14 = sVar15 + 1;
          uVar18 = uVar18 + *(int *)&pCVar12[sVar15].Size;
          UVar16 = db.db.NumFiles;
          sVar15 = uVar14;
          if (db.db.NumFiles <= uVar14) goto LAB_080c742c;
        }
        Buf_Free(&buf,&g_Alloc);
        *_file_size = *(u32 *)&pCVar12[sVar15].Size;
        if (dest_file_name == (char *)0x0) {
          puVar9 = (u8 *)SzArEx_Extract(&db,&lookStream.s,sVar15,&blockIndex,&outBuffer,
                                        &outBufferSize,&offset,&outSizeProcessed,&allocImp,
                                        &allocTempImp);
          if ((puVar9 == (u8 *)0x0) && (puStack_24180 = outBuffer, *_file_size == outSizeProcessed))
          goto LAB_080c751c;
          (*allocImp.Free)(&allocImp,outBuffer);
          SzArEx_Free(&db,&allocImp);
          SzFree(0,dest);
          File_Close(&archiveStream.file);
          if (puVar9 == (u8 *)0x0) goto LAB_080c753c;
          goto LAB_080c758c;
        }
        UVar16 = db.FileIndexToFolderIndexMap[sVar15];
        pCVar17 = db.db.Folders[UVar16].Coders;
        UVar22 = SzFolder_GetUnpackSize(db.db.Folders + UVar16);
        uStack_24198 = (uint)UVar22;
        iStack_24194 = 0;
        if ((int)(UVar22 >> 0x20) != 0) goto LAB_080c7518;
        if (db.db.Folders[UVar16].NumCoders != 1) {
          __printf_chk(1,"7Z: Multiple coders not supported");
          goto LAB_080c7518;
        }
        uVar14 = *(uint *)&pCVar17->MethodID;
        uVar20 = *(uint *)((int)&pCVar17->MethodID + 4);
        if ((uVar20 != 0 || uVar14 != 0x21) &&
            ((uVar20 != 0 || uVar14 != 0x30101) && (uVar14 | uVar20) != 0)) {
          __printf_chk(1,"7Z: method ID %08X not supported.\n",uVar14);
          goto LAB_080c7518;
        }
        SzArEx_GetFolderStreamPos(&db,UVar16,0);
        LookInStream_SeekTo(&lookStream.s,CONCAT44(in_stack_fffdbe54,in_stack_fffdbe50));
        FileOutStream_CreateVTable(&fileOutStream);
        File_Construct(&fileOutStream.file);
        sVar4 = OutFile_Open(&fileOutStream.file,dest_file_name);
        if (sVar4 != 0) goto LAB_080c7518;
        uVar14 = db.FolderStartFileIndex[UVar16];
        if (sVar15 < uVar14) {
          uVar19 = 0;
          uVar20 = uVar19;
        }
        else {
          uVar19 = 0;
          uVar20 = 0;
          pCVar12 = db.db.Files + uVar14;
          do {
            pUVar1 = &pCVar12->Size;
            uVar14 = uVar14 + 1;
            pCVar12 = pCVar12 + 1;
            bVar21 = CARRY4(uVar19,*(uint *)pUVar1);
            uVar19 = uVar19 + *(uint *)pUVar1;
            uVar20 = uVar20 + bVar21;
          } while (uVar14 <= sVar15);
        }
        uVar14 = *(uint *)&pCVar17->MethodID;
        uVar13 = *(uint *)((int)&pCVar17->MethodID + 4);
        g_current_unpack_done = 0;
        g_current_unpack_size._0_4_ = uVar19;
        g_current_unpack_size._4_4_ = uVar20;
        inSize = sVar4;
        if ((uVar14 | uVar13) == 0) {
          if (uVar18 != 0) {
            (*lookStream.s.Skip)(&lookStream,uVar18);
            bVar21 = uVar19 < uVar18;
            uVar19 = uVar19 - uVar18;
            uVar20 = uVar20 - bVar21;
            g_current_unpack_done =
                 CONCAT44(g_current_unpack_done._4_4_ +
                          (uint)CARRY4((uint)g_current_unpack_done,uVar18),
                          (uint)g_current_unpack_done + uVar18);
          }
          if ((int)(uVar20 - (uVar19 == 0)) < 0 == (SBORROW4(uVar20,(uint)(uVar19 == 0)) != false))
          {
            do {
              bytes_to_read = uVar19;
              if (0 < (int)(uVar20 + (0xffff < uVar19)) !=
                  (SBORROW4(-uVar20,(uint)(0xffff < uVar19)) != false)) {
                bytes_to_read = 0x10000;
              }
              SVar6 = (*lookStream.s.Read)(&lookStream,inBuf,&bytes_to_read);
              if ((SVar6 != 0) ||
                 (sVar4 = (*fileOutStream.s.Write)(&fileOutStream,inBuf,bytes_to_read),
                 sVar4 != bytes_to_read)) {
                File_Close(&fileOutStream.file);
                puStack_24180 = (u8 *)0x0;
                goto LAB_080c751c;
              }
              bVar21 = uVar19 < sVar4;
              uVar19 = uVar19 - sVar4;
              uVar20 = uVar20 - bVar21;
              g_current_unpack_done =
                   CONCAT44(g_current_unpack_done._4_4_ +
                            (uint)CARRY4((uint)g_current_unpack_done,sVar4),
                            (uint)g_current_unpack_done + sVar4);
            } while ((int)(uVar20 - (uVar19 == 0)) < 0 ==
                     (SBORROW4(uVar20,(uint)(uVar19 == 0)) != false));
          }
          if ((uVar19 | uVar20) == 0) {
            puStack_24180 = (u8 *)0x1;
          }
          else {
            puStack_24180 = (u8 *)0x0;
          }
LAB_080c7894:
          File_Close(&fileOutStream.file);
        }
        else {
          if (uVar13 == 0 && uVar14 == 0x30101) {
            sVar4 = 0;
            state.decoder.probs = (UInt16 *)0x0;
            state.decoder.dic = (Byte *)0x0;
            LzmaDec_Allocate(&state.decoder,(pCVar17->Props).data,(pCVar17->Props).size,&allocImp);
            uStack_24188 = VectorShiftRight(CONCAT44(uVar18,uVar18),0x20);
            LzmaDec_Init(&state.decoder);
            while( true ) {
              if (sVar4 == inSize) {
                inSize = 0x10000;
                SVar6 = (*lookStream.s.Read)(&lookStream,inBuf,&inSize);
                if (SVar6 != 0) break;
                sVar4 = 0;
                pBVar11 = inBuf;
              }
              else {
                pBVar11 = inBuf + sVar4;
              }
              out_write_offset_1._4_4_ = &state;
              inProcessed = inSize - sVar4;
              bVar21 = iStack_24194 != 0;
              if ((bVar21 || 0xfffe < uStack_24198) && (bVar21 || uStack_24198 != 0xffff)) {
                outProcessed = 0x10000;
              }
              else {
                outProcessed = uStack_24198;
              }
              SVar6 = LzmaDec_DecodeToBuf(&(out_write_offset_1._4_4_)->decoder,outBuf,&outProcessed,
                                          pBVar11,&inProcessed,
                                          (uint)(!bVar21 && 0xfffe >= uStack_24198 ||
                                                !bVar21 && uStack_24198 == 0xffff),&bytes_to_read);
              bVar21 = uStack_24198 < outProcessed;
              uStack_24198 = uStack_24198 - outProcessed;
              iStack_24194 = iStack_24194 - (uint)bVar21;
              bVar21 = uVar19 < outProcessed;
              uVar19 = uVar19 - outProcessed;
              uVar20 = uVar20 - bVar21;
              sVar4 = sVar4 + inProcessed;
              if ((int)(uStack_24188._4_4_ - (uint)((uint)uStack_24188 == 0)) < 0 ==
                  (SBORROW4(uStack_24188._4_4_,(uint)((uint)uStack_24188 == 0)) != false)) {
                iVar8 = (uint)uStack_24188 - outProcessed;
                uStack_24188._4_4_ = uStack_24188._4_4_ - (uint)((uint)uStack_24188 < outProcessed);
                uStack_24188 = CONCAT44(uStack_24188._4_4_,iVar8);
                if (uStack_24188._4_4_ < 0) {
                  pBVar11 = outBuf + outProcessed + iVar8;
                  sVar15 = -iVar8;
                }
                else {
                  pBVar11 = outBuf;
                  sVar15 = 0;
                }
              }
              else {
                pBVar11 = outBuf;
                sVar15 = outProcessed;
              }
              if ((int)uVar20 < 0) {
                sVar15 = sVar15 + uVar19;
                uVar20 = 0;
                g_current_unpack_done =
                     CONCAT44(g_current_unpack_size._4_4_,(uint)g_current_unpack_size);
                uVar19 = 0;
              }
              else {
                g_current_unpack_done = VectorAdd((ulonglong)outProcessed,g_current_unpack_done,8);
              }
              if (((sVar15 != 0) &&
                  (sVar5 = (*fileOutStream.s.Write)(&fileOutStream,pBVar11,sVar15), sVar15 != sVar5)
                  ) || (SVar6 != 0)) break;
              if ((uVar19 | uVar20) == 0) goto LAB_080c7cd4;
              if ((inProcessed == 0) && (outProcessed == 0)) goto LAB_080c7a28;
            }
LAB_080c7a64:
            if ((uVar19 | uVar20) == 0) {
              puStack_24180 = (u8 *)0x1;
            }
            else {
              puStack_24180 = (u8 *)0x0;
            }
            goto LAB_080c7a70;
          }
          if (uVar13 == 0 && uVar14 == 0x21) {
            sVar4 = 0;
            state.decoder.probs = (UInt16 *)0x0;
            state.decoder.dic = (Byte *)0x0;
            uStack_24188 = VectorShiftRight(CONCAT44(uVar18,uVar18),0x20);
            Lzma2Dec_Allocate(&state,*(pCVar17->Props).data,&allocImp);
            Lzma2Dec_Init(&state);
            do {
              if (sVar4 == inSize) {
                inSize = 0x10000;
                SVar6 = (*lookStream.s.Read)(&lookStream,inBuf,&inSize);
                if (SVar6 != 0) goto LAB_080c7a64;
                sVar4 = 0;
                pBVar11 = inBuf;
              }
              else {
                pBVar11 = inBuf + sVar4;
              }
              inProcessed = inSize - sVar4;
              bVar21 = iStack_24194 != 0;
              if ((bVar21 || 0xfffe < uStack_24198) && (bVar21 || uStack_24198 != 0xffff)) {
                outProcessed = 0x10000;
              }
              else {
                outProcessed = uStack_24198;
              }
              SVar6 = Lzma2Dec_DecodeToBuf
                                (&state,outBuf,&outProcessed,pBVar11,&inProcessed,
                                 (uint)(!bVar21 && 0xfffe >= uStack_24198 ||
                                       !bVar21 && uStack_24198 == 0xffff),&bytes_to_read);
              bVar21 = uStack_24198 < outProcessed;
              uStack_24198 = uStack_24198 - outProcessed;
              iStack_24194 = iStack_24194 - (uint)bVar21;
              bVar21 = uVar19 < outProcessed;
              uVar19 = uVar19 - outProcessed;
              uVar20 = uVar20 - bVar21;
              sVar4 = sVar4 + inProcessed;
              if ((int)(uStack_24188._4_4_ - (uint)((uint)uStack_24188 == 0)) < 0 ==
                  (SBORROW4(uStack_24188._4_4_,(uint)((uint)uStack_24188 == 0)) != false)) {
                iVar8 = (uint)uStack_24188 - outProcessed;
                uStack_24188._4_4_ = uStack_24188._4_4_ - (uint)((uint)uStack_24188 < outProcessed);
                uStack_24188 = CONCAT44(uStack_24188._4_4_,iVar8);
                if (uStack_24188._4_4_ < 0) {
                  pBVar11 = outBuf + outProcessed + iVar8;
                  sVar15 = -iVar8;
                }
                else {
                  pBVar11 = outBuf;
                  sVar15 = 0;
                }
              }
              else {
                pBVar11 = outBuf;
                sVar15 = outProcessed;
              }
              if ((int)uVar20 < 0) {
                sVar15 = sVar15 + uVar19;
                uVar20 = 0;
                g_current_unpack_done =
                     CONCAT44(g_current_unpack_size._4_4_,(uint)g_current_unpack_size);
                uVar19 = 0;
              }
              else {
                g_current_unpack_done = VectorAdd((ulonglong)outProcessed,g_current_unpack_done,8);
              }
              if (((sVar15 != 0) &&
                  (sVar5 = (*fileOutStream.s.Write)(&fileOutStream,pBVar11,sVar15), sVar15 != sVar5)
                  ) || (SVar6 != 0)) goto LAB_080c7a64;
              if ((uVar19 | uVar20) == 0) goto LAB_080c7cd4;
            } while ((inProcessed != 0) || (outProcessed != 0));
LAB_080c7a28:
            puStack_24180 = (u8 *)0x0;
            goto LAB_080c7a70;
          }
          __printf_chk(1,"7Z: method ID %08X not supported.\n");
LAB_080c7518:
          puStack_24180 = (u8 *)0x0;
        }
LAB_080c751c:
        SzArEx_Free(&db,&allocImp);
        SzFree(0,dest);
        File_Close(&archiveStream.file);
        puVar9 = puStack_24180;
        goto LAB_080c753c;
      }
      dest = (UInt16 *)0x0;
LAB_080c742c:
      SzArEx_Free(&db,&allocImp);
      SzFree(0,dest);
      File_Close(&archiveStream.file);
      puVar9 = (u8 *)0x0;
LAB_080c753c:
      if (*_file_size == 0) {
LAB_080c758c:
        puVar9 = (u8 *)0x0;
      }
    }
    else {
      SzArEx_Free(&db,&allocImp);
      SzFree(0,0);
      File_Close(&archiveStream.file);
      puVar9 = (u8 *)0x0;
    }
  }
  else {
    puts("can not open input file");
    puVar9 = (u8 *)0x0;
  }
  if (iVar2 != __stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar9;
code_r0x080c7348:
  uVar18 = 0;
  sVar15 = sVar15 + 1;
  if (UVar16 <= sVar15) goto LAB_080c742c;
  goto LAB_080c7330;
LAB_080c7cd4:
  puStack_24180 = (u8 *)0x1;
LAB_080c7a70:
  out_write_offset_1._4_4_ = &state;
  LzmaDec_Free(&(out_write_offset_1._4_4_)->decoder,&allocImp);
  goto LAB_080c7894;
}


