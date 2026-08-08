/*
 * Ghidra decompilation
 *
 * Function : searcher_preload
 * Address  : 00213a30
 * Program  : drastic64
 */


undefined8 searcher_preload(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = luaL_checklstring(param_1,1,0);
  lua_getfield(param_1,0xfff0b9d8,"_PRELOAD");
  iVar1 = lua_getfield(param_1,0xffffffff,uVar2);
  if (iVar1 != 0) {
    return 1;
  }
  lua_pushfstring(param_1,"\n\tno field package.preload[\'%s\']",uVar2);
  return 1;
}


