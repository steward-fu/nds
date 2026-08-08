/*
 * Ghidra decompilation
 *
 * Function : backup_auto_save_step
 * Address  : 00172500
 * Program  : drastic64
 */


void backup_auto_save_step(long param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x241c) != 0) {
    iVar1 = *(int *)(param_1 + 0x241c) + -1;
    *(int *)(param_1 + 0x241c) = iVar1;
    if ((iVar1 == 0) && (*(char *)(param_1 + 0x2000) != '\0')) {
      backup_save_part_0();
      return;
    }
  }
  return;
}


