/*
 * Ghidra decompilation
 *
 * Function : luaL_checkstack
 * Address  : 08125780
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void luaL_checkstack(lua_State *L,int space,char *msg)

{
  int iVar1;
  
  iVar1 = lua_checkstack(L,space + 0x14);
  if (iVar1 != 0) {
    return;
  }
  if (msg != (char *)0x0) {
    luaL_error(L,"stack overflow (%s)",msg);
    return;
  }
  luaL_error(L,"stack overflow");
  return;
}


