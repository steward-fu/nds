/*
 * Ghidra decompilation
 *
 * Function : draw_menu_controls
 * Address  : 00179a30
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void draw_menu_controls(long *param_1,long param_2)

{
  long lVar1;
  undefined auStack_148 [32];
  undefined auStack_128 [32];
  undefined auStack_108 [256];
  long local_8;
  
  lVar1 = *param_1;
  local_8 = ___stack_chk_guard;
  platform_print_code(auStack_148,*(undefined2 *)(lVar1 + 0x862ba));
  platform_print_code(auStack_128,*(undefined2 *)(lVar1 + 0x862be));
  print_string("Configure Controls",0xffff,0,*(int *)(param_2 + 0x10) + 0x10,0xe0);
  __sprintf_chk(auStack_108,1,0x100,"%s: Modify",auStack_148);
  print_string(auStack_108,0x600,0,*(int *)(param_2 + 0x10) + 0x10,0xe8);
  __sprintf_chk(auStack_108,1,0x100,"%s: Unmap",auStack_128);
  print_string(auStack_108,0x17,0,*(int *)(param_2 + 0x10) + 0xd0,0xe8);
  if (local_8 - ___stack_chk_guard == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_8 - ___stack_chk_guard,0);
}


