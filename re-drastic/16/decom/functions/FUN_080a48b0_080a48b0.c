/*
 * Ghidra decompilation
 *
 * Function : FUN_080a48b0
 * Address  : 080a48b0
 * Program  : drastic16
 */


size_t FUN_080a48b0(int param_1,void *param_2,size_t param_3)

{
  size_t sVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0xc) == 1) {
    *(undefined4 *)(param_1 + 4) = stdin;
  }
  if (*(char *)(param_1 + 8) != '\0') {
    fflush(*(FILE **)(param_1 + 4));
    *(undefined *)(param_1 + 8) = 0;
  }
  clearerr(*(FILE **)(param_1 + 4));
  sVar1 = fread(param_2,1,param_3,*(FILE **)(param_1 + 4));
  iVar2 = ferror(*(FILE **)(param_1 + 4));
  if (iVar2 != 0) {
    sVar1 = 0xffffffff;
  }
  return sVar1;
}


