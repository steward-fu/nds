/*
 * Ghidra decompilation
 *
 * Function : tinsert
 * Address  : 081309f8
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int tinsert(lua_State *L)

{
  int iVar1;
  lua_Integer lVar2;
  int iVar3;
  int iVar4;
  lua_Integer pos;
  TabA *in_r2;
  int iVar5;
  lua_Integer e;
  lua_Integer i;
  bool bVar6;
  TabA ta;
  
  iVar1 = __stack_chk_guard;
  checktab(L,(int)&ta,in_r2);
  lVar2 = luaL_len(L,1);
  iVar5 = lVar2 + 1;
  iVar3 = lua_gettop(L);
  iVar4 = iVar5;
  if (iVar3 != 2) {
    if (iVar3 != 3) {
      iVar5 = luaL_error(L,"wrong number of arguments to \'insert\'");
      goto LAB_08130ac8;
    }
    iVar4 = luaL_checkinteger(L,2);
    bVar6 = iVar5 == iVar4;
    iVar3 = iVar5 - iVar4;
    if (iVar5 >= iVar4) {
      bVar6 = iVar4 == 0;
      iVar3 = iVar4;
    }
    if (bVar6 || iVar3 < 0 != (iVar5 < iVar4 && SBORROW4(iVar5,iVar4))) {
      luaL_argerror(L,2,"position out of bounds");
    }
    while (iVar4 < iVar5) {
      (*ta.geti)(L,1,iVar5 + -1);
      (*ta.seti)(L,1,iVar5);
      iVar5 = iVar5 + -1;
    }
  }
  (*ta.seti)(L,1,iVar4);
  iVar5 = 0;
LAB_08130ac8:
  if (iVar1 == __stack_chk_guard) {
    return iVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


