/*
 * Ghidra decompilation
 *
 * Function : uninitialize_memory
 * Address  : 080168d4
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void uninitialize_memory(memory_struct *memory)

{
  munmap((void *)(memory->memory_map_offset + 0x8000),0x4ff8000);
  close(memory->memory_map_fd);
  munmap(memory->map_vram_buffer,0xa8000);
  munmap(memory->vram_2d_remap_buffer,0x800000);
  close(memory->map_vram_fd);
  return;
}


