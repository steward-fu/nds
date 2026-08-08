/*
 * Ghidra decompilation
 *
 * Function : FileExist
 * Address  : 080d691c
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

bool FileExist(wchar *Name)

{
  int iVar1;
  int iVar2;
  char NameA [2048];
  
  iVar1 = __stack_chk_guard;
  WideToChar(Name,NameA,0x800);
  iVar2 = access(NameA,0);
  if (iVar1 == __stack_chk_guard) {
    return iVar2 == 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


