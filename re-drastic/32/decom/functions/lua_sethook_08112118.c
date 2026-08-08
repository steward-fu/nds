/*
 * Ghidra decompilation
 *
 * Function : lua_sethook
 * Address  : 08112118
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void lua_sethook(lua_State *L,lua_Hook func,int mask,int count)

{
  lua_Hook p_Var1;
  CallInfo *pCVar2;
  bool bVar3;
  
  pCVar2 = L->ci;
  if (mask == 0 || func == (lua_Hook)0x0) {
    func = (lua_Hook)0x0;
    p_Var1 = func;
  }
  else {
    p_Var1 = (lua_Hook)(mask & 0xff);
  }
  bVar3 = (pCVar2->callstatus & 2) != 0;
  if (bVar3) {
    pCVar2 = (CallInfo *)(pCVar2->u).l.savedpc;
  }
  L->hook = func;
  L->basehookcount = count;
  L->hookcount = count;
  L->hookmask = (lu_byte)p_Var1;
  if (bVar3) {
    L->oldpc = (Instruction *)pCVar2;
  }
  return;
}


