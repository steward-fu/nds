/*
 * Ghidra decompilation
 *
 * Function : File_Seek
 * Address  : 001af140
 * Program  : drastic64
 */


int File_Seek(FILE **param_1,long *param_2,uint param_3)

{
  int iVar1;
  long lVar2;
  
  if (2 < param_3) {
    return 1;
  }
  iVar1 = fseek(*param_1,*param_2,param_3);
  lVar2 = ftell(*param_1);
  *param_2 = lVar2;
  return iVar1;
}


