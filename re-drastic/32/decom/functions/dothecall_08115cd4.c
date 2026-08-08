/*
 * Ghidra decompilation
 *
 * Function : dothecall
 * Address  : 08115cd4
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void dothecall(lua_State *L,void *ud)

{
  luaD_call(L,L->top + -2,0,0);
  return;
}


