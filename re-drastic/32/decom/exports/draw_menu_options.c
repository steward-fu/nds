/*
 * Ghidra decompilation
 *
 * Function : draw_menu_options
 * Address  : 0809a8cc
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void draw_menu_options(menu_state_struct *menu_state,menu_struct *menu)

{
  print_string("Configure Options",0xffff,0,*(int *)&menu->field_0x8 + 0x30,0xe0);
  return;
}


