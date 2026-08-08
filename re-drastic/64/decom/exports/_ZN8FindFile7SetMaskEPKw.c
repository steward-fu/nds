/*
 * Ghidra decompilation
 *
 * Function : _ZN8FindFile7SetMaskEPKw
 * Address  : 001cb820
 * Program  : drastic64
 */


/* FindFile::SetMask(wchar_t const*) */

void __thiscall FindFile::SetMask(FindFile *this,wchar_t *param_1)

{
  __wcscpy_chk(this,param_1,0x800);
  this[0x2000] = (FindFile)0x1;
  return;
}


