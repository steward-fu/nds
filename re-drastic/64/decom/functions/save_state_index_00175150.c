/*
 * Ghidra decompilation
 *
 * Function : save_state_index
 * Address  : 00175150
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void save_state_index(long param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined auStack_848 [1056];
  undefined auStack_428 [1056];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  __sprintf_chk(auStack_848,1,0x420,"%s%csavestates",param_1 + 0x8ab80,0x2f);
  __sprintf_chk(auStack_428,1,0x420,"%s_%d.dss",param_1 + 0x8b380,param_2);
  uVar1 = save_state(param_1,auStack_848,auStack_428,param_3,param_4);
  if (local_8 - ___stack_chk_guard == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1,local_8 - ___stack_chk_guard,0);
}


