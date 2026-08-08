/*
 * Ghidra decompilation
 *
 * Function : load_gba_backup_8
 * Address  : 00111640
 * Program  : drastic64
 */


void load_gba_backup_8(long param_1)

{
  gba_backup_load(*(long *)(param_1 + 0xfd4b8) + 0x4a0);
  return;
}


