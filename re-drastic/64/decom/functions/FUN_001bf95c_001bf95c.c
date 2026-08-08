/*
 * Ghidra decompilation
 *
 * Function : FUN_001bf95c
 * Address  : 001bf95c
 * Program  : drastic64
 */


void FUN_001bf95c(long param_1)

{
  InitCRC32((uint *)(param_1 + 0xaec));
  *(undefined4 *)(param_1 + 0x9e4) = 2;
  *(undefined8 *)(param_1 + 0x1000) = 0x5215738290214765;
  return;
}


