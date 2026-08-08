/*
 * Ghidra decompilation
 *
 * Function : backup_nand_write
 * Address  : 08092e74
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void backup_nand_write(backup_struct *backup,u32 value)

{
  uint uVar1;
  u32 access_address;
  
  uVar1 = backup->access_address;
  backup->dirty_page_bitmap[uVar1 >> 0xe] =
       backup->dirty_page_bitmap[uVar1 >> 0xe] | 1 << ((uVar1 << 0x12) >> 0x1b);
  *(u32 *)(backup->data + uVar1) = value;
  backup->write_frame_counter = 0x3c;
  backup->access_address = backup->address_mask & backup->access_address + 4;
  return;
}


