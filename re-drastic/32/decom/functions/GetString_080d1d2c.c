/*
 * Ghidra decompilation
 *
 * Function : GetString
 * Address  : 080d1d2c
 * Program  : drastic
 */


/* DWARF original prototype: bool GetString(StringList * this, wchar * Str, size_t MaxLength, int
   StringNum) */

bool __thiscall StringList::GetString(StringList *this,wchar *Str,size_t MaxLength,int StringNum)

{
  size_t sVar1;
  uint uVar2;
  size_t sVar3;
  wchar_t *__s;
  wchar *StrPtr;
  int iVar4;
  bool bVar5;
  
  uVar2 = this->SavePosNumber;
  if (uVar2 < 0x10) {
    this->SaveCurPos[uVar2] = this->CurPos;
    this->SavePosNumber = uVar2 + 1;
  }
  iVar4 = StringNum + -1;
  this->CurPos = 0;
  if (-1 < StringNum) {
    do {
      uVar2 = this->CurPos;
      if ((this->StringData).BufSize <= uVar2) {
        bVar5 = false;
        goto LAB_080d1d98;
      }
      __s = (this->StringData).Buffer + uVar2;
      sVar1 = wcslen(__s);
      this->CurPos = uVar2 + 1 + sVar1;
      wcsncpyz(Str,(wchar *)__s,MaxLength);
      bVar5 = -1 < iVar4;
      iVar4 = iVar4 + -1;
    } while (bVar5);
  }
  bVar5 = true;
LAB_080d1d98:
  sVar3 = this->SavePosNumber;
  if (sVar3 != 0) {
    this->CurPos = this->SaveCurPos[sVar3 - 1];
    this->SavePosNumber = sVar3 - 1;
  }
  return bVar5;
}


