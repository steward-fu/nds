/*
 * Ghidra decompilation
 *
 * Function : LzmaDec_InitDicAndState
 * Address  : 001b0f70
 * Program  : drastic64
 */


void LzmaDec_InitDicAndState(long param_1,int param_2,int param_3)

{
  *(undefined8 *)(param_1 + 0x5c) = 0x100000000;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  if (param_2 != 0) {
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined4 *)(param_1 + 100) = 1;
  }
  if (param_3 != 0) {
    *(undefined4 *)(param_1 + 100) = 1;
  }
  return;
}


