/*
 * Ghidra decompilation
 *
 * Function : luaL_pushresultsize
 * Address  : 08126098
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void luaL_pushresultsize(luaL_Buffer *B,size_t sz)

{
  size_t len;
  lua_State *L_00;
  lua_State *L;
  
  len = sz + B->n;
  L_00 = B->L;
  B->n = len;
  lua_pushlstring(L_00,B->b,len);
  if (B->b != B->initb) {
    lua_rotate(L_00,-2,-1);
    lua_settop(L_00,-2);
    return;
  }
  return;
}


