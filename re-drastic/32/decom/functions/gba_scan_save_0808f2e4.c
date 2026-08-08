/*
 * Ghidra decompilation
 *
 * Function : gba_scan_save
 * Address  : 0808f2e4
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void gba_scan_save(gba_gamepak_struct *gba)

{
  int iVar1;
  uint uVar2;
  u32 next_4chars;
  u8 *puVar3;
  int iVar4;
  int iVar5;
  u32 current_4chars;
  u32 uVar6;
  u32 *rom_data32;
  undefined8 *puVar7;
  undefined8 *puVar8;
  u32 rom_size;
  char backup_str [16];
  
  iVar1 = __stack_chk_guard;
  gba->backup_size = 0;
  gba->write_frame_counter = 0;
  gba->backup_type = '\0';
  gba->flash_mode = '\0';
  gba->flash_command_position = '\0';
  iVar4 = 0;
  backup_str[0] = '\0';
  backup_str[1] = '\0';
  backup_str[2] = '\0';
  backup_str[3] = '\0';
  backup_str[4] = '\0';
  backup_str[5] = '\0';
  backup_str[6] = '\0';
  backup_str[7] = '\0';
  backup_str[8] = '\0';
  backup_str[9] = '\0';
  backup_str[10] = '\0';
  backup_str[11] = '\0';
  backup_str[12] = '\0';
  backup_str[13] = '\0';
  backup_str[14] = '\0';
  backup_str[15] = '\0';
  puVar8 = (undefined8 *)gba->rom_data;
  do {
    do {
      while( true ) {
        while( true ) {
          puVar7 = puVar8;
          if (iVar4 == (gba->rom_size >> 2) - 1) goto LAB_0808f480;
          iVar5 = *(int *)puVar7;
          iVar4 = iVar4 + 1;
          puVar8 = (undefined8 *)((int)puVar7 + 4);
          uVar2 = *(uint *)puVar8;
          if (iVar5 != 0x4d415253) break;
          if ((uVar2 & 0xffff) == 0x5f56) {
            backup_str._0_8_ = *puVar7;
            backup_str[9] = '\0';
            backup_str[10] = '\0';
            backup_str[11] = '\0';
            backup_str[12] = '\0';
            backup_str[13] = '\0';
            backup_str[14] = '\0';
            backup_str[15] = '\0';
            backup_str[8] = *(byte *)(puVar7 + 1);
            __printf_chk(1," Detected GBA SRAM backup type: %s\n",backup_str);
            uVar6 = 0x8000;
            gba->backup_size = 0x8000;
            gba->backup_type = '\x01';
            goto LAB_0808f464;
          }
        }
        if (iVar5 != 0x52504545) break;
        if (uVar2 == 0x565f4d4f) {
          backup_str._0_8_ = *puVar7;
          backup_str[11] = '\0';
          backup_str[12] = '\0';
          backup_str[13] = '\0';
          backup_str[14] = '\0';
          backup_str[15] = '\0';
          backup_str._8_3_ = *(uint3 *)(puVar7 + 1);
          __printf_chk(1," Detected GBA EEPROM backup type: %s (unsupported)\n",backup_str);
          uVar6 = gba->backup_size;
          gba->backup_type = '\x02';
          if (uVar6 != 0) goto LAB_0808f464;
          goto LAB_0808f480;
        }
      }
    } while (iVar5 != 0x53414c46);
    if ((uVar2 & 0xffffff) == 0x565f48) {
      backup_str._0_8_ = *puVar7;
      backup_str[10] = '\0';
      backup_str[11] = '\0';
      backup_str[12] = '\0';
      backup_str[13] = '\0';
      backup_str[14] = '\0';
      backup_str[15] = '\0';
      backup_str._8_2_ = *(ushort *)(puVar7 + 1);
LAB_0808f52c:
      __printf_chk(1," Detected GBA FLASH backup type: %s\n",backup_str);
      uVar6 = 0x10000;
      gba->backup_size = 0x10000;
      gba->backup_type = '\x03';
      goto LAB_0808f464;
    }
    if (uVar2 == 0x32313548) {
      backup_str._0_8_ = *puVar7;
      backup_str[13] = '\0';
      backup_str[14] = '\0';
      backup_str[15] = '\0';
      backup_str._8_5_ = *(uint5 *)(puVar7 + 1);
      goto LAB_0808f52c;
    }
  } while (uVar2 != 0x5f4d3148);
  backup_str._0_8_ = *puVar7;
  backup_str[12] = '\0';
  backup_str[13] = '\0';
  backup_str[14] = '\0';
  backup_str[15] = '\0';
  backup_str._8_4_ = *(uint *)(puVar7 + 1);
  __printf_chk(1," Detected GBA FLASH backup type: %s\n",backup_str);
  uVar6 = 0x20000;
  gba->backup_size = 0x20000;
  gba->backup_type = '\x03';
LAB_0808f464:
  __printf_chk(1," Allocated %d bytes of GBA backup.\n",uVar6);
  puVar3 = (u8 *)malloc(gba->backup_size);
  gba->backup = puVar3;
LAB_0808f480:
  if (iVar1 != __stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


