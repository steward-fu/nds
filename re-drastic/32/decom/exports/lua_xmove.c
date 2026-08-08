/*
 * Ghidra decompilation
 *
 * Function : lua_xmove
 * Address  : 0810dbd8
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void lua_xmove(lua_State *from,lua_State *to,int n)

{
  int iVar1;
  TValue *io1;
  int iVar2;
  StkId pTVar3;
  StkId pTVar4;
  
  if (from == to) {
    return;
  }
  from->top = from->top + -n;
  if (n < 1) {
    return;
  }
  iVar1 = 0;
  pTVar3 = to->top;
  do {
    to->top = pTVar3 + 1;
    pTVar4 = from->top + iVar1;
    iVar1 = iVar1 + 1;
    iVar2 = pTVar4->tt_;
    pTVar3->value_ = pTVar4->value_;
    pTVar3->tt_ = iVar2;
    pTVar3 = pTVar3 + 1;
  } while (n != iVar1);
  return;
}


