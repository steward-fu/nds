/*
 * Ghidra decompilation
 *
 * Function : luaL_testudata
 * Address  : 08125544
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void * luaL_testudata(lua_State *L,int ud,char *tname)

{
  void *pvVar1;
  void *p;
  int iVar2;
  
  pvVar1 = lua_touserdata(L,ud);
  if ((pvVar1 == (void *)0x0) || (iVar2 = lua_getmetatable(L,ud), iVar2 == 0)) {
    pvVar1 = (void *)0x0;
  }
  else {
    lua_getfield(L,-0xf4628,tname);
    iVar2 = lua_rawequal(L,-1,-2);
    if (iVar2 == 0) {
      pvVar1 = (void *)0x0;
    }
    lua_settop(L,-3);
  }
  return pvVar1;
}


