/*
 * Ghidra decompilation
 *
 * Function : _ZN4File10FileLengthEv
 * Address  : 080d63dc
 * Program  : drastic
 */


/* WARNING: Heritage AFTER dead removal. Example location: r0 : 0x080d6424 */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* WARNING: Exceeded maximum restarts with more pending */
/* DWARF original prototype: int64 FileLength(File * this) */

int64 __thiscall File::FileLength(File *this)

{
  int iVar1;
  int iVar2;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  
  iVar1 = (*this->_vptr_File[4])();
  (*this->_vptr_File[3])(iVar1,this->_vptr_File[3],0,0,2);
  iVar2 = (*this->_vptr_File[4])();
  (*this->_vptr_File[3])(iVar2,this->_vptr_File[3],iVar1,extraout_r1,0);
  return CONCAT44(extraout_r1_00,iVar2);
}


