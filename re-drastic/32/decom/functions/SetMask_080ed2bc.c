/*
 * Ghidra decompilation
 *
 * Function : SetMask
 * Address  : 080ed2bc
 * Program  : drastic
 */


/* DWARF original prototype: void SetMask(FindFile * this, wchar * Mask) */

void __thiscall FindFile::SetMask(FindFile *this,wchar *Mask)

{
  __wcscpy_chk(this,Mask,0x800);
  this->FirstCall = true;
  return;
}


