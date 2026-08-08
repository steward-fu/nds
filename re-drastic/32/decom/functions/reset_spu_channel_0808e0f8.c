/*
 * Ghidra decompilation
 *
 * Function : reset_spu_channel
 * Address  : 0808e0f8
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void reset_spu_channel(spu_channel_struct *spu_channel)

{
  spu_channel->sample_offset = 0;
  spu_channel->adpcm_cache_block_offset = 0;
  spu_channel->samples = (u8 *)0x0;
  spu_channel->sample_address = 0;
  spu_channel->volume_multiplier_left = 0;
  spu_channel->volume_multiplier_right = 0;
  spu_channel->adpcm_loop_sample = 0;
  spu_channel->dirty_bits = '\x03';
  spu_channel->active = '\0';
  spu_channel->adpcm_current_index = '\0';
  return;
}


