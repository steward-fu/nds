/*
 * Ghidra decompilation
 *
 * Function : Lzma2Dec_Init
 * Address  : 001b2240
 * Program  : drastic64
 */


void Lzma2Dec_Init(long param_1)

{
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined4 *)(param_1 + 0xa0) = 1;
  *(undefined8 *)(param_1 + 0x98) = 0x100000001;
  LzmaDec_Init();
  return;
}


