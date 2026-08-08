/*
 * Ghidra decompilation
 *
 * Function : LookInStream_SeekTo
 * Address  : 001af760
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void LookInStream_SeekTo(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_10 = param_2;
  uVar1 = (**(code **)(param_1 + 0x18))(param_1,&local_10,0,*(code **)(param_1 + 0x18),0);
  if (local_8 - ___stack_chk_guard == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1,local_8 - ___stack_chk_guard,0);
}


