/*
 * Ghidra decompilation
 *
 * Function : luaK_stringK
 * Address  : 08134db0
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int luaK_stringK(FuncState *fs,TString *s)

{
  int iVar1;
  lua_State *L;
  TValue *idx;
  TValue *io_1;
  int iVar2;
  TValue *pTVar3;
  int iVar4;
  int oldsize;
  GCObject *pGVar5;
  Proto *o_00;
  Proto *f;
  GCObject *pGVar6;
  lua_State *L_00;
  TValue *io;
  TValue *pTVar7;
  TValue o;
  
  iVar1 = __stack_chk_guard;
  o_00 = fs->f;
  L_00 = fs->ls->L;
  o.tt_ = s->tt | 0x40;
  o.value_ = (Value)s;
  L = (lua_State *)luaH_set(L_00,fs->ls->h,&o);
  iVar2._0_1_ = L->tt;
  iVar2._1_1_ = L->marked;
  iVar2._2_1_ = L->status;
  iVar2._3_1_ = L->field_0x7;
  if (iVar2 == 0x13) {
    pGVar6 = (GCObject *)fs->nk;
    pGVar5 = L->next;
    if (((int)pGVar5 < (int)pGVar6) && (((o.tt_ ^ o_00->k[(int)pGVar5].tt_) & 0x3fU) == 0)) {
      iVar2 = luaV_equalobj((lua_State *)0x0,o_00->k + (int)pGVar5,&o);
      if (iVar2 != 0) goto LAB_08134ea0;
      goto LAB_08134e18;
    }
  }
  else {
LAB_08134e18:
    pGVar6 = (GCObject *)fs->nk;
  }
  pGVar5 = pGVar6;
  iVar4 = o_00->sizek;
  L->next = pGVar5;
  iVar2 = o_00->sizek;
  L->tt = '\x13';
  L->marked = '\0';
  L->status = '\0';
  L->field_0x7 = 0;
  if ((int)pGVar5 < iVar2) {
    pTVar7 = o_00->k;
  }
  else {
    pTVar7 = (TValue *)luaM_growaux_(L_00,o_00->k,&o_00->sizek,8,0x3ffffff,"constants");
    iVar2 = o_00->sizek;
    o_00->k = pTVar7;
  }
  if (iVar4 < iVar2) {
    pTVar3 = pTVar7 + iVar4;
    do {
      pTVar3->tt_ = 0;
      pTVar3 = pTVar3 + 1;
    } while (pTVar7 + iVar2 != pTVar3);
  }
  iVar2 = fs->nk;
  pTVar7[(int)pGVar5].value_ = o.value_;
  pTVar7[(int)pGVar5].tt_ = o.tt_;
  fs->nk = iVar2 + 1;
  if ((((o.tt_ & 0x40U) != 0) && ((o_00->marked & 4) != 0)) && (((o.value_.gc)->marked & 3) != 0)) {
    luaC_barrier_(L_00,(GCObject *)o_00,o.value_.gc);
  }
LAB_08134ea0:
  if (iVar1 == __stack_chk_guard) {
    return (int)pGVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


