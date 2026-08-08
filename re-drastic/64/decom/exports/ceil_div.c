/*
 * Ghidra decompilation
 *
 * Function : ceil_div
 * Address  : 001326c0
 * Program  : drastic64
 */


long ceil_div(long param_1,long param_2)

{
  long lVar1;
  
  if (param_1 < 0) {
    if (param_2 < 0) {
      lVar1 = 0;
      if (param_2 != 0) {
        lVar1 = (param_2 + 1 + param_1) / param_2;
      }
      return lVar1;
    }
  }
  else if (-1 < param_2) {
    param_1 = param_2 + -1 + param_1;
  }
  lVar1 = 0;
  if (param_2 != 0) {
    lVar1 = param_1 / param_2;
  }
  return lVar1;
}


