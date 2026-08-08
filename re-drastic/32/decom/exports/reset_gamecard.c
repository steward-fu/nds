/*
 * Ghidra decompilation
 *
 * Function : reset_gamecard
 * Address  : 080914a8
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void reset_gamecard(gamecard_struct *gamecard)

{
  gamecard->chip_id = 0;
  gamecard->receive_address = 0;
  gamecard->receive_length = 0;
  gamecard->dma_completion_timestamp = 0;
  gamecard->irq_scheduled = '\0';
  return;
}


