/*
 * Ghidra decompilation
 *
 * Function : FUN_0020a48c
 * Address  : 0020a48c
 * Program  : drastic64
 */


undefined8 FUN_0020a48c(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  iVar2 = lua_gettop();
  if (0 < iVar2) {
    uVar4 = 0xffffffff;
    iVar5 = 1;
    do {
      iVar1 = iVar5 + 1;
      uVar3 = luaL_checkinteger(param_1,iVar5);
      uVar4 = uVar4 & uVar3;
      iVar5 = iVar1;
    } while (iVar2 + 1 != iVar1);
    lua_pushinteger(param_1,uVar4);
    return 1;
  }
  lua_pushinteger(param_1,0xffffffff);
  return 1;
}


