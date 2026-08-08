/*
 * Ghidra decompilation
 *
 * Function : tremove
 * Address  : 08130c38
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int tremove(lua_State *L)

{
  int iVar1;
  lua_Integer def;
  lua_Integer size;
  lua_Integer lVar2;
  lua_Integer pos;
  TabA *in_r2;
  lua_Integer lVar3;
  int iVar4;
  TabA ta;
  
  iVar1 = __stack_chk_guard;
  checktab(L,(int)&ta,in_r2);
  def = luaL_len(L,1);
  lVar2 = luaL_optinteger(L,2,def);
  if (def == lVar2) {
    (*ta.geti)(L,1,def);
    lVar2 = def;
  }
  else {
    if ((lVar2 < 1) || (def + 1 < lVar2)) {
      luaL_argerror(L,1,"position out of bounds");
    }
    (*ta.geti)(L,1,lVar2);
    lVar3 = lVar2;
    if (lVar2 < def) {
      do {
        iVar4 = lVar3 + 1;
        (*ta.geti)(L,1,iVar4);
        (*ta.seti)(L,1,lVar3);
        lVar3 = iVar4;
        lVar2 = def;
      } while (def != iVar4);
    }
  }
  lua_pushnil(L);
  (*ta.seti)(L,1,lVar2);
  if (iVar1 == __stack_chk_guard) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


