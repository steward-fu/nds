/*
 * Ghidra decompilation
 *
 * Function : draw_numeric_labeled
 * Address  : 00179c40
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void draw_numeric_labeled(long param_1,undefined8 *param_2,int param_3)

{
  undefined auStack_108 [256];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  __sprintf_chk(auStack_108,1,0x100,&DAT_002217e8,*param_2,
                *(undefined8 *)(param_2[8] + (ulong)*(uint *)param_2[6] * 8));
  if (param_3 != 0) {
    param_3 = 0x17;
  }
  print_string(auStack_108,0xffff,param_3,*(undefined4 *)(*(long *)(param_1 + 0x10) + 0x10),
               *(int *)(param_2 + 1) << 3);
  if (local_8 - ___stack_chk_guard == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_8 - ___stack_chk_guard,0);
}


