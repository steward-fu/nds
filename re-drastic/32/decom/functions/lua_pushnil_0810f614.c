/*
 * Ghidra decompilation
 *
 * Function : lua_pushnil
 * Address  : 0810f614
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void lua_pushnil(lua_State *L)

{
  StkId pTVar1;
  
  pTVar1 = L->top;
  pTVar1->tt_ = 0;
  L->top = pTVar1 + 1;
  return;
}


