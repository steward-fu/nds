/*
 * Ghidra decompilation
 *
 * Function : File_Write
 * Address  : 001af0c0
 * Program  : drastic64
 */


int File_Write(FILE **param_1,void *param_2,size_t *param_3)

{
  int iVar1;
  size_t sVar2;
  size_t __n;
  
  __n = *param_3;
  if (__n == 0) {
    return 0;
  }
  sVar2 = fwrite(param_2,1,__n,*param_1);
  *param_3 = sVar2;
  if (sVar2 != __n) {
    iVar1 = ferror(*param_1);
    return iVar1;
  }
  return 0;
}


