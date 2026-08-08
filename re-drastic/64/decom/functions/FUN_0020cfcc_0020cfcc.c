/*
 * Ghidra decompilation
 *
 * Function : FUN_0020cfcc
 * Address  : 0020cfcc
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0020cfcc(undefined8 param_1)

{
  undefined4 uVar1;
  int iStack_c;
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  uVar1 = lua_tointegerx(param_1,1,&iStack_c,0);
  if (iStack_c == 0) {
    luaL_checkany(param_1,1);
    lua_pushnil(param_1);
  }
  else {
    lua_pushinteger(param_1,uVar1);
  }
  if (lStack_8 - ___stack_chk_guard == 0) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lStack_8 - ___stack_chk_guard,0);
}


