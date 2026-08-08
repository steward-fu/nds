/*
 * Ghidra decompilation
 *
 * Function : pushglobalfuncname
 * Address  : 08124928
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int pushglobalfuncname(lua_State *L,lua_Debug *ar)

{
  int idx;
  int top;
  int iVar1;
  char *__s1;
  char *name;
  
  idx = lua_gettop(L);
  lua_getinfo(L,"f",ar);
  lua_getfield(L,-0xf4628,"_LOADED");
  iVar1 = findfield(L,idx + 1,2);
  if (iVar1 == 0) {
    lua_settop(L,idx);
    iVar1 = 0;
  }
  else {
    __s1 = lua_tolstring(L,-1,(size_t *)0x0);
    name = (char *)strncmp(__s1,"_G.",3);
    if (name == (char *)0x0) {
      lua_pushstring(L,__s1 + 3);
      lua_rotate(L,-2,-1);
      lua_settop(L,-2);
    }
    iVar1 = 1;
    lua_copy(L,-1,idx + 1);
    lua_settop(L,-3);
  }
  return iVar1;
}


