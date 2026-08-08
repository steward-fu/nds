/*
 * Ghidra decompilation
 *
 * Function : b_lshift
 * Address  : 08128820
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int b_lshift(lua_State *L)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = luaL_checkinteger(L,1);
  uVar2 = luaL_checkinteger(L,2);
  if ((int)uVar2 < 0) {
    if (uVar2 == 0xffffffe1 || (int)-uVar2 < 0x1f) {
      uVar1 = uVar1 >> (-uVar2 & 0xff);
      goto LAB_0812885c;
    }
  }
  else if ((int)uVar2 < 0x20) {
    uVar1 = uVar1 << (uVar2 & 0xff);
    goto LAB_0812885c;
  }
  uVar1 = 0;
LAB_0812885c:
  lua_pushinteger(L,uVar1);
  return 1;
}


