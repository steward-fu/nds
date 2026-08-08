/*
 * Ghidra decompilation
 *
 * Function : _ZN8ScanTree11GetNextMaskEv
 * Address  : 081080b4
 * Program  : drastic
 */


/* DWARF original prototype: bool GetNextMask(ScanTree * this) */

bool __thiscall ScanTree::GetNextMask(ScanTree *this)

{
  bool bVar1;
  bool bVar2;
  wchar *pwVar3;
  wchar *Name;
  wchar wVar4;
  wchar *Str;
  
  Str = this->CurMask;
  bVar1 = StringList::GetString(this->FileMasks,Str,0x800);
  if (bVar1) {
    this->CurMask[0x7ff] = 0;
    bVar2 = IsDiskLetter(Str);
    if ((bVar2) && (bVar2 = IsPathDiv(this->CurMask[2]), bVar2)) {
      bVar2 = this->CurMask[3] == 0;
    }
    else {
      bVar2 = false;
    }
    this->ScanEntireDisk = bVar2;
    pwVar3 = PointToName(Str);
    wVar4 = *pwVar3;
    if (wVar4 == 0) {
      wcsncatz(Str,(wchar *)&DAT_08144c5c,0x800);
      wVar4 = *pwVar3;
    }
    if ((wVar4 == 0x2e) && ((pwVar3[1] == 0 || ((pwVar3[1] == 0x2e && (pwVar3[2] == 0)))))) {
      AddEndSlash(Str,0x800);
      wcsncatz(Str,(wchar *)&DAT_08144c5c,0x800);
    }
    this->SpecPathLength = (int)pwVar3 - (int)Str >> 2;
    this->Depth = 0;
    __wcscpy_chk(this->OrigCurMask,Str,0x800);
  }
  return bVar1;
}


