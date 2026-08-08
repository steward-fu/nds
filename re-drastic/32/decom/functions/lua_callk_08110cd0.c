/*
 * Ghidra decompilation
 *
 * Function : lua_callk
 * Address  : 08110cd0
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void lua_callk(lua_State *L,int nargs,int nresults,lua_KContext ctx,lua_KFunction k)

{
  StkId func;
  StkId pTVar1;
  
  pTVar1 = L->top;
  if ((k == (lua_KFunction)0x0) || (L->nny != 0)) {
    luaD_call(L,pTVar1 + -(nargs + 1),nresults,0);
  }
  else {
    (L->ci->u).c.k = k;
    (L->ci->u).c.ctx = ctx;
    luaD_call(L,pTVar1 + -(nargs + 1),nresults,1);
  }
  if (nresults == -1) {
    if (L->ci->top < L->top) {
      L->ci->top = L->top;
    }
  }
  return;
}


