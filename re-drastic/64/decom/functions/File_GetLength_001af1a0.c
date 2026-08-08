/*
 * Ghidra decompilation
 *
 * Function : File_GetLength
 * Address  : 001af1a0
 * Program  : drastic64
 */


int File_GetLength(FILE **param_1,long *param_2)

{
  int iVar1;
  long __off;
  long lVar2;
  FILE *__stream;
  
  __off = ftell(*param_1);
  iVar1 = fseek(*param_1,0,2);
  lVar2 = ftell(*param_1);
  __stream = *param_1;
  *param_2 = lVar2;
  fseek(__stream,__off,0);
  return iVar1;
}


