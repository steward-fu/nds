/*
 * Ghidra decompilation
 *
 * Function : str_lower
 * Address  : 0020d7d0
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 str_lower(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  __int32_t **pp_Var3;
  ulong uVar4;
  ulong local_1030;
  undefined auStack_1028 [4128];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar1 = luaL_checklstring(param_1,1,&local_1030,0);
  lVar2 = luaL_buffinitsize(param_1,auStack_1028,local_1030);
  if (local_1030 != 0) {
    pp_Var3 = __ctype_tolower_loc();
    uVar4 = 0;
    do {
      *(char *)(lVar2 + uVar4) = (char)(*pp_Var3)[*(byte *)(lVar1 + uVar4)];
      uVar4 = uVar4 + 1;
    } while (uVar4 < local_1030);
  }
  luaL_pushresultsize(auStack_1028);
  if (local_8 - ___stack_chk_guard == 0) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_8 - ___stack_chk_guard,0);
}


