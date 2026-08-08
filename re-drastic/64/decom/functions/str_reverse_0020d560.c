/*
 * Ghidra decompilation
 *
 * Function : str_reverse
 * Address  : 0020d560
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 str_reverse(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong local_1030;
  undefined auStack_1028 [4128];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar1 = luaL_checklstring(param_1,1,&local_1030,0);
  lVar2 = luaL_buffinitsize(param_1,auStack_1028,local_1030);
  if (local_1030 != 0) {
    uVar3 = 0;
    do {
      *(undefined *)(lVar2 + uVar3) = *(undefined *)(lVar1 + local_1030 + ~uVar3);
      uVar3 = uVar3 + 1;
    } while (uVar3 < local_1030);
  }
  luaL_pushresultsize(auStack_1028);
  if (local_8 - ___stack_chk_guard == 0) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_8 - ___stack_chk_guard,0);
}


