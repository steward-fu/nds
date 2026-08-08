/*
 * Ghidra decompilation
 *
 * Function : draw_menu_options
 * Address  : 001798f0
 * Program  : drastic64
 */


void draw_menu_options(undefined8 param_1,long param_2)

{
  print_string("Configure Options",0xffff,0,*(int *)(param_2 + 0x10) + 0x30,0xe0);
  return;
}


