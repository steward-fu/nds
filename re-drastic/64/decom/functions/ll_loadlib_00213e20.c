/*
 * Ghidra decompilation
 *
 * Function : ll_loadlib
 * Address  : 00213e20
 * Program  : drastic64
 */


undefined8 ll_loadlib(undefined8 param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar3 = luaL_checklstring(param_1,1,0);
  uVar4 = luaL_checklstring(param_1,2,0);
  iVar2 = lookforfunc(param_1,uVar3,uVar4);
  if (iVar2 == 0) {
    return 1;
  }
  lua_pushnil(param_1);
  lua_rotate(param_1,0xfffffffe,1);
  puVar1 = &DAT_0022a7a0;
  if (iVar2 != 1) {
    puVar1 = &DAT_0022b9b0;
  }
  lua_pushstring(param_1,puVar1);
  return 3;
}


