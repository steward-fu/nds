/*
 * Ghidra decompilation
 *
 * Function : luaH_resizearray
 * Address  : 0811f614
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void luaH_resizearray(lua_State *L,Table *t,uint nasize)

{
  uint nhsize;
  
  if (t->node == &dummynode_) {
    nhsize = 0;
  }
  else {
    nhsize = 1 << t->lsizenode;
  }
  luaH_resize(L,t,nasize,nhsize);
  return;
}


