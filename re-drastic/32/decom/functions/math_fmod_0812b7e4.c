/*
 * Ghidra decompilation
 *
 * Function : math_fmod
 * Address  : 0812b7e4
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int math_fmod(lua_State *L)

{
  int iVar1;
  lua_Integer lVar2;
  lua_Integer d;
  lua_Integer lVar3;
  lua_Integer n;
  lua_Number __x;
  lua_Number __y;
  float n_00;
  
  iVar1 = lua_isinteger(L,1);
  if ((iVar1 == 0) || (iVar1 = lua_isinteger(L,2), iVar1 == 0)) {
    __x = luaL_checknumber(L,1);
    __y = luaL_checknumber(L,2);
    n_00 = fmodf(__x,__y);
    lua_pushnumber(L,n_00);
  }
  else {
    lVar2 = lua_tointegerx(L,2,(int *)0x0);
    if (lVar2 + 1U < 2) {
      if (lVar2 == 0) {
        luaL_argerror(L,2,"zero");
      }
      lua_pushinteger(L,0);
    }
    else {
      lVar3 = lua_tointegerx(L,1,(int *)0x0);
      __aeabi_idivmod(lVar3,lVar2);
      lua_pushinteger(L,n);
    }
  }
  return 1;
}


