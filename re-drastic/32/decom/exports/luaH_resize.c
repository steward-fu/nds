/*
 * Ghidra decompilation
 *
 * Function : luaH_resize
 * Address  : 0811f2b4
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void luaH_resize(lua_State *L,Table *t,uint nasize,uint nhsize)

{
  bool bVar1;
  TValue *pTVar2;
  byte bVar3;
  int iVar4;
  TValue *cell;
  TValue *pTVar5;
  TValue *pTVar6;
  TValue *p;
  Node *n_1;
  int lsize;
  Node *n;
  int iVar7;
  uint uVar8;
  int nx;
  int oldhsize;
  Node *pNVar9;
  int iVar10;
  int iVar11;
  uint i_1;
  GCObject *pGVar12;
  uint oldasize;
  uint i;
  Value VVar13;
  uint uVar14;
  lu_byte lVar15;
  size_t sVar16;
  Node *nold;
  Node *block;
  TValue k;
  
  iVar4 = __stack_chk_guard;
  pGVar12 = (GCObject *)t->sizearray;
  block = t->node;
  bVar3 = t->lsizenode;
  if (pGVar12 < nasize) {
    if (0x1ffffffe < nasize + 1 && nasize != 0x1ffffffe) goto LAB_0811f608;
    pTVar5 = (TValue *)luaM_realloc_(L,t->array,(int)pGVar12 << 3,nasize * 8);
    t->array = pTVar5;
    if (t->sizearray < nasize) {
      pTVar6 = pTVar5 + t->sizearray;
      do {
        pTVar6->tt_ = 0;
        pTVar6 = pTVar6 + 1;
      } while (pTVar5 + nasize != pTVar6);
    }
    t->sizearray = nasize;
  }
  if (nhsize == 0) {
    pNVar9 = &dummynode_;
    t->node = &dummynode_;
    lVar15 = '\0';
  }
  else {
    uVar8 = luaO_ceillog2(nhsize);
    if (0x1e < (int)uVar8) {
                    /* WARNING: Subroutine does not return */
      luaG_runerror(L,"table overflow");
    }
    iVar10 = 1 << (uVar8 & 0xff);
    if (0xccccccc < iVar10 + 1U) goto LAB_0811f608;
    pNVar9 = (Node *)luaM_realloc_(L,(void *)0x0,0,iVar10 * 0x14);
    t->node = pNVar9;
    if (0 < iVar10) {
      iVar7 = 0;
      iVar11 = 0;
      do {
        iVar7 = iVar7 + 1;
        *(undefined4 *)((int)&(pNVar9->i_val).tt_ + iVar11) = 0;
        *(undefined4 *)((int)&pNVar9->i_key + iVar11 + 4) = 0;
        *(undefined4 *)((int)&pNVar9->i_key + iVar11 + 8) = 0;
        pNVar9 = t->node;
        iVar11 = iVar11 + 0x14;
      } while (iVar10 != iVar7);
    }
    lVar15 = (lu_byte)uVar8;
    pNVar9 = pNVar9 + iVar10;
  }
  t->lsizenode = lVar15;
  t->lastfree = pNVar9;
  if (nasize < pGVar12) {
    t->sizearray = nasize;
    VVar13.gc = (GCObject *)(nasize + 1);
    sVar16 = nasize << 3;
    do {
      while (pNVar9 = (Node *)((int)&t->array->value_ + sVar16), (pNVar9->i_val).tt_ != 0) {
        cell = (TValue *)pNVar9;
        if (VVar13.f + -1 < (code *)t->sizearray) {
LAB_0811f384:
          if (cell == &luaO_nilobject_) goto LAB_0811f4d4;
        }
        else {
          cell = &t->node->i_val;
          uVar8 = VVar13.b & ~(-1 << t->lsizenode);
          do {
            while (cell = (TValue *)((int)cell + uVar8 * 0x14),
                  (((TKey *)((int)cell + 8))->nk).tt_ == 0x13) {
              if (VVar13.gc == (((TKey *)((int)cell + 8))->nk).value_.gc) goto LAB_0811f384;
              uVar8 = *(uint *)((int)((int)cell + 8) + 8);
              if (uVar8 == 0) goto LAB_0811f4d4;
            }
            uVar8 = *(uint *)((int)((int)cell + 8) + 8);
          } while (uVar8 != 0);
LAB_0811f4d4:
          k.tt_ = 0x13;
          k.value_ = VVar13;
          cell = luaH_newkey(L,t,&k);
        }
        sVar16 = sVar16 + 8;
        *cell = pNVar9->i_val;
        bVar1 = pGVar12 <= VVar13.gc;
        VVar13.gc = (GCObject *)((int)&(VVar13.gc)->next + 1);
        if (bVar1) goto LAB_0811f3a4;
      }
      sVar16 = sVar16 + 8;
      bVar1 = VVar13.gc < pGVar12;
      VVar13.gc = (GCObject *)((int)&(VVar13.gc)->next + 1);
    } while (bVar1);
LAB_0811f3a4:
    if ((GCObject *)0x1fffffff < (GCObject *)(nasize + 1)) {
LAB_0811f608:
                    /* WARNING: Subroutine does not return */
      luaM_toobig(L);
    }
    pTVar5 = (TValue *)luaM_realloc_(L,t->array,(int)pGVar12 << 3,nasize << 3);
    t->array = pTVar5;
  }
  uVar8 = -1 << (uint)bVar3;
  uVar14 = ~uVar8;
  if ((int)uVar8 < 0) {
    pTVar5 = (TValue *)&block[uVar14].i_key;
    do {
      while (pTVar5[-1].tt_ != 0) {
        pTVar6 = luaH_get(t,pTVar5);
        if (pTVar6 == &luaO_nilobject_) {
          pTVar6 = luaH_newkey(L,t,pTVar5);
        }
        pTVar2 = pTVar5 + -1;
        iVar10 = pTVar5[-1].tt_;
        uVar14 = uVar14 - 1;
        pTVar5 = (TValue *)&pTVar5[-3].tt_;
        pTVar6->value_ = pTVar2->value_;
        pTVar6->tt_ = iVar10;
        if (uVar14 == 0xffffffff) goto LAB_0811f434;
      }
      uVar14 = uVar14 - 1;
      pTVar5 = (TValue *)&pTVar5[-3].tt_;
    } while (uVar14 != 0xffffffff);
  }
LAB_0811f434:
  if (block != &dummynode_) {
    luaM_realloc_(L,block,0x14 << (uint)bVar3,0);
  }
  if (iVar4 == __stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


