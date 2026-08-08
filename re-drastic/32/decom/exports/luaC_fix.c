/*
 * Ghidra decompilation
 *
 * Function : luaC_fix
 * Address  : 08117a48
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void luaC_fix(lua_State *L,GCObject *o)

{
  global_State *g;
  global_State *pgVar1;
  
  pgVar1 = L->l_G;
  o->marked = o->marked & 0xfc;
  pgVar1->allgc = o->next;
  o->next = pgVar1->fixedgc;
  pgVar1->fixedgc = o;
  return;
}


