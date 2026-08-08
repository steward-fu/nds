/*
 * Ghidra decompilation
 *
 * Function : backup_nand_read
 * Address  : 08092e50
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */
/* Local variable read_value:u32[r0:4] conflicts with parameter, skipped. */

u32 backup_nand_read(backup_struct *backup)

{
  u32 uVar1;
  
  uVar1 = *(u32 *)(backup->data + backup->access_address);
  backup->access_address = backup->address_mask & backup->access_address + 4;
  return uVar1;
}


