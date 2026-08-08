/*
 * Ghidra decompilation
 *
 * Function : luaL_checktype
 * Address  : 08125800
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void luaL_checktype(lua_State *L,int arg,int t)

{
  int iVar1;
  char *pcVar2;
  char *msg;
  int tt;
  char *typearg;
  
  iVar1 = lua_type(L,arg);
  if (iVar1 == t) {
    return;
  }
  pcVar2 = lua_typename(L,t);
  iVar1 = lua_getmetatable(L,arg);
  if (iVar1 != 0) {
    lua_pushstring(L,"__name");
    iVar1 = lua_rawget(L,-2);
    if (iVar1 == 0) {
      lua_settop(L,-3);
    }
    else {
      lua_rotate(L,-2,-1);
      lua_settop(L,-2);
      if (iVar1 == 4) {
        typearg = lua_tolstring(L,-1,(size_t *)0x0);
        goto LAB_0812587c;
      }
    }
  }
  iVar1 = lua_type(L,arg);
  if (iVar1 == 2) {
    typearg = "light userdata";
  }
  else {
    iVar1 = lua_type(L,arg);
    typearg = lua_typename(L,iVar1);
  }
LAB_0812587c:
  pcVar2 = lua_pushfstring(L,"%s expected, got %s",pcVar2,typearg);
  luaL_argerror(L,arg,pcVar2);
  return;
}


