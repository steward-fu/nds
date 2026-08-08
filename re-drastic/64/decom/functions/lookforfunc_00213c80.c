/*
 * Ghidra decompilation
 *
 * Function : lookforfunc
 * Address  : 00213c80
 * Program  : drastic64
 */


undefined8 lookforfunc(undefined8 param_1,undefined8 param_2,char *param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  
  lua_rawgetp(param_1,0xfff0b9d8,&CLIBS);
  lua_getfield(param_1,0xffffffff,param_2);
  lVar2 = lua_touserdata(param_1,0xffffffff);
  lua_settop(param_1,0xfffffffd);
  if (lVar2 == 0) {
    uVar4 = 0x102;
    if (*param_3 != '*') {
      uVar4 = 2;
    }
    lVar2 = dlopen(param_2,uVar4);
    if (lVar2 == 0) {
      uVar3 = dlerror();
      lua_pushstring(param_1,uVar3);
      return 1;
    }
    lua_rawgetp(param_1,0xfff0b9d8,&CLIBS);
    lua_pushlightuserdata(param_1,lVar2);
    lua_pushvalue(param_1,0xffffffff);
    lua_setfield(param_1,0xfffffffd,param_2);
    iVar1 = luaL_len(param_1,0xfffffffe);
    lua_rawseti(param_1,0xfffffffe,iVar1 + 1);
    lua_settop(param_1,0xfffffffe);
  }
  if (*param_3 == '*') {
    lua_pushboolean(param_1,1);
    return 0;
  }
  lVar2 = dlsym(lVar2,param_3);
  if (lVar2 != 0) {
    lua_pushcclosure(param_1,lVar2,0);
    return 0;
  }
  uVar3 = dlerror(0,0);
  lua_pushstring(param_1,uVar3);
  return 2;
}


