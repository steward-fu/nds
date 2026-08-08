/*
 * Ghidra decompilation
 *
 * Function : event_scanline_start_function
 * Address  : 08017dac
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void event_scanline_start_function(system_struct *system,void *data)

{
  byte bVar1;
  ushort uVar2;
  event_struct *peVar3;
  event_struct *current_event;
  event_struct *peVar4;
  s32 sVar5;
  u8 *io_region;
  u8 *io_region_1;
  undefined4 uVar6;
  u8 *puVar7;
  u8 *io_region_2;
  u8 *io_region_3;
  u32 uVar8;
  u32 non_blocking;
  uint uVar9;
  byte bVar10;
  int iVar11;
  u16 uVar12;
  uint uVar13;
  u32 scanline_number;
  dma_struct *pdVar14;
  audio_struct *audio;
  event_list_struct *peVar15;
  event_struct *new_event;
  
  uVar13 = system->scanline_number + 1;
  if (uVar13 == 0x106) {
    (system->memory).arm9_io_registers[4] = (system->memory).arm9_io_registers[4] & 0xfe;
    (system->memory).arm7_io_registers[4] = (system->memory).arm7_io_registers[4] & 0xfe;
  }
  else if (uVar13 == 0x107) {
    pdVar14 = &(system->memory).dma_arm9;
    if (((int)(system->memory).dma_arm9.channels[0].control < 0) &&
       ((system->memory).dma_arm9.channels[0].start_type == '\x03')) {
      dma_transfer(pdVar14,(system->memory).dma_arm9.channels);
    }
    if (((int)(system->memory).dma_arm9.channels[1].control < 0) &&
       ((system->memory).dma_arm9.channels[1].start_type == '\x03')) {
      dma_transfer(pdVar14,(system->memory).dma_arm9.channels + 1);
    }
    if (((int)(system->memory).dma_arm9.channels[2].control < 0) &&
       ((system->memory).dma_arm9.channels[2].start_type == '\x03')) {
      dma_transfer(pdVar14,(system->memory).dma_arm9.channels + 2);
    }
    if (((int)(system->memory).dma_arm9.channels[3].control < 0) &&
       ((system->memory).dma_arm9.channels[3].start_type == '\x03')) {
      dma_transfer(pdVar14,(system->memory).dma_arm9.channels + 3);
    }
    uVar12 = 0;
    start_frame(&system->video);
    uVar13 = 0;
    goto LAB_08017e0c;
  }
  if (uVar13 == 0xc0) {
    bVar1 = (system->memory).arm9_io_registers[4];
    (system->memory).arm9_io_registers[4] = bVar1 | 1;
    if ((bVar1 & 8) != 0) {
      puVar7 = (system->cpu_arm9).io_region;
      uVar13 = *(uint *)(puVar7 + 0x214);
      *(uint *)(puVar7 + 0x214) = uVar13 | 1;
      if (((system->cpu_arm9).state & 6) == 0) {
        (system->cpu_arm9).active_interrupts =
             (uVar13 | 1) & -*(int *)(puVar7 + 0x208) & *(uint *)(puVar7 + 0x210);
      }
    }
    bVar1 = (system->memory).arm7_io_registers[4];
    (system->memory).arm7_io_registers[4] = bVar1 | 1;
    if ((bVar1 & 8) != 0) {
      puVar7 = (system->cpu_arm7).io_region;
      uVar13 = *(uint *)(puVar7 + 0x214);
      *(uint *)(puVar7 + 0x214) = uVar13 | 1;
      if (((system->cpu_arm7).state & 6) == 0) {
        (system->cpu_arm7).active_interrupts =
             (uVar13 | 1) & -*(int *)(puVar7 + 0x208) & *(uint *)(puVar7 + 0x210);
      }
    }
    update_frame(&system->video);
    update_input(&system->input);
    benchmark_step(&system->benchmark);
    backup_auto_save_step(&(system->gamecard).backup);
    gba_backup_auto_save_step(&(system->gamecard).gba_gamepak);
    if ((((system->config).enable_cheats != 0) && (((system->cpu_arm7).active_interrupts & 1) != 0))
       && (((system->cpu_arm7).cpsr & 0x80) == 0)) {
      process_cheats(system,&(system->gamecard).cheat_directory,*(u32 *)&system->frame_number);
    }
    uVar13 = (system->benchmark).disable;
    uVar6 = *(undefined4 *)((int)&system->global_cycles + 4);
    *(undefined4 *)&(system->spu).capture_cycles = *(undefined4 *)&system->global_cycles;
    *(undefined4 *)((int)&(system->spu).capture_cycles + 4) = uVar6;
    if ((uVar13 & 0x40) == 0) {
      update_spu(system);
      uVar8 = (u32)mic_en;
      if ((uVar8 != 0) && (uVar8 = (u32)system->microphone_status, uVar8 != 0)) {
        if ((uVar8 == 1) && (sVar5 = initialize_audio_capture(&(system->spu).audio), sVar5 == 0)) {
          system->microphone_status = '\x02';
        }
        else {
          uVar8 = 1;
        }
      }
      if ((system->config).fast_forward == 0) {
        non_blocking = (system->config).frame_interval;
        if (non_blocking != 0) {
          non_blocking = 1;
        }
      }
      else {
        non_blocking = 1;
      }
      audio_synchronous_update(&(system->spu).audio,non_blocking,uVar8);
    }
    pdVar14 = &(system->memory).dma_arm9;
    if (((int)(system->memory).dma_arm9.channels[0].control < 0) &&
       ((system->memory).dma_arm9.channels[0].start_type == '\x01')) {
      dma_transfer(pdVar14,(system->memory).dma_arm9.channels);
    }
    if (((int)(system->memory).dma_arm9.channels[1].control < 0) &&
       ((system->memory).dma_arm9.channels[1].start_type == '\x01')) {
      dma_transfer(pdVar14,(system->memory).dma_arm9.channels + 1);
    }
    if (((int)(system->memory).dma_arm9.channels[2].control < 0) &&
       ((system->memory).dma_arm9.channels[2].start_type == '\x01')) {
      dma_transfer(pdVar14,(system->memory).dma_arm9.channels + 2);
    }
    if (((int)(system->memory).dma_arm9.channels[3].control < 0) &&
       ((system->memory).dma_arm9.channels[3].start_type == '\x01')) {
      dma_transfer(pdVar14,(system->memory).dma_arm9.channels + 3);
    }
    pdVar14 = &(system->memory).dma_arm7;
    if (((int)(system->memory).dma_arm7.channels[0].control < 0) &&
       ((system->memory).dma_arm7.channels[0].start_type == '\x01')) {
      dma_transfer(pdVar14,(system->memory).dma_arm7.channels);
    }
    if (((int)(system->memory).dma_arm7.channels[1].control < 0) &&
       ((system->memory).dma_arm7.channels[1].start_type == '\x01')) {
      dma_transfer(pdVar14,(system->memory).dma_arm7.channels + 1);
    }
    if (((int)(system->memory).dma_arm7.channels[2].control < 0) &&
       ((system->memory).dma_arm7.channels[2].start_type == '\x01')) {
      dma_transfer(pdVar14,(system->memory).dma_arm7.channels + 2);
    }
    if (((int)(system->memory).dma_arm7.channels[3].control < 0) &&
       ((system->memory).dma_arm7.channels[3].start_type == '\x01')) {
      dma_transfer(pdVar14,(system->memory).dma_arm7.channels + 3);
    }
    uVar9 = *(uint *)&system->frame_number;
    iVar11 = *(int *)((int)&system->frame_number + 4);
    uVar12 = 0xc0;
    uVar13 = 0xc0;
    *(uint *)&system->frame_number = uVar9 + 1;
    *(uint *)((int)&system->frame_number + 4) = iVar11 + (uint)(0xfffffffe < uVar9);
  }
  else if (uVar13 == 0xd7) {
    system_frame_sync(system);
    uVar8 = (u32)system->skip_current_frame;
    if (((system->benchmark).disable & 8) != 0) {
      uVar8 = 1;
    }
    uVar12 = 0xd7;
    if ((system->config).threaded_3d == 0) {
      update_frame_3d(&system->video,uVar8);
    }
    else {
      video_3d_start_rendering(&system->video,uVar8);
    }
  }
  else {
    uVar12 = (u16)uVar13;
  }
LAB_08017e0c:
  uVar2 = *(ushort *)((system->memory).arm9_io_registers + 4);
  bVar1 = (system->memory).arm9_io_registers[4];
  if (((uint)(uVar2 >> 8) | (uVar2 & 0x80) << 1) == uVar13) {
    (system->memory).arm9_io_registers[4] = bVar1 | 4;
    if ((bVar1 & 0x20) != 0) {
      puVar7 = (system->cpu_arm9).io_region;
      uVar9 = *(uint *)(puVar7 + 0x214);
      *(uint *)(puVar7 + 0x214) = uVar9 | 4;
      if (((system->cpu_arm9).state & 6) == 0) {
        (system->cpu_arm9).active_interrupts =
             (uVar9 | 4) & -*(int *)(puVar7 + 0x208) & *(uint *)(puVar7 + 0x210);
      }
    }
  }
  else {
    (system->memory).arm9_io_registers[4] = bVar1 & 0xfb;
  }
  uVar2 = *(ushort *)((system->memory).arm7_io_registers + 4);
  bVar1 = (system->memory).arm7_io_registers[4];
  if (((uint)(uVar2 >> 8) | (uVar2 & 0x80) << 1) == uVar13) {
    bVar10 = bVar1 | 4;
    (system->memory).arm7_io_registers[4] = bVar10;
    if ((bVar1 & 0x20) != 0) {
      puVar7 = (system->cpu_arm7).io_region;
      uVar13 = *(uint *)(puVar7 + 0x214);
      *(uint *)(puVar7 + 0x214) = uVar13 | 4;
      if (((system->cpu_arm7).state & 6) == 0) {
        (system->cpu_arm7).active_interrupts =
             (uVar13 | 4) & -*(int *)(puVar7 + 0x208) & *(uint *)(puVar7 + 0x210);
      }
      bVar10 = (system->memory).arm7_io_registers[4];
    }
  }
  else {
    bVar10 = bVar1 & 0xfb;
  }
  peVar15 = &system->event_list;
  *(u16 *)((system->memory).arm9_io_registers + 6) = uVar12;
  *(u16 *)((system->memory).arm7_io_registers + 6) = uVar12;
  (system->memory).arm9_io_registers[4] = (system->memory).arm9_io_registers[4] & 0xfd;
  (system->memory).arm7_io_registers[4] = bVar10 & 0xfd;
  peVar3 = (system->event_list).base;
  system->scanline_number = uVar12;
  if ((peVar3 == (event_struct *)0x0) || (uVar13 = peVar3->cycles_forward, 0xbff < uVar13)) {
    uVar9 = 0xc00;
    (system->event_list).event_storage[0].cycles_forward = 0xc00;
    (system->event_list).event_storage[0].next = peVar3;
    (system->event_list).event_storage[0].previous = (event_struct *)0x0;
    (system->event_list).base = peVar15->event_storage;
  }
  else {
    uVar9 = 0xc00;
    do {
      peVar4 = peVar3;
      peVar3 = peVar4->next;
      uVar9 = uVar9 - uVar13;
      if (peVar3 == (event_struct *)0x0) break;
      uVar13 = peVar3->cycles_forward;
    } while (uVar13 < uVar9);
    (system->event_list).event_storage[0].cycles_forward = uVar9;
    (system->event_list).event_storage[0].next = peVar3;
    (system->event_list).event_storage[0].previous = peVar4;
    peVar4->next = peVar15->event_storage;
  }
  if (peVar3 != (event_struct *)0x0) {
    peVar3->previous = peVar15->event_storage;
    peVar3->cycles_forward = peVar3->cycles_forward - uVar9;
  }
  return;
}


