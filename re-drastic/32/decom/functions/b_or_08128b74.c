/*
 * Ghidra decompilation
 *
 * Function : b_or
 * Address  : 08128b74
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int b_or(lua_State *L)

{
  int iVar1;
  int n;
  uint uVar2;
  int arg;
  int iVar3;
  uint n_00;
  
  iVar1 = lua_gettop(L);
  if (iVar1 < 1) {
    n_00 = 0;
  }
  else {
    n_00 = 0;
    arg = 1;
    do {
      iVar3 = arg + 1;
      uVar2 = luaL_checkinteger(L,arg);
      n_00 = n_00 | uVar2;
      arg = iVar3;
    } while (iVar3 <= iVar1);
  }
  lua_pushinteger(L,n_00);
  return 1;
}


