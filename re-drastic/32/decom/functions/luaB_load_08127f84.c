/*
 * Ghidra decompilation
 *
 * Function : luaB_load
 * Address  : 08127f84
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int luaB_load(lua_State *L)

{
  char *pcVar1;
  char *s;
  char *mode_00;
  char *mode;
  int iVar2;
  char *name;
  char *chunkname;
  int status;
  char *chunkname_1;
  int env;
  size_t l;
  int local_24;
  
  local_24 = __stack_chk_guard;
  pcVar1 = lua_tolstring(L,1,&l);
  mode_00 = luaL_optlstring(L,3,"bt",(size_t *)0x0);
  iVar2 = lua_type(L,4);
  if (iVar2 == -1) {
    env = 0;
  }
  else {
    env = 4;
  }
  if (pcVar1 == (char *)0x0) {
    pcVar1 = luaL_optlstring(L,2,"=(load)",(size_t *)0x0);
    luaL_checktype(L,1,6);
    lua_settop(L,5);
    status = lua_load(L,generic_reader,(void *)0x0,pcVar1,mode_00);
  }
  else {
    name = luaL_optlstring(L,2,pcVar1,(size_t *)0x0);
    status = luaL_loadbufferx(L,pcVar1,l,name,mode_00);
  }
  if (status == 0) {
    if (env != 0) {
      lua_pushvalue(L,env);
      pcVar1 = lua_setupvalue(L,-2,1);
      if (pcVar1 == (char *)0x0) {
        lua_settop(L,-2);
      }
    }
    iVar2 = 1;
  }
  else {
    lua_pushnil(L);
    lua_rotate(L,-2,1);
    iVar2 = 2;
  }
  if (local_24 != __stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar2;
}


