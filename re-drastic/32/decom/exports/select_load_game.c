/*
 * Ghidra decompilation
 *
 * Function : select_load_game
 * Address  : 0809d900
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void select_load_game(menu_state_struct *menu_state,menu_option_struct *menu_option)

{
  int iVar1;
  s32 sVar2;
  u32 uVar3;
  system_struct *psVar4;
  system_struct *system;
  char file_loaded [1024];
  
  iVar1 = __stack_chk_guard;
  sVar2 = load_file(menu_state,nds_ext,file_loaded);
  if (sVar2 != -1) {
    psVar4 = menu_state->system;
    sVar2 = load_nds(&psVar4->gamecard,file_loaded);
    if (-1 < sVar2) {
      uVar3 = (psVar4->config).screen_orientation;
      menu_state->game_reset = 1;
      menu_state->exit_menu = 1;
      menu_state->restore_screen = 0;
      menu_state->screen_orientation = uVar3;
    }
  }
  if (iVar1 == __stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


