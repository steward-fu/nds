/*
 * Ghidra decompilation
 *
 * Function : utfchar
 * Address  : 002130f0
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 utfchar(undefined8 param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined auStack_1028 [4128];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = lua_gettop(param_1,&__stack_chk_guard,0);
  if (iVar1 == 1) {
    uVar2 = luaL_checkinteger(param_1,1);
    if (0x10ffff < uVar2) {
      luaL_argerror(param_1,1,"value out of range");
    }
    lua_pushfstring(param_1,&DAT_0022b890,(long)(int)uVar2);
  }
  else {
    luaL_buffinit(param_1,auStack_1028);
    if (0 < iVar1) {
      iVar3 = 1;
      do {
        while (uVar2 = luaL_checkinteger(param_1,iVar3), uVar2 < 0x110000) {
          lua_pushfstring(param_1,&DAT_0022b890,(long)(int)uVar2);
          iVar3 = iVar3 + 1;
          luaL_addvalue(auStack_1028);
          if (iVar3 == iVar1 + 1) goto LAB_002131b4;
        }
        luaL_argerror(param_1,iVar3,"value out of range");
        lua_pushfstring(param_1,&DAT_0022b890,(long)(int)uVar2);
        iVar3 = iVar3 + 1;
        luaL_addvalue(auStack_1028);
      } while (iVar1 + 1 != iVar3);
    }
LAB_002131b4:
    luaL_pushresult(auStack_1028);
  }
  if (local_8 - ___stack_chk_guard != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(local_8 - ___stack_chk_guard,0);
  }
  return 1;
}


