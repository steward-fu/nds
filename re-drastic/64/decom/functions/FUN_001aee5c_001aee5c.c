/*
 * Ghidra decompilation
 *
 * Function : FUN_001aee5c
 * Address  : 001aee5c
 * Program  : drastic64
 */


undefined8 FUN_001aee5c(long param_1,void *param_2,size_t *param_3)

{
  int iVar1;
  size_t sVar2;
  size_t __n;
  
  __n = *param_3;
  if (__n != 0) {
    sVar2 = fread(param_2,1,__n,*(FILE **)(param_1 + 8));
    *param_3 = sVar2;
    if ((__n != sVar2) && (iVar1 = ferror(*(FILE **)(param_1 + 8)), iVar1 != 0)) {
      return 8;
    }
  }
  return 0;
}


