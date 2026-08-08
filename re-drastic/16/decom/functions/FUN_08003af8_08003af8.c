/*
 * Ghidra decompilation
 *
 * Function : FUN_08003af8
 * Address  : 08003af8
 * Program  : drastic16
 */


undefined4 FUN_08003af8(char **param_1,int param_2,int *param_3,code **param_4)

{
  undefined4 uVar1;
  int iVar2;
  char *pcVar3;
  
  if (param_1[1] == (char *)0x0) {
    return 0x10;
  }
  pcVar3 = *param_1;
  param_1[1] = param_1[1] + -1;
  *param_1 = pcVar3 + 1;
  if (*pcVar3 != '\0') {
    if (param_2 == 0) {
      *param_3 = 0;
    }
    else {
      iVar2 = (**param_4)(param_4);
      *param_3 = iVar2;
      if (iVar2 == 0) {
        return 2;
      }
    }
    for (iVar2 = 0; iVar2 != param_2; iVar2 = iVar2 + 1) {
      *(undefined *)(*param_3 + iVar2) = 1;
    }
    return 0;
  }
  uVar1 = FUN_08003a44();
  return uVar1;
}


