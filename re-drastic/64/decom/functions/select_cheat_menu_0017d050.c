/*
 * Ghidra decompilation
 *
 * Function : select_cheat_menu
 * Address  : 0017d050
 * Program  : drastic64
 */


void select_cheat_menu(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  if (((*(char *)(lVar1 + 0x8b380) != '\0') && (*(int *)(lVar1 + 0x77c) != 0)) &&
     (*(int *)(lVar1 + 0x780) != 0)) {
    cheat_menu();
    return;
  }
  return;
}


