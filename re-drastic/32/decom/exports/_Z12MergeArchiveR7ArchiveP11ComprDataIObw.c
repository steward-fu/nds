/*
 * Ghidra decompilation
 *
 * Function : _Z12MergeArchiveR7ArchiveP11ComprDataIObw
 * Address  : 080ecca0
 * Program  : drastic
 */


/* WARNING: Heritage AFTER dead removal. Example location: r0 : 0x080ed238 */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* WARNING: Unknown calling convention */
/* WARNING: Exceeded maximum restarts with more pending */

bool MergeArchive(Archive *Arc,ComprDataIO *DataIO,bool ShowFileName,wchar Command)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  HEADER_TYPE HeaderType;
  int iVar4;
  int iVar5;
  int RetCode;
  wchar *pwVar6;
  int RetCode_1;
  undefined4 extraout_r1;
  _func_int_varargs *p_Var7;
  undefined4 uVar8;
  HASH_TYPE Type;
  undefined4 extraout_r1_00;
  undefined4 extraout_r1_01;
  undefined4 extraout_r1_02;
  RAROptions *pRVar9;
  uint MaxThreads;
  byte *Key;
  FileHeader *hd;
  uint uVar10;
  bool OldSchemeTested;
  bool bVar11;
  int64 iVar12;
  FileHeader *local_484c;
  wchar NextName [2048];
  wchar AltNextName [2048];
  char NextNameA [2048];
  
  iVar1 = __stack_chk_guard;
  HeaderType = Arc->CurHeaderType;
  pRVar9 = Arc->Cmd;
  if (HeaderType == HEAD_SERVICE) {
    local_484c = &Arc->SubHead;
LAB_080ed130:
    if (local_484c->SplitAfter == false) goto LAB_080ecd28;
    if (DataIO == (ComprDataIO *)0x0) {
      bVar11 = true;
      iVar4 = (*(Arc->super_File)._vptr_File[4])();
      uVar8 = extraout_r1_02;
      goto LAB_080ecd4c;
    }
    if ((Arc->Format == RARFMT50) ||
       ((0x13 < local_484c->UnpVer && ((local_484c->FileHash).field_1.CRC32 != 0xffffffff)))) {
      Key = (byte *)(uint)local_484c->UseHashKey;
      bVar11 = Key != (byte *)0x0;
      if (bVar11) {
        Key = (local_484c->FileHash).field_1.Digest + 0x1c;
      }
      if (bVar11) {
        Key = Key + 0x3b;
      }
      bVar11 = true;
      DataHash::Cmp(&DataIO->PackedDataHash,&local_484c->FileHash,Key);
      iVar4 = (*(Arc->super_File)._vptr_File[4])();
      uVar8 = extraout_r1_00;
    }
    else {
      bVar11 = true;
      iVar4 = (*(Arc->super_File)._vptr_File[4])();
      uVar8 = extraout_r1_01;
    }
  }
  else {
    local_484c = &Arc->FileHead;
    if (HeaderType + ~HEAD_MAIN < 2) goto LAB_080ed130;
LAB_080ecd28:
    iVar4 = (*(Arc->super_File)._vptr_File[4])();
    uVar8 = extraout_r1;
    if (DataIO == (ComprDataIO *)0x0) {
      bVar11 = false;
      goto LAB_080ecd4c;
    }
    bVar11 = false;
  }
  iVar12 = File::FileLength(&Arc->super_File);
  DataIO->ProcessedArcSize = iVar12 + DataIO->ProcessedArcSize;
LAB_080ecd4c:
  pwVar6 = (Arc->super_File).FileName;
  File::Close(&Arc->super_File);
  __wcscpy_chk(NextName,pwVar6,0x800);
  OldSchemeTested = false;
  NextVolumeName(NextName,0x800,(bool)(Arc->NewNumbering ^ 1));
  do {
    bVar2 = File::Open(&Arc->super_File,NextName,0);
    if (bVar2) {
LAB_080ecfec:
      Archive::CheckArc(Arc,true);
      pwVar6 = NextName;
      WideToChar(pwVar6,NextNameA,0x800);
      if (((pRVar9->Callback == (UNRARCALLBACK_conflict)0x0) ||
          ((iVar4 = (*pRVar9->Callback)(3,pRVar9->UserData,(long)NextName,1), iVar4 != -1 &&
           (pwVar6 = (wchar *)(*pRVar9->Callback)(0,pRVar9->UserData,(long)NextNameA,1),
           pwVar6 != (wchar *)0xffffffff)))) &&
         ((pRVar9->ChangeVolProc == (CHANGEVOLPROC)0x0 ||
          (pwVar6 = (wchar *)(*pRVar9->ChangeVolProc)(NextNameA,1), pwVar6 != (wchar *)0x0)))) {
        if (bVar11) {
          Archive::SearchBlock(Arc,HeaderType);
        }
        else {
          Archive::ReadHeader(Arc);
        }
        if (Arc->CurHeaderType == HEAD_FILE) {
          Archive::ConvertAttributes(Arc);
          uVar10 = *(uint *)&(Arc->FileHead).PackSize;
          p_Var7 = (Arc->super_File)._vptr_File[3];
          (*p_Var7)(pwVar6,p_Var7,*(uint *)&Arc->NextBlockPos - uVar10,
                    *(int *)((int)&Arc->NextBlockPos + 4) -
                    (*(int *)((int)&(Arc->FileHead).PackSize + 4) +
                    (uint)(*(uint *)&Arc->NextBlockPos < uVar10)),0);
        }
        if (DataIO == (ComprDataIO *)0x0) {
          bVar2 = true;
        }
        else {
          if (HeaderType == HEAD_ENDARC) {
            bVar11 = false;
          }
          else {
            uVar8 = *(undefined4 *)((int)&local_484c->PackSize + 4);
            bVar11 = local_484c->SplitAfter;
            *(undefined4 *)&DataIO->UnpPackedSize = *(undefined4 *)&local_484c->PackSize;
            *(undefined4 *)((int)&DataIO->UnpPackedSize + 4) = uVar8;
          }
          Type = (local_484c->FileHash).Type;
          bVar2 = true;
          MaxThreads = pRVar9->Threads;
          DataIO->UnpVolume = bVar11;
          DataIO->CurUnpRead = 0;
          DataHash::Init(&DataIO->PackedDataHash,Type,MaxThreads);
        }
      }
      else {
        bVar2 = false;
      }
LAB_080eced4:
      if (iVar1 == __stack_chk_guard) {
        return bVar2;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    if (DataIO != (ComprDataIO *)0x0) {
      DataIO->TotalArcSize = 0;
    }
    if (!OldSchemeTested) {
      __wcscpy_chk(AltNextName,pwVar6,0x800);
      NextVolumeName(AltNextName,0x800,true);
      bVar3 = File::Open(&Arc->super_File,AltNextName,0);
      if (bVar3) {
        __wcscpy_chk(NextName,AltNextName,0x800);
        goto LAB_080ecfec;
      }
    }
    if (pRVar9->Callback == (UNRARCALLBACK_conflict)0x0) {
      if (pRVar9->ChangeVolProc != (CHANGEVOLPROC)0x0) {
        bVar3 = false;
        goto LAB_080ece78;
      }
    }
    else {
      __wcscpy_chk(AltNextName,NextName,0x800);
      iVar5 = (*pRVar9->Callback)(3,pRVar9->UserData,(long)NextName,0);
      if (iVar5 == -1) {
        iVar5 = -1;
        if (pRVar9->ChangeVolProc != (CHANGEVOLPROC)0x0) {
          bVar3 = true;
          goto LAB_080ece78;
        }
LAB_080ecea0:
        pRVar9->DllError = 0xf;
        File::Open(&Arc->super_File,pwVar6,0);
        p_Var7 = (Arc->super_File)._vptr_File[3];
        (*p_Var7)(iVar5,p_Var7,iVar4,uVar8,0);
        goto LAB_080eced4;
      }
      iVar5 = wcscmp((wchar_t *)AltNextName,(wchar_t *)NextName);
      if (iVar5 == 0) {
        WideToChar(NextName,NextNameA,0x800);
        iVar5 = (*pRVar9->Callback)(0,pRVar9->UserData,(long)NextNameA,0);
        if (iVar5 == -1) {
          iVar5 = -1;
          if (pRVar9->ChangeVolProc == (CHANGEVOLPROC)0x0) goto LAB_080ecea0;
          bVar3 = true;
        }
        else {
          CharToWide(NextNameA,NextName,0x800);
          iVar5 = wcscmp((wchar_t *)AltNextName,(wchar_t *)NextName);
          if ((iVar5 != 0) || (pRVar9->ChangeVolProc == (CHANGEVOLPROC)0x0)) goto LAB_080ece58;
          bVar3 = false;
        }
LAB_080ece78:
        WideToChar(NextName,NextNameA,0x800);
        iVar5 = (*pRVar9->ChangeVolProc)(NextNameA,0);
        if ((iVar5 == 0) || (CharToWide(NextNameA,NextName,1), bVar3)) goto LAB_080ecea0;
      }
    }
LAB_080ece58:
    OldSchemeTested = true;
  } while( true );
}


