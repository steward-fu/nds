/*
 * Ghidra decompilation
 *
 * Function : draw_input
 * Address  : 0809aeb8
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void draw_input(menu_state_struct *menu_state,menu_option_struct *menu_option,u32 selected)

{
  u32 y_00;
  int iVar1;
  size_t sVar2;
  u32 str_length;
  char *pcVar3;
  size_t sVar4;
  menu_option_input_struct *input;
  sizetype anon_var_0;
  uint uVar5;
  u32 uVar6;
  u32 y;
  u32 space_length;
  u32 uVar7;
  u32 x;
  char *str;
  char *__s;
  char *__dest;
  char (*str_a) [840715];
  undefined *local_40;
  char *local_3c;
  char *local_38;
  draw_function_type local_34;
  char str_cursor [2];
  int local_2c;
  
  __s = menu_option[1].name;
  local_2c = __stack_chk_guard;
  sVar2 = strlen(__s);
  uVar7 = menu_state->current_menu->column_start;
  y_00 = menu_option->line_number << 3;
  sVar2 = menu_option[1].line_number - sVar2;
  if (selected == 0) {
    print_string(menu_option->name,0xffff,0,uVar7,y_00);
    sVar4 = strlen(menu_option->name);
    print_string(__s,0x7bef,0,uVar7 + (sVar2 + sVar4) * 8,y_00);
  }
  else {
    print_string(menu_option->name,0xffff,0x10,uVar7,y_00);
    local_34 = menu_option[1].draw_function;
    uVar5 = menu_option[1].line_number + 8 & 0xfffffff8;
    iVar1 = uVar5 * -3;
    __dest = (char *)((int)&local_40 - uVar5);
    local_38 = (char *)((int)&local_40 + uVar5 * -2);
    local_40 = &stack0xffffffb8;
    strcpy(__dest,__s);
    local_3c = (char *)((int)&local_40 + iVar1);
    strcpy(local_38,__s + (int)(local_34 + 1));
    pcVar3 = menu_option->name;
    __dest[(int)local_34] = '\0';
    sVar4 = strlen(pcVar3);
    uVar7 = uVar7 + sVar4 * 8;
    memset(local_3c,0x20,sVar2);
    pcVar3 = local_3c;
    uVar6 = uVar7 + sVar2 * 8;
    local_3c[sVar2] = '\0';
    *(u32 *)(&stack0xffffffb8 + iVar1) = y_00;
    print_string(pcVar3,0x7bef,0x10,uVar7,*(u32 *)(&stack0xffffffb8 + iVar1));
    str_cursor[0] = __s[(int)local_34];
    str_cursor[1] = '\0';
    *(u32 *)(&stack0xffffffb8 + iVar1) = y_00;
    print_string(__dest,0x7bef,0x10,uVar6,*(u32 *)(&stack0xffffffb8 + iVar1));
    sVar2 = strlen(__dest);
    uVar6 = uVar6 + sVar2 * 8;
    *(u32 *)(&stack0xffffffb8 + iVar1) = y_00;
    print_string(str_cursor,0xffe0,0x1f,uVar6,*(u32 *)(&stack0xffffffb8 + iVar1));
    *(u32 *)(&stack0xffffffb8 + iVar1) = y_00;
    print_string(local_38,0x7bef,0x10,uVar6 + 8,*(u32 *)(&stack0xffffffb8 + iVar1));
  }
  if (local_2c == __stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


