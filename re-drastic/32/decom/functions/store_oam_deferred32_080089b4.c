/*
 * Ghidra decompilation
 *
 * Function : store_oam_deferred32
 * Address  : 080089b4
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void store_oam_deferred32(memory_struct *memory,u32 address,u32 value)

{
  video_2d_struct *video_2d;
  uint uVar1;
  
  uVar1 = address & 0x7ff;
  if (*(u32 *)((int)memory->oam_ram_shadow + uVar1) != value) {
    if ((address & 0x400) == 0) {
      video_2d = memory->video->video_2d_engine;
    }
    else {
      video_2d = memory->video->video_2d_engine + 1;
    }
    video_2d_queue_event(video_2d,uVar1 + 0x200000,value,4,(uint)memory->system->scanline_number);
    *(u32 *)((int)memory->oam_ram_shadow + uVar1) = value;
  }
  return;
}


