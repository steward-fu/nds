/*
 * Ghidra decompilation
 *
 * Function : luaL_where
 * Address  : 00206920
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void luaL_where(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined auStack_88 [40];
  int local_60;
  undefined auStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = lua_getstack(param_1,param_2,auStack_88,0);
  if (iVar1 != 0) {
    lua_getinfo(param_1,&DAT_0022a660,auStack_88);
    if (0 < local_60) {
      lua_pushfstring(param_1,"%s:%d: ",auStack_50);
      goto LAB_0020698c;
    }
  }
  lua_pushlstring(param_1,"",0);
LAB_0020698c:
  if (local_8 - ___stack_chk_guard == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_8 - ___stack_chk_guard,0);
}


