/*
 * Ghidra decompilation
 *
 * Function : RawSeek
 * Address  : 080d6098
 * Program  : drastic
 */


/* WARNING: Heritage AFTER dead removal. Example location: r0 : 0x080d6114 */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* WARNING: Exceeded maximum restarts with more pending */
/* DWARF original prototype: bool RawSeek(File * this, int64 Offset, int Method) */

bool __thiscall File::RawSeek(File *this,int64 Offset,int Method)

{
  undefined uVar1;
  int iVar2;
  FILE *__stream;
  undefined4 extraout_r1;
  uint uVar3;
  uint in_r3;
  undefined4 in_stack_ffffffdc;
  
  __stream = (FILE *)this->hFile;
  if (__stream == (FILE *)0x0) {
    uVar1 = 1;
  }
  else {
    uVar3 = (uint)Offset;
    if ((uint)Offset != 0) {
      uVar3 = 1;
    }
    if ((uVar3 & in_r3 >> 0x1f) != 0) {
      if ((uint)Offset == 1) {
        (*this->_vptr_File[4])();
      }
      else {
        iVar2 = (*this->_vptr_File[4])();
        (*this->_vptr_File[3])(iVar2,this->_vptr_File[3],0,0,2);
        (*this->_vptr_File[4])();
        (*this->_vptr_File[3])(iVar2,this->_vptr_File[3],iVar2,extraout_r1,0);
      }
      __stream = (FILE *)this->hFile;
      Offset._0_4_ = 0;
    }
    this->LastWrite = false;
    iVar2 = fseeko64(__stream,CONCAT44(in_stack_ffffffdc,(uint)Offset),(int)__stream);
    uVar1 = (undefined)iVar2;
  }
  return (bool)uVar1;
}


