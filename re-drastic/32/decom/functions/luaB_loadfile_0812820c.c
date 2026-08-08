/*
 * Ghidra decompilation
 *
 * Function : luaB_loadfile
 * Address  : 0812820c
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int luaB_loadfile(lua_State *L)

{
  char *pcVar1;
  char *fname;
  char *mode_00;
  char *mode;
  int iVar2;
  int status;
  
  pcVar1 = luaL_optlstring(L,1,(char *)0x0,(size_t *)0x0);
  mode_00 = luaL_optlstring(L,2,(char *)0x0,(size_t *)0x0);
  iVar2 = lua_type(L,3);
  if (iVar2 == -1) {
    iVar2 = luaL_loadfilex(L,pcVar1,mode_00);
    if (iVar2 == 0) {
      return 1;
    }
  }
  else {
    iVar2 = luaL_loadfilex(L,pcVar1,mode_00);
    if (iVar2 == 0) {
      lua_pushvalue(L,3);
      pcVar1 = lua_setupvalue(L,-2,1);
      if (pcVar1 == (char *)0x0) {
        lua_settop(L,-2);
      }
      return 1;
    }
  }
  lua_pushnil(L);
  lua_rotate(L,-2,1);
  return 2;
}


