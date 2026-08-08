/*
 * Ghidra decompilation
 *
 * Function : luaD_reallocstack
 * Address  : 081130f4
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void luaD_reallocstack(lua_State *L,int newsize)

{
  StkId pTVar1;
  StkId pTVar2;
  UpVal *pUVar3;
  UpVal *up;
  CallInfo *pCVar4;
  CallInfo *ci;
  StkId block;
  TValue *oldstack;
  int iVar5;
  int lim;
  
  block = L->stack;
  iVar5 = L->stacksize;
  if (newsize + 1U < 0x1fffffff || newsize == 0x1ffffffe) {
    pTVar1 = (StkId)luaM_realloc_(L,block,iVar5 * 8,newsize * 8);
    L->stack = pTVar1;
    if (iVar5 < newsize) {
      pTVar2 = pTVar1 + iVar5;
      do {
        pTVar2->tt_ = 0;
        pTVar2 = pTVar2 + 1;
      } while (pTVar2 != pTVar1 + newsize);
    }
    L->stacksize = newsize;
    pUVar3 = L->openupval;
    L->stack_last = pTVar1 + newsize + -5;
    L->top = (StkId)((int)pTVar1 + ((int)L->top - (int)block));
    for (; pUVar3 != (UpVal *)0x0; pUVar3 = (pUVar3->u).open.next) {
      pUVar3->v = (TValue *)((int)pTVar1 + ((int)pUVar3->v - (int)block));
    }
    for (pCVar4 = L->ci; pCVar4 != (CallInfo *)0x0; pCVar4 = pCVar4->previous) {
      pTVar1 = L->stack;
      pCVar4->func = (StkId)((int)pTVar1 + ((int)pCVar4->func - (int)block));
      pCVar4->top = (StkId)((int)pTVar1 + ((int)pCVar4->top - (int)block));
      if ((pCVar4->callstatus & 2) != 0) {
        (pCVar4->u).l.base = (StkId)((int)pTVar1 + ((int)(pCVar4->u).l.base - (int)block));
      }
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  luaM_toobig(L);
}


