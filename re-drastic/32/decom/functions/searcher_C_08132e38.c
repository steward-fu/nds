/*
 * Ghidra decompilation
 *
 * Function : searcher_C
 * Address  : 08132e38
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int searcher_C(lua_State *L)

{
  char *pcVar1;
  char *name;
  char *pcVar2;
  char *path;
  char *pcVar3;
  char *mark;
  char *openfunc;
  int iVar4;
  int stat;
  
  pcVar1 = luaL_checklstring(L,1,(size_t *)0x0);
  lua_getfield(L,-0xf4629,"cpath");
  pcVar2 = lua_tolstring(L,-1,(size_t *)0x0);
  if (pcVar2 == (char *)0x0) {
    luaL_error(L,"\'package.%s\' must be a string","cpath");
  }
  pcVar2 = searchpath(L,pcVar1,pcVar2,".","/");
  if (pcVar2 == (char *)0x0) {
    return 1;
  }
  pcVar1 = luaL_gsub(L,pcVar1,".","_");
  pcVar3 = strchr(pcVar1,0x2d);
  if (pcVar3 != (char *)0x0) {
    pcVar1 = lua_pushlstring(L,pcVar1,(int)pcVar3 - (int)pcVar1);
    pcVar1 = lua_pushfstring(L,"luaopen_%s",pcVar1);
    iVar4 = lookforfunc(L,pcVar2,pcVar1);
    if (iVar4 != 2) goto joined_r0x08132fc4;
    pcVar1 = pcVar3 + 1;
  }
  pcVar1 = lua_pushfstring(L,"luaopen_%s",pcVar1);
  iVar4 = lookforfunc(L,pcVar2,pcVar1);
joined_r0x08132fc4:
  if (iVar4 == 0) {
    lua_pushstring(L,pcVar2);
    iVar4 = 2;
  }
  else {
    pcVar1 = lua_tolstring(L,1,(size_t *)0x0);
    pcVar3 = lua_tolstring(L,-1,(size_t *)0x0);
    iVar4 = luaL_error(L,"error loading module \'%s\' from file \'%s\':\n\t%s",pcVar1,pcVar2,pcVar3)
    ;
  }
  return iVar4;
}


