/*
 * Ghidra decompilation
 *
 * Function : _ZN8FindFileC2Ev
 * Address  : 080ed270
 * Program  : drastic
 */


/* DWARF original prototype: FindFile * FindFile(FindFile * this) */

FindFile * __thiscall FindFile::FindFile(FindFile *this)

{
  this->FindMask[0] = 0;
  this->FirstCall = true;
  this->dirp = (DIR *)0x0;
  return this;
}


