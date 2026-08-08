/*
 * Ghidra decompilation
 *
 * Function : searcher_Croot
 * Address  : 00214200
 * Program  : drastic64
 */


undefined8 searcher_Croot(undefined8 param_1)

{
  int iVar1;
  char *__s;
  char *pcVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  
  __s = (char *)luaL_checklstring(param_1,1,0);
  pcVar2 = strchr(__s,0x2e);
  if (pcVar2 == (char *)0x0) {
    return 0;
  }
  lua_pushlstring(param_1,__s,(long)pcVar2 - (long)__s);
  uVar3 = lua_tolstring(param_1,0xffffffff,0);
  lua_getfield(param_1,0xfff0b9d7,"cpath");
  lVar4 = lua_tolstring(param_1,0xffffffff,0);
  if (lVar4 == 0) {
    luaL_error(param_1,"\'package.%s\' must be a string","cpath");
  }
  lVar4 = searchpath(param_1,uVar3,lVar4,".",&DAT_0022b9f8);
  if (lVar4 == 0) {
    uVar3 = 1;
  }
  else {
    iVar1 = loadfunc(param_1,lVar4,__s);
    if (iVar1 != 0) {
      if (iVar1 != 2) {
        uVar3 = lua_tolstring(param_1,1,0);
        uVar5 = lua_tolstring(param_1,0xffffffff,0);
        uVar3 = luaL_error(param_1,"error loading module \'%s\' from file \'%s\':\n\t%s",uVar3,lVar4
                           ,uVar5);
        return uVar3;
      }
      lua_pushfstring(param_1,"\n\tno module \'%s\' in file \'%s\'",__s,lVar4);
      return 1;
    }
    lua_pushstring(param_1,lVar4);
    uVar3 = 2;
  }
  return uVar3;
}


