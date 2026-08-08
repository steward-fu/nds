/*
 * Ghidra decompilation
 *
 * Function : luaL_checkversion_
 * Address  : 0812740c
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void luaL_checkversion_(lua_State *L,lua_Number ver,size_t sz)

{
  lua_Number *plVar1;
  lua_Number *v;
  lua_Number *plVar2;
  
  plVar1 = lua_version(L);
  if (sz != 0x44) {
    luaL_error(L,"core and library have incompatible numeric types");
  }
  plVar2 = lua_version((lua_State *)0x0);
  if (plVar1 != plVar2) {
    luaL_error(L,"multiple Lua VMs detected");
    return;
  }
  if (*plVar1 != ver) {
    luaL_error(L,"version mismatch: app. needs %f, Lua core provides %f",SUB84((double)ver,0),
               (int)((ulonglong)(double)ver >> 0x20),(double)*plVar1);
  }
  return;
}


