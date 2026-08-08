/*
 * Ghidra decompilation
 *
 * Function : store_palette_deferred8
 * Address  : 08008770
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void store_palette_deferred8(memory_struct *memory,u32 address,u8 value)

{
  video_2d_struct *video_2d;
  uint uVar1;
  
  uVar1 = address & 0x7ff;
  if ((uint)*(byte *)((int)memory->palette_ram_shadow + uVar1) != (uint)value) {
    if ((address & 0x400) == 0) {
      video_2d = memory->video->video_2d_engine;
    }
    else {
      video_2d = memory->video->video_2d_engine + 1;
    }
    video_2d_queue_event
              (video_2d,uVar1 + 0x100000,(uint)value,1,(uint)memory->system->scanline_number);
    *(u8 *)((int)memory->palette_ram_shadow + uVar1) = value;
  }
  return;
}


