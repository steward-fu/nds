/*
 * Ghidra decompilation
 *
 * Function : FUN_00211d1c
 * Address  : 00211d1c
 * Program  : drastic64
 */


undefined8 FUN_00211d1c(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = lua_gettop();
  lua_createtable(param_1,iVar1,1);
  lua_rotate(param_1,1);
  iVar2 = iVar1;
  if (0 < iVar1) {
    do {
      lua_rawseti(param_1,1,iVar2);
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  lua_pushinteger(param_1,iVar1);
  lua_setfield(param_1,1,"n");
  return 1;
}


