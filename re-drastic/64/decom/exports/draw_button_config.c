/*
 * Ghidra decompilation
 *
 * Function : draw_button_config
 * Address  : 001797a0
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void draw_button_config(long param_1,char **param_2,int param_3)

{
  int iVar1;
  size_t sVar2;
  int iVar3;
  int iVar4;
  undefined auStack_48 [32];
  undefined auStack_28 [32];
  long local_8;
  
  iVar1 = *(int *)(*(long *)(param_1 + 0x10) + 0x10);
  local_8 = ___stack_chk_guard;
  sVar2 = strlen(*param_2);
  platform_print_code(auStack_48,*(undefined2 *)param_2[7]);
  platform_print_code(auStack_28,*(undefined2 *)param_2[8]);
  iVar4 = 0;
  if (param_3 != 0) {
    iVar3 = 0x17;
    if (*(char *)(param_2 + 9) != '\0') {
      iVar3 = 0x600;
    }
    param_3 = 0;
    iVar4 = iVar3;
    if (*(int *)(param_1 + 0x164) == 0) {
      iVar4 = 0;
      param_3 = iVar3;
    }
  }
  print_string(*param_2,0xffff,0,iVar1,*(int *)(param_2 + 1) << 3);
  iVar3 = ((int)sVar2 + 1) * 8;
  print_string(auStack_48,0xffff,param_3,iVar3 + iVar1,*(int *)(param_2 + 1) << 3);
  print_string(auStack_28,0xffff,iVar4,iVar3 + 0x78 + iVar1,*(int *)(param_2 + 1) << 3);
  if (local_8 - ___stack_chk_guard == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_8 - ___stack_chk_guard,0);
}


