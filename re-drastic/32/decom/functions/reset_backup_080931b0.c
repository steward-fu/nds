/*
 * Ghidra decompilation
 *
 * Function : reset_backup
 * Address  : 080931b0
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void reset_backup(backup_struct *backup)

{
  backup->access_address = 0;
  backup->write_frame_counter = 0;
  backup->state = '\0';
  return;
}


