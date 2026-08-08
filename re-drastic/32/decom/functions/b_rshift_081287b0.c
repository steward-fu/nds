/*
 * Ghidra decompilation
 *
 * Function : b_rshift
 * Address  : 081287b0
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int b_rshift(lua_State *L)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = luaL_checkinteger(L,1);
  uVar2 = luaL_checkinteger(L,2);
  if ((int)uVar2 < 1) {
    if (uVar2 == 0xffffffe1 || (int)-uVar2 < 0x1f) {
      uVar1 = uVar1 << (-uVar2 & 0xff);
      goto LAB_081287f0;
    }
  }
  else if ((int)uVar2 < 0x20) {
    uVar1 = uVar1 >> (uVar2 & 0xff);
    goto LAB_081287f0;
  }
  uVar1 = 0;
LAB_081287f0:
  lua_pushinteger(L,uVar1);
  return 1;
}


