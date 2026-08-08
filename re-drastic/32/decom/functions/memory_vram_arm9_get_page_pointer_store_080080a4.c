/*
 * Ghidra decompilation
 *
 * Function : memory_vram_arm9_get_page_pointer_store
 * Address  : 080080a4
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

u8 * memory_vram_arm9_get_page_pointer_store(memory_struct *memory,u32 address)

{
  byte bVar1;
  uint uVar2;
  u32 dirty_bit_number;
  u32 _offset;
  u8 *puVar3;
  u8 *page_pointer;
  video_struct *pvVar4;
  bool bVar5;
  
  pvVar4 = memory->video;
  puVar3 = (u8 *)(*(int *)((int)pvVar4->vram_map + ((address & 0xffc000) >> 0xc)) +
                 (address & 0xffc000));
  bVar5 = puVar3 == memory->null_buffer_video_load;
  if (bVar5) {
    puVar3 = memory->null_buffer_store + 0x1ffc0;
  }
  uVar2 = (uint)pvVar4->vram_map_dirty_bit_numbers[(address & 0xffffff) >> 0xe];
  if (bVar5) {
    puVar3 = puVar3 + 0x40;
  }
  if (uVar2 < 0x20) {
    bVar1 = pvVar4->vram_map_dirty_bit_numbers[(address & 0xffffff) >> 0xe] >> 3;
    pvVar4->vram_abcd_dirty = pvVar4->vram_abcd_dirty | 1 << uVar2;
    (pvVar4->capture_settings).hires_valid[bVar1] =
         (pvVar4->capture_settings).hires_valid[bVar1] & ~(byte)(1 << (uVar2 & 7));
  }
  else {
    pvVar4->vram_efg_dirty = pvVar4->vram_efg_dirty | 1 << (uVar2 - 0x20 & 0xff);
  }
  return puVar3 + (address & 0x3fff);
}


