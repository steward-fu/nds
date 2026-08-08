/*
 * Ghidra decompilation
 *
 * Function : initialize_backup
 * Address  : 08092f40
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void initialize_backup(backup_struct *backup,backup_type_enum backup_type,u8 *data,u32 size,
                      char *data_file_name)

{
  FILE *__stream;
  FILE *data_file;
  size_t sVar1;
  long __off;
  uint uVar2;
  u32 backup_file_size;
  uint uVar3;
  void *pvVar4;
  u8 *desmume_footer_ptr;
  u8 uVar5;
  u32 truncate_size;
  u32 desmume_footer_position;
  u32 clean_pages_loaded;
  
  backup->type = backup_type;
  backup->address_mask = size - 1;
  backup->fix_file_size = 0;
  backup->data = data;
  backup->firmware = '\0';
  if (backup_type != BACKUP_TYPE_FLASH) {
    if (backup_type == BACKUP_TYPE_NONE) {
      backup->address_bytes = '\0';
      goto LAB_08092f94;
    }
    if (backup_type != BACKUP_TYPE_EEPROM) goto LAB_08092f94;
    if (size < 0x10001) {
      uVar5 = '\x02';
      if (size < 0x201) {
        uVar5 = '\x01';
      }
      backup->address_bytes = uVar5;
      goto LAB_08092f94;
    }
  }
  backup->address_bytes = '\x03';
LAB_08092f94:
  if (data_file_name == (char *)0x0) {
    backup->file_path[0] = '\0';
  }
  else {
    __stream = fopen(data_file_name,"rb");
    backup->footer_written = '\0';
    if (__stream == (FILE *)0x0) {
      puts("Failed to load backup file.");
      memset(data,size,0xff);
      memset(backup,0xff,size >> 0xc);
    }
    else {
      sVar1 = fread(data,size,1,__stream);
      if (sVar1 != 1) {
        puts(" Failed to load entire size.");
      }
      __off = ftell(__stream);
      fseek(__stream,0,2);
      uVar2 = ftell(__stream);
      fseek(__stream,__off,0);
      fclose(__stream);
      __printf_chk(1,"Loading backup file %s, %d bytes\n",data_file_name,uVar2);
      if (size + 0x7a != uVar2) {
        backup->fix_file_size = size + 0x7a;
      }
      if (uVar2 < size) {
        uVar3 = uVar2 - 0x400 & ~((int)(uVar2 - 0x400) >> 0x1f);
        pvVar4 = memmem(data + uVar3,uVar2 - uVar3,
                        initialize_backup::lexical_block_0::lexical_block_0_0::desmume_footer_str,
                        0x52);
        if (pvVar4 != (void *)0x0) {
          uVar2 = (int)pvVar4 - (int)data;
          __printf_chk(1," Found DeSmuME footer at position %d. Truncating.\n",uVar2);
        }
        uVar3 = uVar2 >> 0xe;
        __printf_chk(1," Backup file less than full size (should be %d, loaded %d).\n",size,uVar2);
        memset(data + uVar2,size - uVar2,0xff);
        memset(backup,0,uVar3 * 4);
        memset(backup->dirty_page_bitmap + uVar3,0xff,((size + 0x3fff >> 0xe) - uVar3) * 4);
      }
      else {
        memset(backup,0,size + 0x3fff >> 0xe);
      }
    }
    strncpy(backup->file_path,data_file_name,0x3ff);
    backup->file_path[0x3ff] = '\0';
  }
  backup->status = '\0';
  return;
}


