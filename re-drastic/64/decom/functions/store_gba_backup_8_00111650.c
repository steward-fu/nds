/*
 * Ghidra decompilation
 *
 * Function : store_gba_backup_8
 * Address  : 00111650
 * Program  : drastic64
 */


void store_gba_backup_8(long param_1)

{
  gba_backup_store(*(long *)(param_1 + 0xfd4b8) + 0x4a0);
  return;
}


