/*
 * Ghidra decompilation
 *
 * Function : searcher_Croot
 * Address  : 08132b08
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int searcher_Croot(lua_State *L)

{
  char *pcVar1;
  char *name;
  char *p;
  char *pcVar2;
  char *pcVar3;
  char *path;
  char *pcVar4;
  char *mark;
  char *openfunc;
  int iVar5;
  int stat;
  
  pcVar1 = luaL_checklstring(L,1,(size_t *)0x0);
  name = strchr(pcVar1,0x2e);
  if (name == (char *)0x0) {
    return 0;
  }
  lua_pushlstring(L,pcVar1,(int)name - (int)pcVar1);
  pcVar2 = lua_tolstring(L,-1,(size_t *)0x0);
  lua_getfield(L,-0xf4629,"cpath");
  pcVar3 = lua_tolstring(L,-1,(size_t *)0x0);
  if (pcVar3 == (char *)0x0) {
    luaL_error(L,"\'package.%s\' must be a string","cpath");
  }
  pcVar2 = searchpath(L,pcVar2,pcVar3,".","/");
  if (pcVar2 == (char *)0x0) {
    return 1;
  }
  pcVar3 = luaL_gsub(L,pcVar1,".","_");
  pcVar4 = strchr(pcVar3,0x2d);
  if (pcVar4 != (char *)0x0) {
    pcVar3 = lua_pushlstring(L,pcVar3,(int)pcVar4 - (int)pcVar3);
    pcVar3 = lua_pushfstring(L,"luaopen_%s",pcVar3);
    iVar5 = lookforfunc(L,pcVar2,pcVar3);
    if (iVar5 != 2) {
      if (iVar5 == 0) goto LAB_08132cc0;
      goto LAB_08132c38;
    }
    pcVar3 = pcVar4 + 1;
  }
  pcVar3 = lua_pushfstring(L,"luaopen_%s",pcVar3);
  iVar5 = lookforfunc(L,pcVar2,pcVar3);
  if (iVar5 == 0) {
LAB_08132cc0:
    lua_pushstring(L,pcVar2);
    return 2;
  }
  if (iVar5 == 2) {
    lua_pushfstring(L,"\n\tno module \'%s\' in file \'%s\'",pcVar1,pcVar2);
    return 1;
  }
LAB_08132c38:
  pcVar1 = lua_tolstring(L,1,(size_t *)0x0);
  pcVar3 = lua_tolstring(L,-1,(size_t *)0x0);
  iVar5 = luaL_error(L,"error loading module \'%s\' from file \'%s\':\n\t%s",pcVar1,pcVar2,pcVar3);
  return iVar5;
}


