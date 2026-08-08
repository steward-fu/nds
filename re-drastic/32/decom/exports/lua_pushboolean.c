/*
 * Ghidra decompilation
 *
 * Function : lua_pushboolean
 * Address  : 0810f8f0
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void lua_pushboolean(lua_State *L,int b)

{
  TValue *io;
  StkId pTVar1;
  
  io = L->top;
  if (b != 0) {
    b = 1;
  }
  (io->value_).b = b;
  pTVar1 = L->top;
  io->tt_ = 1;
  L->top = pTVar1 + 1;
  return;
}


