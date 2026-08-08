/*
 * Ghidra decompilation
 *
 * Function : tmove
 * Address  : 00211b70
 * Program  : drastic64
 */


undefined8 tmove(undefined8 param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  code *pcVar7;
  code *pcVar8;
  
  iVar2 = luaL_checkinteger(param_1,2);
  iVar3 = luaL_checkinteger(param_1,3);
  iVar4 = luaL_checkinteger(param_1,4);
  iVar5 = lua_type(param_1,5);
  uVar6 = 5;
  if (iVar5 < 1) {
    uVar6 = 1;
  }
  if (iVar2 < 1) {
    luaL_argerror(param_1,2,"initial position must be positive");
  }
  if (iVar2 <= iVar3) {
    iVar5 = luaL_getmetafield(param_1,1,"__index");
    pcVar7 = lua_geti;
    if (iVar5 == 0) {
      luaL_checktype(param_1,1,5);
      pcVar7 = lua_rawgeti;
    }
    iVar5 = luaL_getmetafield(param_1,uVar6,"__newindex");
    pcVar8 = lua_seti;
    if (iVar5 == 0) {
      luaL_checktype(param_1,uVar6,5);
      pcVar8 = lua_rawseti;
    }
    if (iVar2 < iVar4) {
      do {
        (*pcVar7)(param_1,1,iVar3);
        (*pcVar8)(param_1,uVar6,(iVar4 - iVar2) + iVar3);
        bVar1 = iVar3 != iVar2;
        iVar3 = iVar3 + -1;
      } while (bVar1);
    }
    else {
      iVar4 = iVar4 - iVar2;
      do {
        (*pcVar7)(param_1,1,iVar2);
        iVar5 = iVar4 + iVar2;
        iVar2 = iVar2 + 1;
        (*pcVar8)(param_1,uVar6,iVar5);
      } while (iVar2 != iVar3 + 1);
    }
  }
  lua_pushvalue(param_1,uVar6);
  return 1;
}


