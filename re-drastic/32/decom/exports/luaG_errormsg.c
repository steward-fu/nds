/*
 * Ghidra decompilation
 *
 * Function : luaG_errormsg
 * Address  : 08112a14
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void luaG_errormsg(lua_State *L)

{
  Value *pVVar1;
  StkId errfunc;
  int iVar2;
  Value VVar3;
  StkId pTVar4;
  TValue *io1;
  
  if (L->errfunc != 0) {
    pTVar4 = L->top;
    iVar2 = pTVar4[-1].tt_;
    pVVar1 = (Value *)((int)&L->stack->value_ + L->errfunc);
    pTVar4->value_ = pTVar4[-1].value_;
    pTVar4->tt_ = iVar2;
    VVar3 = pVVar1[1];
    pTVar4[-1].value_ = *pVVar1;
    pTVar4[-1].tt_ = (int)VVar3;
    L->top = pTVar4 + 1;
    luaD_call(L,pTVar4 + -1,1,0);
  }
                    /* WARNING: Subroutine does not return */
  luaD_throw(L,2);
}


