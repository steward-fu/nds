/*
 * Ghidra decompilation
 *
 * Function : b_replace
 * Address  : 081289a8
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int b_replace(lua_State *L)

{
  uint uVar1;
  lua_Unsigned r;
  uint uVar2;
  lua_Unsigned v;
  uint uVar3;
  lua_Integer f_1;
  lua_Integer lVar4;
  lua_Integer w_1;
  uint uVar5;
  int m;
  int w;
  int f;
  
  uVar1 = luaL_checkinteger(L,1);
  uVar2 = luaL_checkinteger(L,2);
  uVar3 = luaL_checkinteger(L,3);
  lVar4 = luaL_optinteger(L,4,1);
  if ((int)uVar3 < 0) {
    luaL_argerror(L,3,"field cannot be negative");
  }
  if (lVar4 < 1) {
    luaL_argerror(L,4,"width must be positive");
  }
  if (0x20 < (int)(uVar3 + lVar4)) {
    luaL_error(L,"trying to access non-existent bits");
  }
  w = lVar4 + -1;
  uVar5 = ~(-2 << (w & 0xffU));
  lua_pushinteger(L,uVar1 & ~(uVar5 << (uVar3 & 0xff)) | (uVar5 & uVar2) << (uVar3 & 0xff));
  return 1;
}


