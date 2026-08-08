/*
 * Ghidra decompilation
 *
 * Function : luaL_len
 * Address  : 00208380
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 luaL_len(undefined8 param_1)

{
  undefined4 uVar1;
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lua_len();
  uVar1 = lua_tointegerx(param_1,0xffffffff,&local_c);
  if (local_c == 0) {
    luaL_error(param_1,"object length is not an integer");
  }
  lua_settop(param_1,0xfffffffe);
  if (local_8 - ___stack_chk_guard == 0) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_8 - ___stack_chk_guard,0);
}


