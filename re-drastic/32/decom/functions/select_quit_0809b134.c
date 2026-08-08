/*
 * Ghidra decompilation
 *
 * Function : select_quit
 * Address  : 0809b134
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void select_quit(menu_state_struct *menu_state,menu_option_struct *menu_option)

{
                    /* WARNING: Subroutine does not return */
  quit(menu_state->system);
}


