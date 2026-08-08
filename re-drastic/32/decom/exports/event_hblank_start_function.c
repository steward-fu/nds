/*
 * Ghidra decompilation
 *
 * Function : event_hblank_start_function
 * Address  : 08017a74
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void event_hblank_start_function(system_struct *system,void *data)

{
  byte bVar1;
  event_struct *peVar2;
  event_struct *current_event;
  event_struct *peVar3;
  u8 *puVar4;
  u8 *io_region;
  u8 *io_region_1;
  uint uVar5;
  uint uVar6;
  dma_struct *dma_00;
  dma_struct *dma;
  event_struct *peVar7;
  event_struct *new_event;
  
  bVar1 = (system->memory).arm9_io_registers[4];
  (system->memory).arm9_io_registers[4] = bVar1 | 2;
  if ((bVar1 & 0x10) != 0) {
    puVar4 = (system->cpu_arm9).io_region;
    uVar5 = *(uint *)(puVar4 + 0x214);
    *(uint *)(puVar4 + 0x214) = uVar5 | 2;
    if (((system->cpu_arm9).state & 6) == 0) {
      (system->cpu_arm9).active_interrupts =
           (uVar5 | 2) & -*(int *)(puVar4 + 0x208) & *(uint *)(puVar4 + 0x210);
    }
  }
  bVar1 = (system->memory).arm7_io_registers[4];
  (system->memory).arm7_io_registers[4] = bVar1 | 2;
  if ((bVar1 & 0x10) != 0) {
    puVar4 = (system->cpu_arm7).io_region;
    uVar5 = *(uint *)(puVar4 + 0x214);
    *(uint *)(puVar4 + 0x214) = uVar5 | 2;
    if (((system->cpu_arm7).state & 6) == 0) {
      (system->cpu_arm7).active_interrupts =
           (uVar5 | 2) & -*(int *)(puVar4 + 0x208) & *(uint *)(puVar4 + 0x210);
    }
  }
  if (system->scanline_number < 0xc0) {
    dma_00 = &(system->memory).dma_arm9;
    if ((((system->video).video_2d_engine[0].display_control & 0x20000) != 0) ||
       (system->force_undeferred_2d != '\0')) {
      video_render_scanlines(&system->video,(uint)system->scanline_number);
    }
    if (((int)(system->memory).dma_arm9.channels[0].control < 0) &&
       ((system->memory).dma_arm9.channels[0].start_type == '\x02')) {
      if ((system->memory).dma_arm9.channels[0].dest_address + 0xfa000000 < 0x800000) {
        video_render_scanlines(&system->video,(uint)system->scanline_number);
      }
      dma_transfer(dma_00,(system->memory).dma_arm9.channels);
    }
    if (((int)(system->memory).dma_arm9.channels[1].control < 0) &&
       ((system->memory).dma_arm9.channels[1].start_type == '\x02')) {
      if ((system->memory).dma_arm9.channels[1].dest_address + 0xfa000000 < 0x800000) {
        video_render_scanlines(&system->video,(uint)system->scanline_number);
      }
      dma_transfer(dma_00,(system->memory).dma_arm9.channels + 1);
    }
    if (((int)(system->memory).dma_arm9.channels[2].control < 0) &&
       ((system->memory).dma_arm9.channels[2].start_type == '\x02')) {
      if ((system->memory).dma_arm9.channels[2].dest_address + 0xfa000000 < 0x800000) {
        video_render_scanlines(&system->video,(uint)system->scanline_number);
      }
      dma_transfer(dma_00,(system->memory).dma_arm9.channels + 2);
    }
    if (((int)(system->memory).dma_arm9.channels[3].control < 0) &&
       ((system->memory).dma_arm9.channels[3].start_type == '\x02')) {
      if ((system->memory).dma_arm9.channels[3].dest_address + 0xfa000000 < 0x800000) {
        video_render_scanlines(&system->video,(uint)system->scanline_number);
      }
      dma_transfer(dma_00,(system->memory).dma_arm9.channels + 3);
    }
    if ((system->vcount_edge_hack != '\0') && (system->scanline_number == 0xbf)) {
      *(undefined2 *)((system->memory).arm9_io_registers + 6) = 0xc0;
      *(undefined2 *)((system->memory).arm7_io_registers + 6) = 0xc0;
    }
  }
  peVar2 = (system->event_list).base;
  peVar7 = (system->event_list).event_storage + 1;
  if ((peVar2 == (event_struct *)0x0) || (uVar5 = peVar2->cycles_forward, 0x4a3 < uVar5)) {
    uVar6 = 0x4a4;
    (system->event_list).event_storage[1].cycles_forward = 0x4a4;
    (system->event_list).event_storage[1].next = peVar2;
    (system->event_list).event_storage[1].previous = (event_struct *)0x0;
    (system->event_list).base = peVar7;
  }
  else {
    uVar6 = 0x4a4;
    do {
      peVar3 = peVar2;
      peVar2 = peVar3->next;
      uVar6 = uVar6 - uVar5;
      if (peVar2 == (event_struct *)0x0) break;
      uVar5 = peVar2->cycles_forward;
    } while (uVar5 < uVar6);
    (system->event_list).event_storage[1].cycles_forward = uVar6;
    (system->event_list).event_storage[1].next = peVar2;
    (system->event_list).event_storage[1].previous = peVar3;
    peVar3->next = peVar7;
  }
  if (peVar2 != (event_struct *)0x0) {
    peVar2->previous = peVar7;
    peVar2->cycles_forward = peVar2->cycles_forward - uVar6;
  }
  return;
}


