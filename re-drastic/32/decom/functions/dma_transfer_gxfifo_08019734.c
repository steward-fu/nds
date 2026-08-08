/*
 * Ghidra decompilation
 *
 * Function : dma_transfer_gxfifo
 * Address  : 08019734
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void dma_transfer_gxfifo(dma_struct *dma,dma_channel_struct *dma_channel)

{
  u8 uVar1;
  byte bVar2;
  u32 *load_pointer;
  u32 uVar3;
  uint uVar4;
  u8 *puVar5;
  u8 *io_region;
  int iVar6;
  cpu_struct *pcVar7;
  u32 uVar8;
  u32 cycle_multiplier;
  memory_region_struct *pmVar9;
  u32 control;
  u32 length;
  u32 mask;
  u32 *packed_command_ptr;
  system_struct *psVar10;
  system_struct *system;
  uint uVar11;
  u32 address;
  u32 block_length;
  uint uVar12;
  s32 offset_cycles;
  uint uVar13;
  cpu_struct *cpu;
  u32 uVar14;
  cpu_struct *pcVar15;
  memory_struct *pmVar16;
  memory_struct *memory;
  uint uVar17;
  uint uVar18;
  geometry_struct *geometry_00;
  geometry_struct *geometry;
  memory_region_struct *load_region;
  uint uVar19;
  uint uVar20;
  uint local_3c;
  
  uVar11 = dma_channel->source_address;
  local_3c = dma_channel->control;
  pmVar16 = dma->memory;
  control = local_3c & 0x1fffff;
  geometry_00 = pmVar16->geometry;
  uVar8 = geometry_00->system->geometry_cycle_multiplier;
  if (control == 0) {
    uVar13 = 0;
  }
  else {
    uVar13 = control;
    if (uVar8 == 0) {
      do {
        while( true ) {
          pmVar9 = dma->memory_regions;
          uVar4 = uVar11 >> 0x17;
          uVar12 = pmVar9[uVar4].mask + 1;
          if (pmVar9[uVar4].load_access != '\0') break;
          load_pointer = (u32 *)(pmVar9[uVar4].load_handler.direct_memory +
                                (pmVar9[uVar4].mask & uVar11));
LAB_080197c0:
          if (uVar13 <= uVar12) {
            uVar12 = uVar13;
          }
          uVar11 = uVar11 + uVar12;
          uVar13 = uVar13 - uVar12;
          if (load_pointer != (u32 *)0x0) {
            queue_geometry_command_packed_multi(geometry_00,load_pointer,uVar12);
          }
          if (uVar13 == 0) goto LAB_080198d8;
        }
        if (pmVar9[uVar4].load_access == '\x01') {
          load_pointer = (u32 *)(*pmVar9[uVar4].load_handler.get_pointer)(pmVar16,uVar11);
          goto LAB_080197c0;
        }
        if (uVar13 <= uVar12) {
          uVar12 = uVar13;
        }
        uVar13 = uVar13 - uVar12;
        uVar11 = uVar11 + uVar12;
      } while (uVar13 != 0);
    }
    else {
      uVar13 = 0;
      uVar14 = control;
      do {
        while( true ) {
          pmVar9 = dma->memory_regions;
          uVar4 = uVar11 >> 0x17;
          uVar12 = pmVar9[uVar4].mask + 1;
          if (pmVar9[uVar4].load_access != '\0') break;
          packed_command_ptr =
               (u32 *)(pmVar9[uVar4].load_handler.direct_memory + (pmVar9[uVar4].mask & uVar11));
LAB_08019854:
          if (uVar14 <= uVar12) {
            uVar12 = uVar14;
          }
          uVar11 = uVar11 + uVar12;
          uVar14 = uVar14 - uVar12;
          if (packed_command_ptr != (u32 *)0x0) {
            uVar3 = queue_geometry_command_packed_multi_cycles
                              (geometry_00,packed_command_ptr,uVar12);
            uVar13 = uVar3 * uVar8 + uVar13;
          }
          if (uVar14 == 0) goto LAB_080198d8;
        }
        if (pmVar9[uVar4].load_access == '\x01') {
          packed_command_ptr = (u32 *)(*pmVar9[uVar4].load_handler.get_pointer)(pmVar16,uVar11);
          goto LAB_08019854;
        }
        if (uVar14 <= uVar12) {
          uVar12 = uVar14;
        }
        uVar14 = uVar14 - uVar12;
        uVar11 = uVar11 + uVar12;
      } while (uVar14 != 0);
    }
  }
LAB_080198d8:
  pcVar15 = dma_channel->cpu;
  psVar10 = pmVar16->system;
  uVar20 = pcVar15->cycles_remaining;
  uVar4 = *(uint *)&psVar10->global_cycles;
  iVar6 = *(int *)((int)&psVar10->global_cycles + 4);
  uVar19 = psVar10->cycles_to_next_event;
  uVar17 = uVar4 + uVar19;
  uVar18 = uVar17 - uVar20;
  uVar12 = (uVar18 - uVar4) + uVar13;
  if ((local_3c << 9) >> 0x1e != 3) {
    dma_channel->dest_address = control + uVar11;
  }
  if (uVar8 == 0) {
    if ((local_3c & 0x2000000) == 0) {
      local_3c = local_3c & 0x7fffffff;
      dma_channel->control = local_3c;
      dma_channel->io_region[2] = local_3c;
    }
    if ((local_3c & 0x40000000) != 0) {
      puVar5 = pcVar15->io_region;
      uVar11 = *(uint *)(puVar5 + 0x214) | 0x100 << dma_channel->channel_number;
      *(uint *)(puVar5 + 0x214) = uVar11;
      pcVar7 = dma_channel->cpu;
      if ((pcVar7->state & 6) == 0) {
        uVar8 = uVar11 & *(uint *)(puVar5 + 0x210) & -*(int *)(puVar5 + 0x208);
        pcVar7->active_interrupts = uVar8;
      }
      else {
        uVar8 = pcVar7->active_interrupts;
      }
      if (uVar8 != 0) {
        pcVar7->alert_flags = pcVar7->alert_flags | 2;
      }
    }
    if (psVar10->cycles_to_next_event <= uVar12) {
      return;
    }
    uVar11 = pcVar15->alert_flags;
  }
  else {
    if ((control < 0x104) && ((local_3c & 0x2000000) == 0)) {
      dma_channel->control = local_3c & 0x7fffffff;
      dma_channel->io_region[2] = local_3c & 0x7fffffff;
      uVar1 = dma_channel->event_scheduled;
    }
    else {
      uVar1 = dma_channel->event_scheduled;
    }
    if (uVar1 != '\0') {
      remove_event(&psVar10->event_list,dma_channel->channel_number + 0xc);
    }
    bVar2 = dma_channel->channel_number;
    *(uint *)&dma_channel->completion_timestamp = uVar18 + uVar13;
    *(uint *)((int)&dma_channel->completion_timestamp + 4) =
         ((iVar6 + (uint)CARRY4(uVar4,uVar19)) - (((int)uVar20 >> 0x1f) + (uint)(uVar17 < uVar20)))
         + (uint)CARRY4(uVar18,uVar13);
    dma_channel->event_scheduled = '\x01';
    schedule_event(&psVar10->event_list,uVar12,bVar2 + 0xc);
    if (psVar10->cycles_to_next_event <= uVar12) {
      return;
    }
    uVar11 = pcVar15->alert_flags | 4;
  }
  pcVar15->alert_flags = uVar11 | 4;
  return;
}


