/*
 * Ghidra decompilation
 *
 * Function : tmove
 * Address  : 081306a4
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int tmove(lua_State *L)

{
  lua_Integer lVar1;
  lua_Integer f;
  lua_Integer lVar2;
  lua_Integer e;
  lua_Integer lVar3;
  lua_Integer t;
  int iVar4;
  int iVar5;
  int iVar6;
  int tt;
  code *pcVar7;
  code *pcVar8;
  
  lVar1 = luaL_checkinteger(L,2);
  lVar2 = luaL_checkinteger(L,3);
  lVar3 = luaL_checkinteger(L,4);
  iVar4 = lua_type(L,5);
  if (iVar4 < 1) {
    iVar4 = 1;
  }
  else {
    iVar4 = 5;
  }
  if (lVar1 < 1) {
    luaL_argerror(L,2,"initial position must be positive");
  }
  if (lVar1 <= lVar2) {
    iVar5 = luaL_getmetafield(L,1,"__index");
    if (iVar5 == 0) {
      luaL_checktype(L,1,5);
      pcVar7 = lua_rawgeti;
    }
    else {
      pcVar7 = lua_geti;
    }
    iVar5 = luaL_getmetafield(L,iVar4,"__newindex");
    if (iVar5 == 0) {
      luaL_checktype(L,iVar4,5);
      pcVar8 = lua_rawseti;
    }
    else {
      pcVar8 = lua_seti;
    }
    if (lVar1 < lVar3) {
      do {
        (*pcVar7)(L,1,lVar2);
        iVar5 = (lVar3 - lVar1) + lVar2;
        lVar2 = lVar2 + -1;
        (*pcVar8)(L,iVar4,iVar5);
      } while (lVar2 != lVar1 + -1);
    }
    else {
      iVar5 = 0;
      do {
        (*pcVar7)(L,1,lVar1 + iVar5);
        iVar6 = lVar3 + iVar5;
        iVar5 = iVar5 + 1;
        (*pcVar8)(L,iVar4,iVar6);
      } while (iVar5 <= lVar2 - lVar1);
    }
  }
  lua_pushvalue(L,iVar4);
  return 1;
}


