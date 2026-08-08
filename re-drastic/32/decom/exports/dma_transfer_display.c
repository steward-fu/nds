/*
 * Ghidra decompilation
 *
 * Function : dma_transfer_display
 * Address  : 08019620
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

u16 * dma_transfer_display(dma_struct *dma,dma_channel_struct *dma_channel,u32 line)

{
  memory_struct **memory;
  u16 *load_pointer;
  uint uVar1;
  u32 address;
  u8 *puVar2;
  u8 *io_region;
  uint uVar3;
  u32 uVar4;
  u32 control;
  uint uVar5;
  u32 *mask;
  cpu_struct *pcVar6;
  memory_region_struct *pmVar7;
  
  uVar5 = dma_channel->control;
  uVar1 = dma_channel->source_address + line * 0x200;
  if (uVar1 < 0x10000000) {
    uVar3 = (uVar1 >> 0x17) * 0x30;
  }
  else {
    uVar3 = 0;
    uVar1 = uVar3;
  }
  pmVar7 = dma->memory_regions;
  if ((&pmVar7->load_access)[uVar3] == '\0') {
    load_pointer = (u16 *)(*(int *)((int)&pmVar7->load_handler + uVar3) +
                          (uVar1 & *(uint *)((int)&pmVar7->mask + uVar3)));
  }
  else if ((&pmVar7->load_access)[uVar3] == '\x01') {
    load_pointer = (u16 *)(**(code **)((int)&pmVar7->load_handler + uVar3))(dma->memory);
  }
  else {
    load_pointer = (u16 *)0x0;
  }
  if ((uVar5 & 0x2000000) == 0) {
    uVar5 = uVar5 & 0x7fffffff;
    dma_channel->control = uVar5;
    dma_channel->io_region[2] = uVar5;
  }
  if ((uVar5 & 0x40000000) != 0) {
    puVar2 = dma_channel->cpu->io_region;
    uVar1 = *(uint *)(puVar2 + 0x214) | 0x100 << dma_channel->channel_number;
    *(uint *)(puVar2 + 0x214) = uVar1;
    pcVar6 = dma_channel->cpu;
    if ((pcVar6->state & 6) == 0) {
      uVar4 = uVar1 & *(uint *)(puVar2 + 0x210) & -*(int *)(puVar2 + 0x208);
      pcVar6->active_interrupts = uVar4;
    }
    else {
      uVar4 = pcVar6->active_interrupts;
    }
    if (uVar4 != 0) {
      pcVar6->alert_flags = pcVar6->alert_flags | 2;
    }
  }
  return load_pointer;
}


