/*
 * Ghidra decompilation
 *
 * Function : savestate_index_timestamp
 * Address  : 001752f0
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void savestate_index_timestamp(long param_1,undefined4 param_2)

{
  int iVar1;
  undefined auStack_8a8 [2208];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  __sprintf_chk(auStack_8a8 + 0x80,1,0x820,"%s%csavestates%c%s_%d.dss",param_1 + 0x8ab80,0x2f,0x2f,
                param_1 + 0x8b380,param_2);
  iVar1 = __xstat(0,auStack_8a8 + 0x80,(stat *)auStack_8a8);
  if (iVar1 != 0) {
    auStack_8a8._88_8_ = 0;
  }
  if (local_8 - ___stack_chk_guard == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(auStack_8a8._88_8_,local_8 - ___stack_chk_guard,0);
}


