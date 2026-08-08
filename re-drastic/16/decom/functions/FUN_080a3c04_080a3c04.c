/*
 * Ghidra decompilation
 *
 * Function : FUN_080a3c04
 * Address  : 080a3c04
 * Program  : drastic16
 */


undefined4 * FUN_080a3c04(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_080ed640;
  param_1[1] = 0;
  param_1[6] = 0;
  *(undefined *)((int)param_1 + 0x12) = 0;
  *(undefined *)(param_1 + 2) = 0;
  param_1[3] = 0;
  *(undefined *)(param_1 + 4) = 0;
  *(undefined *)((int)param_1 + 0x11) = 0;
  param_1[0x806] = 0;
  *(undefined *)((int)param_1 + 0x15) = 0;
  *(undefined *)((int)param_1 + 0x13) = 1;
  *(undefined *)(param_1 + 5) = 1;
  return param_1;
}


