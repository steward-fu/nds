/*
 * Ghidra decompilation
 *
 * Function : luaH_free
 * Address  : 0811ea58
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void luaH_free(lua_State *L,Table *t)

{
  if (t->node != &dummynode_) {
    luaM_realloc_(L,t->node,0x14 << t->lsizenode,0);
  }
  luaM_realloc_(L,t->array,t->sizearray << 3,0);
  luaM_realloc_(L,t,0x20,0);
  return;
}


