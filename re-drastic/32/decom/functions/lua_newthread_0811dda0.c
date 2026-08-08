/*
 * Ghidra decompilation
 *
 * Function : lua_newthread
 * Address  : 0811dda0
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

lua_State * lua_newthread(lua_State *L)

{
  byte bVar1;
  undefined4 *puVar2;
  void *pvVar3;
  CallInfo *ci;
  StkId pTVar4;
  TValue *io;
  StkId pTVar5;
  void *pvVar6;
  lua_State *L1;
  lua_State *plVar7;
  global_State *pgVar8;
  global_State *g;
  int iVar9;
  
  pgVar8 = L->l_G;
  if (0 < pgVar8->GCdebt) {
    luaC_step(L);
  }
  puVar2 = (undefined4 *)luaM_realloc_(L,(void *)0x0,8,0x74);
  bVar1 = pgVar8->currentwhite;
  plVar7 = (lua_State *)(puVar2 + 1);
  *(undefined *)(puVar2 + 2) = 8;
  *(byte *)((int)puVar2 + 9) = bVar1 & 3;
  pTVar4 = L->top;
  puVar2[1] = pgVar8->allgc;
  pgVar8->allgc = (GCObject *)plVar7;
  (pTVar4->value_).gc = (GCObject *)plVar7;
  pTVar5 = L->top;
  pTVar4->tt_ = 0x48;
  L->top = pTVar5 + 1;
  *(undefined *)((int)puVar2 + 10) = 0;
  puVar2[4] = pgVar8;
  puVar2[5] = 0;
  puVar2[8] = 0;
  puVar2[9] = 0;
  puVar2[0xb] = plVar7;
  puVar2[0xc] = 0;
  puVar2[0x16] = 0;
  puVar2[0x17] = 0;
  puVar2[0x18] = 0;
  puVar2[0x19] = 0;
  *(undefined2 *)(puVar2 + 0x1b) = 1;
  *(undefined2 *)((int)puVar2 + 0x6e) = 0;
  *(undefined *)(puVar2 + 0x1c) = 0;
  *(undefined *)((int)puVar2 + 0x71) = 1;
  *(lu_byte *)(puVar2 + 0x1c) = L->hookmask;
  iVar9 = L->basehookcount;
  puVar2[0x16] = L->hook;
  puVar2[0x19] = iVar9;
  puVar2[0x1a] = iVar9;
  *puVar2 = *(undefined4 *)&pgVar8->mainthread[-1].hookmask;
  pvVar3 = luaM_realloc_(L,(void *)0x0,0,0x140);
  puVar2[8] = pvVar3;
  puVar2[0x18] = 0x28;
  pvVar6 = pvVar3;
  do {
    *(undefined4 *)((int)pvVar6 + 4) = 0;
    pvVar6 = (void *)((int)pvVar6 + 8);
  } while (pvVar6 != (void *)((int)pvVar3 + 0x140));
  puVar2[3] = (int)pvVar3 + 8;
  *(undefined *)((int)puVar2 + 0x56) = 0;
  puVar2[7] = (int)pvVar3 + 0x118;
  puVar2[0xd] = pvVar3;
  puVar2[0xf] = 0;
  puVar2[0x10] = 0;
  *(undefined4 *)((int)pvVar3 + 4) = 0;
  puVar2[5] = puVar2 + 0xd;
  puVar2[0xe] = (int)pvVar3 + 0xa8;
  return plVar7;
}


