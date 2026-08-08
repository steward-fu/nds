/*
 * Ghidra decompilation
 *
 * Function : luaL_checkudata
 * Address  : 081255d8
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void * luaL_checkudata(lua_State *L,int ud,char *tname)

{
  void *pvVar1;
  void *p;
  int iVar2;
  
  pvVar1 = lua_touserdata(L,ud);
  if ((pvVar1 != (void *)0x0) && (iVar2 = lua_getmetatable(L,ud), iVar2 != 0)) {
    lua_getfield(L,-0xf4628,tname);
    iVar2 = lua_rawequal(L,-1,-2);
    if (iVar2 != 0) {
      lua_settop(L,-3);
      return pvVar1;
    }
    lua_settop(L,-3);
  }
  typeerror(L,ud,tname);
  return (void *)0x0;
}


