/*
 * Ghidra decompilation
 *
 * Function : luaV_settable
 * Address  : 081211b0
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void luaV_settable(lua_State *L,TValue *t,TValue *key,StkId val)

{
  TValue *tm;
  TValue *oldval;
  Table *events;
  TValue *f;
  uint uVar1;
  int iVar2;
  Table *t_00;
  Table *h;
  TValue *io1;
  
  iVar2 = 2000;
  uVar1 = t->tt_;
  do {
    if (uVar1 == 0x45) {
      t_00 = (Table *)(t->value_).gc;
      io1 = luaH_get(t_00,key);
      if (io1->tt_ != 0) {
LAB_081212c8:
        iVar2 = val->tt_;
        io1->value_ = val->value_;
        io1->tt_ = iVar2;
        t_00->flags = '\0';
        if ((((val->tt_ & 0x40U) != 0) && ((t_00->marked & 4) != 0)) &&
           ((((val->value_).gc)->marked & 3) != 0)) {
          luaC_barrierback_(L,t_00);
          return;
        }
        return;
      }
      events = t_00->metatable;
      if (((events == (Table *)0x0) || ((events->flags & 2) != 0)) ||
         (f = luaT_gettm(events,TM_NEWINDEX,L->l_G->tmname[1]), f == (TValue *)0x0)) {
        if (io1 == &luaO_nilobject_) {
          io1 = luaH_newkey(L,t_00,key);
        }
        goto LAB_081212c8;
      }
      uVar1 = f->tt_;
    }
    else {
      f = luaT_gettmbyobj(L,t,TM_NEWINDEX);
      uVar1 = f->tt_;
      if (uVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        luaG_typeerror(L,t,"index");
      }
    }
    if ((uVar1 & 0xf) == 6) {
      luaT_callTM(L,f,t,key,val,0);
      return;
    }
    iVar2 = iVar2 + -1;
    t = f;
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      luaG_runerror(L,"settable chain too long; possible loop");
    }
  } while( true );
}


