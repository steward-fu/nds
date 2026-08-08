/*
 * Ghidra decompilation
 *
 * Function : lua_atpanic
 * Address  : 0810dc40
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */
/* Local variable old:lua_CFunction[r0:4] conflicts with parameter, skipped. */

lua_CFunction lua_atpanic(lua_State *L,lua_CFunction panicf)

{
  lua_CFunction p_Var1;
  
  p_Var1 = L->l_G->panic;
  L->l_G->panic = panicf;
  return p_Var1;
}


