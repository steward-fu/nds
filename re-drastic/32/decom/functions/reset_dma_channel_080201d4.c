/*
 * Ghidra decompilation
 *
 * Function : reset_dma_channel
 * Address  : 080201d4
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void reset_dma_channel(dma_channel_struct *dma_channel)

{
  dma_channel->completion_timestamp = 0;
  dma_channel->source_address = 0;
  dma_channel->dest_address = 0;
  dma_channel->control = 0;
  dma_channel->start_type = '\0';
  dma_channel->event_scheduled = '\0';
  return;
}


