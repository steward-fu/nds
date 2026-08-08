/*
 * Ghidra decompilation
 *
 * Function : str_len
 * Address  : 0020d400
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 str_len(undefined8 param_1)

{
  undefined4 local_10 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  luaL_checklstring(param_1,1,local_10);
  lua_pushinteger(param_1,local_10[0]);
  if (local_8 - ___stack_chk_guard == 0) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_8 - ___stack_chk_guard,0);
}


