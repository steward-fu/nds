/*
 * Ghidra decompilation
 *
 * Function : _ZN4File6RenameEPKw
 * Address  : 001b7d80
 * Program  : drastic64
 */


/* File::Rename(wchar_t const*) */

char __thiscall File::Rename(File *this,wchar_t *param_1)

{
  wchar_t *__s1;
  char cVar1;
  int iVar2;
  
  __s1 = (wchar_t *)(this + 0x20);
  iVar2 = wcscmp(__s1,param_1);
  if (iVar2 != 0) {
    cVar1 = RenameFile(__s1,param_1);
    if (cVar1 == '\0') {
      return cVar1;
    }
  }
  __wcscpy_chk(__s1,param_1,0x800);
  return '\x01';
}


