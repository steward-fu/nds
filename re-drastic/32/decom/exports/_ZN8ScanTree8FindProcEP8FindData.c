/*
 * Ghidra decompilation
 *
 * Function : _ZN8ScanTree8FindProcEP8FindData
 * Address  : 081081fc
 * Program  : drastic
 */


/* DWARF original prototype: SCAN_CODE FindProc(ScanTree * this, FindData * FD) */

SCAN_CODE __thiscall ScanTree::FindProc(ScanTree *this,FindData *FD)

{
  int iVar1;
  bool Wildcards;
  bool bVar3;
  bool bVar2;
  SCAN_CODE SVar4;
  FindFile *pFVar5;
  wchar_t *pwVar6;
  wchar *Slash;
  wchar *PrevSlash;
  wchar *pwVar7;
  wchar *pwVar8;
  size_t sVar9;
  size_t sVar10;
  int extraout_r1;
  int extraout_r1_00;
  RECURSE_MODE RVar11;
  int iVar12;
  FindFile **ppFVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  int *piVar17;
  bool Error;
  char cVar18;
  byte bVar19;
  wchar DirName [2048];
  wchar Mask [2048];
  
  iVar1 = __stack_chk_guard;
  piVar17 = &this->Depth;
  if (this->CurMask[0] == 0) goto LAB_08108240;
  pFVar5 = this->FindStack[*piVar17];
  if (pFVar5 == (FindFile *)0x0) {
    pwVar8 = this->CurMask;
    bVar2 = IsWildcard(pwVar8);
    if ((bVar2) || (bVar3 = FindFile::FastFind(pwVar8,FD,this->GetLinks), !bVar3)) {
      uVar14 = 0;
LAB_0810860c:
      uVar16 = *piVar17;
      if ((int)uVar16 < 1) {
        RVar11 = this->Recurse;
        if (RVar11 != RECURSE_ALWAYS) {
          bVar3 = bVar2;
          if (RVar11 != RECURSE_WILDCARDS) {
            bVar3 = false;
          }
          if (bVar3 != false) goto LAB_08108844;
          if (RVar11 == RECURSE_DISABLE) {
            bVar19 = 0;
          }
          else {
            bVar19 = this->ScanEntireDisk & 1;
          }
          if (bVar19 != 0) goto LAB_08108844;
          if (uVar16 == 0) {
            bVar3 = false;
            goto LAB_08108708;
          }
          uVar16 = 0;
          bVar3 = false;
          goto LAB_08108710;
        }
LAB_08108844:
        if (uVar16 == 0) {
          bVar2 = true;
          bVar3 = bVar2;
          goto LAB_08108708;
        }
      }
      bVar3 = true;
LAB_0810861c:
      pFVar5 = (FindFile *)operator_new(0x2008);
      FindFile::FindFile(pFVar5);
      this->FindStack[*piVar17] = pFVar5;
      wcsncpyz(Mask,pwVar8,0x800);
      if (bVar3 != false) {
        SetName(Mask,(wchar *)&DAT_08144c5c,0x800);
      }
      FindFile::SetMask(this->FindStack[*piVar17],Mask);
      pFVar5 = this->FindStack[*piVar17];
      goto LAB_08108294;
    }
    if ((FD->IsDir == false) || ((this->GetLinks != false && (FD->IsLink != false)))) {
      uVar14 = 1;
      goto LAB_0810860c;
    }
    if (*piVar17 == 0) {
      uVar16 = 1;
      uVar14 = 1;
      bVar2 = false;
      bVar3 = false;
LAB_08108708:
      this->SearchAllInRoot = bVar3;
LAB_08108710:
      if (bVar2 != false) goto LAB_0810861c;
      if ((uVar16 ^ 1) < uVar14) goto LAB_08108798;
      SVar4 = SCAN_SUCCESS;
      if (uVar14 == 0) {
        if (FD->Error == false) {
          SVar4 = SCAN_NEXT;
        }
        else {
          SVar4 = SCAN_ERROR;
        }
        if ((this->Cmd == (CommandData *)0x0) ||
           (bVar2 = CommandData::ExclCheck(this->Cmd,pwVar8,false,true,true), !bVar2)) {
          ErrorHandler::OpenErrorMsg((wchar_t *)&ErrHandler,(wchar_t *)this->ErrArcName);
        }
        else {
          SVar4 = SCAN_NEXT;
        }
      }
LAB_08108788:
      this->CurMask[0] = 0;
      goto LAB_08108244;
    }
LAB_08108798:
    if (this->Recurse == RECURSE_DISABLE) {
      SVar4 = SCAN_SUCCESS;
      goto LAB_08108788;
    }
    if ((FD->IsDir != false) && ((this->GetLinks == false || (FD->IsLink == false)))) {
      if ((this->Cmd == (CommandData *)0x0) ||
         ((bVar2 = CommandData::ExclCheck(this->Cmd,FD->Name,true,false,false), !bVar2 &&
          (bVar2 = CommandData::ExclDirByAttr(this->Cmd,FD->FileAttr), !bVar2)))) {
        bVar2 = true;
        pwVar8 = (wchar *)&DAT_08144c5c;
        goto LAB_0810855c;
      }
      goto LAB_08108474;
    }
LAB_08108398:
    SVar4 = SCAN_SUCCESS;
    goto LAB_08108244;
  }
LAB_08108294:
  bVar2 = FindFile::Next(pFVar5,FD,this->GetLinks);
  if (bVar2) {
    if ((FD->IsDir == false) || ((this->GetLinks != false && (FD->IsLink != false)))) {
LAB_08108380:
      bVar2 = CmpName(this->CurMask,FD->Name,0);
      if (bVar2) goto LAB_08108398;
    }
    else if ((*piVar17 == 0) && (this->SearchAllInRoot == false)) {
      if (this->GetDirs == SCAN_GETCURDIRS) {
        SVar4 = SCAN_SUCCESS;
        goto LAB_08108244;
      }
    }
    else if ((this->Cmd == (CommandData *)0x0) ||
            ((bVar2 = CommandData::ExclCheck(this->Cmd,FD->Name,true,false,false), !bVar2 &&
             (bVar2 = CommandData::ExclDirByAttr(this->Cmd,FD->FileAttr), !bVar2)))) {
      bVar2 = false;
      pwVar8 = PointToName(this->CurMask);
LAB_0810855c:
      pwVar7 = this->CurMask;
      __wcscpy_chk(Mask,pwVar8,0x800);
      __wcscpy_chk(pwVar7,FD,0x800);
      sVar9 = wcslen((wchar_t *)pwVar7);
      sVar10 = wcslen((wchar_t *)Mask);
      if ((0x7ff < sVar9 + sVar10 + 1) || (0x3fe < *piVar17)) goto LAB_08108438;
      AddEndSlash(pwVar7,0x800);
      wcsncatz(pwVar7,Mask,0x800);
      iVar15 = *piVar17;
      *piVar17 = iVar15 + 1;
      if (bVar2) {
        this->SetAllMaskDepth = iVar15 + 1;
        goto LAB_08108398;
      }
      goto LAB_08108380;
    }
LAB_08108240:
    SVar4 = SCAN_NEXT;
  }
  else {
    cVar18 = FD->Error;
    iVar15 = extraout_r1;
    if (((bool)cVar18 == false) ||
       ((this->Cmd != (CommandData *)0x0 &&
        (bVar2 = CommandData::ExclCheck(this->Cmd,this->CurMask,bVar2,true,true),
        iVar15 = extraout_r1_00, bVar2)))) {
      cVar18 = '\0';
    }
    iVar12 = *piVar17;
    DirName[0] = 0;
    pFVar5 = this->FindStack[iVar12];
    if (pFVar5 != (FindFile *)0x0) {
      FindFile::~FindFile(pFVar5,iVar15);
      operator_delete(pFVar5);
      iVar12 = *piVar17;
    }
    iVar15 = iVar12 + -1;
    *piVar17 = iVar15;
    this->FindStack[iVar12] = (FindFile *)0x0;
    if (iVar15 < 0) {
LAB_08108338:
      if (cVar18 != '\0') {
        SVar4 = SCAN_DONE;
        this->Errors = this->Errors + 1;
        goto LAB_08108244;
      }
LAB_08108474:
      SVar4 = SCAN_DONE;
      goto LAB_08108244;
    }
    if (this->FindStack[iVar12 + -1] == (FindFile *)0x0) {
      ppFVar13 = this->FindStack + iVar12 + -1;
      do {
        bVar2 = iVar15 == 0;
        iVar15 = iVar15 + -1;
        if (bVar2) {
          *piVar17 = iVar15;
          goto LAB_08108338;
        }
        ppFVar13 = ppFVar13 + -1;
      } while (*ppFVar13 == (FindFile *)0x0);
      *piVar17 = iVar15;
    }
    pwVar8 = this->CurMask;
    pwVar6 = wcsrchr((wchar_t *)pwVar8,L'/');
    if (pwVar6 != (wchar_t *)0x0) {
      __wcscpy_chk(Mask,pwVar6,0x800);
      if (*piVar17 < this->SetAllMaskDepth) {
        pwVar7 = PointToName(this->OrigCurMask);
        __wcscpy_chk(Mask + 1,pwVar7,0x7ff);
      }
      *pwVar6 = L'\0';
      __wcscpy_chk(DirName,pwVar8,0x800);
      pwVar6 = wcsrchr((wchar_t *)pwVar8,L'/');
      if (pwVar6 == (wchar_t *)0x0) {
        __wcscpy_chk(pwVar8,Mask + 1,0x800);
      }
      else {
        wcscpy(pwVar6,(wchar_t *)Mask);
      }
    }
    if (this->GetDirs == SCAN_GETDIRSTWICE) {
      bVar2 = FindFile::FastFind(DirName,FD,this->GetLinks);
      SVar4 = (SCAN_CODE)bVar2;
      if ((SVar4 == SCAN_SUCCESS) || (FD->IsDir == false)) goto LAB_08108430;
      if (cVar18 == '\0') {
        SVar4 = SCAN_SUCCESS;
      }
      FD->Flags = FD->Flags | 1;
      if (cVar18 == '\0') goto LAB_08108244;
    }
    else {
LAB_08108430:
      if (cVar18 == '\0') goto LAB_08108240;
    }
LAB_08108438:
    SVar4 = SCAN_ERROR;
  }
LAB_08108244:
  if (iVar1 == __stack_chk_guard) {
    return SVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


