/*
 * Ghidra decompilation
 *
 * Function : luaL_pushresult
 * Address  : 08126028
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void luaL_pushresult(luaL_Buffer *B)

{
  lua_State *L_00;
  lua_State *L;
  
  L_00 = B->L;
  lua_pushlstring(L_00,B->b,B->n);
  if (B->b != B->initb) {
    lua_rotate(L_00,-2,-1);
    lua_settop(L_00,-2);
    return;
  }
  return;
}


