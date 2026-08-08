/*
 * Ghidra decompilation
 *
 * Function : trigger_event_dma
 * Address  : 08018628
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void trigger_event_dma(dma_struct *dma,u32 dma_start_type)

{
  if (((int)dma->channels[0].control < 0) && (dma_start_type == dma->channels[0].start_type)) {
    dma_transfer(dma,dma->channels);
  }
  if (((int)dma->channels[1].control < 0) && (dma_start_type == dma->channels[1].start_type)) {
    dma_transfer(dma,dma->channels + 1);
  }
  if (((int)dma->channels[2].control < 0) && (dma_start_type == dma->channels[2].start_type)) {
    dma_transfer(dma,dma->channels + 2);
  }
  if (((int)dma->channels[3].control < 0) && (dma->channels[3].start_type == dma_start_type)) {
    dma_transfer(dma,dma->channels + 3);
    return;
  }
  return;
}


