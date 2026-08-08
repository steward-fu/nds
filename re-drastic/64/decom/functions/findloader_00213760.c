/*
 * Ghidra decompilation
 *
 * Function : findloader
 * Address  : 00213760
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void findloader(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined auStack_1028 [4128];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  luaL_buffinit(param_1,auStack_1028);
  iVar1 = lua_getfield(param_1,0xfff0b9d7,"searchers");
  if (iVar1 != 5) {
    luaL_error(param_1,"\'package.searchers\' must be a table");
  }
  iVar1 = 1;
  iVar2 = lua_rawgeti(param_1,3,1);
  while( true ) {
    if (iVar2 == 0) {
      lua_settop(param_1,0xfffffffe);
      luaL_pushresult(auStack_1028);
      uVar3 = lua_tolstring(param_1,0xffffffff,0);
      luaL_error(param_1,"module \'%s\' not found:%s",param_2,uVar3);
    }
    lua_pushstring(param_1,param_2);
    lua_callk(param_1,1,2,0,0);
    iVar2 = lua_type(param_1,0xfffffffe);
    if (iVar2 == 6) break;
    iVar2 = lua_isstring(param_1,0xfffffffe);
    if (iVar2 == 0) {
      lua_settop(param_1,0xfffffffd);
    }
    else {
      lua_settop(param_1,0xfffffffe);
      luaL_addvalue(auStack_1028);
    }
    iVar1 = iVar1 + 1;
    iVar2 = lua_rawgeti(param_1,3,iVar1);
  }
  if (local_8 - ___stack_chk_guard != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(local_8 - ___stack_chk_guard,0);
  }
  return;
}


