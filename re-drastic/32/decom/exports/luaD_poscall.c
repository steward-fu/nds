/*
 * Ghidra decompilation
 *
 * Function : luaD_poscall
 * Address  : 08114350
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int luaD_poscall(lua_State *L,StkId firstResult)

{
  int iVar1;
  int wanted;
  int i;
  StkId pTVar2;
  int iVar3;
  CallInfo *pCVar4;
  int iVar5;
  CallInfo *pCVar6;
  ptrdiff_t fr;
  StkId pTVar7;
  StkId res;
  TValue *io1;
  StkId pTVar8;
  
  pCVar6 = L->ci;
  if ((L->hookmask & 6) == 0) {
    pCVar4 = pCVar6->previous;
  }
  else if ((L->hookmask & 2) == 0) {
    pCVar4 = pCVar6->previous;
    L->oldpc = (pCVar4->u).l.savedpc;
  }
  else {
    pTVar7 = L->stack;
    luaD_hook(L,1,-1);
    pCVar4 = pCVar6->previous;
    firstResult = (StkId)((int)L->stack + ((int)firstResult - (int)pTVar7));
    L->oldpc = (pCVar4->u).l.savedpc;
  }
  iVar1 = (int)pCVar6->nresults;
  pTVar7 = pCVar6->func;
  L->ci = pCVar4;
  if (iVar1 != 0) {
    pTVar2 = L->top;
    iVar5 = iVar1;
    pTVar8 = pTVar7;
    do {
      if (pTVar2 <= firstResult) {
        iVar3 = iVar5 + -1;
        pTVar7 = pTVar8;
        if (0 < iVar5) {
          do {
            iVar3 = iVar3 + -1;
            pTVar7->tt_ = 0;
            pTVar7 = pTVar7 + 1;
          } while (iVar3 != -1);
          pTVar7 = pTVar8 + iVar5;
        }
        break;
      }
      iVar3 = firstResult->tt_;
      iVar5 = iVar5 + -1;
      pTVar7 = pTVar8 + 1;
      pTVar8->value_ = firstResult->value_;
      pTVar8->tt_ = iVar3;
      firstResult = firstResult + 1;
      pTVar8 = pTVar7;
    } while (iVar5 != 0);
  }
  L->top = pTVar7;
  return iVar1 + 1;
}


