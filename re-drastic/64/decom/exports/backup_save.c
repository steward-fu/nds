/*
 * Ghidra decompilation
 *
 * Function : backup_save
 * Address  : 001724e0
 * Program  : drastic64
 */


void backup_save(long param_1)

{
  if (*(char *)(param_1 + 0x2000) == '\0') {
    return;
  }
  backup_save_part_0();
  return;
}


