/*
 * Ghidra decompilation
 *
 * Function : Seek
 * Address  : 080d56d8
 * Program  : drastic
 */


/* WARNING: Heritage AFTER dead removal. Example location: r0 : 0x080d5754 */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* WARNING: Exceeded maximum restarts with more pending */
/* DWARF original prototype: void Seek(File * this, int64 Offset, int Method) */

void __thiscall File::Seek(File *this,int64 Offset,int Method)

{
  int iVar1;
  FILE *__stream;
  undefined4 extraout_r1;
  uint uVar2;
  uint in_r3;
  undefined4 in_stack_ffffffdc;
  
  __stream = (FILE *)this->hFile;
  if (__stream != (FILE *)0x0) {
    uVar2 = (uint)Offset;
    if ((uint)Offset != 0) {
      uVar2 = 1;
    }
    if ((uVar2 & in_r3 >> 0x1f) != 0) {
      if ((uint)Offset == 1) {
        (*this->_vptr_File[4])();
      }
      else {
        iVar1 = (*this->_vptr_File[4])();
        (*this->_vptr_File[3])(iVar1,this->_vptr_File[3],0,0,2);
        (*this->_vptr_File[4])();
        (*this->_vptr_File[3])(iVar1,this->_vptr_File[3],iVar1,extraout_r1,0);
      }
      __stream = (FILE *)this->hFile;
      Offset._0_4_ = 0;
    }
    this->LastWrite = false;
    iVar1 = fseeko64(__stream,CONCAT44(in_stack_ffffffdc,(uint)Offset),(int)__stream);
    if ((iVar1 != 0) && (this->AllowExceptions != false)) {
      ErrorHandler::SeekError(&ErrHandler,this->FileName);
      return;
    }
  }
  return;
}


