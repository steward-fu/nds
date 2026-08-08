/*
 * Ghidra decompilation
 *
 * Function : lua_platform_fgetter_return
 * Address  : 080a7be0
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */
/* Local variable L:lua_State *[r0:4] conflicts with parameter, skipped. */

int lua_platform_fgetter_return(void *arg,float value)

{
  lua_pushnumber((lua_State *)arg,value);
  return 1;
}


