/*
 * Ghidra decompilation
 *
 * Function : gba_backup_load
 * Address  : 0808f580
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

u8 gba_backup_load(gba_gamepak_struct *gba,u32 address)

{
  bool bVar1;
  
  if (gba->backup_type == '\x01') {
    return gba->backup[address & gba->backup_size - 1];
  }
  if (gba->backup_type == '\x03') {
    if (gba->flash_mode != '\x02') {
      return gba->backup[gba->flash_bank + (address & 0xffff)];
    }
    if (address == 0) {
      bVar1 = gba->backup_size == 0x10000;
      if (bVar1) {
        gba = (gba_gamepak_struct *)0x32;
      }
      if (bVar1) {
        return (u8)gba;
      }
      return 0xc2;
    }
    if (address == 1) {
      bVar1 = gba->backup_size == 0x10000;
      if (bVar1) {
        gba = (gba_gamepak_struct *)0x1b;
      }
      if (bVar1) {
        return (u8)gba;
      }
      return '\t';
    }
  }
  return 0xff;
}


