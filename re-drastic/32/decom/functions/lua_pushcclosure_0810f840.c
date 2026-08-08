/*
 * Ghidra decompilation
 *
 * Function : lua_pushcclosure
 * Address  : 0810f840
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void lua_pushcclosure(lua_State *L,lua_CFunction fn,int n)

{
  int iVar1;
  CClosure *pCVar2;
  CClosure *cl;
  CClosure *x_;
  undefined4 *puVar3;
  int iVar4;
  TValue *io_1;
  undefined4 uVar5;
  StkId pTVar6;
  TValue *io;
  
  if (n == 0) {
    pTVar6 = L->top;
    (pTVar6->value_).f = fn;
    pTVar6->tt_ = 0x16;
  }
  else {
    if (0 < L->l_G->GCdebt) {
      luaC_step(L);
    }
    pCVar2 = luaF_newCclosure(L,n);
    pTVar6 = L->top;
    iVar4 = n + -1;
    pCVar2->f = fn;
    pTVar6 = pTVar6 + -n;
    L->top = pTVar6;
    iVar1 = n * 8;
    do {
      puVar3 = (undefined4 *)((int)&pTVar6[-1].value_ + iVar1);
      iVar4 = iVar4 + -1;
      uVar5 = puVar3[1];
      *(undefined4 *)((int)(pCVar2->upvalue + -1) + iVar1) = *puVar3;
      *(undefined4 *)((int)pCVar2->upvalue + iVar1 + -4) = uVar5;
      iVar1 = iVar1 + -8;
    } while (iVar4 != -1);
    (pTVar6->value_).f = (lua_CFunction)pCVar2;
    pTVar6->tt_ = 0x66;
  }
  L->top = L->top + 1;
  return;
}


