/*
 * Ghidra decompilation
 *
 * Function : _ZN4FileC1Ev
 * Address  : 080d584c
 * Program  : drastic
 */


/* DWARF original prototype: File * File(File * this) */

File * __thiscall File::File(File *this)

{
  this->_vptr_File = (_func_int_varargs **)&PTR__File_08144d30;
  this->hFile = (FileHandle)0x0;
  this->LastWrite = false;
  this->HandleType = FILE_HANDLENORMAL;
  this->SkipClose = false;
  this->IgnoreReadErrors = false;
  this->NewFile = false;
  this->FileName[0] = 0;
  this->ErrorType = FILE_SUCCESS;
  this->AllowDelete = true;
  this->AllowExceptions = true;
  this->OpenShared = false;
  return this;
}


