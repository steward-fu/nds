/*
 * Ghidra decompilation
 *
 * Function : luaD_throw
 * Address  : 08112e20
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void luaD_throw(lua_State *L,int errcode)

{
  TString *pTVar1;
  TString *x_;
  StkId pTVar2;
  StkId pTVar3;
  TValue *io1;
  lua_longjmp *plVar4;
  lua_State *L_00;
  lua_CFunction p_Var5;
  TString *x__1;
  global_State *g;
  global_State *pgVar6;
  int iVar7;
  TValue *io1_1;
  TValue *io;
  TValue *io_1;
  
  plVar4 = L->errorJmp;
  if (plVar4 != (lua_longjmp *)0x0) {
    plVar4->status = errcode;
                    /* WARNING: Subroutine does not return */
    __longjmp_chk(plVar4->b,1);
  }
  pgVar6 = L->l_G;
  L->status = (lu_byte)errcode;
  L_00 = pgVar6->mainthread;
  if (L_00->errorJmp != (lua_longjmp *)0x0) {
    pTVar3 = L_00->top;
    L_00->top = pTVar3 + 1;
    iVar7 = L->top[-1].tt_;
    pTVar3->value_ = L->top[-1].value_;
    pTVar3->tt_ = iVar7;
                    /* WARNING: Subroutine does not return */
    luaD_throw(L_00,errcode);
  }
  p_Var5 = pgVar6->panic;
  if (p_Var5 != (lua_CFunction)0x0) {
    pTVar3 = L->top;
    if (errcode == 4) {
      pTVar1 = pgVar6->memerrmsg;
      (pTVar3->value_).gc = (GCObject *)pTVar1;
      p_Var5 = pgVar6->panic;
      pTVar3->tt_ = pTVar1->tt | 0x40;
    }
    else if (errcode == 6) {
      pTVar1 = luaS_newlstr(L,"error in error handling",0x17);
      (pTVar3->value_).gc = (GCObject *)pTVar1;
      p_Var5 = pgVar6->panic;
      pTVar3->tt_ = pTVar1->tt | 0x40;
    }
    else {
      iVar7 = pTVar3[-1].tt_;
      pTVar3->value_ = pTVar3[-1].value_;
      pTVar3->tt_ = iVar7;
    }
    pTVar3 = pTVar3 + 1;
    pTVar2 = L->ci->top;
    L->top = pTVar3;
    if (pTVar2 < pTVar3) {
      L->ci->top = pTVar3;
    }
    (*p_Var5)(L);
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


