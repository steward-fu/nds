/*
 * Ghidra decompilation
 *
 * Function : initialize_memory
 * Address  : 08016000
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

s32 initialize_memory(memory_struct *memory,system_struct *system)

{
  int iVar1;
  u32 uVar2;
  int iVar3;
  u8 *puVar4;
  void *pvVar5;
  u32 dynamic_offset;
  void *pvVar6;
  u8 *remap_ptr;
  char *__s;
  s32 sVar7;
  int iVar8;
  u32 dynamic_offset_1;
  cpu_struct *cpu;
  cpu_struct *cpu_arm9;
  cpu_struct *cpu_00;
  cpu_struct *cpu_arm7;
  uint uVar9;
  void *__addr;
  u8 *page_address;
  char memory_file_name [256];
  
  iVar1 = __stack_chk_guard;
  cpu = &system->cpu_arm9;
  cpu_00 = &system->cpu_arm7;
  memory->use_remap_file_pages = '\x01';
  memory->system = system;
  memory->video = &system->video;
  memory->geometry = &(system->video).geometry;
  memory->spu = &system->spu;
  memory->memory_interface_arm9 = &(system->cpu_arm9).memory_interface;
  memory->memory_interface_arm7 = &(system->cpu_arm7).memory_interface;
  memory->gamecard = &system->gamecard;
  memory->rtc = &system->rtc;
  memory->spi_peripherals = &system->spi_peripherals;
  (system->cpu_arm9).memory_interface.memory = memory;
  (system->cpu_arm7).memory_interface.memory = memory;
  (system->cpu_arm9).memory_interface.memory_regions = memory->memory_regions_arm9;
  (system->cpu_arm7).memory_interface.memory_regions = memory->memory_regions_arm7;
  (system->cpu_arm9).memory_interface.cpu = cpu;
  (system->cpu_arm7).memory_interface.cpu = cpu_00;
  uVar2 = getpagesize();
  memory->native_page_size = uVar2;
  memory_file_name[24] = 't';
  memory_file_name[25] = '\0';
  memory_file_name[8] = 'm';
  memory_file_name[9] = 'a';
  memory_file_name[10] = 'p';
  memory_file_name[11] = 'p';
  memory_file_name[12] = 'e';
  memory_file_name[13] = 'd';
  memory_file_name[14] = '_';
  memory_file_name[15] = 'm';
  memory_file_name[0] = 'd';
  memory_file_name[1] = 'r';
  memory_file_name[2] = 'a';
  memory_file_name[3] = 's';
  memory_file_name[4] = 't';
  memory_file_name[5] = 'i';
  memory_file_name[6] = 'c';
  memory_file_name[7] = '_';
  memory_file_name[16] = 'e';
  memory_file_name[17] = 'm';
  memory_file_name[18] = 'o';
  memory_file_name[19] = 'r';
  memory_file_name[20] = 'y';
  memory_file_name[21] = '.';
  memory_file_name[22] = 'd';
  memory_file_name[23] = 'a';
  uVar2 = shm_open(memory_file_name,0x42,0x1ff);
  memory->memory_map_fd = uVar2;
  iVar3 = ftruncate(uVar2,0x414000);
  if (iVar3 < 0) {
    puts("Truncate of memory mapped file failed.");
  }
  shm_unlink(memory_file_name);
  puVar4 = (u8 *)mmap((void *)0x0,0x414000,3,1,memory->memory_map_fd,0);
  memory->memory_map_buffer = puVar4;
  if (puVar4 == (u8 *)0xffffffff) {
    puts("ERROR: Memory map buffer failed.");
    perror("Error is");
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  __printf_chk(1,"Got memory mapped buffer at %p (%s)\n",puVar4,memory_file_name);
  uVar2 = memory->memory_map_offset;
  if (uVar2 == 0xffffffff) {
    pvVar5 = mmap((void *)0x0,0x5000000,3,1,memory->memory_map_fd,0);
    if (pvVar5 != (void *)0xffffffff) {
      __printf_chk(1,"Got dynamic memory map low buffer @ %08x\n",pvVar5);
      munmap(pvVar5,0x5000000);
      uVar2 = (int)pvVar5 + 0xffffffU & 0xff000000;
      memory->memory_map_offset = uVar2;
      goto LAB_080161fc;
    }
LAB_08016860:
    puts("ERROR: Dynamic memory map low buffer failed.");
LAB_0801686c:
    perror("Error is");
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
LAB_080161fc:
  pvVar5 = mmap((void *)(uVar2 + 0x8000),0x3ff9000,3,0x11,memory->memory_map_fd,0);
  uVar2 = memory->memory_map_offset;
  if (pvVar5 != (void *)(uVar2 + 0x8000)) {
    pvVar5 = mmap((void *)0x0,0x5000000,3,1,memory->memory_map_fd,0);
    if (pvVar5 == (void *)0xffffffff) goto LAB_08016860;
    __printf_chk(1,"Got dynamic memory map low buffer @ %08x\n",pvVar5);
    munmap(pvVar5,0x5000000);
    uVar9 = (int)pvVar5 + 0xffffffU & 0xff000000;
    memory->memory_map_offset = uVar9;
    pvVar5 = mmap((void *)(uVar9 + 0x8000),0x3ff9000,3,0x11,memory->memory_map_fd,0);
    uVar2 = memory->memory_map_offset;
    if (pvVar5 != (void *)(uVar2 + 0x8000)) {
      __printf_chk(1,"ERROR: Memory map low buffer @ %08x to 0x4000000 failed.\n",0x8000);
      goto LAB_0801686c;
    }
  }
  iVar3 = mprotect((void *)(uVar2 + 0x4000000),0x1000,0);
  if (iVar3 != 0) {
    puts("ERROR: Failed to set 4KB at mapped low memory end to invalid.");
    goto LAB_0801686c;
  }
  puVar4 = memory->memory_map_buffer;
  memory->main_ram = puVar4;
  memory->itcm = puVar4 + 0x400000;
  memory->wram = puVar4 + 0x408000;
  memory->dtcm = puVar4 + 0x410000;
  __printf_chk(1,"Using memory map offset %x\n",memory->memory_map_offset);
  iVar3 = 0;
  do {
    while( true ) {
      __printf_chk(1,"Direct mapping main RAM to %x\n",iVar3 + 0x2000000);
      pvVar5 = (void *)(iVar3 + memory->memory_map_offset + 0x2000000);
      if (memory->use_remap_file_pages != '\0') break;
      uVar9 = (uint)pvVar5 & 0x3fff;
      if (uVar9 == 0) {
        do {
          __addr = (void *)((int)pvVar5 + uVar9);
          munmap(__addr,0x4000);
          pvVar6 = mmap(__addr,0x4000,3,1,memory->memory_map_fd,uVar9);
          if (__addr != pvVar6) {
            __printf_chk(1,"ERROR: Low memory remap to %p didn\'t map to same location (got %p)\n",
                         __addr,pvVar6);
            goto LAB_080166a8;
          }
          uVar9 = uVar9 + 0x4000;
        } while (uVar9 != 0x400000);
      }
      else {
        __printf_chk(1,
                     "ERROR: remap_address_region_low_memory chunk not 16KB aligned\n (mapping %x to %p for %x)\n"
                     ,0,pvVar5,0x400000);
LAB_080166a8:
        puts("Remap failed.");
        perror("Error is");
      }
      iVar3 = iVar3 + 0x400000;
      if (iVar3 == 0x1000000) goto LAB_080163c0;
    }
    iVar8 = remap_file_pages(pvVar5,0x400000,0,0,0);
    if (iVar8 != 0) goto LAB_080166a8;
    iVar3 = iVar3 + 0x400000;
  } while (iVar3 != 0x1000000);
LAB_080163c0:
  memory_file_name[8] = 'm';
  memory_file_name[9] = 'a';
  memory_file_name[10] = 'p';
  memory_file_name[11] = 'p';
  memory_file_name[12] = 'e';
  memory_file_name[13] = 'd';
  memory_file_name[14] = '_';
  memory_file_name[15] = 'm';
  memory_file_name[24] = 'a';
  memory_file_name[25] = 'm';
  memory_file_name[26] = '.';
  memory_file_name[27] = 'd';
  memory_file_name[0] = 'd';
  memory_file_name[1] = 'r';
  memory_file_name[2] = 'a';
  memory_file_name[3] = 's';
  memory_file_name[4] = 't';
  memory_file_name[5] = 'i';
  memory_file_name[6] = 'c';
  memory_file_name[7] = '_';
  memory_file_name[16] = 'e';
  memory_file_name[17] = 'm';
  memory_file_name[18] = 'o';
  memory_file_name[19] = 'r';
  memory_file_name[20] = 'y';
  memory_file_name[21] = '_';
  memory_file_name[22] = 'v';
  memory_file_name[23] = 'r';
  memory_file_name[28] = 'a';
  memory_file_name[29] = 't';
  memory_file_name[30] = '\0';
  uVar2 = shm_open(memory_file_name,0x42,0x1ff);
  memory->map_vram_fd = uVar2;
  iVar3 = ftruncate(uVar2,0xa8000);
  if (iVar3 < 0) {
    puts("Truncate of memory mapped VRAM file failed.");
  }
  shm_unlink(memory_file_name);
  puVar4 = (u8 *)mmap((void *)0x0,0xa8000,3,1,memory->map_vram_fd,0);
  memory->map_vram_buffer = puVar4;
  if (puVar4 == (u8 *)0xffffffff) {
    __s = "ERROR: Memory VRAM buffer map failed.";
LAB_08016848:
    puts(__s);
    perror("Error is");
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  puVar4 = (u8 *)mmap((void *)0x0,0x800000,3,1,memory->map_vram_fd,0);
  memory->vram_2d_remap_buffer = puVar4;
  if (puVar4 == (u8 *)0xffffffff) {
    __s = "ERROR: Memory map VRAM failed.";
    goto LAB_08016848;
  }
  puVar4 = memory->map_vram_buffer;
  memory->vram_a = puVar4;
  memory->vram_b = puVar4 + 0x20000;
  memory->vram_c = puVar4 + 0x40000;
  memory->vram_d = puVar4 + 0x60000;
  memory->vram_e = puVar4 + 0x80000;
  memory->vram_f = puVar4 + 0x90000;
  memory->vram_g = puVar4 + 0x94000;
  memory->vram_h = puVar4 + 0x98000;
  memory->vram_i = puVar4 + 0xa0000;
  memory->null_buffer_video_load = puVar4 + 0xa4000;
  initialize_memory_map_arm9(memory);
  initialize_memory_map_arm7(memory);
  puts("  Initializing CP15.");
  initialize_coprocessor(&memory->coprocessor,cpu);
  (system->cpu_arm9).coprocessor = &memory->coprocessor;
  (system->cpu_arm7).coprocessor = (coprocessor_struct *)0x0;
  (system->cpu_arm9).io_region = memory->arm9_io_registers;
  (system->cpu_arm7).io_region = memory->arm7_io_registers;
  puts("  Initializing DMA.");
  initialize_dma(&memory->dma_arm9,memory,memory->memory_regions_arm9,memory->arm9_io_registers,cpu)
  ;
  initialize_dma(&memory->dma_arm7,memory,memory->memory_regions_arm7,memory->arm7_io_registers,
                 cpu_00);
  initialize_ipc(&memory->ipc_receive_arm9,cpu,&memory->ipc_receive_arm7);
  initialize_ipc(&memory->ipc_receive_arm7,cpu_00,&memory->ipc_receive_arm9);
  memory->custom_bios_loaded = '\0';
  sVar7 = load_system_file(system,"nds_bios_arm9.bin",memory->arm9_bios,0x1000);
  if (sVar7 < 0) {
    puts("Can\'t find Nintendo ARM9 BIOS. Trying free DraStic ARM9 BIOS.");
    sVar7 = load_system_file(system,"drastic_bios_arm9.bin",memory->arm9_bios,0x1000);
    if (-1 < sVar7) {
      memory->custom_bios_loaded = memory->custom_bios_loaded | 2;
      goto LAB_080165f0;
    }
LAB_08016830:
    sVar7 = -1;
  }
  else {
LAB_080165f0:
    sVar7 = load_system_file(system,"nds_bios_arm7.bin",memory->arm7_bios,0x4000);
    if (sVar7 < 0) {
      puts("Can\'t find Nintendo ARM9 BIOS. Trying free DraStic ARM7 BIOS.");
      sVar7 = load_system_file(system,"drastic_bios_arm7.bin",memory->arm7_bios,0x4000);
      if (sVar7 < 0) goto LAB_08016830;
      memory->custom_bios_loaded = memory->custom_bios_loaded | 1;
    }
    puVar4 = memory->firmware_data;
    sVar7 = load_system_file(system,"nds_firmware.bin",puVar4,0x40000);
    if (sVar7 < 0) {
      memset(puVar4,0,0x40000);
      patch_firmware_header_data(puVar4);
    }
    memory->slot2_ram = (u8 *)0x0;
    memory->slot2_ram_code_bitmap_coarse = (u32 *)0x0;
    memory->slot2_ram_code_bitmap_fine = (u32 *)0x0;
    sVar7 = 0;
  }
  if (iVar1 == __stack_chk_guard) {
    return sVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


