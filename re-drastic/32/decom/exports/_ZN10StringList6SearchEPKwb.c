/*
 * Ghidra decompilation
 *
 * Function : _ZN10StringList6SearchEPKwb
 * Address  : 080d1ef0
 * Program  : drastic
 */


/* DWARF original prototype: bool Search(StringList * this, wchar * Str, bool CaseSensitive) */

bool __thiscall StringList::Search(StringList *this,wchar *Str,bool CaseSensitive)

{
  bool bVar1;
  size_t sVar2;
  int iVar3;
  uint uVar4;
  size_t sVar5;
  wchar_t *pwVar6;
  wchar *CurStr;
  uint uVar7;
  
  uVar4 = this->SavePosNumber;
  if (uVar4 < 0x10) {
    this->SaveCurPos[uVar4] = this->CurPos;
    this->SavePosNumber = uVar4 + 1;
  }
  uVar4 = 0;
  this->CurPos = 0;
  if (CaseSensitive) {
    uVar7 = (this->StringData).BufSize;
    do {
      if (uVar7 <= uVar4) goto LAB_080d1f44;
      pwVar6 = (this->StringData).Buffer + uVar4;
      sVar2 = wcslen(pwVar6);
      uVar4 = uVar4 + 1 + sVar2;
      this->CurPos = uVar4;
    } while ((pwVar6 != (wchar_t *)0x0 && Str != (wchar *)0x0) &&
            (iVar3 = wcscmp((wchar_t *)Str,pwVar6), iVar3 != 0));
LAB_080d1fb8:
    bVar1 = true;
  }
  else {
    uVar4 = 0;
    while (uVar4 < (this->StringData).BufSize) {
      pwVar6 = (this->StringData).Buffer + uVar4;
      sVar2 = wcslen(pwVar6);
      this->CurPos = uVar4 + 1 + sVar2;
      if ((pwVar6 == (wchar_t *)0x0 || Str == (wchar *)0x0) ||
         (iVar3 = wcsicomp(Str,(wchar *)pwVar6), iVar3 == 0)) goto LAB_080d1fb8;
      uVar4 = this->CurPos;
    }
LAB_080d1f44:
    bVar1 = false;
  }
  sVar5 = this->SavePosNumber;
  if (sVar5 != 0) {
    this->CurPos = this->SaveCurPos[sVar5 - 1];
    this->SavePosNumber = sVar5 - 1;
  }
  return bVar1;
}


