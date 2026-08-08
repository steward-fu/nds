/*
 * Ghidra decompilation
 *
 * Function : lua_settop
 * Address  : 0810dcb4
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void lua_settop(lua_State *L,int idx)

{
  StkId pTVar1;
  StkId pTVar2;
  
  if (-1 < idx) {
    pTVar1 = L->ci->func + idx + 1;
    for (pTVar2 = L->top; pTVar2 < pTVar1; pTVar2 = pTVar2 + 1) {
      pTVar2->tt_ = 0;
    }
    L->top = pTVar1;
    return;
  }
  L->top = L->top + idx + 1;
  return;
}


