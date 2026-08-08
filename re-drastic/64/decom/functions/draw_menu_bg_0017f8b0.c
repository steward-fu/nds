/*
 * Ghidra decompilation
 *
 * Function : draw_menu_bg
 * Address  : 0017f8b0
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void draw_menu_bg(undefined8 *param_1)

{
  void *__s;
  void *__s_00;
  char *pcVar1;
  undefined4 uVar2;
  long local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  clear_screen_menu(0,&__stack_chk_guard,0);
  if (param_1[7] != 0) {
    uVar2 = 0x24;
    if (*(int *)(param_1 + 8) == 0) {
      uVar2 = 200;
    }
    blit_screen_menu(param_1[7],uVar2,0x28,400,0x96);
  }
  uVar2 = 0x204;
  if (*(int *)(param_1 + 8) != 0) {
    uVar2 = 0x160;
  }
  set_font_narrow_small();
  print_string("Version r2.5.2.2",0xffff,0,uVar2,0xc9);
  set_font_wide();
  if (*(int *)(param_1 + 8) != 0) {
    if ((*(long *)(param_1[2] + 0x28) == 0) && (*(int *)(param_1[2] + 0x18) == 5)) {
      local_10 = savestate_index_timestamp(*param_1,*(undefined4 *)(param_1[1] + 0x458));
      set_font_narrow_small();
      if (local_10 == 0) {
        print_string("(No savestate)",0xffff,0,0x220,0xe9);
        set_font_wide();
      }
      else {
        __s = malloc(0x18000);
        __s_00 = malloc(0x18000);
        pcVar1 = ctime(&local_10);
        memset(__s,0,0x18000);
        memset(__s_00,0,0x18000);
        load_state_index(*param_1,*(undefined4 *)(param_1[1] + 0x458),__s,__s_00,1);
        blit_screen_menu(__s,0x1d8,0x30,0x100,0xc0);
        blit_screen_menu(__s_00,0x1d8,0xf0,0x100,0xc0);
        print_string(pcVar1,0xffff,0,0x1dc,0x19c);
        free(__s);
        free(__s_00);
        set_font_wide();
      }
    }
    else {
      blit_screen_menu(param_1[5],0x1d8,0x30,0x100,0xc0);
      blit_screen_menu(param_1[6],0x1d8,0xf0,0x100,0xc0);
    }
  }
  if (local_8 - ___stack_chk_guard == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_8 - ___stack_chk_guard,0);
}


