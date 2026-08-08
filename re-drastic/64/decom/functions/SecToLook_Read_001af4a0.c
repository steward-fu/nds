/*
 * Ghidra decompilation
 *
 * Function : SecToLook_Read
 * Address  : 001af4a0
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SecToLook_Read(long param_1,void *param_2,size_t *param_3)

{
  undefined8 uVar1;
  code **ppcVar2;
  void *local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar1 = 0;
  if (*param_3 != 0) {
    ppcVar2 = *(code ***)(param_1 + 8);
    uVar1 = (**ppcVar2)(ppcVar2,&local_10);
    if ((int)uVar1 == 0) {
      memcpy(param_2,local_10,*param_3);
      uVar1 = (*ppcVar2[1])(ppcVar2,*param_3);
    }
  }
  if (local_8 - ___stack_chk_guard != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar1,local_8 - ___stack_chk_guard,0);
  }
  return;
}


