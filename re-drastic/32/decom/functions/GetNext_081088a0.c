/*
 * Ghidra decompilation
 *
 * Function : GetNext
 * Address  : 081088a0
 * Program  : drastic
 */


/* DWARF original prototype: SCAN_CODE GetNext(ScanTree * this, FindData * FindData) */

SCAN_CODE __thiscall ScanTree::GetNext(ScanTree *this,FindData *FindData)

{
  bool bVar1;
  SCAN_CODE SVar2;
  SCAN_CODE FindCode;
  wchar *pwVar3;
  wchar *Name;
  wchar wVar4;
  wchar *Str;
  
  if (this->Depth < 0) {
LAB_0810895c:
    SVar2 = SCAN_DONE;
  }
  else {
    Str = this->CurMask;
    do {
      while( true ) {
        do {
          while( true ) {
            if (this->CurMask[0] == 0) {
              bVar1 = StringList::GetString(this->FileMasks,Str,0x800);
              if (!bVar1) goto LAB_0810895c;
              this->CurMask[0x7ff] = 0;
              bVar1 = IsDiskLetter(Str);
              if ((bVar1) && (bVar1 = IsPathDiv(this->CurMask[2]), bVar1)) {
                bVar1 = this->CurMask[3] == 0;
              }
              else {
                bVar1 = false;
              }
              this->ScanEntireDisk = bVar1;
              pwVar3 = PointToName(Str);
              wVar4 = *pwVar3;
              if (wVar4 == 0) {
                wcsncatz(Str,(wchar *)&DAT_08144c5c,0x800);
                wVar4 = *pwVar3;
              }
              if ((wVar4 == 0x2e) && ((pwVar3[1] == 0 || ((pwVar3[1] == 0x2e && (pwVar3[2] == 0)))))
                 ) {
                AddEndSlash(Str,0x800);
                wcsncatz(Str,(wchar *)&DAT_08144c5c,0x800);
              }
              this->SpecPathLength = (int)pwVar3 - (int)Str >> 2;
              this->Depth = 0;
              __wcscpy_chk(this->OrigCurMask,Str,0x800);
            }
            SVar2 = FindProc(this,FindData);
            if (SVar2 != SCAN_ERROR) break;
            this->Errors = this->Errors + 1;
          }
        } while (SVar2 == SCAN_NEXT);
        if (SVar2 == SCAN_SUCCESS) break;
        if (SVar2 != SCAN_DONE) {
          return SVar2;
        }
        bVar1 = GetNextMask(this);
        if (!bVar1) {
          return SCAN_DONE;
        }
      }
      SVar2 = SCAN_SUCCESS;
    } while ((FindData->IsDir != false) && (this->GetDirs == SCAN_SKIPDIRS));
  }
  return SVar2;
}


