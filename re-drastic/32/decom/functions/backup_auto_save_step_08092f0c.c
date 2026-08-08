/*
 * Ghidra decompilation
 *
 * Function : backup_auto_save_step
 * Address  : 08092f0c
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void backup_auto_save_step(backup_struct *backup)

{
  u32 uVar1;
  
  if (((backup->write_frame_counter != 0) &&
      (uVar1 = backup->write_frame_counter - 1, backup->write_frame_counter = uVar1, uVar1 == 0)) &&
     (backup->file_path[0] != '\0')) {
    backup_save(backup);
    return;
  }
  return;
}


