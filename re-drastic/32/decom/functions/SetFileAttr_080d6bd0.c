/*
 * Ghidra decompilation
 *
 * Function : SetFileAttr
 * Address  : 080d6bd0
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

bool SetFileAttr(wchar *Name,uint Attr)

{
  int iVar1;
  int iVar2;
  char NameA [2048];
  
  iVar1 = __stack_chk_guard;
  WideToChar(Name,NameA,0x800);
  iVar2 = chmod(NameA,Attr);
  if (iVar1 == __stack_chk_guard) {
    return iVar2 == 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


