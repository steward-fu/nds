/*
 * Ghidra decompilation
 *
 * Function : FUN_08006428
 * Address  : 08006428
 * Program  : drastic16
 */


void FUN_08006428(undefined4 *param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  
  FUN_0801cab8(param_1 + 0x567afe);
  FUN_0801cab8(param_1 + 0x769462,param_2,param_3);
  FUN_08014288(param_1 + 0x96adc8,param_2,param_3);
  FUN_0802a93c(param_1 + 0x9a9fe0,param_2,param_3);
  FUN_08059bf0(param_1 + 0x557800,param_2,param_3);
  FUN_0805c4e8(param_1 + 0x68,param_2,param_3);
  FUN_0805cbc0(param_1 + 0x3a4,param_2,param_3);
  FUN_0805d2a4(param_1 + 0x4b5,param_2,param_3);
  FUN_08015b40(param_1 + 6,param_2,param_3);
  puVar3 = *(undefined4 **)(param_2 + 0x10);
  uVar1 = param_1[1];
  *puVar3 = *param_1;
  puVar3[1] = uVar1;
  iVar2 = *(int *)(param_2 + 0x10);
  *(int *)(param_2 + 0x10) = iVar2 + 8;
  uVar1 = param_1[3];
  *(undefined4 *)(iVar2 + 8) = param_1[2];
  *(undefined4 *)(iVar2 + 0xc) = uVar1;
  iVar2 = *(int *)(param_2 + 0x10);
  *(int *)(param_2 + 0x10) = iVar2 + 8;
  *(undefined2 *)(iVar2 + 8) = *(undefined2 *)(param_1 + 5);
  *(int *)(param_2 + 0x10) = *(int *)(param_2 + 0x10) + 2;
  return;
}


