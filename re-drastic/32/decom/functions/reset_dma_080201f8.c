/*
 * Ghidra decompilation
 *
 * Function : reset_dma
 * Address  : 080201f8
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void reset_dma(dma_struct *dma)

{
  dma->channels[0].completion_timestamp = 0;
  dma->channels[0].source_address = 0;
  dma->channels[0].dest_address = 0;
  dma->channels[0].control = 0;
  dma->channels[0].start_type = '\0';
  dma->channels[0].event_scheduled = '\0';
  dma->channels[1].completion_timestamp = 0;
  dma->channels[1].source_address = 0;
  dma->channels[1].dest_address = 0;
  dma->channels[1].control = 0;
  dma->channels[1].start_type = '\0';
  dma->channels[1].event_scheduled = '\0';
  dma->channels[2].completion_timestamp = 0;
  dma->channels[2].source_address = 0;
  dma->channels[2].dest_address = 0;
  dma->channels[2].control = 0;
  dma->channels[2].start_type = '\0';
  dma->channels[2].event_scheduled = '\0';
  dma->channels[3].completion_timestamp = 0;
  dma->channels[3].source_address = 0;
  dma->channels[3].dest_address = 0;
  dma->channels[3].control = 0;
  dma->channels[3].start_type = '\0';
  dma->channels[3].event_scheduled = '\0';
  return;
}


