/*
 * Ghidra decompilation
 *
 * Function : luaL_error
 * Address  : 08124ecc
 * Program  : drastic
 */


int luaL_error(lua_State *L,char *fmt,...)

{
  int iVar1;
  undefined4 in_r2;
  undefined4 in_r3;
  va_list argp;
  lua_Debug ar;
  char *fmt_local;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  uStack_8 = in_r2;
  uStack_4 = in_r3;
  iVar1 = lua_getstack(L,1,&ar);
  if (iVar1 != 0) {
    lua_getinfo(L,"Sl",&ar);
    if (0 < ar.currentline) {
      lua_pushfstring(L,"%s:%d: ",ar.short_src);
      goto LAB_08124f48;
    }
  }
  lua_pushlstring(L,"",0);
LAB_08124f48:
  lua_pushvfstring(L,fmt,(va_list)&uStack_8);
  lua_concat(L,2);
                    /* WARNING: Subroutine does not return */
  lua_error(L);
}


