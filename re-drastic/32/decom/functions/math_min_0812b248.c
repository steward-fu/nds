/*
 * Ghidra decompilation
 *
 * Function : math_min
 * Address  : 0812b248
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int math_min(lua_State *L)

{
  int iVar1;
  int n;
  int iVar2;
  int index1;
  int index2;
  
  iVar1 = lua_gettop(L);
  if (iVar1 < 1) {
    luaL_argerror(L,1,"value expected");
    index2 = 1;
  }
  else if (iVar1 < 2) {
    index2 = 1;
  }
  else {
    index1 = 2;
    index2 = 1;
    do {
      iVar2 = lua_compare(L,index1,index2,1);
      if (iVar2 != 0) {
        index2 = index1;
      }
      index1 = index1 + 1;
    } while (index1 <= iVar1);
  }
  lua_pushvalue(L,index2);
  return 1;
}


