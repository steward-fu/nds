/*
 * Ghidra decompilation
 *
 * Function : FUN_080b7220
 * Address  : 080b7220
 * Program  : drastic16
 */


int * FUN_080b7220(int *param_1,int param_2)

{
  if (param_2 == 2) {
    if ((*param_1 == 0) || (*param_1 == 1)) {
      *param_1 = 2;
    }
    goto LAB_080b72e8;
  }
  if (param_2 < 3) {
    if (param_2 == 1) {
LAB_080b7264:
      if (*param_1 == 0) {
        *param_1 = param_2;
      }
      goto LAB_080b72e8;
    }
  }
  else {
    if (param_2 == 3) {
      if (*param_1 != 0xb) {
        *param_1 = 3;
      }
      goto LAB_080b72e8;
    }
    if (param_2 == 0xff) goto LAB_080b7264;
  }
  *param_1 = param_2;
LAB_080b72e8:
  param_1[1] = param_1[1] + 1;
  return param_1;
}


