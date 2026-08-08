/*
 * Ghidra decompilation
 *
 * Function : load_state_index
 * Address  : 00175230
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void load_state_index(long param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                     undefined4 param_5)

{
  undefined8 uVar1;
  undefined auStack_828 [2080];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  __sprintf_chk(auStack_828,1,0x820,"%s%csavestates%c%s_%d.dss",param_1 + 0x8ab80,0x2f,0x2f,
                param_1 + 0x8b380,param_2);
  uVar1 = load_state(param_1,auStack_828,param_3,param_4,param_5);
  if (local_8 - ___stack_chk_guard == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1,local_8 - ___stack_chk_guard,0);
}


