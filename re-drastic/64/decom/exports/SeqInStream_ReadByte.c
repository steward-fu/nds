/*
 * Ghidra decompilation
 *
 * Function : SeqInStream_ReadByte
 * Address  : 001af6f0
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SeqInStream_ReadByte(code **param_1,undefined8 param_2)

{
  uint uVar1;
  ulong uVar2;
  long local_10;
  long local_8;
  
  local_10 = 1;
  local_8 = ___stack_chk_guard;
  uVar2 = (**param_1)(param_1,param_2,&local_10,*param_1,&__stack_chk_guard,0);
  if ((int)uVar2 == 0) {
    uVar1 = 0;
    if (local_10 != 1) {
      uVar1 = 6;
    }
    uVar2 = (ulong)uVar1;
  }
  if (local_8 - ___stack_chk_guard == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2,local_8 - ___stack_chk_guard,0);
}


