/*
 * Ghidra decompilation
 *
 * Function : spu_adpcm_decode_block
 * Address  : 0808d268
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void spu_adpcm_decode_block(spu_channel_struct *channel)

{
  uint uVar1;
  u32 current_index;
  u32 adpcm_data_x8;
  uint uVar2;
  uint uVar3;
  u32 adpcm_cache_block_offset;
  u32 sample_delta;
  uint uVar4;
  s32 sample;
  u32 adpcm_step;
  uint uVar5;
  s16 *psVar6;
  s16 *psVar7;
  
  uVar3 = channel->adpcm_cache_block_offset;
  uVar1 = (uint)channel->adpcm_current_index;
  sample_delta = (u32)channel->adpcm_sample;
  uVar2 = *(uint *)(channel->samples + (uVar3 >> 1));
  channel->adpcm_cache_block_offset = uVar3 + 8;
  psVar7 = channel->adpcm_sample_cache + (uVar3 & 0x3f);
  do {
    uVar5 = (uint)adpcm_step_table[uVar1];
    uVar4 = uVar5 >> 3;
    if ((uVar2 & 1) != 0) {
      uVar4 = uVar4 + (uVar5 >> 2);
    }
    if ((uVar2 & 2) != 0) {
      uVar4 = uVar4 + (uVar5 >> 1);
    }
    if ((uVar2 & 4) != 0) {
      uVar4 = uVar4 + uVar5;
    }
    if ((uVar2 & 8) == 0) {
      sample_delta = sample_delta - uVar4;
      if ((int)sample_delta < -0x7fff) {
        sample_delta = 0xffff8001;
      }
    }
    else {
      sample_delta = sample_delta + uVar4;
      if (0x7ffe < (int)sample_delta) {
        sample_delta = 0x7fff;
      }
    }
    uVar1 = uVar1 + (int)adpcm_index_step_table[uVar2 & 7];
    if (0x58 < uVar1) {
      if ((int)uVar1 < 0) {
        uVar1 = 0;
      }
      else {
        uVar1 = 0x58;
      }
    }
    uVar2 = uVar2 >> 4;
    psVar6 = psVar7 + 1;
    *psVar7 = (s16)sample_delta;
    psVar7 = psVar6;
  } while (channel->adpcm_sample_cache + (uVar3 & 0x3f) + 8 != psVar6);
  channel->adpcm_sample = (s16)sample_delta;
  channel->adpcm_current_index = (u8)uVar1;
  return;
}


