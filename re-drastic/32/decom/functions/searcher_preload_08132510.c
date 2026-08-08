/*
 * Ghidra decompilation
 *
 * Function : searcher_preload
 * Address  : 08132510
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int searcher_preload(lua_State *L)

{
  char *k;
  char *name;
  int iVar1;
  
  k = luaL_checklstring(L,1,(size_t *)0x0);
  lua_getfield(L,-0xf4628,"_PRELOAD");
  iVar1 = lua_getfield(L,-1,k);
  if (iVar1 == 0) {
    lua_pushfstring(L,"\n\tno field package.preload[\'%s\']",k);
  }
  return 1;
}


