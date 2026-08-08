/*
 * Ghidra decompilation
 *
 * Function : FUN_0801544c
 * Address  : 0801544c
 * Program  : drastic16
 */


void FUN_0801544c(int param_1,int param_2)

{
  *(int *)(param_1 + 0x20) = param_2;
  *(int *)(param_1 + 8) = param_2;
  *(code **)(param_1 + 0x1c) = FUN_08014c08;
  *(undefined *)(param_1 + 0x2c) = 1;
  *(undefined **)(param_1 + 4) = &LAB_0801489c;
  *(code **)(param_1 + 0x34) = FUN_0801464c;
  *(undefined *)(param_1 + 0x44) = 2;
  *(undefined *)(param_1 + 0x11c) = 0xb;
  *(int *)(param_1 + 0x110) = param_2 + 0x1a0;
  *(undefined **)(param_1 + 0x10c) = &LAB_080145f0;
  *(undefined4 *)(param_1 + 0x180) = 0;
  *(undefined *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return;
}


