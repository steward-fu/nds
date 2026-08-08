/*
 * Ghidra decompilation
 *
 * Function : ~FindFile
 * Address  : 080ed28c
 * Program  : drastic
 */


/* DWARF original prototype: void * ~FindFile(FindFile * this, int __in_chrg) */

void * __thiscall FindFile::~FindFile(FindFile *this,int __in_chrg)

{
  if ((DIR *)this->dirp != (DIR *)0x0) {
    closedir((DIR *)this->dirp);
  }
  return this;
}


