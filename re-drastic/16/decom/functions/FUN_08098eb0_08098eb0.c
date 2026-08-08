/*
 * Ghidra decompilation
 *
 * Function : FUN_08098eb0
 * Address  : 08098eb0
 * Program  : drastic16
 */


size_t FUN_08098eb0(int param_1,void *param_2,size_t param_3)

{
  size_t sVar1;
  
  if ((param_3 != 0) &&
     (sVar1 = fwrite(param_2,1,param_3,*(FILE **)(param_1 + 4)), sVar1 != param_3)) {
    ferror(*(FILE **)(param_1 + 4));
    return sVar1;
  }
  return param_3;
}


