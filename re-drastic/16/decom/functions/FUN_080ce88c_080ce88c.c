/*
 * Ghidra decompilation
 *
 * Function : FUN_080ce88c
 * Address  : 080ce88c
 * Program  : drastic16
 */


undefined4 FUN_080ce88c(int param_1,int *param_2,char *param_3)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  
  if (((*(char *)(param_2 + 2) != '\x01') && (*(int *)(param_1 + 0x78) + -0x10 < *param_2)) &&
     (cVar1 = FUN_080ceb2c(param_1), cVar1 != '\x01')) {
    return 0;
  }
  uVar2 = FUN_080ce7e0(param_1,param_2);
  *(undefined4 *)(param_3 + 4) = uVar2;
  uVar2 = FUN_080ce7e0(param_1,param_2);
  *(undefined4 *)(param_3 + 8) = uVar2;
  uVar3 = FUN_080e2c58(param_2);
  *param_3 = (char)(uVar3 >> 0xd);
  FUN_080e2c30(param_2,3);
  if ((*param_3 == '\0') || (*param_3 == '\x04')) {
    uVar3 = FUN_080e2c58(param_2);
    param_3[0xc] = (char)(uVar3 >> 0xb) + '\x01';
    FUN_080e2c30(param_2,5);
  }
  if (*param_3 == '\x05') {
    param_3[0xc] = '\x03';
    iVar4 = FUN_080e2c58(param_2);
    *(int *)(param_3 + 0x10) = iVar4 + 1;
    FUN_080e2c30(param_2,0x10);
    uVar3 = FUN_080e2c58(param_2);
    param_3[0x14] = (char)(uVar3 >> 0xe);
    FUN_080e2c30(param_2,2);
  }
  return 1;
}


