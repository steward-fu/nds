/*
 * Ghidra decompilation
 *
 * Function : _ZN4File7GetByteEv
 * Address  : 080d61e0
 * Program  : drastic
 */


/* WARNING: Heritage AFTER dead removal. Example location: r0 : 0x080d6214 */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* WARNING: Exceeded maximum restarts with more pending */
/* DWARF original prototype: byte GetByte(File * this) */

byte __thiscall File::GetByte(File *this)

{
  byte Byte;
  int local_c;
  
  local_c = __stack_chk_guard;
  Byte = '\0';
  (*this->_vptr_File[2])(this,&Byte,1);
  if (local_c == __stack_chk_guard) {
    return Byte;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


