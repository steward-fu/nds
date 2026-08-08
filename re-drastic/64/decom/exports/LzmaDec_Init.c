/*
 * Ghidra decompilation
 *
 * Function : LzmaDec_Init
 * Address  : 001b0fa0
 * Program  : drastic64
 */


void LzmaDec_Init(long param_1)

{
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0x100000001;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  return;
}


