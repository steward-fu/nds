/*
 * Ghidra decompilation
 *
 * Function : luaF_findupval
 * Address  : 08115854
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

UpVal * luaF_findupval(lua_State *L,StkId level)

{
  UpVal *pUVar1;
  UpVal *uv;
  TValue *pTVar2;
  UpVal *pUVar3;
  lua_State *plVar4;
  UpVal **pp;
  anon_union_8_2_5131162a_for_u *paVar5;
  
  paVar5 = (anon_union_8_2_5131162a_for_u *)&L->openupval;
  pUVar1 = L->openupval;
  if (pUVar1 != (UpVal *)0x0) {
    pTVar2 = pUVar1->v;
    while (level <= pTVar2) {
      if (level == pTVar2) {
        return pUVar1;
      }
      paVar5 = &pUVar1->u;
      pUVar1 = (pUVar1->u).open.next;
      if (pUVar1 == (UpVal *)0x0) break;
      pTVar2 = pUVar1->v;
    }
  }
  pUVar1 = (UpVal *)luaM_realloc_(L,(void *)0x0,0,0x10);
  pUVar3 = (paVar5->open).next;
  pUVar1->refcount = 0;
  (pUVar1->u).open.next = pUVar3;
  (pUVar1->u).open.touched = 1;
  (paVar5->open).next = pUVar1;
  plVar4 = L->twups;
  pUVar1->v = level;
  if (L == plVar4) {
    L->twups = L->l_G->twups;
    L->l_G->twups = L;
  }
  return pUVar1;
}


