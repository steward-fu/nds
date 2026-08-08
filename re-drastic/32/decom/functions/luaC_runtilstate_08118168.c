/*
 * Ghidra decompilation
 *
 * Function : luaC_runtilstate
 * Address  : 08118168
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void luaC_runtilstate(lua_State *L,int statesmask)

{
  sbyte sVar1;
  global_State *g;
  global_State *pgVar2;
  
  pgVar2 = L->l_G;
  sVar1 = pgVar2->gcstate;
  while ((statesmask >> sVar1 & 1U) == 0) {
    singlestep(L);
    sVar1 = pgVar2->gcstate;
  }
  return;
}


