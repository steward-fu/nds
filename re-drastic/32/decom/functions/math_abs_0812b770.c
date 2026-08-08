/*
 * Ghidra decompilation
 *
 * Function : math_abs
 * Address  : 0812b770
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int math_abs(lua_State *L)

{
  int iVar1;
  uint uVar2;
  lua_Number lVar3;
  
  iVar1 = lua_isinteger(L,1);
  if (iVar1 != 0) {
    uVar2 = lua_tointegerx(L,1,(int *)0x0);
    lua_pushinteger(L,(uVar2 ^ (int)uVar2 >> 0x1f) - ((int)uVar2 >> 0x1f));
    return 1;
  }
  lVar3 = luaL_checknumber(L,1);
  lua_pushnumber(L,ABS(lVar3));
  return 1;
}


