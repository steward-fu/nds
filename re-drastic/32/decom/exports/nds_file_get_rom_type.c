/*
 * Ghidra decompilation
 *
 * Function : nds_file_get_rom_type
 * Address  : 08096ae8
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

nds_file_rom_type nds_file_get_rom_type(char *file_path)

{
  char *__s1;
  char *file_extension;
  int iVar1;
  nds_file_rom_type nVar2;
  FILE *__stream;
  FILE *nds_file;
  size_t sVar3;
  s32 sVar4;
  uint uVar5;
  u32 *decrypt_tag_0;
  bool bVar6;
  bool bVar7;
  u32 decrypt_tag_1;
  int local_9c;
  int local_98;
  int local_90;
  u32 arm9_rom_offset;
  u32 local_7c;
  s32 arm9_size;
  u32 arm7_rom_offset;
  u32 arm7_entry;
  u32 arm7_ram_address;
  int local_68;
  int local_64;
  int local_1c;
  
  local_1c = __stack_chk_guard;
  __s1 = strrchr(file_path,0x2e);
  if (__s1 != (char *)0x0) {
    iVar1 = strcasecmp(__s1,".nds");
    if (iVar1 == 0) {
      __stream = fopen(file_path,"rb");
      if (__stream != (FILE *)0x0) {
        fseek(__stream,0,2);
        decrypt_tag_1 = ftell(__stream);
        fseek(__stream,0,0);
        if (decrypt_tag_1 < 0x80) {
          fclose(__stream);
        }
        else {
          sVar3 = fread(&local_9c,1,0x80,__stream);
          if (sVar3 == 0x80) {
            fclose(__stream);
            goto LAB_08096bac;
          }
          fclose(__stream);
        }
      }
    }
    else {
      iVar1 = strcasecmp(__s1,".zip");
      if (iVar1 == 0) {
        iVar1 = unzip_file_to_memory_partial(file_path,"nds",&decrypt_tag_1,(u8 *)&local_9c,0x80,0);
      }
      else {
        iVar1 = strcasecmp(__s1,".7z");
        if (iVar1 == 0) {
          iVar1 = un7z_file_to_memory_partial(file_path,"nds",&decrypt_tag_1,(u8 *)&local_9c,0x80,0)
          ;
        }
        else {
          iVar1 = strcasecmp(__s1,".rar");
          if (iVar1 != 0) goto LAB_08096c34;
          iVar1 = unrar_file_to_memory_partial
                            (file_path,"nds",&decrypt_tag_1,(u8 *)&local_9c,0x80,0);
        }
      }
      if (iVar1 == 0) {
LAB_08096bac:
        if (local_90 == 0x23232323) {
          nVar2 = NDS_FILE_ROM_TYPE_HOMEBREW;
          goto LAB_08096c38;
        }
        if (0x7fff < arm7_ram_address && arm7_entry - 1 < 0x3bfe00) {
          uVar5 = local_68 + 0xfc808000;
          bVar7 = 0xfdff < uVar5;
          bVar6 = uVar5 == 0xfe00;
          if (0xfe00 < uVar5) {
            bVar7 = 0x3bfdff < local_68 + 0xfe000000U;
            bVar6 = local_68 + 0xfe000000U == 0x3bfe00;
          }
          if (!bVar7 || bVar6) {
            uVar5 = local_64 + 0xfc808000;
            bVar7 = 0xfdff < uVar5;
            bVar6 = uVar5 == 0xfe00;
            if (0xfe00 < uVar5) {
              bVar7 = 0x3bfdff < local_64 + 0xfe000000U;
              bVar6 = local_64 + 0xfe000000U == 0x3bfe00;
            }
            if ((!bVar7 || bVar6) &&
               (sVar4 = nds_file_read_to_memory_partial
                                  (file_path,&decrypt_tag_1,(u8 *)&local_9c,0x10,local_7c),
               sVar4 == 0)) {
              if (local_9c == -0x18002101 && local_98 == -0x18002101) {
                nVar2 = NDS_FILE_ROM_TYPE_DECRYPTED;
              }
              else {
                nVar2 = NDS_FILE_ROM_TYPE_ENCRYPTED;
              }
              goto LAB_08096c38;
            }
          }
        }
      }
    }
  }
LAB_08096c34:
  nVar2 = NDS_FILE_ROM_TYPE_INVALID;
LAB_08096c38:
  if (local_1c != __stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return nVar2;
}


