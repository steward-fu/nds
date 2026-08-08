/*
 * Ghidra decompilation
 *
 * Function : gba_backup_store
 * Address  : 0808f60c
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void gba_backup_store(gba_gamepak_struct *gba,u32 address,u8 value)

{
  u8 uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = (uint)value;
  if (gba->backup_type != '\x01') {
    if (gba->backup_type == '\x03') {
      uVar1 = gba->flash_mode;
      if (uVar2 == 0xf0 && uVar1 == '\x02') {
        gba->flash_mode = '\0';
      }
      else if (uVar1 == '\x03' || address != 0x5555) {
        if ((address == 0x2aaa && uVar2 == 0x55) && (gba->flash_command_position == '\x01')) {
          gba->flash_command_position = '\x02';
        }
        else {
          uVar3._0_1_ = gba->backup_type;
          uVar3._1_1_ = gba->flash_mode;
          uVar3._2_1_ = gba->flash_command_position;
          uVar3._3_1_ = gba->loaded;
          uVar3 = uVar3 & 0xffff00;
          if (uVar3 == 0x20100) {
            if (uVar2 == 0x30) {
              memset(gba->backup + (address & 0xf000) + gba->flash_bank,0xff,0x1000);
              gba->write_frame_counter = 0x3c;
              gba->flash_mode = '\0';
              gba->flash_command_position = '\0';
            }
          }
          else if (uVar3 == 0x400) {
            if (address == 0) {
              gba->flash_mode = '\0';
              gba->flash_bank = (uVar2 & 1) << 0x10;
            }
          }
          else if (uVar3 == 0x300) {
            gba->backup[gba->flash_bank + address] = value;
            gba->write_frame_counter = 0x3c;
            gba->flash_mode = '\0';
          }
        }
      }
      else if (uVar2 == 0xaa && gba->flash_command_position == '\0') {
        gba->flash_command_position = '\x01';
      }
      else if (gba->flash_command_position == '\x02') {
        if (uVar2 == 0x90) {
          if (uVar1 == '\0') {
            gba->flash_mode = '\x02';
          }
        }
        else if (uVar2 < 0x91) {
          if (uVar2 == 0x10) {
            if (uVar1 == '\x01') {
              memset(gba->backup,0,gba->backup_size);
              gba->write_frame_counter = 0x3c;
              gba->flash_mode = '\0';
            }
          }
          else if ((uVar2 == 0x80) && (uVar1 == '\0')) {
            gba->flash_mode = '\x01';
          }
        }
        else if (uVar2 == 0xa0) {
          if (uVar1 == '\0') {
            gba->flash_mode = '\x03';
          }
        }
        else if ((uVar2 == 0xb0) && (gba->backup_size == 0x20000 && uVar1 == '\0')) {
          gba->flash_mode = '\x04';
        }
        gba->flash_command_position = '\0';
      }
    }
    return;
  }
  gba->backup[address & gba->backup_size - 1] = value;
  gba->write_frame_counter = 0x3c;
  return;
}


