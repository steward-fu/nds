/*
 * Ghidra decompilation
 *
 * Function : backup_nand_set_position
 * Address  : 08092e3c
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void backup_nand_set_position(backup_struct *backup,u32 position)

{
  backup->access_address = position & backup->address_mask;
  return;
}


