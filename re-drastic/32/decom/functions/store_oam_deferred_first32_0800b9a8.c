/*
 * Ghidra decompilation
 *
 * Function : store_oam_deferred_first32
 * Address  : 0800b9a8
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void store_oam_deferred_first32(memory_struct *memory,u32 address,u32 value)

{
  u16 *puVar1;
  video_2d_struct *video_2d;
  uint uVar2;
  
  if ((code *)memory->memory_regions_arm9[0xe].store_handler.direct_memory == store_oam_deferred8) {
    puVar1 = memory->oam_ram_shadow;
  }
  else {
    puVar1 = (u16 *)memcpy(memory->oam_ram_shadow,memory->oam_ram,0x800);
    memory->memory_regions_arm9[0xe].load_handler.direct_memory = (u8 *)puVar1;
    memory->memory_regions_arm9[0xe].load_access = '\0';
    memory->memory_regions_arm9[0xe].store_handler.extended_function.store8 = store_oam_deferred8;
    memory->memory_regions_arm9[0xe].store_handler.extended_function.store16 = store_oam_deferred16;
    memory->memory_regions_arm9[0xe].store_handler.extended_function.store32 = store_oam_deferred32;
  }
  uVar2 = address & 0x7ff;
  if (value != *(u32 *)((int)puVar1 + uVar2)) {
    if ((address & 0x400) == 0) {
      video_2d = memory->video->video_2d_engine;
    }
    else {
      video_2d = memory->video->video_2d_engine + 1;
    }
    video_2d_queue_event(video_2d,uVar2 + 0x200000,value,4,(uint)memory->system->scanline_number);
    *(u32 *)((int)puVar1 + uVar2) = value;
  }
  return;
}


