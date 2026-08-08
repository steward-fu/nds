/*
 * Ghidra decompilation
 *
 * Function : FUN_0020a31c
 * Address  : 0020a31c
 * Program  : drastic64
 */


undefined8 FUN_0020a31c(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  iVar2 = lua_gettop();
  if (0 < iVar2) {
    uVar5 = 0;
    iVar4 = 1;
    do {
      iVar1 = iVar4 + 1;
      uVar3 = luaL_checkinteger(param_1,iVar4);
      uVar5 = uVar5 ^ uVar3;
      iVar4 = iVar1;
    } while (iVar1 != iVar2 + 1);
    lua_pushinteger(param_1,uVar5);
    return 1;
  }
  lua_pushinteger(param_1,0);
  return 1;
}


