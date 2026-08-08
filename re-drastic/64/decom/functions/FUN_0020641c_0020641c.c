/*
 * Ghidra decompilation
 *
 * Function : FUN_0020641c
 * Address  : 0020641c
 * Program  : drastic64
 */


int * FUN_0020641c(undefined8 param_1,int *param_2,size_t *param_3)

{
  int iVar1;
  size_t sVar2;
  int *piVar3;
  
  if (*param_2 < 1) {
    iVar1 = feof(*(FILE **)(param_2 + 2));
    if (iVar1 == 0) {
      sVar2 = fread(param_2 + 4,1,0x2000,*(FILE **)(param_2 + 2));
      *param_3 = sVar2;
      return param_2 + 4;
    }
    piVar3 = (int *)0x0;
  }
  else {
    *param_3 = (long)*param_2;
    piVar3 = param_2 + 4;
    *param_2 = 0;
  }
  return piVar3;
}


