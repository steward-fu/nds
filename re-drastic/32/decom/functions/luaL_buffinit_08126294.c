/*
 * Ghidra decompilation
 *
 * Function : luaL_buffinit
 * Address  : 08126294
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void luaL_buffinit(lua_State *L,luaL_Buffer *B)

{
  B->b = B->initb;
  B->size = 0x800;
  B->n = 0;
  B->L = L;
  return;
}


