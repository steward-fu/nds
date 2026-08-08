/*
 * Ghidra decompilation
 *
 * Function : str_dump
 * Address  : 0020dbd0
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void str_dump(undefined8 param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined auStack_1028 [4128];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar1 = lua_toboolean(param_1,2,&__stack_chk_guard,0);
  luaL_checktype(param_1,1,6);
  lua_settop(param_1,1);
  luaL_buffinit(param_1,auStack_1028);
  iVar2 = lua_dump(param_1,writer,auStack_1028,uVar1);
  if (iVar2 == 0) {
    luaL_pushresult(auStack_1028);
    uVar3 = 1;
  }
  else {
    uVar3 = luaL_error(param_1,"unable to dump given function");
  }
  if (local_8 - ___stack_chk_guard == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3,local_8 - ___stack_chk_guard,0);
}


