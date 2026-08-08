/*
 * Ghidra decompilation
 *
 * Function : FUN_08062b2c
 * Address  : 08062b2c
 * Program  : drastic16
 */


int FUN_08062b2c(int *param_1,char *param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  char **ppcVar3;
  uint uVar4;
  
  uVar4 = param_1[3];
  if ((param_3 < uVar4) &&
     (iVar1 = strcmp(param_2,*(char **)(param_1[1] + param_3 * 4)), iVar1 == 0)) {
    return param_3 * 800 + *param_1;
  }
  if (uVar4 == 0) {
    return 0;
  }
  uVar2 = 0;
  ppcVar3 = (char **)(param_1[1] + -4);
  do {
    ppcVar3 = ppcVar3 + 1;
    iVar1 = strcmp(param_2,*ppcVar3);
    if (iVar1 == 0) {
      return uVar2 * 800 + *param_1;
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 != uVar4);
  return 0;
}


