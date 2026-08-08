/*
 * Ghidra decompilation
 *
 * Function : tconcat
 * Address  : 002122a0
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 tconcat(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 local_1040;
  code *local_1038;
  undefined auStack_1030 [8];
  undefined auStack_1028 [4128];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar5 = luaL_optlstring(param_1,2,"",&local_1040);
  checktab_isra_0_constprop_0(param_1,&local_1038,auStack_1030);
  iVar1 = luaL_optinteger(param_1,3,1);
  iVar2 = lua_type(param_1,4);
  if (iVar2 < 1) {
    iVar2 = luaL_len(param_1,1);
  }
  else {
    iVar2 = luaL_checkinteger(param_1,4);
  }
  luaL_buffinit(param_1,auStack_1028);
  if (iVar1 < iVar2) {
    do {
      (*local_1038)(param_1,1,iVar1);
      iVar3 = lua_isstring(param_1,0xffffffff);
      if (iVar3 == 0) {
        uVar4 = lua_type(param_1,0xffffffff);
        uVar6 = lua_typename(param_1,uVar4);
        luaL_error(param_1,"invalid value (%s) at index %d in table for \'concat\'",uVar6,iVar1);
      }
      luaL_addvalue(auStack_1028);
      iVar1 = iVar1 + 1;
      luaL_addlstring(auStack_1028,uVar5,local_1040);
    } while (iVar2 != iVar1);
  }
  else if (iVar2 != iVar1) goto LAB_002123d8;
  (*local_1038)(param_1,1,iVar2);
  iVar1 = lua_isstring(param_1,0xffffffff);
  if (iVar1 == 0) {
    uVar4 = lua_type(param_1,0xffffffff);
    uVar5 = lua_typename(param_1,uVar4);
    luaL_error(param_1,"invalid value (%s) at index %d in table for \'concat\'",uVar5,iVar2);
  }
  luaL_addvalue(auStack_1028);
LAB_002123d8:
  luaL_pushresult(auStack_1028);
  if (local_8 - ___stack_chk_guard != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(local_8 - ___stack_chk_guard,0);
  }
  return 1;
}


