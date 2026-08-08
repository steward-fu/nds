/*
 * Ghidra decompilation
 *
 * Function : luaS_newudata
 * Address  : 0811e5e8
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

Udata * luaS_newudata(lua_State *L,size_t s)

{
  Value VVar1;
  int iVar2;
  Udata *pUVar3;
  Udata *u;
  Udata *iu;
  
  if (s < 0x7fffffec) {
    pUVar3 = (Udata *)luaC_newobj(L,7,s + 0x18);
    iVar2 = luaO_nilobject_.tt_;
    VVar1 = luaO_nilobject_.value_;
    pUVar3->len = s;
    pUVar3->ttuv_ = (lu_byte)iVar2;
    pUVar3->metatable = (Table *)0x0;
    pUVar3->user_ = VVar1;
    return pUVar3;
  }
                    /* WARNING: Subroutine does not return */
  luaM_toobig(L);
}


