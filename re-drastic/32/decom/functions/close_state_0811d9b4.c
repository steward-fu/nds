/*
 * Ghidra decompilation
 *
 * Function : close_state
 * Address  : 0811d9b4
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void close_state(lua_State *L)

{
  char *pcVar1;
  CallInfo *block;
  CallInfo *ci;
  StkId block_00;
  CallInfo *pCVar2;
  global_State *pgVar3;
  global_State *g;
  
  pgVar3 = L->l_G;
  luaF_close(L,L->stack);
  luaC_freeallobjects(L);
  luaM_realloc_(L,(L->l_G->strt).hash,(L->l_G->strt).size << 2,0);
  pcVar1 = (char *)luaM_realloc_(L,(pgVar3->buff).buffer,(pgVar3->buff).buffsize,0);
  block_00 = L->stack;
  (pgVar3->buff).buffer = pcVar1;
  (pgVar3->buff).buffsize = 0;
  if (block_00 != (StkId)0x0) {
    block = (L->base_ci).next;
    L->ci = &L->base_ci;
    (L->base_ci).next = (CallInfo *)0x0;
    if (block != (CallInfo *)0x0) {
      do {
        pCVar2 = block->next;
        luaM_realloc_(L,block,0x24,0);
        block = pCVar2;
      } while (pCVar2 != (CallInfo *)0x0);
      block_00 = L->stack;
    }
    luaM_realloc_(L,block_00,L->stacksize << 3,0);
  }
                    /* WARNING: Could not recover jumptable at 0x0811da98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pgVar3->frealloc)(pgVar3->ud,&L[-1].hookmask,0x180,0);
  return;
}


