/*
 * Ghidra decompilation
 *
 * Function : luaC_barrierback_
 * Address  : 08117860
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void luaC_barrierback_(lua_State *L,Table *t)

{
  global_State *g;
  global_State *pgVar1;
  
  pgVar1 = L->l_G;
  t->marked = t->marked & 0xfb;
  t->gclist = pgVar1->grayagain;
  pgVar1->grayagain = (GCObject *)t;
  return;
}


