/*
 * Ghidra decompilation
 *
 * Function : lookforfunc
 * Address  : 08132760
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int lookforfunc(lua_State *L,char *path,char *sym)

{
  void *plib;
  lua_CFunction fn;
  lua_CFunction f;
  int iVar1;
  char *pcVar2;
  void *lib;
  lua_Integer lVar3;
  undefined4 uVar4;
  void *reg;
  
  lua_rawgetp(L,-0xf4628,&CLIBS);
  lua_getfield(L,-1,path);
  reg = lua_touserdata(L,-1);
  lua_settop(L,-3);
  if (reg == (void *)0x0) {
    uVar4 = 0x102;
    if (*sym != '*') {
      uVar4 = 2;
    }
    reg = (void *)dlopen(path,uVar4);
    if (reg == (void *)0x0) {
      pcVar2 = (char *)dlerror();
      lua_pushstring(L,pcVar2);
      return 1;
    }
    lua_rawgetp(L,-0xf4628,&CLIBS);
    lua_pushlightuserdata(L,reg);
    lua_pushvalue(L,-1);
    lua_setfield(L,-3,path);
    lVar3 = luaL_len(L,-2);
    lua_rawseti(L,-2,lVar3 + 1);
    lua_settop(L,-2);
  }
  if (*sym == '*') {
    lua_pushboolean(L,1);
    iVar1 = 0;
  }
  else {
    fn = (lua_CFunction)dlsym(reg,sym);
    if (fn == (lua_CFunction)0x0) {
      pcVar2 = (char *)dlerror();
      lua_pushstring(L,pcVar2);
      iVar1 = 2;
    }
    else {
      lua_pushcclosure(L,fn,0);
      iVar1 = 0;
    }
  }
  return iVar1;
}


