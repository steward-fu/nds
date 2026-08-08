/*
 * Ghidra decompilation
 *
 * Function : File_Close
 * Address  : 001af010
 * Program  : drastic64
 */


int File_Close(FILE **param_1)

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


