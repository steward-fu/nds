/*
 * Ghidra decompilation
 *
 * Function : File_Read
 * Address  : 001af050
 * Program  : drastic64
 */


int File_Read(FILE **param_1,void *param_2,size_t *param_3)

{
  int iVar1;
  size_t sVar2;
  size_t __n;
  
  __n = *param_3;
  if (__n != 0) {
    sVar2 = fread(param_2,1,__n,*param_1);
    *param_3 = sVar2;
    if (__n != sVar2) {
      iVar1 = ferror(*param_1);
      return iVar1;
    }
  }
  return 0;
}


