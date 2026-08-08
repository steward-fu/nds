/*
 * Ghidra decompilation
 *
 * Function : typeerror
 * Address  : 081250f0
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int typeerror(lua_State *L,int arg,char *tname)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  char *msg;
  int tt;
  char *typearg;
  lua_Debug ar;
  
  iVar1 = __stack_chk_guard;
  iVar2 = lua_getmetatable(L,arg);
  if (iVar2 != 0) {
    lua_pushstring(L,"__name");
    iVar2 = lua_rawget(L,-2);
    if (iVar2 == 0) {
      lua_settop(L,-3);
    }
    else {
      lua_rotate(L,-2,-1);
      lua_settop(L,-2);
      if (iVar2 == 4) {
        typearg = lua_tolstring(L,-1,(size_t *)0x0);
        goto LAB_0812515c;
      }
    }
  }
  iVar2 = lua_type(L,arg);
  if (iVar2 == 2) {
    typearg = "light userdata";
  }
  else {
    iVar2 = lua_type(L,arg);
    typearg = lua_typename(L,iVar2);
  }
LAB_0812515c:
  pcVar3 = lua_pushfstring(L,"%s expected, got %s",tname,typearg);
  iVar2 = lua_getstack(L,0,&ar);
  if (iVar2 == 0) {
    iVar2 = luaL_error(L,"bad argument #%d (%s)",arg,pcVar3);
  }
  else {
    lua_getinfo(L,"n",&ar);
    iVar2 = strcmp(ar.namewhat,"method");
    if ((iVar2 == 0) && (arg = arg + -1, arg == 0)) {
      iVar2 = luaL_error(L,"calling \'%s\' on bad self (%s)",ar.name,pcVar3);
    }
    else {
      if (ar.name == (char *)0x0) {
        iVar2 = pushglobalfuncname(L,&ar);
        if (iVar2 == 0) {
          ar.name = "?";
        }
        else {
          ar.name = lua_tolstring(L,-1,(size_t *)0x0);
        }
      }
      iVar2 = luaL_error(L,"bad argument #%d to \'%s\' (%s)",arg,ar.name,pcVar3);
    }
  }
  if (iVar1 == __stack_chk_guard) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


