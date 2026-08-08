/*
 * Ghidra decompilation
 *
 * Function : luaL_newstate
 * Address  : 081273d0
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

lua_State * luaL_newstate(void)

{
  lua_State *L_00;
  lua_State *L;
  
  L_00 = lua_newstate(l_alloc,(void *)0x0);
  if (L_00 != (lua_State *)0x0) {
    lua_atpanic(L_00,panic);
  }
  return L_00;
}


