/*
 * Ghidra decompilation
 *
 * Function : lua_platform_getter_return
 * Address  : 080a7b9c
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */
/* Local variable L:lua_State *[r0:4] conflicts with parameter, skipped. */

int lua_platform_getter_return(void *arg,u32 value)

{
  lua_pushinteger((lua_State *)arg,value);
  return 1;
}


