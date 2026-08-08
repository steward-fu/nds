/*
 * Ghidra decompilation
 *
 * Function : luaL_getsubtable
 * Address  : 08126e4c
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int luaL_getsubtable(lua_State *L,int idx,char *fname)

{
  int iVar1;
  int idx_00;
  
  iVar1 = lua_getfield(L,idx,fname);
  if (iVar1 != 5) {
    lua_settop(L,-2);
    idx_00 = lua_absindex(L,idx);
    lua_createtable(L,0,0);
    lua_pushvalue(L,-1);
    lua_setfield(L,idx_00,fname);
  }
  return (uint)(iVar1 == 5);
}


