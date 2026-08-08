/*
 * Ghidra decompilation
 *
 * Function : addk
 * Address  : 08133414
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int addk(FuncState *fs,TValue *key,TValue *v)

{
  TValue *pTVar1;
  TValue *idx;
  int iVar2;
  uint uVar3;
  TValue *pTVar4;
  int iVar5;
  int oldsize;
  Proto *o;
  Proto *f;
  int iVar6;
  lua_State *L;
  lua_State *L_00;
  TValue *io;
  
  o = fs->f;
  L_00 = fs->ls->L;
  pTVar1 = luaH_set(L_00,fs->ls->h,key);
  if (pTVar1->tt_ == 0x13) {
    iVar6 = fs->nk;
    iVar2 = (pTVar1->value_).b;
    if ((iVar6 <= iVar2) || (((v->tt_ ^ o->k[iVar2].tt_) & 0x3fU) != 0)) goto LAB_08133464;
    iVar6 = luaV_equalobj((lua_State *)0x0,o->k + iVar2,v);
    if (iVar6 != 0) {
      return iVar2;
    }
  }
  iVar6 = fs->nk;
LAB_08133464:
  iVar5 = o->sizek;
  (pTVar1->value_).b = iVar6;
  iVar2 = o->sizek;
  pTVar1->tt_ = 0x13;
  if (iVar6 < iVar2) {
    pTVar1 = o->k;
  }
  else {
    pTVar1 = (TValue *)luaM_growaux_(L_00,o->k,&o->sizek,8,0x3ffffff,"constants");
    iVar2 = o->sizek;
    o->k = pTVar1;
  }
  if (iVar5 < iVar2) {
    pTVar4 = pTVar1 + iVar5;
    do {
      pTVar4->tt_ = 0;
      pTVar4 = pTVar4 + 1;
    } while (pTVar1 + iVar2 != pTVar4);
  }
  iVar2 = v->tt_;
  iVar5 = fs->nk;
  pTVar1[iVar6].value_ = v->value_;
  pTVar1[iVar6].tt_ = iVar2;
  uVar3 = v->tt_;
  fs->nk = iVar5 + 1;
  if ((((uVar3 & 0x40) != 0) && ((o->marked & 4) != 0)) && ((((v->value_).gc)->marked & 3) != 0)) {
    luaC_barrier_(L_00,(GCObject *)o,(v->value_).gc);
  }
  return iVar6;
}


