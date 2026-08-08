/*
 * Ghidra decompilation
 *
 * Function : luaL_addvalue
 * Address  : 00207ad0
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void luaL_addvalue(long **param_1)

{
  void *__src;
  void *__dest;
  long lVar1;
  size_t local_10;
  long local_8;
  
  lVar1 = (long)param_1[3];
  local_8 = ___stack_chk_guard;
  __src = (void *)lua_tolstring(lVar1,0xffffffff,&local_10);
  if ((long **)*param_1 != param_1 + 4) {
    lua_rotate(lVar1,0xfffffffe,1);
  }
  __dest = (void *)luaL_prepbuffsize(param_1,local_10);
  memcpy(__dest,__src,local_10);
  param_1[2] = (long *)((long)param_1[2] + local_10);
  lua_rotate(lVar1,(param_1 + 4 == (long **)*param_1) - 2,0xffffffff);
  lua_settop(lVar1,0xfffffffe);
  if (local_8 - ___stack_chk_guard == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_8 - ___stack_chk_guard,0);
}


