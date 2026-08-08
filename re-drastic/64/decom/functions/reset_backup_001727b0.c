/*
 * Ghidra decompilation
 *
 * Function : reset_backup
 * Address  : 001727b0
 * Program  : drastic64
 */


void reset_backup(long param_1)

{
  *(undefined4 *)(param_1 + 0x2404) = 0;
  *(undefined4 *)(param_1 + 0x241c) = 0;
  *(undefined *)(param_1 + 0x2422) = 0;
  return;
}


