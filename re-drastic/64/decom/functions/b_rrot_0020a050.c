/*
 * Ghidra decompilation
 *
 * Function : b_rrot
 * Address  : 0020a050
 * Program  : drastic64
 */


undefined8 b_rrot(undefined8 param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = luaL_checkinteger(param_1,2);
  uVar2 = luaL_checkinteger(param_1,1);
  lua_pushinteger(param_1,uVar2 >> (uVar1 & 0x1f) | uVar2 << 0x20 - (uVar1 & 0x1f));
  return 1;
}


