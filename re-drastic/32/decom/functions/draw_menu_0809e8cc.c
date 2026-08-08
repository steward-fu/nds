/*
 * Ghidra decompilation
 *
 * Function : draw_menu
 * Address  : 0809e8cc
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void draw_menu(menu_state_struct *menu_state,menu_struct *menu)

{
  int iVar1;
  menu_option_struct *current_option;
  uint uVar2;
  uint uVar3;
  
  if (*(int *)&menu->field_0xc != 0) {
    uVar2 = 0;
    do {
      iVar1 = *(int *)(*(int *)&menu->field_0x18 + uVar2 * 4);
      uVar3 = uVar2 + 1;
      (**(code **)(iVar1 + 8))(menu_state,iVar1,*(uint *)&menu->field_0x10 == uVar2);
      uVar2 = uVar3;
    } while (uVar3 < *(uint *)&menu->field_0xc);
  }
  if (*(code **)menu == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0809e948. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)menu)(menu_state,menu);
  return;
}


