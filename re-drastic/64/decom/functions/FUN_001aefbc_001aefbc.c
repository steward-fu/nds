/*
 * Ghidra decompilation
 *
 * Function : FUN_001aefbc
 * Address  : 001aefbc
 * Program  : drastic64
 */


int FUN_001aefbc(FILE **param_1,char *param_2)

{
  FILE *pFVar1;
  int *piVar2;
  
  pFVar1 = fopen64(param_2,"wb+");
  *param_1 = pFVar1;
  if (pFVar1 != (FILE *)0x0) {
    return 0;
  }
  piVar2 = __errno_location();
  return *piVar2;
}


