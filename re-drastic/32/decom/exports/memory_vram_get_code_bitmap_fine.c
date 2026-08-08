/*
 * Ghidra decompilation
 *
 * Function : memory_vram_get_code_bitmap_fine
 * Address  : 080082ac
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

u32 * memory_vram_get_code_bitmap_fine
                (memory_struct *memory,memory_region_struct *memory_region,u32 address)

{
  u8 *puVar1;
  u8 *vram_map_ptr;
  int iVar2;
  u32 *puVar3;
  
  puVar1 = (*(memory_region->load_handler).get_pointer)(memory,address);
  if (puVar1 == memory->null_buffer_video_load) {
    puVar3 = (u32 *)0x0;
  }
  else {
    iVar2 = (int)puVar1 - (int)memory->vram_a;
    if (iVar2 < 0) {
      iVar2 = iVar2 + 0x3f;
    }
    puVar3 = memory_region->code_bitmap_fine + (iVar2 >> 6);
  }
  return puVar3;
}


