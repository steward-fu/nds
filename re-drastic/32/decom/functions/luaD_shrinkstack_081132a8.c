/*
 * Ghidra decompilation
 *
 * Function : luaD_shrinkstack
 * Address  : 081132a8
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void luaD_shrinkstack(lua_State *L)

{
  StkId pTVar1;
  int iVar2;
  CallInfo *pCVar3;
  CallInfo *ci;
  StkId lim;
  int iVar4;
  StkId *ppTVar5;
  
  pCVar3 = L->ci;
  pTVar1 = L->top;
  while (pCVar3 != (CallInfo *)0x0) {
    ppTVar5 = &pCVar3->top;
    pCVar3 = pCVar3->previous;
    if (pTVar1 < *ppTVar5) {
      pTVar1 = *ppTVar5;
    }
  }
  iVar2 = (int)pTVar1 - (int)L->stack >> 3;
  iVar4 = iVar2 + 1;
  if (L->stacksize < 0xf4241) {
    luaE_shrinkCI(L);
  }
  else {
    luaE_freeCI(L);
  }
  if (iVar4 < 0xf4241) {
    iVar2 = iVar2 + 8;
    if (-1 < iVar4) {
      iVar2 = iVar4;
    }
    iVar2 = iVar4 + (iVar2 >> 3) + 10;
    if (999999 < iVar2) {
      iVar2 = 1000000;
    }
    if (iVar2 < L->stacksize) {
      luaD_reallocstack(L,iVar2);
      return;
    }
  }
  return;
}


