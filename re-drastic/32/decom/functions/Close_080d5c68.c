/*
 * Ghidra decompilation
 *
 * Function : Close
 * Address  : 080d5c68
 * Program  : drastic
 */


/* DWARF original prototype: bool Close(File * this) */

bool __thiscall File::Close(File *this)

{
  char cVar1;
  int iVar2;
  bool bVar3;
  
  if ((FILE *)this->hFile != (FILE *)0x0) {
    if (this->SkipClose == false) {
      iVar2 = fclose((FILE *)this->hFile);
      bVar3 = iVar2 != -1;
      this->hFile = (FileHandle)0x0;
      this->HandleType = FILE_HANDLENORMAL;
      if (bVar3) {
        iVar2 = 1;
      }
      cVar1 = (char)iVar2;
      if ((!bVar3) && (cVar1 = this->AllowExceptions, (bool)cVar1 != false)) {
        ErrorHandler::CloseError((wchar_t *)&ErrHandler);
        cVar1 = '\0';
      }
    }
    else {
      cVar1 = '\x01';
      this->hFile = (FileHandle)0x0;
      this->HandleType = FILE_HANDLENORMAL;
    }
    return (bool)cVar1;
  }
  this->HandleType = FILE_HANDLENORMAL;
  return true;
}


