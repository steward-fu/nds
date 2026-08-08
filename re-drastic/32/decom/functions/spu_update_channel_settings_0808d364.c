/*
 * Ghidra decompilation
 *
 * Function : spu_update_channel_settings
 * Address  : 0808d364
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void spu_update_channel_settings(spu_struct *spu,spu_channel_struct *channel)

{
  int iVar1;
  uint uVar2;
  u32 channel_control;
  int iVar3;
  u32 pan_right;
  uint uVar4;
  u32 master_volume;
  u32 multiplier_core;
  uint uVar5;
  u32 channel_volume;
  u32 channel_divide;
  bool bVar6;
  u64 uVar7;
  
  if ((channel->dirty_bits & 2) != 0) {
    uVar2 = *(uint *)channel->io_region;
    channel_divide = (uVar2 << 0x16) >> 0x1e;
    uVar5 = uVar2 & 0x7f;
    bVar6 = channel_divide != 3;
    uVar4 = *(uint *)(spu->io_region + 0x100) & 0x7f;
    if (bVar6) {
      channel_divide = 4 - channel_divide;
    }
    uVar2 = (uVar2 << 9) >> 0x19;
    if (!bVar6) {
      channel_divide = 0;
    }
    if (uVar5 == 0x7f) {
      uVar5 = 0x80;
    }
    if (uVar2 == 0x7f) {
      uVar2 = 0x80;
      iVar3 = 0;
    }
    else {
      iVar3 = 0x80 - uVar2;
    }
    if (uVar4 == 0x7f) {
      uVar4 = 0x80;
    }
    iVar1 = uVar4 * uVar5 << (channel_divide & 0xff);
    channel->volume_multiplier_left = (s16)((uint)(iVar3 * iVar1) >> 0xd);
    channel->volume_multiplier_right = (s16)(iVar1 * uVar2 >> 0xd);
  }
  if ((channel->dirty_bits & 1) != 0) {
    uVar7 = __aeabi_uldivmod(0,0x1006f43,
                             (spu->audio).output_frequency *
                             (0x10000 - (uint)*(ushort *)(channel->io_region + 8)),0);
    channel->frequency_step = uVar7;
    if (channel->capture_timer != 0xff) {
      spu->capture[channel->capture_timer].frequency_step = uVar7;
    }
  }
  channel->dirty_bits = '\0';
  return;
}


