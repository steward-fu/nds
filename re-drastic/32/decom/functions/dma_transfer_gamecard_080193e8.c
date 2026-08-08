/*
 * Ghidra decompilation
 *
 * Function : dma_transfer_gamecard
 * Address  : 080193e8
 * Program  : drastic
 */


/* WARNING: Variable defined which should be unmapped: timestamp */
/* WARNING: Unknown calling convention */

u32 dma_transfer_gamecard(dma_struct *dma,dma_channel_struct *dma_channel,gamecard_struct *gamecard)

{
  u32 uVar1;
  uint uVar2;
  u8 *puVar3;
  u8 *io_region;
  uint uVar4;
  uint uVar5;
  u32 uVar6;
  int iVar7;
  u32 uVar8;
  u32 length;
  u32 transfer_cycles;
  u32 address;
  int iVar9;
  uint uVar10;
  uint uVar11;
  u32 control;
  system_struct *system;
  system_struct *psVar12;
  cpu_struct *pcVar13;
  cpu_struct *cpu;
  uint uVar14;
  u64 timestamp;
  
  uVar8 = gamecard->receive_length;
  psVar12 = gamecard->system;
  pcVar13 = dma_channel->cpu;
  address = dma_channel->dest_address;
  uVar6 = uVar8 * 4;
  uVar4 = *(uint *)&psVar12->global_cycles;
  iVar7 = *(int *)((int)&psVar12->global_cycles + 4);
  uVar2 = psVar12->cycles_to_next_event;
  uVar10 = pcVar13->cycles_remaining;
  uVar5 = uVar4 + uVar2;
  uVar14 = uVar5 - uVar10;
  uVar11 = dma_channel->control;
  if (0xfffffff < address) {
    address = 0;
  }
  uVar1 = memory_region_block_memory_load
                    (dma->memory_regions,dma->memory,address,
                     gamecard->nds_file->data + gamecard->receive_address,uVar6);
  gamecard->receive_address = gamecard->receive_address + uVar6;
  if ((uVar11 & 0x2000000) == 0) {
    uVar11 = uVar11 & 0x7fffffff;
    dma_channel->control = uVar11;
    dma_channel->io_region[2] = uVar11;
  }
  puVar3 = gamecard->io_region;
  if ((uVar11 << 9) >> 0x1e != 3) {
    dma_channel->dest_address = address + uVar6;
  }
  iVar9 = *(int *)&psVar12->global_cycles;
  uVar11 = uVar8 * 0x28;
  gamecard->receive_length = 0;
  *(uint *)&gamecard->dma_completion_timestamp = uVar14 + uVar11;
  *(uint *)((int)&gamecard->dma_completion_timestamp + 4) =
       ((iVar7 + (uint)CARRY4(uVar4,uVar2)) - (((int)uVar10 >> 0x1f) + (uint)(uVar5 < uVar10))) +
       (uint)CARRY4(uVar14,uVar11);
  *(uint *)(puVar3 + 0x1a4) = *(uint *)(puVar3 + 0x1a4) & 0x7f7fffff;
  if ((*(uint *)(gamecard->io_region + 0x1a0) & 0x4000) != 0) {
    if (psVar12->gamecard_delay == '\0') {
      puVar3 = dma_channel->cpu->io_region;
      uVar2 = *(uint *)(puVar3 + 0x214);
      *(uint *)(puVar3 + 0x214) = uVar2 | 0x80000;
      pcVar13 = dma_channel->cpu;
      if ((pcVar13->state & 6) == 0) {
        uVar6 = (uVar2 | 0x80000) & -*(int *)(puVar3 + 0x208) & *(uint *)(puVar3 + 0x210);
        pcVar13->active_interrupts = uVar6;
      }
      else {
        uVar6 = pcVar13->active_interrupts;
      }
      if (uVar6 != 0) {
        pcVar13->alert_flags = pcVar13->alert_flags | 2;
      }
    }
    else {
      if (gamecard->irq_scheduled != '\0') {
        remove_event(&psVar12->event_list,0xb);
      }
      gamecard->irq_scheduled = '\x01';
      uVar14 = (uVar11 - iVar9) + uVar14;
      schedule_event(&psVar12->event_list,uVar14,0xb);
      if (uVar14 < psVar12->cycles_to_next_event) {
        pcVar13->alert_flags = pcVar13->alert_flags | 4;
      }
    }
  }
  if (uVar1 != 0) {
    dma_channel->cpu->alert_flags = dma_channel->cpu->alert_flags | 1;
    puts("DMA from gamecard modified code.");
  }
  return uVar1;
}


