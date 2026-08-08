/*
 * Ghidra decompilation
 *
 * Function : SzCoderInfo_Free
 * Address  : 001acf90
 * Program  : drastic64
 */


void SzCoderInfo_Free(long param_1)

{
  Buf_Free(param_1 + 0x10);
  Buf_Init(param_1 + 0x10);
  return;
}


