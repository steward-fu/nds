/*
 * Ghidra decompilation
 *
 * Function : luaZ_read
 * Address  : 00206060
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void luaZ_read(ulong *param_1,void *param_2,ulong param_3)

{
  size_t __n;
  void *__src;
  ulong uVar1;
  ulong local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_3 != 0) {
    uVar1 = *param_1;
    do {
      if (uVar1 == 0) {
        __src = (void *)(*(code *)param_1[2])(param_1[4],param_1[3],&local_10);
        if ((__src == (void *)0x0) || (local_10 == 0)) goto LAB_002060e4;
        *param_1 = local_10;
        param_1[1] = (ulong)__src;
        uVar1 = local_10;
      }
      else {
        __src = (void *)param_1[1];
      }
      __n = param_3;
      if (uVar1 < param_3) {
        __n = uVar1;
      }
      memcpy(param_2,__src,__n);
      param_2 = (void *)((long)param_2 + __n);
      param_3 = param_3 - __n;
      uVar1 = *param_1 - __n;
      *param_1 = uVar1;
      param_1[1] = param_1[1] + __n;
    } while (param_3 != 0);
  }
  param_3 = 0;
LAB_002060e4:
  if (local_8 - ___stack_chk_guard != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(param_3,local_8 - ___stack_chk_guard,0);
  }
  return;
}


