/*
 * Ghidra decompilation
 *
 * Function : luaY_parser
 * Address  : 0811d59c
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

LClosure * luaY_parser(lua_State *L,ZIO *z,Mbuffer *buff,Dyndata *dyd,char *name,int firstchar)

{
  int iVar1;
  LClosure *pLVar2;
  LClosure *cl;
  Table *x__1;
  Proto *pPVar3;
  TString *pTVar4;
  StkId pTVar5;
  TValue *io;
  TValue *io_1;
  StkId pTVar6;
  Proto *f;
  StkId pTVar7;
  bool bVar8;
  BlockCnt bl;
  expdesc v;
  FuncState funcstate;
  LexState lexstate;
  
  iVar1 = __stack_chk_guard;
  pLVar2 = luaF_newLclosure(L,1);
  pTVar5 = L->top;
  (pTVar5->value_).gc = (GCObject *)pLVar2;
  pTVar7 = L->top;
  pTVar6 = L->stack_last;
  pTVar5->tt_ = 0x46;
  L->top = pTVar7 + 1;
  if ((int)pTVar6 - (int)(pTVar7 + 1) < 8) {
    luaD_growstack(L,0);
  }
  lexstate.h = luaH_new(L);
  pTVar5 = L->top;
  (pTVar5->value_).gc = (GCObject *)lexstate.h;
  pTVar7 = L->top;
  pTVar6 = L->stack_last;
  pTVar5->tt_ = 0x45;
  L->top = pTVar7 + 1;
  if ((int)pTVar6 - (int)(pTVar7 + 1) < 8) {
    luaD_growstack(L,0);
  }
  pPVar3 = luaF_newproto(L);
  pLVar2->p = pPVar3;
  funcstate.f = pPVar3;
  pTVar4 = luaS_new(L,name);
  pPVar3->source = pTVar4;
  pTVar4 = (funcstate.f)->source;
  (dyd->actvar).n = 0;
  (dyd->gt).n = 0;
  (dyd->label).n = 0;
  lexstate.buff = buff;
  lexstate.dyd = dyd;
  luaX_setinput(L,&lexstate,z,pTVar4,firstchar);
  funcstate.nactvar = '\0';
  funcstate.nups = '\0';
  funcstate.freereg = '\0';
  funcstate.firstlocal = ((lexstate.dyd)->actvar).n;
  funcstate.pc = 0;
  funcstate.lasttarget = 0;
  funcstate.jpc = -1;
  funcstate.nk = 0;
  funcstate.np = 0;
  funcstate.nlocvars = 0;
  (funcstate.f)->maxstacksize = '\x02';
  bl.firstgoto = ((lexstate.dyd)->gt).n;
  bl.firstlabel = ((lexstate.dyd)->label).n;
  (funcstate.f)->source = lexstate.source;
  funcstate.prev = lexstate.fs;
  funcstate.bl = &bl;
  bl.previous = (BlockCnt *)0x0;
  bl.nactvar = '\0';
  bl.upval = '\0';
  bl.isloop = '\0';
  (funcstate.f)->is_vararg = '\x01';
  v.t = -1;
  v.f = -1;
  v.k = VLOCAL;
  v.u.info = 0;
  funcstate.ls = &lexstate;
  lexstate.fs = &funcstate;
  newupvalue(&funcstate,lexstate.envn,&v,(expdesc *)&v.u.ind);
  luaX_next(&lexstate);
  do {
    if (lexstate.t.token - 0x104U < 0x1e) {
      if ((1 << (lexstate.t.token - 0x104U & 0xff) & 0x20020007U) != 0) goto LAB_0811d7ac;
      if (lexstate.t.token == 0x112) {
        statement(&lexstate);
LAB_0811d7ac:
        if (lexstate.t.token != 0x121) {
                    /* WARNING: Subroutine does not return */
          error_expected(&lexstate,0x121);
        }
        close_func((LexState *)&lexstate.fs,(LexState *)lexstate.L);
        bVar8 = iVar1 == __stack_chk_guard;
        L->top = L->top + -1;
        if (bVar8) {
          return pLVar2;
        }
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
    }
    statement(&lexstate);
  } while( true );
}


