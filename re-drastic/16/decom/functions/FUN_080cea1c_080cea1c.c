/*
 * Ghidra decompilation
 *
 * Function : FUN_080cea1c
 * Address  : 080cea1c
 * Program  : drastic16
 */


undefined4 FUN_080cea1c(int param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined uVar2;
  
  uVar1 = FUN_080d57d4(param_1 + 0x44);
  if (0x1ffe < uVar1) {
    FUN_080cece4(param_1);
  }
  if ((*(int *)(param_1 + 0x74) == *(int *)(param_1 + 0x70)) ||
     ((uint)param_2[1] <
      (*(int *)(param_1 + 0x74) - *(int *)(param_1 + 0x70) & *(uint *)(param_1 + 0xe6f8)))) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  *(undefined *)((int)param_2 + 0x15) = uVar2;
  param_2[1] = param_2[1] + *(int *)(param_1 + 0x70) & *(uint *)(param_1 + 0xe6f8);
  FUN_080d57fc(param_1 + 0x44,*param_2,param_2[1],param_2[2],param_2[3],param_2[4],param_2[5]);
  return 1;
}


