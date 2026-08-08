/*
 * Ghidra decompilation
 *
 * Function : b_rshift
 * Address  : 00209f50
 * Program  : drastic64
 */


undefined8 b_rshift(undefined8 param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = luaL_checkinteger(param_1,1);
  uVar3 = luaL_checkinteger(param_1,2);
  if ((int)uVar3 < 1) {
    iVar1 = uVar2 << (ulong)(-uVar3 & 0x1f);
    if (uVar3 == 0xffffffe0 || (int)(uVar3 + 0x20) < 0 != SCARRY4(uVar3,0x20)) {
      iVar1 = 0;
    }
    lua_pushinteger(param_1,iVar1);
    return 1;
  }
  uVar2 = uVar2 >> (ulong)(uVar3 & 0x1f);
  if (0x1f < (int)uVar3) {
    uVar2 = 0;
  }
  lua_pushinteger(param_1,uVar2);
  return 1;
}


