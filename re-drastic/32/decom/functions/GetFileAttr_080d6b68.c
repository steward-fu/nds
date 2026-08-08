/*
 * Ghidra decompilation
 *
 * Function : GetFileAttr
 * Address  : 080d6b68
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

uint GetFileAttr(wchar *Name)

{
  int iVar1;
  int iVar2;
  stat_conflict st;
  char NameA [2048];
  
  iVar1 = __stack_chk_guard;
  WideToChar(Name,NameA,0x800);
  iVar2 = __xstat64(3,NameA,(stat64 *)&st);
  if (iVar2 != 0) {
    st.st_mode = 0;
  }
  if (iVar1 == __stack_chk_guard) {
    return st.st_mode;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


