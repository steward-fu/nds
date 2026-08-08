/*
 * Ghidra decompilation
 *
 * Function : spu_get_microphone_sample
 * Address  : 0808d468
 * Program  : drastic
 */


s16 spu_get_microphone_sample(spu_struct *spu,u64 global_cycles)

{
  int in_r2;
  uint uVar1;
  
  uVar1 = (in_r2 - *(int *)&spu->capture_cycles) * 0x400;
  uVar1 = uVar1 & ~((int)uVar1 >> 0x1f);
  return (spu->audio).capture_buffer
         [(spu->reciprocal_cycles_per_output_sample * ((int)uVar1 >> 0x1f) +
          (int)((ulonglong)spu->reciprocal_cycles_per_output_sample * (ulonglong)uVar1 >> 0x20)) * 2
         ];
}


