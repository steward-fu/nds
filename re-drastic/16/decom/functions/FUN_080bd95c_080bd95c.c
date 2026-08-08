/*
 * Ghidra decompilation
 *
 * Function : FUN_080bd95c
 * Address  : 080bd95c
 * Program  : drastic16
 */


void FUN_080bd95c(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  *param_1 = param_2;
  if ((param_2 == 1) || (param_2 == 2)) {
    param_1[1] = 0;
  }
  iVar3 = DAT_08101d74;
  iVar2 = DAT_08101d70;
  iVar1 = DAT_08101d6c;
  if (param_2 == 3) {
    param_1[1] = DAT_08101d68;
    param_1[2] = iVar1;
    param_1[3] = iVar2;
    param_1[4] = iVar3;
    iVar3 = DAT_08101d84;
    iVar2 = DAT_08101d80;
    iVar1 = DAT_08101d7c;
    param_1[5] = DAT_08101d78;
    param_1[6] = iVar1;
    param_1[7] = iVar2;
    param_1[8] = iVar3;
  }
  return;
}


