/*
 * Ghidra decompilation
 *
 * Function : findfield
 * Address  : 08124804
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int findfield(lua_State *L,int objidx,int level)

{
  int iVar1;
  
  if (level == 0) {
    return 0;
  }
  iVar1 = lua_type(L,-1);
  if (iVar1 == 5) {
    lua_pushnil(L);
    while (iVar1 = lua_next(L,-2), iVar1 != 0) {
      iVar1 = lua_type(L,-2);
      if (iVar1 == 4) {
        iVar1 = lua_rawequal(L,objidx,-1);
        if (iVar1 != 0) {
          lua_settop(L,-2);
          return 1;
        }
        iVar1 = findfield(L,objidx,level + -1);
        if (iVar1 != 0) {
          lua_rotate(L,-2,-1);
          lua_settop(L,-2);
          lua_pushlstring(L,".",1);
          lua_rotate(L,-2,1);
          lua_concat(L,3);
          return 1;
        }
      }
      lua_settop(L,-2);
    }
  }
  return 0;
}


