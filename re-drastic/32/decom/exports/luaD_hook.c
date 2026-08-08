/*
 * Ghidra decompilation
 *
 * Function : luaD_hook
 * Address  : 08113370
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void luaD_hook(lua_State *L,int event,int line)

{
  int iVar1;
  int size;
  int newsize;
  int newsize_00;
  StkId pTVar2;
  int iVar3;
  int needed;
  CallInfo *pCVar4;
  CallInfo *ci;
  StkId pTVar5;
  ptrdiff_t ci_top;
  int iVar6;
  ptrdiff_t top;
  lua_Hook hook;
  lua_Hook p_Var7;
  StkId pTVar8;
  lua_Debug ar;
  
  iVar1 = __stack_chk_guard;
  p_Var7 = L->hook;
  if ((p_Var7 != (lua_Hook)0x0) && (L->allowhook != '\0')) {
    pTVar2 = L->top;
    pCVar4 = L->ci;
    pTVar8 = L->stack;
    pTVar5 = pCVar4->top;
    iVar6 = (int)pTVar2 - (int)pTVar8;
    ar.event = event;
    ar.currentline = line;
    ar.i_ci = pCVar4;
    if ((int)L->stack_last - (int)pTVar2 < 0xa8) {
      if (1000000 < L->stacksize) {
                    /* WARNING: Subroutine does not return */
        luaD_throw(L,6);
      }
      newsize_00 = L->stacksize * 2;
      iVar3 = (iVar6 >> 3) + 0x19;
      if (999999 < newsize_00) {
        newsize_00 = 1000000;
      }
      if ((newsize_00 < iVar3) && (newsize_00 = iVar3, 1000000 < iVar3)) {
        luaD_reallocstack(L,0xf4308);
                    /* WARNING: Subroutine does not return */
        luaG_runerror(L,"stack overflow");
      }
      luaD_reallocstack(L,newsize_00);
      pTVar2 = L->top;
    }
    pCVar4->top = pTVar2 + 0x14;
    L->allowhook = '\0';
    pCVar4->callstatus = pCVar4->callstatus | 4;
    (*p_Var7)(L,&ar);
    pTVar2 = L->stack;
    L->allowhook = '\x01';
    pCVar4->top = (StkId)((int)pTVar2 + ((int)pTVar5 - (int)pTVar8));
    L->top = (StkId)((int)pTVar2 + iVar6);
    pCVar4->callstatus = pCVar4->callstatus & 0xfb;
  }
  if (iVar1 == __stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


