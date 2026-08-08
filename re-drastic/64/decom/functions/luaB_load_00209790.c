/*
 * Ghidra decompilation
 *
 * Function : luaB_load
 * Address  : 00209790
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void luaB_load(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar3 = lua_tolstring(param_1,1,&local_10,0);
  uVar4 = luaL_optlstring(param_1,3,&DAT_002243f8,0);
  iVar1 = lua_type(param_1,4);
  if (lVar3 == 0) {
    uVar5 = luaL_optlstring(param_1,2,"=(load)",0);
    luaL_checktype(param_1,1,6);
    lua_settop(param_1,5);
    iVar2 = lua_load(param_1,generic_reader,0,uVar5,uVar4);
  }
  else {
    uVar5 = luaL_optlstring(param_1,2,lVar3,0);
    iVar2 = luaL_loadbufferx(param_1,lVar3,local_10,uVar5,uVar4);
  }
  if (iVar2 == 0) {
    if (iVar1 != -1) {
      lua_pushvalue(param_1,(ulong)(iVar1 != -1) << 2);
      lVar3 = lua_setupvalue(param_1,0xfffffffe,1);
      if (lVar3 == 0) {
        lua_settop(param_1,0xfffffffe);
      }
    }
    uVar4 = 1;
  }
  else {
    lua_pushnil(param_1);
    lua_rotate(param_1,0xfffffffe,1);
    uVar4 = 2;
  }
  if (local_8 - ___stack_chk_guard != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar4,local_8 - ___stack_chk_guard,0);
  }
  return;
}


