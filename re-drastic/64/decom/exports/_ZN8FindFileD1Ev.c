/*
 * Ghidra decompilation
 *
 * Function : _ZN8FindFileD1Ev
 * Address  : 001cb800
 * Program  : drastic64
 */


/* FindFile::~FindFile() */

int __thiscall FindFile::~FindFile(FindFile *this)

{
  int iVar1;
  
  if (*(DIR **)(this + 0x2008) != (DIR *)0x0) {
    iVar1 = closedir(*(DIR **)(this + 0x2008));
    return iVar1;
  }
  return 0;
}


