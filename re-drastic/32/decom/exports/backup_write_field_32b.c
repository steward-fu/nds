/*
 * Ghidra decompilation
 *
 * Function : backup_write_field_32b
 * Address  : 08092ed4
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void backup_write_field_32b(u8 *dest,u32 value)

{
  *dest = (u8)value;
  dest[1] = (u8)(value >> 8);
  dest[2] = (u8)(value >> 0x10);
  dest[3] = (u8)(value >> 0x18);
  return;
}


