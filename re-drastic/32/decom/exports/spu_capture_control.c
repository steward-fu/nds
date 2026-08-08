/*
 * Ghidra decompilation
 *
 * Function : spu_capture_control
 * Address  : 0808ddd4
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void spu_capture_control(spu_struct *spu,u32 capture_number,u32 value)

{
  u8 *puVar1;
  
  spu->capture[capture_number].control = (u8)value;
  if ((value & 0x80) == 0) {
    return;
  }
  puVar1 = spu->io_region;
  spu->capture[capture_number].samples =
       spu->memory->main_ram + (*(uint *)(puVar1 + (capture_number + 0x22) * 8) & 0x3fffff);
  spu->capture[capture_number].sample_length =
       (uint)*(ushort *)(puVar1 + (capture_number + 0x22) * 8 + 4) << 1;
  spu->capture[capture_number].sample_offset = 0;
  return;
}


