/*
 * Ghidra decompilation
 *
 * Function : luaH_newkey
 * Address  : 0811edf0
 * Program  : drastic
 */


/* WARNING: Removing unreachable block (ram,0x0811f2a0) */
/* WARNING: Unknown calling convention */

TValue * luaH_newkey(lua_State *L,Table *t,TValue *key)

{
  TValue *pTVar1;
  Node *pNVar2;
  Node *mp;
  Node *pNVar3;
  Node *othern;
  Node *pNVar4;
  uint uVar5;
  TValue *p;
  GCObject *x;
  lua_Integer k_1;
  uint uVar6;
  lua_Integer k;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint i;
  TValue *pTVar10;
  Node *n;
  uint uVar11;
  TValue *io_;
  int iVar12;
  Node *pNVar13;
  uint ause;
  uint nasize;
  Node *pNVar14;
  uint *puVar15;
  uint ttlg;
  uint uVar16;
  int iVar17;
  uint uVar18;
  uint *puVar19;
  float fVar20;
  float __x;
  lua_Number n_1;
  TValue aux;
  uint nums [32];
  uint local_34 [2];
  
  local_34[0] = __stack_chk_guard;
  if (key->tt_ == 0) {
                    /* WARNING: Subroutine does not return */
    luaG_runerror(L,"table index is nil");
  }
  if (key->tt_ == 3) {
    __x = (key->value_).n;
    fVar20 = floorf(__x);
    if (((__x == fVar20) && (__x < -2.147484e+09 == NAN(__x))) && (__x < 2.147484e+09)) {
      aux.value_.b = (int)__x;
      key = &aux;
      aux.tt_ = 0x13;
    }
  }
  pNVar2 = mainposition(t,key);
  if ((pNVar2->i_val).tt_ != 0 || pNVar2 == &dummynode_) {
    pNVar13 = t->lastfree;
    do {
      pNVar14 = pNVar13;
      if (pNVar14 <= t->node) {
        memset(nums,0,0x80);
        uVar16 = t->sizearray;
        i = 1;
        ttlg = 1;
        ause = 0;
        puVar15 = nums;
        goto LAB_0811ef1c;
      }
      pNVar13 = pNVar14 + -1;
      iVar8 = pNVar14[-1].i_key.nk.tt_;
      t->lastfree = pNVar13;
    } while (iVar8 != 0);
    pNVar3 = mainposition(t,&(pNVar2->i_key).tvk);
    if (pNVar2 == pNVar3) {
      iVar8 = (pNVar2->i_key).nk.next;
      if (iVar8 != 0) {
        pNVar14[-1].i_key.nk.next = ((int)pNVar2 + (iVar8 * 0x14 - (int)pNVar13) >> 2) * -0x33333333
        ;
      }
      (pNVar2->i_key).nk.next = ((int)pNVar13 - (int)pNVar2 >> 2) * -0x33333333;
      pNVar2 = pNVar13;
    }
    else {
      do {
        pNVar4 = pNVar3;
        pNVar3 = pNVar4 + (pNVar4->i_key).nk.next;
      } while (pNVar2 != pNVar4 + (pNVar4->i_key).nk.next);
      (pNVar4->i_key).nk.next = ((int)pNVar13 - (int)pNVar4 >> 2) * -0x33333333;
      iVar8 = (pNVar2->i_val).tt_;
      pNVar14[-1].i_val.value_ = (pNVar2->i_val).value_;
      pNVar14[-1].i_val.tt_ = iVar8;
      iVar8 = (pNVar2->i_key).nk.tt_;
      pNVar14[-1].i_key.nk.value_ = (pNVar2->i_key).nk.value_;
      pNVar14[-1].i_key.nk.tt_ = iVar8;
      pNVar14[-1].i_key.nk.next = (pNVar2->i_key).nk.next;
      if ((pNVar2->i_key).nk.next != 0) {
        pNVar14[-1].i_key.nk.next =
             ((int)pNVar2 - (int)pNVar13 >> 2) * -0x33333333 + pNVar14[-1].i_key.nk.next;
        (pNVar2->i_key).nk.next = 0;
      }
      (pNVar2->i_val).tt_ = 0;
    }
  }
  (pNVar2->i_key).nk.value_ = key->value_;
  (pNVar2->i_key).nk.tt_ = key->tt_;
  if ((((key->tt_ & 0x40U) != 0) && ((t->marked & 4) != 0)) &&
     ((((key->value_).gc)->marked & 3) != 0)) {
    luaC_barrierback_(L,t);
  }
  goto LAB_0811ee94;
LAB_0811ef1c:
  do {
    if (uVar16 < ttlg) {
      uVar11 = uVar16;
      nasize = ause;
      if (uVar16 < i) break;
LAB_0811ef30:
      iVar8 = 0;
      pTVar10 = t->array + i;
      do {
        pTVar1 = pTVar10 + -1;
        i = i + 1;
        pTVar10 = pTVar10 + 1;
        if (pTVar1->tt_ != 0) {
          iVar8 = iVar8 + 1;
        }
      } while (i <= uVar11);
    }
    else {
      uVar11 = ttlg;
      if (i <= ttlg) goto LAB_0811ef30;
      iVar8 = 0;
    }
    ause = ause + iVar8;
    ttlg = ttlg << 1;
    puVar19 = puVar15 + 1;
    *puVar15 = *puVar15 + iVar8;
    nasize = ause;
    puVar15 = puVar19;
  } while (puVar19 != local_34);
  iVar17 = 0;
  iVar12 = 0;
  uVar16 = ~(-1 << t->lsizenode);
  iVar8 = uVar16 * 0x14;
  for (; uVar16 != 0xffffffff; uVar16 = uVar16 - 1) {
    pNVar2 = t->node;
    if (*(int *)((int)&(pNVar2->i_val).tt_ + iVar8) != 0) {
      if (*(int *)((int)&pNVar2->i_key + iVar8 + 4) == 0x13) {
        uVar6 = *(uint *)((int)&pNVar2->i_key + iVar8);
        uVar11 = (uint)(uVar6 < 0x80000001);
        if ((int)uVar6 < 1) {
          uVar11 = 0;
        }
        if (uVar11 != 0) {
          iVar7 = luaO_ceillog2(uVar6);
          uVar11 = 1;
          nums[iVar7] = nums[iVar7] + 1;
        }
      }
      else {
        uVar11 = 0;
      }
      iVar17 = iVar17 + uVar11;
      iVar12 = iVar12 + 1;
    }
    iVar8 = iVar8 + -0x14;
  }
  if (key->tt_ == 0x13) {
    x = (key->value_).gc;
    uVar16 = (uint)(0 < (int)x);
    if ((GCObject *)0x80000000 < x) {
      uVar16 = 0;
    }
    if (uVar16 != 0) {
      iVar8 = luaO_ceillog2((uint)x);
      uVar16 = 1;
      nums[iVar8] = nums[iVar8] + 1;
    }
  }
  else {
    uVar16 = 0;
  }
  uVar16 = iVar17 + nasize + uVar16;
  if (uVar16 == 0) {
    uVar11 = 0;
    uVar6 = 0;
  }
  else {
    uVar11 = 0;
    uVar6 = 0;
    uVar18 = 0;
    uVar5 = 0;
    uVar9 = 1;
    puVar15 = nums;
    do {
      if ((*puVar15 != 0) && (uVar5 = uVar5 + *puVar15, uVar18 < uVar5)) {
        uVar11 = uVar9;
        uVar6 = uVar5;
      }
      if (uVar16 == uVar5) break;
      uVar18 = uVar9 & 0x7fffffff;
      uVar9 = uVar9 << 1;
      puVar15 = puVar15 + 1;
    } while (uVar18 < uVar16);
  }
  luaH_resize(L,t,uVar11,(nasize + iVar12 + 1) - uVar6);
  pNVar2 = (Node *)luaH_get(t,key);
  if (pNVar2 == (Node *)&luaO_nilobject_) {
    pNVar2 = (Node *)luaH_newkey(L,t,key);
  }
LAB_0811ee94:
  if (local_34[0] != __stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return &pNVar2->i_val;
}


