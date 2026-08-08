/*
 * Ghidra decompilation
 *
 * Function : lua_pushlightuserdata
 * Address  : 0810f918
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void lua_pushlightuserdata(lua_State *L,void *p)

{
  TValue *io;
  StkId pTVar1;
  
  io = L->top;
  (io->value_).p = p;
  pTVar1 = L->top;
  io->tt_ = 2;
  L->top = pTVar1 + 1;
  return;
}


