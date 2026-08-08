/*
 * Ghidra decompilation
 *
 * Function : luaL_where
 * Address  : 08124e2c
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void luaL_where(lua_State *L,int level)

{
  int iVar1;
  int iVar2;
  lua_Debug ar;
  
  iVar1 = __stack_chk_guard;
  iVar2 = lua_getstack(L,level,&ar);
  if (iVar2 != 0) {
    lua_getinfo(L,"Sl",&ar);
    if (0 < ar.currentline) {
      lua_pushfstring(L,"%s:%d: ",ar.short_src);
      goto LAB_08124e90;
    }
  }
  lua_pushlstring(L,"",0);
LAB_08124e90:
  if (iVar1 == __stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


