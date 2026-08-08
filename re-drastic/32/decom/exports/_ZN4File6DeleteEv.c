/*
 * Ghidra decompilation
 *
 * Function : _ZN4File6DeleteEv
 * Address  : 080d5d04
 * Program  : drastic
 */


/* DWARF original prototype: bool Delete(File * this) */

bool __thiscall File::Delete(File *this)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  
  if (this->HandleType != FILE_HANDLENORMAL) {
    return false;
  }
  if ((FILE *)this->hFile != (FILE *)0x0) {
    if (this->SkipClose == false) {
      iVar3 = fclose((FILE *)this->hFile);
      this->hFile = (FileHandle)0x0;
      this->HandleType = FILE_HANDLENORMAL;
      if ((iVar3 == -1) && (this->AllowExceptions != false)) {
        ErrorHandler::CloseError((wchar_t *)&ErrHandler);
        cVar1 = this->AllowDelete;
        goto joined_r0x080d5db8;
      }
    }
    else {
      this->hFile = (FileHandle)0x0;
      this->HandleType = FILE_HANDLENORMAL;
    }
  }
  cVar1 = this->AllowDelete;
joined_r0x080d5db8:
  if (cVar1 == '\0') {
    return false;
  }
  bVar2 = DelFile(this->FileName);
  return bVar2;
}


