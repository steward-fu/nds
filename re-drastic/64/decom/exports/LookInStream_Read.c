/*
 * Ghidra decompilation
 *
 * Function : LookInStream_Read
 * Address  : 001af940
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void LookInStream_Read(long param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  long local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_3 != 0) {
    do {
      local_10 = param_3;
      uVar1 = (**(code **)(param_1 + 0x10))(param_1,param_2,&local_10);
      if ((int)uVar1 != 0) goto LAB_001af9b8;
      if (local_10 == 0) {
        uVar1 = 6;
        goto LAB_001af9b8;
      }
      param_2 = param_2 + local_10;
      param_3 = param_3 - local_10;
    } while (param_3 != 0);
  }
  uVar1 = 0;
LAB_001af9b8:
  if (local_8 - ___stack_chk_guard != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar1,local_8 - ___stack_chk_guard,0);
  }
  return;
}


