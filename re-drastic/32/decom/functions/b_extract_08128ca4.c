/*
 * Ghidra decompilation
 *
 * Function : b_extract
 * Address  : 08128ca4
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int b_extract(lua_State *L)

{
  uint uVar1;
  lua_Unsigned r;
  uint uVar2;
  lua_Integer f_1;
  lua_Integer lVar3;
  lua_Integer w_1;
  int w;
  int f;
  
  uVar1 = luaL_checkinteger(L,1);
  uVar2 = luaL_checkinteger(L,2);
  lVar3 = luaL_optinteger(L,3,1);
  if ((int)uVar2 < 0) {
    luaL_argerror(L,2,"field cannot be negative");
  }
  if (lVar3 < 1) {
    luaL_argerror(L,3,"width must be positive");
  }
  if (0x20 < (int)(uVar2 + lVar3)) {
    luaL_error(L,"trying to access non-existent bits");
  }
  w = lVar3 + -1;
  lua_pushinteger(L,~(-2 << (w & 0xffU)) & uVar1 >> (uVar2 & 0xff));
  return 1;
}


