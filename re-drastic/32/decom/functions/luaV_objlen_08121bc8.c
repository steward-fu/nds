/*
 * Ghidra decompilation
 *
 * Function : luaV_objlen
 * Address  : 08121bc8
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void luaV_objlen(lua_State *L,StkId ra,TValue *rb)

{
  Table *events;
  int iVar1;
  TValue *tm;
  TValue *f;
  TValue *io_1;
  TValue *io;
  Table *t;
  Table *h;
  uint uVar2;
  
  uVar2 = rb->tt_ & 0xf;
  if (uVar2 == 4) {
    ra->value_ = *(Value *)((rb->value_).f + 0xc);
    ra->tt_ = 0x13;
    return;
  }
  if (uVar2 == 5) {
    t = (Table *)(rb->value_).gc;
    events = t->metatable;
    if (((events == (Table *)0x0) || ((events->flags & 0x10) != 0)) ||
       (f = luaT_gettm(events,TM_LEN,L->l_G->tmname[4]), f == (TValue *)0x0)) {
      iVar1 = luaH_getn(t);
      (ra->value_).b = iVar1;
      ra->tt_ = 0x13;
      return;
    }
  }
  else {
    f = luaT_gettmbyobj(L,rb,TM_LEN);
    if (f->tt_ == 0) {
                    /* WARNING: Subroutine does not return */
      luaG_typeerror(L,rb,"get length of");
    }
  }
  luaT_callTM(L,f,rb,rb,ra,1);
  return;
}


