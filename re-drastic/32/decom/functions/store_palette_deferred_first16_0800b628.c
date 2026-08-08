/*
 * Ghidra decompilation
 *
 * Function : store_palette_deferred_first16
 * Address  : 0800b628
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void store_palette_deferred_first16(memory_struct *memory,u32 address,u16 value)

{
  u16 *puVar1;
  video_2d_struct *video_2d;
  uint uVar2;
  
  if ((code *)memory->memory_regions_arm9[10].store_handler.direct_memory == store_palette_deferred8
     ) {
    puVar1 = memory->palette_ram_shadow;
  }
  else {
    puVar1 = (u16 *)memcpy(memory->palette_ram_shadow,memory->palette_ram,0x800);
    memory->memory_regions_arm9[10].load_handler.direct_memory = (u8 *)puVar1;
    memory->memory_regions_arm9[10].load_access = '\0';
    memory->memory_regions_arm9[10].store_handler.extended_function.store8 = store_palette_deferred8
    ;
    memory->memory_regions_arm9[10].store_handler.extended_function.store16 =
         store_palette_deferred16;
    memory->memory_regions_arm9[10].store_handler.extended_function.store32 =
         store_palette_deferred32;
  }
  uVar2 = address & 0x7ff;
  if ((uint)*(ushort *)((int)puVar1 + uVar2) != (uint)value) {
    if ((address & 0x400) == 0) {
      video_2d = memory->video->video_2d_engine;
    }
    else {
      video_2d = memory->video->video_2d_engine + 1;
    }
    video_2d_queue_event
              (video_2d,uVar2 + 0x100000,(uint)value,2,(uint)memory->system->scanline_number);
    *(u16 *)((int)puVar1 + uVar2) = value;
  }
  return;
}


