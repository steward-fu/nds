/*
 * Ghidra decompilation
 *
 * Function : FUN_080d1220
 * Address  : 080d1220
 * Program  : drastic16
 */


undefined4 * FUN_080d1220(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  FUN_080e2b50(param_1 + 1,1);
  FUN_080a8860(param_1 + 9);
  FUN_080a8860(param_1 + 0xd);
  FUN_080d5968(param_1 + 0x11);
  FUN_080d0d08(param_1 + 0x12ce);
  FUN_080c49c8(param_1 + 0x2634);
  FUN_080e0ec4(param_1 + 0x399e);
  FUN_080e2b50(param_1 + 0x39ac,1);
  FUN_080d59d0(param_1 + 0x39b0);
  FUN_080d59d0(param_1 + 0x39b4);
  FUN_080d5a38(param_1 + 0x39b8);
  *param_1 = param_2;
  param_1[0x12cd] = 0;
  *(undefined *)(param_1 + 0x130e) = 0;
  *(undefined *)(param_1 + 0x1312) = 0;
  *(undefined *)((int)param_1 + 0x4c49) = 0;
  *(undefined *)((int)param_1 + 0x4c4a) = 0;
  param_1[7] = 1;
  uVar1 = FUN_080d6190();
  param_1[5] = uVar1;
  param_1[8] = 0;
  param_1[6] = 0;
  param_1[0x39bd] = 0;
  param_1[0x39be] = 0;
  FUN_080d1b7c(param_1,0);
  FUN_080c90a0(param_1,0);
  FUN_080c91ec(param_1);
  return param_1;
}


