/*
 * Ghidra decompilation
 *
 * Function : f_luaopen
 * Address  : 0811d82c
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void f_luaopen(lua_State *L,void *ud)

{
  int iVar1;
  StkId pTVar2;
  Table *t;
  Table *registry;
  Table *x__2;
  TString *o;
  lua_Number *plVar3;
  CallInfo *ci;
  StkId pTVar4;
  lua_State *x__1;
  global_State *g;
  global_State *pgVar5;
  TValue temp;
  
  iVar1 = __stack_chk_guard;
  pgVar5 = L->l_G;
  pTVar2 = (StkId)luaM_realloc_(L,(void *)0x0,0,0x140);
  L->stack = pTVar2;
  L->stacksize = 0x28;
  pTVar4 = pTVar2;
  do {
    pTVar4->tt_ = 0;
    pTVar4 = pTVar4 + 1;
  } while (pTVar4 != pTVar2 + 0x28);
  L->top = pTVar2 + 1;
  L->stack_last = pTVar2 + 0x23;
  (L->base_ci).func = pTVar2;
  (L->base_ci).previous = (CallInfo *)0x0;
  (L->base_ci).next = (CallInfo *)0x0;
  (L->base_ci).callstatus = '\0';
  pTVar2->tt_ = 0;
  L->ci = &L->base_ci;
  (L->base_ci).top = pTVar2 + 0x15;
  t = luaH_new(L);
  (pgVar5->l_registry).value_.gc = (GCObject *)t;
  (pgVar5->l_registry).tt_ = 0x45;
  luaH_resize(L,t,2,0);
  temp.tt_ = 0x48;
  temp.value_ = (Value)L;
  luaH_setint(L,t,1,&temp);
  temp.value_.gc = (GCObject *)luaH_new(L);
  temp.tt_ = 0x45;
  luaH_setint(L,t,2,&temp);
  luaS_resize(L,0x40);
  luaT_init(L);
  luaX_init(L);
  o = luaS_newlstr(L,"not enough memory",0x11);
  pgVar5->memerrmsg = o;
  luaC_fix(L,(GCObject *)o);
  pgVar5->gcrunning = '\x01';
  plVar3 = lua_version((lua_State *)0x0);
  pgVar5->version = plVar3;
  if (iVar1 == __stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


