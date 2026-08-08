/*
 * Ghidra decompilation
 *
 * Function : luaB_collectgarbage
 * Address  : 00209520
 * Program  : drastic64
 */


undefined8 luaB_collectgarbage(undefined8 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = luaL_checkoption(param_1,1,"collect",&opts_5155);
  iVar1 = *(int *)(&optsnum_5156 + (long)iVar1 * 4);
  uVar2 = luaL_optinteger(param_1,2,0);
  iVar3 = lua_gc(param_1,iVar1,uVar2);
  if ((iVar1 - 5U & 0xfffffffb) == 0) {
    lua_pushboolean(param_1,iVar3);
    return 1;
  }
  if (iVar1 != 3) {
    lua_pushinteger(param_1,iVar3);
    return 1;
  }
  iVar1 = lua_gc(param_1,4,0);
  uVar2 = NEON_fmadd((float)iVar1,0x3a800000,(float)iVar3);
  lua_pushnumber(uVar2,param_1);
  return 1;
}


