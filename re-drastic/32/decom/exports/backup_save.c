/*
 * Ghidra decompilation
 *
 * Function : backup_save
 * Address  : 08092ef4
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void backup_save(backup_struct *backup)

{
  if (backup->file_path[0] == '\0') {
    return;
  }
  backup_save(backup);
  return;
}


