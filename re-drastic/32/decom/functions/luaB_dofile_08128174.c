/*
 * Ghidra decompilation
 *
 * Function : luaB_dofile
 * Address  : 08128174
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int luaB_dofile(lua_State *L)

{
  char *filename;
  char *fname;
  int iVar1;
  
  filename = luaL_optlstring(L,1,(char *)0x0,(size_t *)0x0);
  lua_settop(L,1);
  iVar1 = luaL_loadfilex(L,filename,(char *)0x0);
  if (iVar1 == 0) {
    lua_callk(L,0,-1,0,dofilecont);
    iVar1 = lua_gettop(L);
    return iVar1 + -1;
  }
                    /* WARNING: Subroutine does not return */
  lua_error(L);
}


