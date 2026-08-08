/*
 * Ghidra decompilation
 *
 * Function : luaL_buffinit
 * Address  : 00207bc0
 * Program  : drastic64
 */


void luaL_buffinit(long param_1,long *param_2)

{
  *param_2 = (long)(param_2 + 4);
  param_2[3] = param_1;
  param_2[2] = 0;
  param_2[1] = 0x1000;
  return;
}


