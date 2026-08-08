/*
 * Ghidra decompilation
 *
 * Function : searcher_Lua
 * Address  : 002144e0
 * Program  : drastic64
 */


undefined8 searcher_Lua(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar2 = luaL_checklstring(param_1,1,0);
  lua_getfield(param_1,0xfff0b9d7,&DAT_0022ba78);
  lVar3 = lua_tolstring(param_1,0xffffffff,0);
  if (lVar3 == 0) {
    luaL_error(param_1,"\'package.%s\' must be a string",&DAT_0022ba78);
  }
  lVar3 = searchpath(param_1,uVar2,lVar3,".",&DAT_0022b9f8);
  if (lVar3 != 0) {
    iVar1 = luaL_loadfilex(param_1,lVar3,0);
    if (iVar1 != 0) {
      uVar2 = lua_tolstring(param_1,1,0);
      uVar4 = lua_tolstring(param_1,0xffffffff,0);
      uVar2 = luaL_error(param_1,"error loading module \'%s\' from file \'%s\':\n\t%s",uVar2,lVar3,
                         uVar4);
      return uVar2;
    }
    lua_pushstring(param_1,lVar3);
    return 2;
  }
  return 1;
}


