/*
 * Ghidra decompilation
 *
 * Function : Write
 * Address  : 080d53c4
 * Program  : drastic
 */


/* DWARF original prototype: void Write(File * this, void * Data, size_t Size) */

void __thiscall File::Write(File *this,void *Data,size_t Size)

{
  bool bVar1;
  size_t sVar2;
  int iVar3;
  FILE *__s;
  int Written;
  _func_int_varargs *p_Var4;
  
  __s = (FILE *)this->hFile;
  if ((this->HandleType == FILE_HANDLESTD) && (__s == (FILE *)0x0)) {
    iVar3 = dup(1);
    __s = fdopen(iVar3,"w");
    this->hFile = (FileHandle)__s;
  }
  while( true ) {
    sVar2 = fwrite(Data,1,Size,__s);
    if ((((Size == sVar2) && (iVar3 = ferror((FILE *)this->hFile), iVar3 == 0)) ||
        (this->AllowExceptions == false)) || (this->HandleType != FILE_HANDLENORMAL))
    goto LAB_080d5488;
    bVar1 = ErrorHandler::AskRepeatWrite(&ErrHandler,this->FileName,false);
    if (!bVar1) break;
    clearerr((FILE *)this->hFile);
    if (0 < (int)sVar2 && sVar2 < Size) {
      p_Var4 = this->_vptr_File[3];
      (*this->_vptr_File[4])();
      (*p_Var4)();
    }
    __s = (FILE *)this->hFile;
  }
  ErrorHandler::WriteError(&ErrHandler,(wchar *)0x0,this->FileName);
LAB_080d5488:
  this->LastWrite = true;
  return;
}


