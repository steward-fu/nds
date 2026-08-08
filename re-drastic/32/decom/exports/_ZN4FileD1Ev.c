/*
 * Ghidra decompilation
 *
 * Function : _ZN4FileD1Ev
 * Address  : 080d55f8
 * Program  : drastic
 */


/* DWARF original prototype: void * ~File(File * this, int __in_chrg) */

void * __thiscall File::~File(File *this,int __in_chrg)

{
  FILE *__stream;
  int iVar1;
  
  __stream = (FILE *)this->hFile;
  this->_vptr_File = (_func_int_varargs **)&PTR__File_08144d30;
  if ((__stream != (FILE *)0x0) && (this->SkipClose == false)) {
    if (this->NewFile == false) {
      iVar1 = fclose(__stream);
      this->hFile = (FileHandle)0x0;
      this->HandleType = FILE_HANDLENORMAL;
      if ((iVar1 == -1) && (this->AllowExceptions != false)) {
        ErrorHandler::CloseError((wchar_t *)&ErrHandler);
      }
    }
    else if (this->HandleType == FILE_HANDLENORMAL) {
      iVar1 = fclose(__stream);
      this->hFile = (FileHandle)0x0;
      this->HandleType = FILE_HANDLENORMAL;
      if ((iVar1 == -1) && (this->AllowExceptions != false)) {
        ErrorHandler::CloseError((wchar_t *)&ErrHandler);
      }
      if (this->AllowDelete != false) {
        DelFile(this->FileName);
      }
    }
  }
  return this;
}


