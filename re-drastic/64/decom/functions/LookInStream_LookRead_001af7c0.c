/*
 * Ghidra decompilation
 *
 * Function : LookInStream_LookRead
 * Address  : 001af7c0
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int LookInStream_LookRead(code **param_1,void *param_2,size_t *param_3)

{
  int iVar1;
  void *local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = 0;
  if (*param_3 != 0) {
    iVar1 = (**param_1)(param_1,&local_10);
    if (iVar1 == 0) {
      memcpy(param_2,local_10,*param_3);
      iVar1 = (*param_1[1])(param_1,*param_3);
    }
  }
  if (local_8 - ___stack_chk_guard != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(local_8 - ___stack_chk_guard,0);
  }
  return iVar1;
}


