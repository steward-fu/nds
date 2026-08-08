/*
 * Ghidra decompilation
 *
 * Function : memory_vram_arm7_get_page_pointer_store
 * Address  : 0800818c
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

u8 * memory_vram_arm7_get_page_pointer_store(memory_struct *memory,u32 address)

{
  u8 *puVar1;
  u8 *page_pointer;
  bool bVar2;
  
  puVar1 = *(u8 **)((int)memory->video + (0x44c - ((int)(address << 0xe) >> 0x1f)) * 4);
  bVar2 = puVar1 == memory->null_buffer_load;
  if (bVar2) {
    puVar1 = memory->null_buffer_load + 0x1ffc0;
  }
  if (bVar2) {
    puVar1 = puVar1 + 0x40;
  }
  return puVar1 + (address & 0x1ffff);
}


