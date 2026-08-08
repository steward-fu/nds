/*
 * Ghidra decompilation
 *
 * Function : FUN_08099088
 * Address  : 08099088
 * Program  : drastic16
 */


void FUN_08099088(FILE **param_1)

{
  int iVar1;
  
  if (*param_1 == (FILE *)0x0) {
    return;
  }
  iVar1 = fclose(*param_1);
  if (iVar1 == 0) {
    *param_1 = (FILE *)0x0;
  }
  return;
}


