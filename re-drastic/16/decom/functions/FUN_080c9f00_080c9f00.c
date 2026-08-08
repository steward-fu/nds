/*
 * Ghidra decompilation
 *
 * Function : FUN_080c9f00
 * Address  : 080c9f00
 * Program  : drastic16
 */


void FUN_080c9f00(undefined4 *param_1)

{
  if (param_1[0x1c] != param_1[0x1d]) {
    *(undefined *)((int)param_1 + 0x4c4a) = 1;
  }
  if ((uint)param_1[0x1c] < (uint)param_1[0x1d]) {
    FUN_080b6298(*param_1,param_1[0x12cd] + param_1[0x1d],-param_1[0x1d] & param_1[0x39be]);
    FUN_080b6298(*param_1,param_1[0x12cd],param_1[0x1c]);
    *(undefined *)((int)param_1 + 0x4c49) = 1;
  }
  else {
    FUN_080b6298(*param_1,param_1[0x12cd] + param_1[0x1d],param_1[0x1c] - param_1[0x1d]);
  }
  param_1[0x1d] = param_1[0x1c];
  return;
}


