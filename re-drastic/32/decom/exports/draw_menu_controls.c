/*
 * Ghidra decompilation
 *
 * Function : draw_menu_controls
 * Address  : 0809aa28
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void draw_menu_controls(menu_state_struct *menu_state,menu_struct *menu)

{
  int iVar1;
  system_struct *psVar2;
  char label_select [32];
  char label_back [32];
  char control_config_string [256];
  
  iVar1 = __stack_chk_guard;
  psVar2 = menu_state->system;
  platform_print_code(label_select,(uint)(psVar2->config).controls_a[0x22]);
  platform_print_code(label_back,(uint)(psVar2->config).controls_a[0x24]);
  print_string("Configure Controls",0xffff,0,*(int *)&menu->field_0x8 + 0x10,0xe0);
  __sprintf_chk(control_config_string,1,0x100,"%s: Modify",label_select);
  print_string(control_config_string,0x600,0,*(int *)&menu->field_0x8 + 0x10,0xe8);
  __sprintf_chk(control_config_string,1,0x100,"%s: Unmap",label_back);
  print_string(control_config_string,0x17,0,*(int *)&menu->field_0x8 + 0xd0,0xe8);
  if (iVar1 == __stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


