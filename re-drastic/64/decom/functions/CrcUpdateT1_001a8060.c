/*
 * Ghidra decompilation
 *
 * Function : CrcUpdateT1
 * Address  : 001a8060
 * Program  : drastic64
 */


void CrcUpdateT1(undefined8 param_1,long param_2,long param_3)

{
  if (param_3 != 0) {
    param_3 = param_2 + param_3;
    do {
      param_2 = param_2 + 1;
    } while (param_2 != param_3);
  }
  return;
}


