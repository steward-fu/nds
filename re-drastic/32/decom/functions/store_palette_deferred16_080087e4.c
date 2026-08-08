/*
 * Ghidra decompilation
 *
 * Function : store_palette_deferred16
 * Address  : 080087e4
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void store_palette_deferred16(memory_struct *memory,u32 address,u16 value)

{
  video_2d_struct *video_2d;
  uint uVar1;
  
  uVar1 = address & 0x7ff;
  if ((uint)*(ushort *)((int)memory->palette_ram_shadow + uVar1) != (uint)value) {
    if ((address & 0x400) == 0) {
      video_2d = memory->video->video_2d_engine;
    }
    else {
      video_2d = memory->video->video_2d_engine + 1;
    }
    video_2d_queue_event
              (video_2d,uVar1 + 0x100000,(uint)value,2,(uint)memory->system->scanline_number);
    *(u16 *)((int)memory->palette_ram_shadow + uVar1) = value;
  }
  return;
}


