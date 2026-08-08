/*
 * Ghidra decompilation
 *
 * Function : lua_checkstack
 * Address  : 0810db30
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int lua_checkstack(lua_State *L,int n)

{
  int res;
  int iVar1;
  StkId pTVar2;
  CallInfo *ci;
  CallInfo *pCVar3;
  int local_14 [2];
  
  pTVar2 = L->top;
  pCVar3 = L->ci;
  local_14[0] = n;
  if ((int)L->stack_last - (int)pTVar2 >> 3 <= n) {
    if ((1000000 - n < ((int)pTVar2 - (int)L->stack >> 3) + 5) ||
       (iVar1 = luaD_rawrunprotected(L,growstack,local_14), iVar1 != 0)) {
      return 0;
    }
    pTVar2 = L->top;
  }
  res = 1;
  if (pCVar3->top < pTVar2 + local_14[0]) {
    pCVar3->top = pTVar2 + local_14[0];
  }
  return res;
}


