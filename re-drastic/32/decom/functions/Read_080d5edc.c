/*
 * Ghidra decompilation
 *
 * Function : Read
 * Address  : 080d5edc
 * Program  : drastic
 */


/* WARNING: Heritage AFTER dead removal. Example location: r0 : 0x080d6058 */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* WARNING: Exceeded maximum restarts with more pending */
/* DWARF original prototype: int Read(File * this, void * Data, size_t Size) */

int __thiscall File::Read(File *this,void *Data,size_t Size)

{
  bool bVar1;
  FILE *__stream;
  size_t sVar2;
  size_t ReadSize;
  int iVar3;
  int ReadCode;
  int extraout_r1;
  size_t Size_00;
  int iVar4;
  uint uVar5;
  uint local_28;
  int iStack_24;
  
  if (this->IgnoreReadErrors == false) {
    local_28 = 0;
    iStack_24 = 0;
  }
  else {
    local_28 = (*this->_vptr_File[4])();
    iStack_24 = extraout_r1;
  }
  while( true ) {
    __stream = stdin;
    if (this->HandleType == FILE_HANDLESTD) {
      this->hFile = (FileHandle)stdin;
    }
    else {
      __stream = (FILE *)this->hFile;
    }
    if (this->LastWrite != false) {
      fflush(__stream);
      __stream = (FILE *)this->hFile;
      this->LastWrite = false;
    }
    clearerr(__stream);
    sVar2 = fread(Data,1,Size,(FILE *)this->hFile);
    ReadSize = (size_t)this->hFile;
    iVar3 = ferror((FILE *)ReadSize);
    if ((iVar3 == 0) && (sVar2 != 0xffffffff)) {
      return sVar2;
    }
    this->ErrorType = FILE_READERROR;
    if (this->AllowExceptions == false) {
      return -1;
    }
    if (this->IgnoreReadErrors != false) break;
    if ((this->HandleType != FILE_HANDLENORMAL) ||
       (bVar1 = ErrorHandler::AskRepeatRead(&ErrHandler,this->FileName), !bVar1)) {
      ErrorHandler::ReadError((wchar_t *)&ErrHandler);
      return -1;
    }
  }
  if (Size != 0) {
    uVar5 = 0;
    iVar4 = 0;
    do {
      (*this->_vptr_File[3])
                (iVar3,this->_vptr_File[3],local_28 + uVar5,iStack_24 + (uint)CARRY4(local_28,uVar5)
                 ,0);
      Size_00 = Size - uVar5;
      if (0x1ff < Size_00) {
        Size_00 = 0x200;
      }
      uVar5 = uVar5 + 0x200;
      iVar3 = DirectRead(this,Data,Size_00);
      if (iVar3 == -1) {
        iVar3 = 0x200;
      }
      iVar4 = iVar4 + iVar3;
    } while (uVar5 < Size);
    return iVar4;
  }
  return 0;
}


