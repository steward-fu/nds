/*
 * Ghidra decompilation
 *
 * Function : spu_key_on
 * Address  : 0808dac8
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void spu_key_on(spu_struct *spu,u32 channel_number)

{
  u8 uVar1;
  byte bVar2;
  s16 sVar3;
  memory_struct *pmVar4;
  u8 *puVar5;
  uint uVar6;
  int *piVar7;
  s16 *psVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  
  if (spu->channels[channel_number].active != '\0') {
    return;
  }
  piVar7 = (int *)spu->channels[channel_number].io_region;
  uVar10 = (uint)*(ushort *)((int)piVar7 + 10);
  iVar9 = piVar7[3];
  iVar13 = *piVar7;
  iVar12 = iVar9 + uVar10;
  if (iVar12 == 0) {
    if ((uint)(iVar13 << 1) >> 0x1e != 3) {
      return;
    }
    pmVar4 = spu->memory;
    uVar6 = piVar7[1] & 0x7ffffff;
    spu->channels[channel_number].active = '\x01';
    uVar15 = uVar6 >> 0x17;
    spu->channels[channel_number].sample_offset = 0;
    spu->channels[channel_number].sample_address = uVar6;
    iVar14 = uVar15 * 2;
    uVar1 = pmVar4->memory_regions_arm7[uVar15].load_access;
    uVar11 = 3;
    if (uVar1 == '\0') goto LAB_0808dce8;
    uVar11 = 3;
    if (uVar1 != '\x01') {
      spu->channels[channel_number].samples = (u8 *)0x0;
      goto LAB_0808dc3c;
    }
LAB_0808db68:
    puVar5 = (u8 *)(**(code **)((int)&pmVar4->memory_regions_arm7[0].load_handler +
                               (iVar14 + uVar15) * 0x10))();
    spu->channels[channel_number].samples = puVar5;
  }
  else {
    pmVar4 = spu->memory;
    uVar11 = (uint)(iVar13 << 1) >> 0x1e;
    uVar6 = piVar7[1] & 0x7ffffff;
    spu->channels[channel_number].active = '\x01';
    uVar15 = uVar6 >> 0x17;
    spu->channels[channel_number].sample_offset = 0;
    spu->channels[channel_number].sample_address = uVar6;
    iVar14 = uVar15 * 2;
    uVar1 = pmVar4->memory_regions_arm7[uVar15].load_access;
    if (uVar1 == '\0') {
LAB_0808dce8:
      spu->channels[channel_number].samples =
           (u8 *)(*(int *)((int)&pmVar4->memory_regions_arm7[0].load_handler +
                          (iVar14 + uVar15) * 0x10) +
                 (uVar6 & (&pmVar4->memory_regions_arm7[0].mask)[(iVar14 + uVar15) * 4]));
    }
    else {
      if (uVar1 == '\x01') goto LAB_0808db68;
      spu->channels[channel_number].samples = (u8 *)0x0;
      if (uVar11 == 3) goto LAB_0808dc3c;
      spu->channels[channel_number].active = '\0';
    }
  }
  if (uVar11 == 2) {
    psVar8 = (s16 *)spu->channels[channel_number].samples;
    uVar15 = *(uint *)spu->channels[channel_number].io_region;
    sVar3 = *psVar8;
    spu->channels[channel_number].adpcm_sample = sVar3;
    bVar2 = *(byte *)(psVar8 + 1);
    spu->channels[channel_number].adpcm_cache_block_offset = 0;
    spu->channels[channel_number].samples = (u8 *)(psVar8 + 2);
    spu->channels[channel_number].format = '\x02';
    spu->channels[channel_number].adpcm_current_index = bVar2 & 0x7f;
    if ((uVar15 & 0x8000000) == 0) {
      spu->channels[channel_number].sample_length = (iVar12 + 0x1fffffff) * 8;
      return;
    }
    spu->channels[channel_number].loop_wrap = iVar9 << 3;
    if (1 < uVar10) {
      spu->channels[channel_number].adpcm_looped = '\0';
      spu->channels[channel_number].sample_length = (uVar10 + 0x1fffffff) * 8;
      return;
    }
    spu->channels[channel_number].sample_length = iVar9 << 3;
    spu->channels[channel_number].adpcm_loop_sample = sVar3;
    spu->channels[channel_number].adpcm_loop_index = bVar2 & 0x7f;
    spu->channels[channel_number].adpcm_looped = '\x01';
    return;
  }
  if (uVar11 != 3) {
    if (uVar11 == 1) {
      spu->channels[channel_number].sample_length = iVar12 * 2;
      spu->channels[channel_number].loop_wrap = iVar9 << 1;
      spu->channels[channel_number].format = '\x01';
      return;
    }
    spu->channels[channel_number].sample_length = iVar12 * 4;
    spu->channels[channel_number].loop_wrap = iVar9 << 2;
    spu->channels[channel_number].format = '\0';
    return;
  }
LAB_0808dc3c:
  if (channel_number < 0xe) {
    if (channel_number < 8) {
      spu->channels[channel_number].format = '\x05';
    }
    else {
      spu->channels[channel_number].samples = (u8 *)(psg_samples + ((uint)(iVar13 << 5) >> 0x1d));
      spu->channels[channel_number].sample_length = 8;
      spu->channels[channel_number].loop_wrap = 8;
      spu->channels[channel_number].format = '\x03';
    }
  }
  else {
    spu->channels[channel_number].samples = (u8 *)noise_samples;
    spu->channels[channel_number].sample_length = 0x7fff;
    spu->channels[channel_number].loop_wrap = 0x7fff;
    spu->channels[channel_number].format = '\x04';
  }
  return;
}


