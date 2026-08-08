/*
 * Ghidra decompilation
 *
 * Function : b_test
 * Address  : 08128a90
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int b_test(lua_State *L)

{
  int iVar1;
  int n;
  uint uVar2;
  int arg;
  int iVar3;
  lua_Unsigned r;
  uint b;
  
  iVar1 = lua_gettop(L);
  if (iVar1 < 1) {
    b = 1;
  }
  else {
    b = 0xffffffff;
    arg = 1;
    do {
      iVar3 = arg + 1;
      uVar2 = luaL_checkinteger(L,arg);
      b = b & uVar2;
      arg = iVar3;
    } while (iVar3 <= iVar1);
    if (b != 0) {
      b = 1;
    }
  }
  lua_pushboolean(L,b);
  return 1;
}


