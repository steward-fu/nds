/*
 * Ghidra decompilation
 *
 * Function : luaC_newobj
 * Address  : 08117a70
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */
/* Local variable o:GCObject *[r0:4] conflicts with parameter, skipped. */

GCObject * luaC_newobj(lua_State *L,int tt,size_t sz)

{
  byte bVar1;
  GCObject *pGVar2;
  global_State *pgVar3;
  global_State *g;
  
  pgVar3 = L->l_G;
  pGVar2 = (GCObject *)luaM_realloc_(L,(void *)0x0,tt & 0xf,sz);
  bVar1 = pgVar3->currentwhite;
  pGVar2->tt = (lu_byte)tt;
  pGVar2->marked = bVar1 & 3;
  pGVar2->next = pgVar3->allgc;
  pgVar3->allgc = pGVar2;
  return pGVar2;
}


