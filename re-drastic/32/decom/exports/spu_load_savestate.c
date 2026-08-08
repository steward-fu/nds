/*
 * Ghidra decompilation
 *
 * Function : spu_load_savestate
 * Address  : 0808e4ec
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void spu_load_savestate(spu_struct *spu,mem_file_struct *savestate_file,u32 version)

{
  byte bVar1;
  u8 uVar2;
  int iVar3;
  u32 uVar4;
  memory_struct *pmVar5;
  u8 uVar6;
  undefined4 uVar7;
  u32 *puVar8;
  u8 *puVar9;
  uint uVar10;
  uint uVar11;
  u32 sample_offset_integer;
  u32 *puVar12;
  u32 dummy32;
  
  iVar3 = __stack_chk_guard;
  puVar12 = &spu->channels[0].sample_length;
  do {
    uVar7 = *(undefined4 *)((int)savestate_file->buffer_ptr + 4);
    puVar12[-8] = *(undefined4 *)savestate_file->buffer_ptr;
    puVar12[-7] = uVar7;
    puVar8 = (u32 *)(savestate_file->buffer_ptr + 0xc);
    savestate_file->buffer_ptr = savestate_file->buffer_ptr + 8;
    savestate_file->buffer_ptr = (u8 *)puVar8;
    puVar12[-1] = *puVar8;
    puVar9 = savestate_file->buffer_ptr;
    savestate_file->buffer_ptr = puVar9 + 4;
    *puVar12 = *(u32 *)(puVar9 + 4);
    puVar9 = savestate_file->buffer_ptr;
    savestate_file->buffer_ptr = puVar9 + 4;
    puVar12[1] = *(u32 *)(puVar9 + 4);
    puVar9 = savestate_file->buffer_ptr;
    savestate_file->buffer_ptr = puVar9 + 4;
    *(s16 *)(puVar12 + 3) = *(s16 *)(puVar9 + 4);
    puVar9 = savestate_file->buffer_ptr;
    savestate_file->buffer_ptr = puVar9 + 2;
    *(s16 *)((int)puVar12 + 0xe) = *(s16 *)(puVar9 + 2);
    puVar9 = savestate_file->buffer_ptr;
    savestate_file->buffer_ptr = puVar9 + 2;
    *(u8 *)((int)puVar12 + 0x13) = puVar9[2];
    puVar9 = savestate_file->buffer_ptr;
    savestate_file->buffer_ptr = puVar9 + 1;
    *(u8 *)(puVar12 + 5) = puVar9[1];
    puVar9 = savestate_file->buffer_ptr;
    savestate_file->buffer_ptr = puVar9 + 1;
    *(u8 *)((int)puVar12 + 0x15) = puVar9[1];
    puVar9 = savestate_file->buffer_ptr;
    savestate_file->buffer_ptr = puVar9 + 1;
    *(u8 *)(puVar12 + 4) = puVar9[1];
    puVar9 = savestate_file->buffer_ptr;
    savestate_file->buffer_ptr = puVar9 + 1;
    *(u8 *)((int)puVar12 + 0x12) = puVar9[1];
    savestate_file->buffer_ptr = savestate_file->buffer_ptr + 1;
    uVar6 = *(u8 *)(puVar12 + 4);
    switch(uVar6) {
    case '\0':
    case '\x01':
    case '\x02':
      if (version < 7) {
        uVar4 = puVar12[-1];
        puVar9 = spu->memory->main_ram;
        puVar12[-1] = uVar4 + 0x2000000;
        puVar12[-2] = (u32)(puVar9 + uVar4);
      }
      else {
        uVar11 = puVar12[-1];
        pmVar5 = spu->memory;
        uVar10 = uVar11 >> 0x17;
        uVar2 = pmVar5->memory_regions_arm7[uVar10].load_access;
        if (uVar2 == '\0') {
          puVar12[-2] = (u32)(pmVar5->memory_regions_arm7[uVar10].load_handler.direct_memory +
                             (uVar11 & pmVar5->memory_regions_arm7[uVar10].mask));
        }
        else if (uVar2 == '\x01') {
          puVar9 = (*pmVar5->memory_regions_arm7[uVar10].load_handler.get_pointer)(pmVar5,uVar11);
          puVar12[-2] = (u32)puVar9;
          uVar6 = *(u8 *)(puVar12 + 4);
        }
        else {
          puVar12[-2] = 0;
          *(u8 *)((int)puVar12 + 0x12) = '\0';
        }
      }
      if (uVar6 == '\x02') {
        uVar11 = puVar12[-7];
        uVar10 = uVar11 - 0x40 & ~((int)(uVar11 - 0x40) >> 0x1f) & 0xfffffff8;
        puVar12[-4] = uVar10;
        if (uVar10 <= uVar11) {
          do {
            spu_adpcm_decode_block((spu_channel_struct *)(puVar12 + -0x28));
          } while (puVar12[-4] <= uVar11);
        }
      }
      break;
    case '\x03':
      puVar12[-2] = (u32)(psg_samples + (((u8 *)puVar12[-3])[3] & 7));
      break;
    case '\x04':
      puVar12[-2] = (u32)noise_samples;
    }
    puVar8 = puVar12 + 0x2e;
    *(u8 *)((int)puVar12 + 0x11) = '\x03';
    puVar12 = puVar8;
  } while (puVar8 != (u32 *)(spu[1].audio.buffer + 0x20));
  puVar9 = spu->io_region;
  uVar7 = *(undefined4 *)((int)savestate_file->buffer_ptr + 4);
  *(undefined4 *)&spu->last_cycles = *(undefined4 *)savestate_file->buffer_ptr;
  *(undefined4 *)((int)&spu->last_cycles + 4) = uVar7;
  savestate_file->buffer_ptr = savestate_file->buffer_ptr + 8;
  bVar1 = puVar9[0x108];
  spu->capture[0].control = bVar1;
  if ((bVar1 & 0x80) != 0) {
    spu->capture[0].samples = spu->memory->main_ram + (*(uint *)(puVar9 + 0x110) & 0x3fffff);
    spu->capture[0].sample_length = (uint)*(ushort *)(puVar9 + 0x114) << 1;
    spu->capture[0].sample_offset = 0;
  }
  bVar1 = puVar9[0x108];
  spu->capture[1].control = bVar1;
  if ((bVar1 & 0x80) != 0) {
    spu->capture[1].samples = spu->memory->main_ram + (*(uint *)(puVar9 + 0x118) & 0x3fffff);
    spu->capture[1].sample_length = (uint)*(ushort *)(puVar9 + 0x11c) << 1;
    spu->capture[1].sample_offset = 0;
  }
  if (iVar3 == __stack_chk_guard) {
    audio_reset_buffer(&spu->audio);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


