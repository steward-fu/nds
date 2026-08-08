/*
 * Ghidra decompilation
 *
 * Function : CrcCalc
 * Address  : 001a80b0
 * Program  : drastic64
 */


uint CrcCalc(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  
  uVar1 = (*g_CrcUpdate)(0xffffffff,param_1,param_2,g_CrcTable);
  return ~uVar1;
}


