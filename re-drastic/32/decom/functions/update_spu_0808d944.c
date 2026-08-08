/*
 * Ghidra decompilation
 *
 * Function : update_spu
 * Address  : 0808d944
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void update_spu(system_struct *system)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  s32 sample_count;
  u32 sample_count_00;
  u8 *aligned_storage;
  s32 *render_buffer;
  u32 uVar5;
  spu_struct *spu;
  uint uVar6;
  u64 _aligned_storage [4097];
  
  iVar1 = __stack_chk_guard;
  uVar6 = (system->spu).reciprocal_cycles_per_output_sample;
  uVar2 = *(uint *)&(system->spu).last_cycles;
  iVar3 = *(int *)((int)&(system->spu).last_cycles + 4);
  render_buffer = (s32 *)_aligned_storage;
  uVar4 = *(int *)&system->global_cycles * 0x400 - uVar2;
  sample_count_00 =
       uVar6 * ((int)uVar4 >> 0x1f) + (int)((ulonglong)uVar6 * (ulonglong)uVar4 >> 0x20);
  if (((uint)_aligned_storage & 8) != 0) {
    render_buffer = (s32 *)(_aligned_storage + 1);
  }
  if (-1 < (int)sample_count_00 >> 0x1f) {
    uVar5 = (system->spu).audio.buffer_index;
    spu = &system->spu;
    uVar4 = (system->spu).cycles_per_output_sample * sample_count_00;
    *(uint *)&(system->spu).last_cycles = uVar2 + uVar4;
    *(uint *)((int)&(system->spu).last_cycles + 4) = iVar3 + (uint)CARRY4(uVar2,uVar4);
    spu_clear_samples(render_buffer,sample_count_00);
    if ((system->cpu_arm7).state < 2) {
      spu_render_samples(spu,render_buffer,sample_count_00);
    }
    spu_render_capture(spu,render_buffer,sample_count_00,0);
    spu_render_capture(spu,render_buffer,sample_count_00,1);
    if ((system->config).enable_sound == 0) {
      memset((spu->audio).buffer + uVar5,0,sample_count_00 * 4);
    }
    else {
      spu_clamp_block((spu->audio).buffer + uVar5,render_buffer,sample_count_00 * 2);
    }
    (system->spu).audio.buffer_index = uVar5 + sample_count_00 * 2;
  }
  if (iVar1 == __stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


