/*
 * Ghidra decompilation
 *
 * Function : b_extract
 * Address  : 0020a520
 * Program  : drastic64
 */


undefined8 b_extract(undefined8 param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = luaL_checkinteger(param_1,1);
  uVar2 = luaL_checkinteger(param_1,2);
  iVar3 = luaL_optinteger(param_1,3,1);
  if ((int)uVar2 < 0) {
    luaL_argerror(param_1,2,"field cannot be negative");
  }
  if (iVar3 < 1) {
    luaL_argerror(param_1,3,"width must be positive");
  }
  if (0x20 < (int)(uVar2 + iVar3)) {
    luaL_error(param_1,"trying to access non-existent bits");
  }
  lua_pushinteger(param_1,uVar1 >> (ulong)(uVar2 & 0x1f) &
                          (-2 << (ulong)(iVar3 - 1U & 0x1f) ^ 0xffffffffU));
  return 1;
}


