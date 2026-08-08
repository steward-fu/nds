/*
 * Ghidra decompilation
 *
 * Function : draw_menu_option_string
 * Address  : 0017d080
 * Program  : drastic64
 */


void draw_menu_option_string(long param_1,long param_2,undefined8 param_3,int param_4)

{
  if (param_4 != 0) {
    param_4 = 0x17;
  }
  print_string(param_3,0xffff,param_4,*(undefined4 *)(*(long *)(param_1 + 0x10) + 0x10),
               *(int *)(param_2 + 8) << 3);
  return;
}


