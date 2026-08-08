/*
 * Ghidra decompilation
 *
 * Function : MakeName
 * Address  : 080d4054
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void MakeName(wchar *Path,wchar *Name,wchar *Pathname,size_t MaxSize)

{
  int iVar1;
  size_t sVar2;
  size_t Length;
  wchar OutName [2048];
  
  iVar1 = __stack_chk_guard;
  wcsncpyz(OutName,Path,0x800);
  sVar2 = wcslen((wchar_t *)OutName);
  if (((sVar2 != 0) && (OutName[sVar2 + 0x3fffffff] != 0x2f)) && (sVar2 + 1 < 0x800)) {
    __wcscat_chk(OutName,&DAT_08144bfc,0x800);
  }
  wcsncatz(OutName,Name,0x800);
  wcsncpyz(Pathname,OutName,MaxSize);
  if (iVar1 == __stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


