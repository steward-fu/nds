/*
 * Ghidra decompilation
 *
 * Function : ll_loadlib
 * Address  : 08132fe8
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int ll_loadlib(lua_State *L)

{
  char *pcVar1;
  char *path;
  char *pcVar2;
  char *init;
  void *plib;
  lua_CFunction fn;
  lua_CFunction f;
  int iVar3;
  void *lib;
  lua_Integer lVar4;
  undefined4 uVar5;
  void *reg;
  
  pcVar1 = luaL_checklstring(L,1,(size_t *)0x0);
  pcVar2 = luaL_checklstring(L,2,(size_t *)0x0);
  lua_rawgetp(L,-0xf4628,&CLIBS);
  lua_getfield(L,-1,pcVar1);
  reg = lua_touserdata(L,-1);
  lua_settop(L,-3);
  if (reg == (void *)0x0) {
    uVar5 = 0x102;
    if (*pcVar2 != '*') {
      uVar5 = 2;
    }
    reg = (void *)dlopen(pcVar1,uVar5);
    if (reg != (void *)0x0) {
      lua_rawgetp(L,-0xf4628,&CLIBS);
      lua_pushlightuserdata(L,reg);
      lua_pushvalue(L,-1);
      lua_setfield(L,-3,pcVar1);
      lVar4 = luaL_len(L,-2);
      lua_rawseti(L,-2,lVar4 + 1);
      lua_settop(L,-2);
      goto LAB_0813306c;
    }
    pcVar1 = (char *)dlerror();
    lua_pushstring(L,pcVar1);
    lua_pushnil(L);
    lua_rotate(L,-2,1);
    pcVar1 = "open";
LAB_081330f0:
    lua_pushstring(L,pcVar1);
    iVar3 = 3;
  }
  else {
LAB_0813306c:
    if (*pcVar2 == '*') {
      lua_pushboolean(L,1);
    }
    else {
      fn = (lua_CFunction)dlsym(reg,pcVar2);
      if (fn == (lua_CFunction)0x0) {
        pcVar1 = (char *)dlerror();
        lua_pushstring(L,pcVar1);
        lua_pushnil(L);
        lua_rotate(L,-2,1);
        pcVar1 = "init";
        goto LAB_081330f0;
      }
      lua_pushcclosure(L,fn,0);
    }
    iVar3 = 1;
  }
  return iVar3;
}


