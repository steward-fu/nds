/*
 * Ghidra decompilation
 *
 * Function : destroy_menu
 * Address  : 0809e848
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void destroy_menu(menu_state_struct *menu_state,menu_struct *menu)

{
  uint uVar1;
  void *__ptr;
  menu_option_struct *current_menu_option;
  
  if (*(int *)&menu->field_0xc != 0) {
    uVar1 = 0;
    do {
      __ptr = *(void **)(*(int *)&menu->field_0x18 + uVar1 * 4);
      uVar1 = uVar1 + 1;
      if (*(code **)((int)__ptr + 0x14) != (code *)0x0) {
        (**(code **)((int)__ptr + 0x14))(menu_state,__ptr);
      }
      free(__ptr);
    } while (uVar1 < *(uint *)&menu->field_0xc);
  }
  free(*(void **)&menu->field_0x18);
  free(menu);
  return;
}


