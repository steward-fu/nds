/*
 * Ghidra decompilation
 *
 * Function : luaL_argerror
 * Address  : 08124fb4
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int luaL_argerror(lua_State *L,int arg,char *extramsg)

{
  int iVar1;
  int iVar2;
  lua_Debug ar;
  
  iVar1 = __stack_chk_guard;
  iVar2 = lua_getstack(L,0,&ar);
  if (iVar2 == 0) {
    iVar2 = luaL_error(L,"bad argument #%d (%s)",arg,extramsg);
  }
  else {
    lua_getinfo(L,"n",&ar);
    iVar2 = strcmp(ar.namewhat,"method");
    if ((iVar2 == 0) && (arg = arg + -1, arg == 0)) {
      iVar2 = luaL_error(L,"calling \'%s\' on bad self (%s)",ar.name,extramsg);
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
      iVar2 = luaL_error(L,"bad argument #%d to \'%s\' (%s)",arg,ar.name,extramsg);
    }
  }
  if (iVar1 == __stack_chk_guard) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


