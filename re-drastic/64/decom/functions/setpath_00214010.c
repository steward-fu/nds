/*
 * Ghidra decompilation
 *
 * Function : setpath
 * Address  : 00214010
 * Program  : drastic64
 */


void setpath(undefined8 param_1,undefined8 param_2,char *param_3,char *param_4,undefined8 param_5)

{
  int iVar1;
  char *pcVar2;
  undefined8 uVar3;
  
  pcVar2 = getenv(param_3);
  if ((pcVar2 != (char *)0x0) || (pcVar2 = getenv(param_4), pcVar2 != (char *)0x0)) {
    lua_getfield(param_1,0xfff0b9d8,"LUA_NOENV");
    iVar1 = lua_toboolean(param_1,0xffffffff);
    lua_settop(param_1,0xfffffffe);
    if (iVar1 == 0) {
      uVar3 = luaL_gsub(param_1,pcVar2,&DAT_0022b9e8,&DAT_0022b9e0);
      luaL_gsub(param_1,uVar3,&DAT_0022b9f0,param_5);
      lua_rotate(param_1,0xfffffffe,0xffffffff);
      lua_settop(param_1,0xfffffffe);
      lua_setfield(param_1,0xfffffffe,param_2);
      return;
    }
  }
  lua_pushstring(param_1,param_5);
  lua_setfield(param_1,0xfffffffe,param_2);
  return;
}


