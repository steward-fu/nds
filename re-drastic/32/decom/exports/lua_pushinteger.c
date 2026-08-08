/*
 * Ghidra decompilation
 *
 * Function : lua_pushinteger
 * Address  : 0810f64c
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void lua_pushinteger(lua_State *L,lua_Integer n)

{
  TValue *io;
  StkId pTVar1;
  
  io = L->top;
  (io->value_).i = n;
  pTVar1 = L->top;
  io->tt_ = 0x13;
  L->top = pTVar1 + 1;
  return;
}


