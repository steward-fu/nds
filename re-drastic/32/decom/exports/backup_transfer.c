/*
 * Ghidra decompilation
 *
 * Function : backup_transfer
 * Address  : 080929d4
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

u8 backup_transfer(backup_struct *backup,u32 value)

{
  undefined auVar1 [16];
  byte bVar2;
  ushort uVar3;
  u8 uVar4;
  uint uVar5;
  u32 access_address;
  u32 access_address_1;
  undefined8 *puVar6;
  byte bVar7;
  uint uVar8;
  u32 erase_address;
  
  bVar2 = backup->state;
  bVar7 = (byte)value;
  switch(bVar2) {
  case 0:
    if (value == 5) {
      backup->state = '\x03';
      goto switchD_08092a84_caseD_3;
    }
    if (5 < value) {
      if (value == 8) {
        backup->state = '\v';
      }
      else if (value == 0x9f) {
        backup->state = '\x02';
      }
      else {
        if (value != 6) goto LAB_08092a70;
        backup->state = '\0';
        backup->status = backup->status | 2;
      }
      goto switchD_08092a84_caseD_3;
    }
    if (value == 3) {
      backup->state = '\x01';
      goto switchD_08092a84_caseD_3;
    }
    if (value == 4) {
      backup->state = '\0';
      backup->status = backup->status & 0xfd;
      goto switchD_08092a84_caseD_3;
    }
LAB_08092a70:
    if (backup->type == BACKUP_TYPE_FLASH) {
      if (value == 0xab) {
        backup->state = '\0';
      }
      else {
        if (value < 0xac) {
          if ((value != 2) && ((value < 2 || (1 < value - 10)))) goto switchD_08092a84_caseD_3;
        }
        else if ((value != 0xd8) && (value != 0xdb)) {
          if (value != 0xb9) goto switchD_08092a84_caseD_3;
          backup->state = '\n';
          goto LAB_08092ba0;
        }
LAB_08092bcc:
        value = value & 0xffff;
        backup->state = '\x01';
      }
      goto LAB_08092ba0;
    }
    switch(value) {
    case 1:
      value = 1;
      backup->state = '\x04';
      break;
    case 2:
      value = 0x102;
      backup->state = '\x01';
      break;
    case 10:
    case 0xb:
      if (backup->address_mask == 0x1ff) {
        value = value | 0x100;
        goto LAB_08092bcc;
      }
    default:
switchD_08092a84_caseD_3:
      value = value & 0xffff;
    }
LAB_08092ba0:
    backup->mode = (u16)value;
    backup->access_address = 0;
    backup->state_step = '\0';
    bVar7 = bVar2;
    break;
  case 1:
    uVar4 = backup->state_step + '\x01';
    uVar5 = value | backup->access_address << 8;
    backup->access_address = uVar5;
    backup->state_step = uVar4;
    if (backup->address_bytes == uVar4) {
      uVar8 = backup->address_mask;
      uVar3 = backup->mode;
      backup->state_step = '\0';
      uVar5 = uVar5 & uVar8;
      backup->access_address = uVar5;
      if (uVar3 == 0xd8) {
        backup->write_frame_counter = 0x3c;
        memset(backup->data + (uVar5 & 0xffff0000),0xff,0x10000);
        auVar1 = SIMDExpandImmediate(0,0xe,0xff);
        puVar6 = (undefined8 *)((int)backup->dirty_page_bitmap + ((uVar5 & 0xffff0000) >> 0xc));
        *puVar6 = auVar1._0_8_;
        puVar6[1] = auVar1._8_8_;
      }
      else {
        if (uVar3 < 0xd9) {
          if (uVar3 == 3) {
            backup->state = '\x05';
            return bVar7;
          }
          if (uVar3 < 4) {
            if (uVar3 != 2) {
              return bVar7;
            }
          }
          else if (uVar3 != 10) {
            if (uVar3 == 0xb) {
              uVar5 = 7;
              uVar8 = value & 0xff;
            }
            if (uVar3 != 0xb) {
              return bVar7;
            }
            backup->state = (u8)uVar5;
            return (u8)uVar8;
          }
        }
        else if (uVar3 != 0x102) {
          if (uVar3 < 0x103) {
            if (uVar3 != 0xdb) {
              return bVar7;
            }
            backup->write_frame_counter = 0x3c;
            memset(backup->data + (uVar5 & 0xffffff00),0xff,0x100);
            uVar5 = backup->access_address >> 0xe;
            backup->dirty_page_bitmap[uVar5] =
                 backup->dirty_page_bitmap[uVar5] | 1 << ((backup->access_address << 0x12) >> 0x1b);
            return bVar7;
          }
          if (uVar3 != 0x10a) {
            if (uVar3 != 0x10b) {
              return bVar7;
            }
            backup->access_address = uVar5 | 0x100;
            backup->state = '\x05';
            return bVar7;
          }
          backup->access_address = uVar5 | 0x100;
          backup->write_frame_counter = 0x3c;
          backup->state = '\x06';
          return bVar7;
        }
        backup->write_frame_counter = 0x3c;
        backup->state = '\x06';
      }
    }
    break;
  case 2:
    bVar2 = backup->state_step;
    if (bVar2 == 2) {
      uVar4 = '\0';
    }
    else {
      uVar4 = bVar2 + 1;
    }
    bVar7 = backup->jedec_id[bVar2];
    backup->state_step = uVar4;
    break;
  case 3:
    bVar7 = backup->status | 0xc;
    break;
  case 4:
    backup->status = backup->status & 3 | bVar7 & 0xfc;
    break;
  case 5:
    bVar7 = backup->data[backup->access_address];
    backup->access_address = backup->address_mask & backup->access_address + 1;
    break;
  case 6:
    uVar5 = backup->access_address;
    backup->dirty_page_bitmap[uVar5 >> 0xe] =
         backup->dirty_page_bitmap[uVar5 >> 0xe] | 1 << ((uVar5 << 0x12) >> 0x1b);
    backup->data[uVar5] = bVar7;
    backup->access_address = backup->address_mask & backup->access_address + 1;
    break;
  case 0xb:
    backup->state_step = '\0';
    bVar7 = 0xaa;
  }
  return bVar7;
}


