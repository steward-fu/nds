/*
 * Ghidra decompilation
 *
 * Function : FUN_0809f4a8
 * Address  : 0809f4a8
 * Program  : drastic16
 */


void FUN_0809f4a8(undefined4 param_1,char *param_2)

{
  size_t sVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined auStack_20 [20];
  
  sVar1 = strlen(param_2);
  FUN_0809fb14(auStack_20,sVar1);
  uVar2 = FUN_0809f21c(auStack_20,0);
  uVar3 = FUN_0809f0b8(auStack_20);
  FUN_080afc9c(param_2,uVar2,uVar3);
  uVar2 = FUN_0809f21c(auStack_20,0);
  FUN_0809f558(param_1,uVar2);
  FUN_0809f0e0(auStack_20);
  return;
}


