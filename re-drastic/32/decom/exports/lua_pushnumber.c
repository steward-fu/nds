/*
 * Ghidra decompilation
 *
 * Function : lua_pushnumber
 * Address  : 0810f62c
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void lua_pushnumber(lua_State *L,lua_Number n)

{
  TValue *io;
  StkId pTVar1;
  
  io = L->top;
  (io->value_).n = n;
  pTVar1 = L->top;
  io->tt_ = 3;
  L->top = pTVar1 + 1;
  return;
}


