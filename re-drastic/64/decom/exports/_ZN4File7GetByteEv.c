/*
 * Ghidra decompilation
 *
 * Function : _ZN4File7GetByteEv
 * Address  : 001b7e90
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* File::GetByte() */

void File::GetByte(void)

{
  long *in_x0;
  undefined local_9;
  long local_8;
  
  local_9 = 0;
  local_8 = ___stack_chk_guard;
  (**(code **)(*in_x0 + 0x10))(in_x0,&local_9,1,*(code **)(*in_x0 + 0x10),0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_9,0);
}


