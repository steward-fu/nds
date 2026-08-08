/*
 * Ghidra decompilation
 *
 * Function : tconcat
 * Address  : 08130d7c
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int tconcat(lua_State *L)

{
  int iVar1;
  char *pcVar2;
  char *sep;
  lua_Integer lVar3;
  lua_Integer i;
  int iVar4;
  char *pcVar5;
  TabA *ta_00;
  lua_Integer lVar6;
  lua_Integer last;
  size_t lsep;
  TabA ta;
  luaL_Buffer b;
  
  iVar1 = __stack_chk_guard;
  ta_00 = (TabA *)0x814446c;
  pcVar2 = luaL_optlstring(L,2,"",&lsep);
  checktab(L,(int)&ta,ta_00);
  lVar3 = luaL_optinteger(L,3,1);
  iVar4 = lua_type(L,4);
  if (iVar4 < 1) {
    last = luaL_len(L,1);
  }
  else {
    last = luaL_checkinteger(L,4);
  }
  luaL_buffinit(L,&b);
  lVar6 = lVar3;
  if (lVar3 < last) {
    do {
      (*ta.geti)(L,1,lVar3);
      iVar4 = lua_isstring(L,-1);
      if (iVar4 == 0) {
        iVar4 = lua_type(L,-1);
        pcVar5 = lua_typename(L,iVar4);
        luaL_error(L,"invalid value (%s) at index %d in table for \'concat\'",pcVar5,lVar3);
      }
      lVar3 = lVar3 + 1;
      luaL_addvalue(&b);
      luaL_addlstring(&b,pcVar2,lsep);
      lVar6 = last;
    } while (last != lVar3);
  }
  if (last == lVar6) {
    (*ta.geti)(L,1,last);
    iVar4 = lua_isstring(L,-1);
    if (iVar4 == 0) {
      iVar4 = lua_type(L,-1);
      pcVar2 = lua_typename(L,iVar4);
      luaL_error(L,"invalid value (%s) at index %d in table for \'concat\'",pcVar2,last);
    }
    luaL_addvalue(&b);
  }
  luaL_pushresult(&b);
  if (iVar1 != __stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 1;
}


