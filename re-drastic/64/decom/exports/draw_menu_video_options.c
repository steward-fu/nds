/*
 * Ghidra decompilation
 *
 * Function : draw_menu_video_options
 * Address  : 00179910
 * Program  : drastic64
 */


void draw_menu_video_options(undefined8 param_1,long param_2)

{
  print_string("Configure Video Options",0xffff,0,*(int *)(param_2 + 0x10) + 0x30,0xe0);
  return;
}


