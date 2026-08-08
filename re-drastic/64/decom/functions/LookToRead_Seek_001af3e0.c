/*
 * Ghidra decompilation
 *
 * Function : LookToRead_Seek
 * Address  : 001af3e0
 * Program  : drastic64
 */


void LookToRead_Seek(long param_1)

{
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
                    /* WARNING: Could not recover jumptable at 0x001af3f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 8))();
  return;
}


