/*
 * Ghidra decompilation
 *
 * Function : _ZN4File8IsDeviceEv
 * Address  : 080d64a4
 * Program  : drastic
 */


/* DWARF original prototype: bool IsDevice(File * this) */

bool __thiscall File::IsDevice(File *this)

{
  int iVar1;
  
  if ((FILE *)this->hFile == (FILE *)0x0) {
    return false;
  }
  iVar1 = fileno((FILE *)this->hFile);
  iVar1 = isatty(iVar1);
  if (iVar1 != 0) {
    iVar1 = 1;
  }
  return SUB41(iVar1,0);
}


