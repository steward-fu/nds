/*
 * Ghidra decompilation
 *
 * Function : _Z15PrepareToDeletePKw
 * Address  : 080d6b00
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void PrepareToDelete(wchar *Name)

{
  int iVar1;
  char NameA [2048];
  
  iVar1 = __stack_chk_guard;
  if (Name != (wchar *)0x0) {
    WideToChar(Name,NameA,0x800);
    chmod(NameA,0x1c0);
  }
  if (iVar1 == __stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


