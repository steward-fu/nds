/*
 * Ghidra decompilation
 *
 * Function : LookToRead_Skip
 * Address  : 001af3c0
 * Program  : drastic64
 */


undefined8 LookToRead_Skip(long param_1,long param_2)

{
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + param_2;
  return 0;
}


