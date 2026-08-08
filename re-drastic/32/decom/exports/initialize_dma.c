/*
 * Ghidra decompilation
 *
 * Function : initialize_dma
 * Address  : 08020088
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void initialize_dma(dma_struct *dma,memory_struct *memory,memory_region_struct *memory_regions,
                   u8 *io_registers,cpu_struct *cpu)

{
  dma->channels[0].cpu = cpu;
  dma->channels[0].io_region = (u32 *)(io_registers + 0xb0);
  dma->channels[0].channel_number = '\0';
  if (cpu->type == '\x01') {
    initialize_event(&cpu->system->event_list,0xc,event_dma_complete_function,dma->channels);
  }
  dma->channels[1].cpu = cpu;
  dma->channels[1].io_region = (u32 *)(io_registers + 0xbc);
  dma->channels[1].channel_number = '\x01';
  if (cpu->type == '\x01') {
    initialize_event(&cpu->system->event_list,0xd,event_dma_complete_function,dma->channels + 1);
  }
  dma->channels[2].cpu = cpu;
  dma->channels[2].io_region = (u32 *)(io_registers + 200);
  dma->channels[2].channel_number = '\x02';
  if (cpu->type == '\x01') {
    initialize_event(&cpu->system->event_list,0xe,event_dma_complete_function,dma->channels + 2);
  }
  dma->channels[3].cpu = cpu;
  dma->channels[3].io_region = (u32 *)(io_registers + 0xd4);
  dma->channels[3].channel_number = '\x03';
  if (cpu->type == '\x01') {
    initialize_event(&cpu->system->event_list,0xf,event_dma_complete_function,dma->channels + 3);
  }
  dma->memory = memory;
  dma->memory_regions = memory_regions;
  return;
}


