/*
 * Ghidra decompilation
 *
 * Function : RARSetPassword
 * Address  : 080d01b0
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void RARSetPassword(void *hArcData,char *Password)

{
  int iVar1;
  DataSet *Data;
  wchar PasswordW [128];
  
  iVar1 = __stack_chk_guard;
  GetWideName(Password,(wchar *)0x0,PasswordW,0x80);
  SecPassword::Set((SecPassword *)((int)hArcData + 0xa024),PasswordW);
  cleandata(PasswordW,0x200);
  if (iVar1 == __stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


