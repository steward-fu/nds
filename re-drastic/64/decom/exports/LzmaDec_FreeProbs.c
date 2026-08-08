/*
 * Ghidra decompilation
 *
 * Function : LzmaDec_FreeProbs
 * Address  : 001b1ad0
 * Program  : drastic64
 */


void LzmaDec_FreeProbs(long param_1,long param_2)

{
  (**(code **)(param_2 + 8))(param_2,*(undefined8 *)(param_1 + 0x10));
  *(undefined8 *)(param_1 + 0x10) = 0;
  return;
}


