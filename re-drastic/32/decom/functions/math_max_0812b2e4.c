/*
 * Ghidra decompilation
 *
 * Function : math_max
 * Address  : 0812b2e4
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int math_max(lua_State *L)

{
  int iVar1;
  int n;
  int iVar2;
  int index2;
  int index1;
  
  iVar1 = lua_gettop(L);
  if (iVar1 < 1) {
    luaL_argerror(L,1,"value expected");
    index1 = 1;
  }
  else if (iVar1 < 2) {
    index1 = 1;
  }
  else {
    index2 = 2;
    index1 = 1;
    do {
      iVar2 = lua_compare(L,index1,index2,1);
      if (iVar2 != 0) {
        index1 = index2;
      }
      index2 = index2 + 1;
    } while (index2 <= iVar1);
  }
  lua_pushvalue(L,index1);
  return 1;
}


