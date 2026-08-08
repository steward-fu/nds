/*
 * Ghidra decompilation
 *
 * Function : FUN_0809ce20
 * Address  : 0809ce20
 * Program  : drastic16
 */


undefined4 FUN_0809ce20(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 local_a8 [2];
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  
  memset(local_a8,0,0x9c);
  local_a8[0] = *param_1;
  local_a0 = param_1[1];
  local_98 = param_1[3];
  local_94 = param_1[4];
  uVar1 = FUN_0809cec4(local_a8);
  param_1[2] = local_9c;
  param_1[5] = local_90;
  param_1[6] = local_8c;
  return uVar1;
}


