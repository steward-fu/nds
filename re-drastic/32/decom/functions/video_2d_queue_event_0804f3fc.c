/*
 * Ghidra decompilation
 *
 * Function : video_2d_queue_event
 * Address  : 0804f3fc
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void video_2d_queue_event
               (video_2d_struct *video_2d,u32 address,u32 value,u32 byte_width,u32 scanline_number)

{
  u32 uVar1;
  u32 current_event_index;
  
  uVar1 = (video_2d->event_list).current_index;
  if (uVar1 == 0x8000) {
    puts("VIDEO EVENT BUFFER FULL");
  }
  (video_2d->event_list).events[uVar1].scanline_number = (u8)scanline_number;
  (video_2d->event_list).events[uVar1].address = address;
  (video_2d->event_list).events[uVar1].value = value;
  (video_2d->event_list).events[uVar1].byte_width = (u8)byte_width;
  (video_2d->event_list).current_index = uVar1 + 1;
  return;
}


