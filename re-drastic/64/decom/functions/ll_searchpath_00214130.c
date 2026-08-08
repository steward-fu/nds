/*
 * Ghidra decompilation
 *
 * Function : ll_searchpath
 * Address  : 00214130
 * Program  : drastic64
 */


undefined8 ll_searchpath(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  uVar1 = luaL_checklstring(param_1,1,0);
  uVar2 = luaL_checklstring(param_1,2,0);
  uVar3 = luaL_optlstring(param_1,3,".",0);
  uVar4 = luaL_optlstring(param_1,4,&DAT_0022b9f8,0);
  lVar5 = searchpath(param_1,uVar1,uVar2,uVar3,uVar4);
  if (lVar5 != 0) {
    return 1;
  }
  lua_pushnil(param_1);
  lua_rotate(param_1,0xfffffffe,1);
  return 2;
}


