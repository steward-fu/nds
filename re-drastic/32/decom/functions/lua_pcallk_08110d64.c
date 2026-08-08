/*
 * Ghidra decompilation
 *
 * Function : lua_pcallk
 * Address  : 08110d64
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int lua_pcallk(lua_State *L,int nargs,int nresults,int errfunc,lua_KContext ctx,lua_KFunction k)

{
  int iVar1;
  int status;
  Instruction *pIVar2;
  lua_CFunction p_Var3;
  CClosure *func_1;
  CallInfo *ci;
  CallInfo *pCVar4;
  CallInfo *ci_1;
  StkId pTVar5;
  ptrdiff_t func;
  TValue *o;
  TValue *pTVar6;
  CallS c;
  
  iVar1 = __stack_chk_guard;
  if (errfunc == 0) {
    pTVar5 = L->top;
    func = 0;
  }
  else {
    if (errfunc < 1) {
      if (errfunc < -0xf4627) {
        if (errfunc == -0xf4628) {
          pTVar5 = L->top;
          pTVar6 = &L->l_G->l_registry;
        }
        else {
          pTVar5 = L->ci->func;
          if ((pTVar5->tt_ == 0x16) ||
             (p_Var3 = (pTVar5->value_).f, (int)(uint)(byte)p_Var3[6] < -0xf4628 - errfunc)) {
            pTVar5 = L->top;
            pTVar6 = &luaO_nilobject_;
          }
          else {
            pTVar5 = L->top;
            pTVar6 = (TValue *)(p_Var3 + (-0xf4627 - errfunc) * 8);
          }
        }
      }
      else {
        pTVar5 = L->top;
        pTVar6 = pTVar5 + errfunc;
      }
    }
    else {
      pTVar5 = L->top;
      pTVar6 = L->ci->func + errfunc;
      if (pTVar5 <= pTVar6) {
        pTVar6 = &luaO_nilobject_;
      }
    }
    func = (int)pTVar6 - (int)L->stack;
  }
  c.func = pTVar5 + -(nargs + 1);
  if ((k == (lua_KFunction)0x0) || (L->nny != 0)) {
    c.nresults = nresults;
    status = luaD_pcall(L,f_call,&c,(int)c.func - (int)L->stack,func);
  }
  else {
    pCVar4 = L->ci;
    (pCVar4->u).c.k = k;
    (pCVar4->u).c.ctx = ctx;
    pTVar5 = L->stack;
    (pCVar4->u).l.savedpc = (Instruction *)L->errfunc;
    pCVar4->extra = (int)c.func - (int)pTVar5;
    L->errfunc = func;
    pCVar4->callstatus = pCVar4->callstatus & 0xfe | L->allowhook | 0x10;
    luaD_call(L,c.func,nresults,1);
    pIVar2 = (pCVar4->u).l.savedpc;
    pCVar4->callstatus = pCVar4->callstatus & 0xef;
    L->errfunc = (ptrdiff_t)pIVar2;
    status = 0;
  }
  if (nresults == -1) {
    if (L->ci->top < L->top) {
      L->ci->top = L->top;
    }
  }
  if (iVar1 == __stack_chk_guard) {
    return status;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


