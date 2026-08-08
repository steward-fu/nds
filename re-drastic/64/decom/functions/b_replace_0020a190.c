/*
 * Ghidra decompilation
 *
 * Function : b_replace
 * Address  : 0020a190
 * Program  : drastic64
 */


undefined8 b_replace(undefined8 param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  uVar2 = luaL_checkinteger(param_1,1);
  uVar3 = luaL_checkinteger(param_1,2);
  uVar4 = luaL_checkinteger(param_1,3);
  iVar5 = luaL_optinteger(param_1,4,1);
  if ((int)uVar4 < 0) {
    luaL_argerror(param_1,3,"field cannot be negative");
  }
  if (iVar5 < 1) {
    luaL_argerror(param_1,4,"width must be positive");
  }
  if (0x20 < (int)(uVar4 + iVar5)) {
    luaL_error(param_1,"trying to access non-existent bits");
  }
  uVar1 = ~(-2 << (ulong)(iVar5 - 1U & 0x1f));
  lua_pushinteger(param_1,(uVar1 & uVar3) << (ulong)(uVar4 & 0x1f) |
                          uVar2 & (uVar1 << (ulong)(uVar4 & 0x1f) ^ 0xffffffff));
  return 1;
}


