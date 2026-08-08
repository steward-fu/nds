/*
 * Ghidra decompilation
 *
 * Function : b_arshift
 * Address  : 08128914
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int b_arshift(lua_State *L)

{
  uint uVar1;
  lua_Unsigned r;
  uint uVar2;
  lua_Integer i;
  uint n;
  
  uVar1 = luaL_checkinteger(L,1);
  uVar2 = luaL_checkinteger(L,2);
  if ((int)(~uVar1 | uVar2) < 0) {
    if ((int)uVar2 < 1) {
      if (uVar2 == 0xffffffe1 || (int)-uVar2 < 0x1f) {
        n = uVar1 << (-uVar2 & 0xff);
        goto LAB_0812897c;
      }
    }
    else if ((int)uVar2 < 0x20) {
      n = uVar1 >> (uVar2 & 0xff);
      goto LAB_0812897c;
    }
    n = 0;
  }
  else {
    n = 0xffffffff;
    if ((int)uVar2 < 0x20) {
      n = ~(0xffffffffU >> (uVar2 & 0xff)) | uVar1 >> (uVar2 & 0xff);
    }
  }
LAB_0812897c:
  lua_pushinteger(L,n);
  return 1;
}


