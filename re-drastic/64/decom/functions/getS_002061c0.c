/*
 * Ghidra decompilation
 *
 * Function : getS
 * Address  : 002061c0
 * Program  : drastic64
 */


undefined8 getS(undefined8 param_1,undefined8 *param_2,long *param_3)

{
  if (param_2[1] != 0) {
    *param_3 = param_2[1];
    param_2[1] = 0;
    return *param_2;
  }
  return 0;
}


