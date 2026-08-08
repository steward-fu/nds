/*
 * Ghidra decompilation
 *
 * Function : Tell
 * Address  : 080d5364
 * Program  : drastic
 */


/* DWARF original prototype: int64 Tell(File * this) */

int64 __thiscall File::Tell(File *this)

{
  __off64_t _Var1;
  
  if ((FILE *)this->hFile != (FILE *)0x0) {
    _Var1 = ftello64((FILE *)this->hFile);
    return _Var1;
  }
  if (this->AllowExceptions != false) {
    ErrorHandler::SeekError(&ErrHandler,this->FileName);
    _Var1 = ftello64((FILE *)this->hFile);
    return _Var1;
  }
  return -1;
}


