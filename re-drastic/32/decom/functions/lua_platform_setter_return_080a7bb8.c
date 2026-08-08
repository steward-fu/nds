/*
 * Ghidra decompilation
 *
 * Function : lua_platform_setter_return
 * Address  : 080a7bb8
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */
/* Local variable L:lua_State *[r0:4] conflicts with parameter, skipped. */

int lua_platform_setter_return(void *arg,u32 *value)

{
  u32 uVar1;
  
  uVar1 = luaL_checkinteger((lua_State *)arg,1);
  *value = uVar1;
  return 0;
}


