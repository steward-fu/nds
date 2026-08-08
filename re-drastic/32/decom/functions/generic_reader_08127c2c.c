/*
 * Ghidra decompilation
 *
 * Function : generic_reader
 * Address  : 08127c2c
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

char * generic_reader(lua_State *L,void *ud,size_t *size)

{
  int iVar1;
  char *pcVar2;
  
  luaL_checkstack(L,2,"too many nested functions");
  lua_pushvalue(L,1);
  lua_callk(L,0,1,0,(lua_KFunction)0x0);
  iVar1 = lua_type(L,-1);
  if (iVar1 != 0) {
    iVar1 = lua_isstring(L,-1);
    if (iVar1 == 0) {
      luaL_error(L,"reader function must return a string");
    }
    lua_copy(L,-1,5);
    lua_settop(L,-2);
    pcVar2 = lua_tolstring(L,5,size);
    return pcVar2;
  }
  lua_settop(L,-2);
  *size = 0;
  return (char *)0x0;
}


