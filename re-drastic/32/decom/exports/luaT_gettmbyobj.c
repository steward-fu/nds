/*
 * Ghidra decompilation
 *
 * Function : luaT_gettmbyobj
 * Address  : 0811fce8
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

TValue * luaT_gettmbyobj(lua_State *L,TValue *o,TMS event)

{
  TValue *pTVar1;
  uint uVar2;
  Table *t;
  Table *mt;
  
  uVar2 = o->tt_ & 0xf;
  if (uVar2 == 5) {
    t = *(Table **)((o->value_).f + 0x18);
  }
  else if (uVar2 == 7) {
    t = *(Table **)((o->value_).f + 8);
  }
  else {
    t = L->l_G->mt[uVar2];
  }
  if (t == (Table *)0x0) {
    return &luaO_nilobject_;
  }
  pTVar1 = luaH_getstr(t,L->l_G->tmname[event]);
  return pTVar1;
}


