/*
 * Ghidra decompilation
 *
 * Function : math_min
 * Address  : 0020ca60
 * Program  : drastic64
 */


undefined8 math_min(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = lua_gettop();
  if (0 < iVar2) {
    if (iVar2 != 1) {
      iVar1 = iVar2 + 1;
      iVar4 = 2;
      iVar2 = 1;
      do {
        iVar3 = lua_compare(param_1,iVar4,iVar2,1);
        if (iVar3 != 0) {
          iVar2 = iVar4;
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 != iVar1);
    }
    lua_pushvalue(param_1,iVar2);
    return 1;
  }
  luaL_argerror(param_1,1,"value expected");
  lua_pushvalue(param_1,1);
  return 1;
}


