/*
 * Ghidra decompilation
 *
 * Function : FUN_001af00c
 * Address  : 001af00c
 * Program  : drastic64
 */


int FUN_001af00c(FILE **param_1)

{
  int iVar1;
  
  if (*param_1 != (FILE *)0x0) {
    iVar1 = fclose(*param_1);
    if (iVar1 == 0) {
      *param_1 = (FILE *)0x0;
    }
    return iVar1;
  }
  return 0;
}


