/*
 * Ghidra decompilation
 *
 * Function : FileInStream_Seek
 * Address  : 001aeda0
 * Program  : drastic64
 */


int FileInStream_Seek(long param_1,long *param_2,uint param_3)

{
  int iVar1;
  long lVar2;
  
  if (2 < param_3) {
    return 1;
  }
  iVar1 = fseek(*(FILE **)(param_1 + 0x10),*param_2,param_3);
  lVar2 = ftell(*(FILE **)(param_1 + 0x10));
  *param_2 = lVar2;
  return iVar1;
}


