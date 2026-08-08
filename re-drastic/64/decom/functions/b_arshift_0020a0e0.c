/*
 * Ghidra decompilation
 *
 * Function : b_arshift
 * Address  : 0020a0e0
 * Program  : drastic64
 */


undefined8 b_arshift(undefined8 param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = luaL_checkinteger(param_1,1);
  uVar2 = luaL_checkinteger(param_1,2);
  if ((int)uVar2 < 0 || -1 < (int)uVar1) {
    if ((int)uVar2 < 1) {
      uVar1 = uVar1 << (ulong)(-uVar2 & 0x1f);
      if (uVar2 == 0xffffffe0 || (int)(uVar2 + 0x20) < 0 != SCARRY4(uVar2,0x20)) {
        uVar1 = 0;
      }
    }
    else {
      uVar1 = uVar1 >> (ulong)(uVar2 & 0x1f);
      if (0x1f < (int)uVar2) {
        uVar1 = 0;
      }
    }
    lua_pushinteger(param_1,uVar1);
    return 1;
  }
  uVar1 = uVar1 >> (ulong)(uVar2 & 0x1f) | 0xffffffffU >> (ulong)(uVar2 & 0x1f) ^ 0xffffffff;
  if (0x1f < (int)uVar2) {
    uVar1 = 0xffffffff;
  }
  lua_pushinteger(param_1,uVar1);
  return 1;
}


