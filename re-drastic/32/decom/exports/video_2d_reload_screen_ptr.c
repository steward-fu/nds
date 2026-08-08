/*
 * Ghidra decompilation
 *
 * Function : video_2d_reload_screen_ptr
 * Address  : 0804e888
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void video_2d_reload_screen_ptr(video_2d_struct *video_2d,u32 power_control_high)

{
  u8 *puVar1;
  u8 *screen_ptr;
  system_struct *psVar2;
  system_struct *system;
  u32 uVar3;
  u32 screen_number;
  
  psVar2 = video_2d->video->memory->system;
  uVar3 = (u32)video_2d->engine_number;
  if (((power_control_high & 0x80) == 0) && ((psVar2->config).fix_main_2d_screen == 0)) {
    uVar3 = uVar3 ^ 1;
  }
  puVar1 = (u8 *)get_screen_ptr(uVar3);
  if (psVar2->skip_current_frame == '\0') {
    if (((psVar2->benchmark).disable & 4) != 0) {
      puVar1 = (u8 *)0x0;
    }
  }
  else {
    puVar1 = (u8 *)0x0;
  }
  video_2d->screen_ptr = puVar1;
  uVar3 = get_screen_pitch(uVar3);
  video_2d->screen_pitch = uVar3;
  return;
}


