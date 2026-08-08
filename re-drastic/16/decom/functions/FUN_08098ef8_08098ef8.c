/*
 * Ghidra decompilation
 *
 * Function : FUN_08098ef8
 * Address  : 08098ef8
 * Program  : drastic16
 */


undefined4 FUN_08098ef8(int param_1,void *param_2,size_t *param_3)

{
  size_t sVar1;
  int iVar2;
  undefined4 uVar3;
  size_t __n;
  
  __n = *param_3;
  if (__n != 0) {
    sVar1 = fread(param_2,1,__n,*(FILE **)(param_1 + 8));
    *param_3 = sVar1;
    if (__n != sVar1) {
      iVar2 = ferror(*(FILE **)(param_1 + 8));
      if (iVar2 == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = 8;
      }
      return uVar3;
    }
  }
  return 0;
}


