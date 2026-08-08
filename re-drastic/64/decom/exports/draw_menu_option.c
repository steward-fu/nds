/*
 * Ghidra decompilation
 *
 * Function : draw_menu_option
 * Address  : 00179930
 * Program  : drastic64
 */


void draw_menu_option(long param_1,undefined8 *param_2,int param_3)

{
  if (param_3 != 0) {
    param_3 = 0x17;
  }
  print_string(*param_2,0xffff,param_3,*(undefined4 *)(*(long *)(param_1 + 0x10) + 0x10),
               *(int *)(param_2 + 1) << 3);
  return;
}


