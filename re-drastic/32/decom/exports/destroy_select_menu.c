/*
 * Ghidra decompilation
 *
 * Function : destroy_select_menu
 * Address  : 0809b69c
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */
/* Local variable select_menu:menu_option_select_menu_struct *[r1:4] conflicts with parameter,
   skipped. */

void destroy_select_menu(menu_state_struct *menu_state,menu_option_struct *menu_option)

{
  uint uVar1;
  void *__ptr;
  menu_option_struct *current_menu_option;
  char *__ptr_00;
  
  __ptr_00 = menu_option[1].name;
  if (*(int *)(__ptr_00 + 0xc) != 0) {
    uVar1 = 0;
    do {
      __ptr = *(void **)(*(int *)(__ptr_00 + 0x18) + uVar1 * 4);
      uVar1 = uVar1 + 1;
      if (*(code **)((int)__ptr + 0x14) != (code *)0x0) {
        (**(code **)((int)__ptr + 0x14))(menu_state,__ptr);
      }
      free(__ptr);
    } while (uVar1 < *(uint *)(__ptr_00 + 0xc));
  }
  free(*(void **)(__ptr_00 + 0x18));
  free(__ptr_00);
  return;
}


