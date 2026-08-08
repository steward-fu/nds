/*
 * Ghidra decompilation
 *
 * Function : luaV_gettable
 * Address  : 0812107c
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void luaV_gettable(lua_State *L,TValue *t,TValue *key,StkId val)

{
  TValue *tm;
  TValue *pTVar1;
  TValue *res;
  TValue *f;
  uint uVar2;
  int iVar3;
  TValue *io1;
  Table *pTVar4;
  Table *h;
  
  iVar3 = 2000;
  uVar2 = t->tt_;
  do {
    if (uVar2 == 0x45) {
      pTVar4 = (Table *)(t->value_).gc;
      pTVar1 = luaH_get(pTVar4,key);
      if ((((pTVar1->tt_ != 0) || (pTVar4 = pTVar4->metatable, pTVar4 == (Table *)0x0)) ||
          ((pTVar4->flags & 1) != 0)) ||
         (f = luaT_gettm(pTVar4,pTVar4->flags & 1,L->l_G->tmname[0]), f == (TValue *)0x0)) {
        iVar3 = pTVar1->tt_;
        val->value_ = pTVar1->value_;
        val->tt_ = iVar3;
        return;
      }
      uVar2 = f->tt_;
    }
    else {
      f = luaT_gettmbyobj(L,t,TM_INDEX);
      uVar2 = f->tt_;
      if (uVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        luaG_typeerror(L,t,"index");
      }
    }
    if ((uVar2 & 0xf) == 6) {
      luaT_callTM(L,f,t,key,val,1);
      return;
    }
    iVar3 = iVar3 + -1;
    t = f;
  } while (iVar3 != 0);
                    /* WARNING: Subroutine does not return */
  luaG_runerror(L,"gettable chain too long; possible loop");
}


