/*
 * Ghidra decompilation
 *
 * Function : luaK_intK
 * Address  : 08134f5c
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int luaK_intK(FuncState *fs,lua_Integer n)

{
  int iVar1;
  TValue *pTVar2;
  TValue *idx;
  TValue *io_1;
  int iVar3;
  TValue *pTVar4;
  int iVar5;
  int oldsize;
  int iVar6;
  Proto *o_00;
  Proto *f;
  lua_State *L_00;
  lua_State *L;
  TValue *io;
  TValue k;
  TValue o;
  
  iVar1 = __stack_chk_guard;
  o_00 = fs->f;
  L_00 = fs->ls->L;
  k.tt_ = 2;
  o.tt_ = 0x13;
  k.value_.i = n;
  o.value_.i = n;
  pTVar2 = luaH_set(L_00,fs->ls->h,&k);
  if (pTVar2->tt_ == 0x13) {
    iVar3 = fs->nk;
    iVar6 = (pTVar2->value_).b;
    if ((iVar6 < iVar3) && (((o.tt_ ^ o_00->k[iVar6].tt_) & 0x3fU) == 0)) {
      iVar3 = luaV_equalobj((lua_State *)0x0,o_00->k + iVar6,&o);
      if (iVar3 != 0) goto LAB_08135054;
      goto LAB_08134fcc;
    }
  }
  else {
LAB_08134fcc:
    iVar3 = fs->nk;
  }
  iVar6 = iVar3;
  iVar5 = o_00->sizek;
  (pTVar2->value_).b = iVar6;
  iVar3 = o_00->sizek;
  pTVar2->tt_ = 0x13;
  if (iVar6 < iVar3) {
    pTVar2 = o_00->k;
  }
  else {
    pTVar2 = (TValue *)luaM_growaux_(L_00,o_00->k,&o_00->sizek,8,0x3ffffff,"constants");
    iVar3 = o_00->sizek;
    o_00->k = pTVar2;
  }
  if (iVar5 < iVar3) {
    pTVar4 = pTVar2 + iVar5;
    do {
      pTVar4->tt_ = 0;
      pTVar4 = pTVar4 + 1;
    } while (pTVar2 + iVar3 != pTVar4);
  }
  iVar3 = fs->nk;
  pTVar2[iVar6].value_ = o.value_;
  pTVar2[iVar6].tt_ = o.tt_;
  fs->nk = iVar3 + 1;
  if ((((o.tt_ & 0x40U) != 0) && ((o_00->marked & 4) != 0)) && (((o.value_.gc)->marked & 3) != 0)) {
    luaC_barrier_(L_00,(GCObject *)o_00,o.value_.gc);
  }
LAB_08135054:
  if (iVar1 == __stack_chk_guard) {
    return iVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


