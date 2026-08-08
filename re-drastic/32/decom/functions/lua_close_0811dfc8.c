/*
 * Ghidra decompilation
 *
 * Function : lua_close
 * Address  : 0811dfc8
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void lua_close(lua_State *L)

{
  close_state(L->l_G->mainthread);
  return;
}


