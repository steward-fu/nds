/*
 * Ghidra decompilation
 *
 * Function : ll_searchpath
 * Address  : 08132a44
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int ll_searchpath(lua_State *L)

{
  char *pcVar1;
  char *path;
  char *sep;
  char *dirsep;
  char *f;
  int iVar2;
  
  pcVar1 = luaL_checklstring(L,1,(size_t *)0x0);
  path = luaL_checklstring(L,2,(size_t *)0x0);
  sep = luaL_optlstring(L,3,".",(size_t *)0x0);
  dirsep = luaL_optlstring(L,4,"/",(size_t *)0x0);
  pcVar1 = searchpath(L,pcVar1,path,sep,dirsep);
  if (pcVar1 == (char *)0x0) {
    lua_pushnil(L);
    lua_rotate(L,-2,1);
    iVar2 = 2;
  }
  else {
    iVar2 = 1;
  }
  return iVar2;
}


