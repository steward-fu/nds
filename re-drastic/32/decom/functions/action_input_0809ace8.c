/*
 * Ghidra decompilation
 *
 * Function : action_input
 * Address  : 0809ace8
 * Program  : drastic
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Unknown calling convention */

u32 action_input(menu_state_struct *menu_state,menu_option_struct *menu_option,
                gui_input_struct *gui_input)

{
  int iVar1;
  int iVar2;
  draw_function_type p_Var3;
  u32 str_length;
  menu_option_input_struct *input;
  u32 uVar4;
  uint uVar5;
  draw_function_type p_Var6;
  u32 cursor_index;
  char *str;
  char *__s;
  char (*str_a) [839346];
  char *__dest;
  char *__dest_00;
  char (*str_b) [839370];
  sizetype anon_var_0;
  sizetype anon_var_0_1;
  char *apcStack_40 [3];
  char acStack_31 [5];
  int local_2c;
  
  __s = menu_option[1].name;
  p_Var6 = menu_option[1].draw_function;
  local_2c = __stack_chk_guard;
  p_Var3 = (draw_function_type)strlen(__s);
  uVar4 = gui_input->action_type;
  uVar5 = (uint)((draw_function_type)menu_option[1].line_number + 8) & 0xfffffff8;
  iVar1 = -uVar5;
  iVar2 = uVar5 * -2;
  __dest = acStack_31 + iVar1 + 1;
  __dest_00 = acStack_31 + iVar2 + 1;
  switch(uVar4) {
  case 2:
    if (p_Var6 != (draw_function_type)0x0) {
      p_Var6 = p_Var6 + -1;
    }
    break;
  case 3:
    if (p_Var6 < p_Var3) {
LAB_0809add8:
      p_Var6 = p_Var6 + 1;
    }
    break;
  default:
    goto switchD_0809ad54_caseD_4;
  case 6:
    if (p_Var6 == (draw_function_type)0x0) {
      if (p_Var3 != (draw_function_type)0x0) {
        memcpy(__dest,__s,(size_t)(p_Var3 + 1));
        strcpy(__s,acStack_31 + iVar1 + 2);
      }
    }
    else {
      memcpy(__dest,__s,(size_t)(p_Var3 + 1));
      strcpy(__dest_00,__s + (int)p_Var6);
      p_Var6 = p_Var6 + -1;
      __dest[(int)p_Var6] = '\0';
      *(char **)((int)apcStack_40 + iVar2) = __dest;
      *(char **)((int)apcStack_40 + iVar2 + 4) = __dest_00;
      __sprintf_chk(__s,1,0xffffffff,&DAT_0813f5c0);
    }
    break;
  case 10:
    if (p_Var3 < (draw_function_type)menu_option[1].line_number) {
      memcpy(__dest,__s,(size_t)(p_Var3 + 1));
      strcpy(__dest_00,__s + (int)p_Var6);
      uVar4 = gui_input->key_letter;
      __dest[(int)p_Var6] = '\0';
      p_Var6 = p_Var6 + 1;
      *(char **)((int)apcStack_40 + iVar2) = __dest;
      *(u32 *)((int)apcStack_40 + iVar2 + 4) = uVar4;
      *(char **)((int)apcStack_40 + iVar2 + 8) = __dest_00;
      __sprintf_chk(__s,1,0xffffffff,"%s%c%s");
    }
    else if (p_Var6 < p_Var3) {
      __s[(int)p_Var6] = (char)gui_input->key_letter;
      goto LAB_0809add8;
    }
  }
  uVar4 = 0xb;
  menu_option[1].draw_function = p_Var6;
switchD_0809ad54_caseD_4:
  if (local_2c == __stack_chk_guard) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


