/*
 * Ghidra decompilation
 *
 * Function : searcher_Lua
 * Address  : 08132d18
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int searcher_Lua(lua_State *L)

{
  char *pcVar1;
  char *name;
  char *pcVar2;
  char *path;
  int iVar3;
  char *pcVar4;
  
  pcVar1 = luaL_checklstring(L,1,(size_t *)0x0);
  lua_getfield(L,-0xf4629,"path");
  pcVar2 = lua_tolstring(L,-1,(size_t *)0x0);
  if (pcVar2 == (char *)0x0) {
    luaL_error(L,"\'package.%s\' must be a string","path");
  }
  pcVar1 = searchpath(L,pcVar1,pcVar2,".","/");
  if (pcVar1 == (char *)0x0) {
    iVar3 = 1;
  }
  else {
    iVar3 = luaL_loadfilex(L,pcVar1,(char *)0x0);
    if (iVar3 == 0) {
      lua_pushstring(L,pcVar1);
      iVar3 = 2;
    }
    else {
      pcVar2 = lua_tolstring(L,1,(size_t *)0x0);
      pcVar4 = lua_tolstring(L,-1,(size_t *)0x0);
      iVar3 = luaL_error(L,"error loading module \'%s\' from file \'%s\':\n\t%s",pcVar2,pcVar1,
                         pcVar4);
    }
  }
  return iVar3;
}


