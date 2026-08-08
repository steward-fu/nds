/*
 * Ghidra decompilation
 *
 * Function : lua_platform_fsetter_return
 * Address  : 080a7bfc
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */
/* Local variable L:lua_State *[r0:4] conflicts with parameter, skipped. */

int lua_platform_fsetter_return(void *arg,float *value)

{
  lua_Number lVar1;
  
  lVar1 = luaL_checknumber((lua_State *)arg,1);
  *value = lVar1;
  return 0;
}


