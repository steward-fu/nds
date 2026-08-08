/*
 * Ghidra decompilation
 *
 * Function : lua_yieldk
 * Address  : 081147bc
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int lua_yieldk(lua_State *L,int nresults,lua_KContext ctx,lua_KFunction k)

{
  CallInfo *pCVar1;
  
  if (L->nny == 0) {
    pCVar1 = L->ci;
    L->status = '\x01';
    pCVar1->extra = (int)pCVar1->func - (int)L->stack;
    if ((pCVar1->callstatus & 2) != 0) {
      return 0;
    }
    (pCVar1->u).c.k = k;
    if (k != (lua_KFunction)0x0) {
      (pCVar1->u).c.ctx = ctx;
    }
    pCVar1->func = L->top + (-1 - nresults);
                    /* WARNING: Subroutine does not return */
    luaD_throw(L,1);
  }
  if (L != L->l_G->mainthread) {
                    /* WARNING: Subroutine does not return */
    luaG_runerror(L,"attempt to yield across a C-call boundary");
  }
                    /* WARNING: Subroutine does not return */
  luaG_runerror(L,"attempt to yield from outside a coroutine");
}


