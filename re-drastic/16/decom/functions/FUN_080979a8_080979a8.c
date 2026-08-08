/*
 * Ghidra decompilation
 *
 * Function : FUN_080979a8
 * Address  : 080979a8
 * Program  : drastic16
 */


void FUN_080979a8(undefined4 *param_1,int param_2)

{
  (**(code **)(param_2 + 4))(param_2,param_1[0xc]);
  (**(code **)(param_2 + 4))(param_2,param_1[0xd]);
  (**(code **)(param_2 + 4))(param_2,param_1[0xe]);
  (**(code **)(param_2 + 4))(param_2,param_1[0xf]);
  (**(code **)(param_2 + 4))(param_2,param_1[0x10]);
  FUN_08097034(param_1 + 0x11,param_2);
  FUN_08097898(param_1,param_2);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  FUN_08096fe0(param_1 + 0x11);
  return;
}


