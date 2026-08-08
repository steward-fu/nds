/*
 * Ghidra decompilation
 *
 * Function : FUN_08066f14
 * Address  : 08066f14
 * Program  : drastic16
 */


void FUN_08066f14(undefined8 *param_1)

{
  undefined auVar1 [16];
  undefined auVar2 [16];
  
  puts("Setting default configuration.");
  *(undefined4 *)((int)param_1 + 0x444) = 4;
  *(undefined4 *)(param_1 + 0x88) = 2;
  *(undefined4 *)((int)param_1 + 0x454) = 0;
  *(undefined4 *)((int)param_1 + 0x45c) = 0;
  *(undefined4 *)(param_1 + 0x89) = 1;
  *(undefined4 *)(param_1 + 0x8c) = 1;
  *(undefined4 *)(param_1 + 0x8e) = 1;
  *(undefined4 *)((int)param_1 + 0x474) = 1;
  *(undefined4 *)(param_1 + 0x90) = 1;
  *(undefined4 *)((int)param_1 + 0x44c) = 1;
  *(undefined4 *)(param_1 + 0x8a) = 1;
  *(undefined4 *)((int)param_1 + 0x2c) = 1;
  *(undefined4 *)((int)param_1 + 0x34) = 1;
  *(undefined4 *)((int)param_1 + 0x464) = 0;
  *(undefined4 *)(param_1 + 0x8d) = 0;
  *(undefined4 *)((int)param_1 + 0x46c) = 0;
  *(undefined4 *)((int)param_1 + 0x47c) = 0;
  *(undefined4 *)((int)param_1 + 0x484) = 0;
  *(undefined4 *)(param_1 + 0x91) = 0;
  *(undefined4 *)(param_1 + 0x92) = 0;
  *(undefined4 *)((int)param_1 + 0x494) = 0;
  *(undefined4 *)(param_1 + 0x93) = 0;
  *(undefined4 *)((int)param_1 + 0x49c) = 0;
  *(undefined4 *)(param_1 + 0x94) = 0;
  *(undefined4 *)((int)param_1 + 0x4a4) = 0;
  *(undefined4 *)((int)param_1 + 0x48c) = 3;
  *(undefined4 *)(param_1 + 7) = 1;
  auVar1 = VectorCopyLong(0x7453617244207244,1,1);
  *(undefined4 *)(param_1 + 6) = 0;
  *(undefined4 *)(param_1 + 0x8f) = 1;
  auVar2 = VectorCopyLong(auVar1._0_8_,2,1);
  auVar1 = VectorCopyLong(auVar1._8_8_,2,1);
  *param_1 = auVar2._0_8_;
  param_1[1] = auVar2._8_8_;
  param_1[2] = auVar1._0_8_;
  param_1[3] = auVar1._8_8_;
  *(undefined4 *)(param_1 + 4) = 0x69;
  *(undefined4 *)((int)param_1 + 0x24) = 99;
  *(undefined4 *)(param_1 + 5) = 0;
  FUN_0807a0a8(1);
  FUN_0807a090(*(undefined4 *)(param_1 + 0x8a));
  FUN_0807a0c0(*(undefined4 *)((int)param_1 + 0x454));
  return;
}


