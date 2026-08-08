/*
 * Ghidra decompilation
 *
 * Function : reset_memory
 * Address  : 08016928
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void reset_memory(memory_struct *memory)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  memory_region_struct *memory_region;
  memory_region_struct *memory_region_1;
  u32 uVar4;
  u32 region_page_3;
  u8 *puVar5;
  u8 *remap_ptr;
  size_t __pgoff;
  uint uVar6;
  u32 region_page_2;
  u32 uVar7;
  u32 region_page;
  u32 region_page_1;
  uint uVar8;
  u32 page_table_value_3;
  u32 page_table_value;
  u32 page_table_value_1;
  u32 page_table_value_2;
  memory_struct *pmVar9;
  int iVar10;
  memory_interface_struct *memory_interface;
  u32 original_dtcm_size;
  u8 *puVar11;
  u8 *vram_page_address;
  u32 remap_size;
  memory_region_struct *memory_region_2;
  memory_interface_struct *memory_interface_1;
  memory_region_struct *memory_region_3;
  memory_interface_struct *pmVar12;
  memory_region_struct *pmVar13;
  uint uVar14;
  
  memset(memory->arm9_io_registers,0,0x8000);
  memset(memory->arm7_io_registers,0,0x8000);
  memory->arm9_io_registers[0x247] = '\x03';
  *(undefined2 *)(memory->arm9_io_registers + 0x130) = 0x3ff;
  memory->arm7_io_registers[0x241] = '\x03';
  *(undefined2 *)(memory->arm7_io_registers + 0x130) = 0x3ff;
  *(undefined2 *)(memory->arm7_io_registers + 0x134) = 0x800f;
  *(undefined2 *)(memory->arm7_io_registers + 0x136) = 0x7f;
  *(undefined2 *)(memory->arm9_io_registers + 0x1a2) = 0xff;
  *(undefined2 *)(memory->arm9_io_registers + 0x304) = 1;
  *(undefined2 *)(memory->arm7_io_registers + 0x300) = 1;
  *(undefined2 *)(memory->arm9_io_registers + 0x300) = 1;
  memset(memory->main_ram,0,0x400000);
  memset(memory->itcm,0,0x8000);
  memset(memory->wram,0,0x8000);
  memset(memory->dtcm,0,0x4000);
  memset(memory->arm7_wram,0,0x10000);
  memset(memory->vram_a,0,0x20000);
  memset(memory->vram_b,0,0x20000);
  memset(memory->vram_c,0,0x20000);
  memset(memory->vram_d,0,0x20000);
  memset(memory->vram_e,0,0x10000);
  memset(memory->vram_f,0,0x4000);
  memset(memory->vram_g,0,0x4000);
  memset(memory->vram_h,0,0x8000);
  memset(memory->vram_i,0,0x4000);
  memset(memory->null_buffer_load,0,0x20000);
  memset(memory->null_buffer_video_load,0,0x4000);
  memset(memory->palette_ram,0,0x800);
  memset(memory->palette_ram_shadow,0,0x800);
  memset(memory->oam_ram,0,0x800);
  memset(memory->oam_ram_shadow,0,0x800);
  memory->divide_result_available = '\0';
  memory->sqrt_result_available = '\0';
  remap_wram(memory);
  memory_clear_slot2_ram(memory);
  remap_palette_oam_deferred(memory);
  puts("  Setting up ARM9 memory map.");
  pmVar12 = memory->memory_interface_arm9;
  uVar6 = 0;
  pmVar9 = pmVar12->memory;
  iVar3 = 0x200000;
  do {
    while (iVar10 = iVar3, uVar8 = uVar6 >> 0xb, uVar6 < 0x10000000) {
      uVar14 = uVar6 >> 0x17;
      pmVar13 = pmVar12->memory_regions;
      if (pmVar13[uVar14].load_access == '\0') {
        puVar5 = pmVar13[uVar14].load_handler.direct_memory + (uVar6 & pmVar13[uVar14].mask);
        puVar11 = puVar5;
        if (pmVar13[uVar14].store_access != '\0') {
          puVar11 = (u8 *)0x0;
        }
        goto LAB_08016bc0;
      }
LAB_08016c10:
      uVar6 = uVar6 + 0x800;
      pmVar12->page_table[uVar8] = 0x40000000;
      iVar3 = iVar10 + -1;
      if (iVar10 + -1 == 0) goto LAB_08016c24;
    }
    if ((uVar6 < 0xffff0000) || (pmVar12->cpu->type != '\x01')) goto LAB_08016c10;
    puVar5 = pmVar9->arm9_bios + (uVar6 & 0xfff);
    puVar11 = (u8 *)0x0;
LAB_08016bc0:
    if (puVar5 == (u8 *)0x0) goto LAB_08016c10;
    page_table_value = (int)puVar5 - uVar6 >> 2;
    if (puVar5 != puVar11) {
      page_table_value = page_table_value | 0x40000000;
    }
    pmVar12->page_table[uVar8] = page_table_value;
    uVar6 = uVar6 + 0x800;
    iVar3 = iVar10 + -1;
  } while (iVar10 + -1 != 0);
LAB_08016c24:
  uVar6 = iVar10 - 1;
  puts("  Setting up ARM7 memory map.");
  pmVar12 = memory->memory_interface_arm7;
  pmVar9 = pmVar12->memory;
  iVar3 = 0x200000;
  do {
    while (iVar10 = iVar3, uVar8 = uVar6 >> 0xb, uVar6 < 0x10000000) {
      uVar14 = uVar6 >> 0x17;
      pmVar13 = pmVar12->memory_regions;
      if (pmVar13[uVar14].load_access == '\0') {
        puVar5 = pmVar13[uVar14].load_handler.direct_memory + (uVar6 & pmVar13[uVar14].mask);
        puVar11 = puVar5;
        if (pmVar13[uVar14].store_access != '\0') {
          puVar11 = (u8 *)0x0;
        }
        goto LAB_08016c90;
      }
LAB_08016ce0:
      uVar6 = uVar6 + 0x800;
      pmVar12->page_table[uVar8] = 0x40000000;
      iVar3 = iVar10 + -1;
      if (iVar10 + -1 == 0) goto LAB_08016cf4;
    }
    if ((uVar6 < 0xffff0000) || (pmVar12->cpu->type != '\x01')) goto LAB_08016ce0;
    puVar5 = pmVar9->arm9_bios + (uVar6 & 0xfff);
    puVar11 = (u8 *)0x0;
LAB_08016c90:
    if (puVar5 == (u8 *)0x0) goto LAB_08016ce0;
    page_table_value_1 = (int)puVar5 - uVar6 >> 2;
    if (puVar5 != puVar11) {
      page_table_value_1 = page_table_value_1 | 0x40000000;
    }
    pmVar12->page_table[uVar8] = page_table_value_1;
    uVar6 = uVar6 + 0x800;
    iVar3 = iVar10 + -1;
  } while (iVar10 + -1 != 0);
LAB_08016cf4:
  uVar6 = iVar10 - 1;
  pmVar12 = memory->memory_interface_arm9;
  __printf_chk(1,"Remapping ITCM limit from %x to %x\n",memory->itcm_end,uVar6);
  uVar4 = memory->itcm_end;
  if (uVar4 != 0) {
    pmVar9 = pmVar12->memory;
    uVar8 = uVar6;
    do {
      while (uVar14 = uVar8 >> 0xb, uVar8 < 0x10000000) {
        uVar2 = uVar8 >> 0x17;
        pmVar13 = pmVar12->memory_regions;
        if (pmVar13[uVar2].load_access == '\0') {
          puVar5 = pmVar13[uVar2].load_handler.direct_memory + (uVar8 & pmVar13[uVar2].mask);
          puVar11 = puVar5;
          if (pmVar13[uVar2].store_access != '\0') {
            puVar11 = (u8 *)0x0;
          }
          goto LAB_08016d74;
        }
LAB_08016dc4:
        uVar8 = uVar8 + 0x800;
        pmVar12->page_table[uVar14] = 0x40000000;
        if (uVar4 == uVar8) goto LAB_08016dd8;
      }
      if ((uVar8 < 0xffff0000) || (pmVar12->cpu->type != '\x01')) goto LAB_08016dc4;
      puVar5 = pmVar9->arm9_bios + (uVar8 & 0xfff);
      puVar11 = (u8 *)0x0;
LAB_08016d74:
      if (puVar5 == (u8 *)0x0) goto LAB_08016dc4;
      page_table_value_2 = (int)puVar5 - uVar8 >> 2;
      if (puVar5 != puVar11) {
        page_table_value_2 = page_table_value_2 | 0x40000000;
      }
      uVar8 = uVar8 + 0x800;
      pmVar12->page_table[uVar14] = page_table_value_2;
    } while (uVar4 != uVar8);
LAB_08016dd8:
    memory->itcm_end = 0;
  }
  uVar4 = memory->dtcm_end - memory->dtcm_base;
  pmVar12 = memory->memory_interface_arm9;
  __printf_chk(1,"Remapping DTCM from %x, %x to %x, %x\n",memory->dtcm_base,uVar4,0,0);
  if (uVar4 != 0) {
    uVar14 = memory->dtcm_base;
    pmVar9 = pmVar12->memory;
    uVar7 = uVar4;
    uVar8 = uVar14;
    do {
      while (uVar2 = uVar8 >> 0xb, uVar8 < 0x10000000) {
        uVar1 = uVar8 >> 0x17;
        pmVar13 = pmVar12->memory_regions;
        if (pmVar13[uVar1].load_access == '\0') {
          puVar5 = pmVar13[uVar1].load_handler.direct_memory + (pmVar13[uVar1].mask & uVar8);
          puVar11 = puVar5;
          if (pmVar13[uVar1].store_access != '\0') {
            puVar11 = (u8 *)0x0;
          }
          goto LAB_08016e80;
        }
LAB_08016ed0:
        uVar7 = uVar7 - 0x800;
        uVar8 = uVar8 + 0x800;
        pmVar12->page_table[uVar2] = 0x40000000;
        if (uVar7 == 0) goto LAB_08016ee4;
      }
      if ((uVar8 < 0xffff0000) || (pmVar12->cpu->type != '\x01')) goto LAB_08016ed0;
      puVar5 = pmVar9->arm9_bios + (uVar8 & 0xfff);
      puVar11 = (u8 *)0x0;
LAB_08016e80:
      if (puVar5 == (u8 *)0x0) goto LAB_08016ed0;
      page_table_value_3 = (int)puVar5 - uVar8 >> 2;
      if (puVar5 != puVar11) {
        page_table_value_3 = page_table_value_3 | 0x40000000;
      }
      uVar7 = uVar7 - 0x800;
      pmVar12->page_table[uVar2] = page_table_value_3;
      uVar8 = uVar8 + 0x800;
    } while (uVar7 != 0);
LAB_08016ee4:
    if (uVar14 < 0x4000000) {
      if (0x4000000 < uVar4 + uVar14) {
        uVar4 = 0x4000000 - uVar14;
      }
      if (uVar14 + 0xfe000000 < 0x1000000) {
        puts("DTCM moved off of main RAM, remapping main RAM to it.");
        remap_address_region_low_memory
                  (memory,(void *)memory->dtcm_base,uVar4,(uint)(void *)memory->dtcm_base & 0x3fffff
                  );
      }
      else if (uVar14 < 0x2000000) {
        remap_itcm(memory,memory->itcm_end);
      }
      else {
        remap_wram(memory);
      }
    }
  }
  memory->dtcm_base = 0;
  memory->dtcm_end = 0;
  reset_coprocessor(&memory->coprocessor);
  reset_dma(&memory->dma_arm9);
  reset_dma(&memory->dma_arm7);
  reset_ipc(&memory->ipc_receive_arm9);
  reset_ipc(&memory->ipc_receive_arm7);
  do {
    puVar11 = memory->vram_2d_remap_buffer + uVar6;
    if (memory->use_remap_file_pages == '\0') {
      munmap(puVar11,0x4000);
      puVar5 = (u8 *)mmap(puVar11,0x4000,3,1,memory->map_vram_fd,0xa4000);
      if (puVar11 != puVar5) {
        __printf_chk(1,"ERROR: VRAM remap to %p didn\'t map to same location (got %p)\n",puVar11,
                     puVar5);
      }
    }
    else {
      __pgoff = __aeabi_uidiv(0xa4000,memory->native_page_size);
      remap_file_pages(puVar11,0x4000,0,__pgoff,0);
    }
    uVar6 = uVar6 + 0x4000;
  } while (uVar6 != 0x800000);
  patch_firmware_user_data(&(memory->system->config).firmware,memory->firmware_data);
  memcpy(memory->main_ram + 0x3ffc80,memory->firmware_data + 0x3fe00,0x70);
  memory->main_ram[0x3ffc40] = '\x01';
  return;
}


