/*
 * Ghidra decompilation
 *
 * Function : RARSetCallback
 * Address  : 001b2fa0
 * Program  : drastic64
 */


void RARSetCallback(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x125c8) = param_3;
  *(undefined8 *)(param_1 + 0x125d0) = param_2;
  return;
}


