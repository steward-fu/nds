/*
 * Ghidra decompilation
 *
 * Function : luaX_newstring
 * Address  : 0813a844
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

TString * luaX_newstring(LexState *ls,char *str,size_t l)

{
  TString *pTVar1;
  TString *ts;
  TValue *pTVar2;
  TValue *o;
  TValue *io_1;
  Table *t;
  StkId pTVar3;
  global_State *pgVar4;
  StkId pTVar5;
  TValue *io;
  lua_State *L_00;
  lua_State *L;
  TString *x_;
  
  L_00 = ls->L;
  pTVar1 = luaS_newlstr(L_00,str,l);
  pTVar5 = L_00->top;
  L_00->top = pTVar5 + 1;
  (pTVar5->value_).gc = (GCObject *)pTVar1;
  pTVar3 = L_00->top;
  t = ls->h;
  pTVar5->tt_ = pTVar1->tt | 0x40;
  pTVar2 = luaH_set(L_00,t,pTVar3 + -1);
  if (pTVar2->tt_ == 0) {
    (pTVar2->value_).b = 1;
    pgVar4 = L_00->l_G;
    pTVar2->tt_ = 1;
    if (0 < pgVar4->GCdebt) {
      luaC_step(L_00);
    }
  }
  else {
    pTVar1 = (TString *)pTVar2[1].value_.gc;
  }
  L_00->top = L_00->top + -1;
  return pTVar1;
}


