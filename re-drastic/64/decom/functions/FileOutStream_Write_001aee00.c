/*
 * Ghidra decompilation
 *
 * Function : FileOutStream_Write
 * Address  : 001aee00
 * Program  : drastic64
 */


size_t FileOutStream_Write(long param_1,void *param_2,size_t param_3)

{
  size_t sVar1;
  
  if ((param_3 != 0) &&
     (sVar1 = fwrite(param_2,1,param_3,*(FILE **)(param_1 + 8)), sVar1 != param_3)) {
    ferror(*(FILE **)(param_1 + 8));
    return sVar1;
  }
  return param_3;
}


