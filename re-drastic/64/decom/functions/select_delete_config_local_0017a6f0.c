/*
 * Ghidra decompilation
 *
 * Function : select_delete_config_local
 * Address  : 0017a6f0
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void select_delete_config_local(long *param_1)

{
  long lVar1;
  char acStack_828 [2080];
  long local_8;
  
  lVar1 = *param_1;
  local_8 = ___stack_chk_guard;
  if (*(char *)(lVar1 + 0x8b380) != '\0') {
    __sprintf_chk(acStack_828,1,0x820,"%s%cconfig%c%s.cfg",lVar1 + 0x8ab80,0x2f,0x2f,lVar1 + 0x8b380
                 );
    unlink(acStack_828);
  }
  lVar1 = param_1[2];
  if (*(code **)(lVar1 + 8) != (code *)0x0) {
    (**(code **)(lVar1 + 8))(param_1,lVar1,1);
  }
  lVar1 = *(long *)(lVar1 + 0x28);
  if (lVar1 == 0) {
    if (*(char *)(*param_1 + 0x8b380) != '\0') {
      *(undefined4 *)(param_1 + 9) = 1;
    }
  }
  else {
    if (*(code **)(lVar1 + 8) != (code *)0x0) {
      (**(code **)(lVar1 + 8))(param_1,lVar1,0);
    }
    param_1[2] = lVar1;
  }
  if (local_8 - ___stack_chk_guard == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_8 - ___stack_chk_guard,0);
}


