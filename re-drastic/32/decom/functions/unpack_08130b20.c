/*
 * Ghidra decompilation
 *
 * Function : unpack
 * Address  : 08130b20
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int unpack(lua_State *L)

{
  bool bVar1;
  int iVar2;
  lua_Integer lVar3;
  lua_Integer i;
  int iVar4;
  int iVar5;
  TabA *in_r2;
  lua_Integer e;
  lua_Unsigned n;
  TabA ta;
  
  iVar2 = __stack_chk_guard;
  checktab(L,(int)&ta,in_r2);
  lVar3 = luaL_optinteger(L,2,1);
  iVar4 = lua_type(L,3);
  if (iVar4 < 1) {
    e = luaL_len(L,1);
  }
  else {
    e = luaL_checkinteger(L,3);
  }
  if (e < lVar3) {
    iVar4 = 0;
  }
  else {
    if ((uint)(e - lVar3) < 0x7fffffff) {
      iVar4 = (e - lVar3) + 1;
      iVar5 = lua_checkstack(L,iVar4);
      if (iVar5 != 0) {
        do {
          (*ta.geti)(L,1,lVar3);
          bVar1 = lVar3 < e;
          lVar3 = lVar3 + 1;
        } while (bVar1);
        goto LAB_08130bdc;
      }
    }
    iVar4 = luaL_error(L,"too many results to unpack");
  }
LAB_08130bdc:
  if (iVar2 != __stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar4;
}


