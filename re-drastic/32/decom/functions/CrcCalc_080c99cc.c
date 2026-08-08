/*
 * Ghidra decompilation
 *
 * Function : CrcCalc
 * Address  : 080c99cc
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

UInt32 CrcCalc(void *data,size_t size)

{
  UInt32 UVar1;
  
  UVar1 = (*g_CrcUpdate)(0xffffffff,data,size,g_CrcTable);
  return ~UVar1;
}


