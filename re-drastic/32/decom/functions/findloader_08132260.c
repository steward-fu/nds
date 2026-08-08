/*
 * Ghidra decompilation
 *
 * Function : findloader
 * Address  : 08132260
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void findloader(lua_State *L,char *name)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  int i;
  luaL_Buffer msg;
  
  iVar1 = __stack_chk_guard;
  luaL_buffinit(L,&msg);
  iVar2 = lua_getfield(L,-0xf4629,"searchers");
  if (iVar2 != 5) {
    luaL_error(L,"\'package.searchers\' must be a table");
  }
  iVar2 = 1;
  while( true ) {
    iVar3 = lua_rawgeti(L,3,iVar2);
    if (iVar3 == 0) {
      lua_settop(L,-2);
      luaL_pushresult(&msg);
      pcVar4 = lua_tolstring(L,-1,(size_t *)0x0);
      luaL_error(L,"module \'%s\' not found:%s",name,pcVar4);
    }
    lua_pushstring(L,name);
    lua_callk(L,1,2,0,(lua_KFunction)0x0);
    iVar3 = lua_type(L,-2);
    if (iVar3 == 6) break;
    iVar3 = lua_isstring(L,-2);
    if (iVar3 == 0) {
      lua_settop(L,-3);
    }
    else {
      lua_settop(L,-2);
      luaL_addvalue(&msg);
    }
    iVar2 = iVar2 + 1;
  }
  if (iVar1 == __stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


