/*
 * Ghidra decompilation
 *
 * Function : FUN_001c8c9c
 * Address  : 001c8c9c
 * Program  : drastic64
 */


void FUN_001c8c9c(int *param_1,int param_2,uint param_3)

{
  *param_1 = param_2;
  if (param_2 == 1) {
    param_1[1] = 0;
    if (7 < param_3) {
      param_3 = 8;
    }
    param_1[0x312] = param_3;
    return;
  }
  if (param_2 == 2) {
    param_1[1] = -1;
  }
  else if (param_2 == 3) {
    blake2sp_init((blake2sp_state *)(param_1 + 2));
    if (7 < param_3) {
      param_3 = 8;
    }
    param_1[0x312] = param_3;
    return;
  }
  if (7 < param_3) {
    param_3 = 8;
  }
  param_1[0x312] = param_3;
  return;
}


