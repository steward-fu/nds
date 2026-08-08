/*
 * Ghidra decompilation
 *
 * Function : DelFile
 * Address  : 080d719c
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

bool DelFile(wchar *Name)

{
  int iVar1;
  int iVar2;
  char NameA [2048];
  
  iVar1 = __stack_chk_guard;
  WideToChar(Name,NameA,0x800);
  iVar2 = remove(NameA);
  if (iVar1 == __stack_chk_guard) {
    return iVar2 == 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


