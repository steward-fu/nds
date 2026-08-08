/*
 * Ghidra decompilation
 *
 * Function : luaE_freethread
 * Address  : 0811df18
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void luaE_freethread(lua_State *L,lua_State *L1)

{
  CallInfo *ci;
  CallInfo *block;
  CallInfo *next;
  StkId block_00;
  CallInfo *pCVar1;
  LX *l;
  
  luaF_close(L1,L1->stack);
  block_00 = L1->stack;
  if (block_00 != (StkId)0x0) {
    block = (L1->base_ci).next;
    L1->ci = &L1->base_ci;
    (L1->base_ci).next = (CallInfo *)0x0;
    if (block != (CallInfo *)0x0) {
      do {
        pCVar1 = block->next;
        luaM_realloc_(L1,block,0x24,0);
        block = pCVar1;
      } while (pCVar1 != (CallInfo *)0x0);
      block_00 = L1->stack;
    }
    luaM_realloc_(L1,block_00,L1->stacksize << 3,0);
  }
  luaM_realloc_(L,&L1[-1].hookmask,0x74,0);
  return;
}


