/*
 * Ghidra decompilation
 *
 * Function : FUN_080bdba8
 * Address  : 080bdba8
 * Program  : drastic16
 */


void FUN_080bdba8(int *param_1,int param_2,uint param_3)

{
  *param_1 = param_2;
  if (param_2 == 1) {
    param_1[1] = 0;
  }
  if (param_2 == 2) {
    param_1[1] = -1;
  }
  if (param_2 == 3) {
    FUN_080e2cfc(param_1 + 2);
  }
  if (7 < param_3) {
    param_3 = 8;
  }
  param_1[0x2d8] = param_3;
  return;
}


