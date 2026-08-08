/*
 * Ghidra decompilation
 *
 * Function : luaB_print
 * Address  : 08127a5c
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int luaB_print(lua_State *L)

{
  int iVar1;
  int n;
  char *s;
  char *__ptr;
  int idx;
  size_t l;
  int local_2c;
  
  local_2c = __stack_chk_guard;
  iVar1 = lua_gettop(L);
  lua_getglobal(L,"tostring");
  if (0 < iVar1) {
    idx = 1;
    do {
      lua_pushvalue(L,-1);
      lua_pushvalue(L,idx);
      lua_callk(L,1,1,0,(lua_KFunction)0x0);
      __ptr = lua_tolstring(L,-1,&l);
      if (__ptr == (char *)0x0) {
        iVar1 = luaL_error(L,"\'tostring\' must return a string to \'print\'");
        goto LAB_08127b9c;
      }
      if (idx != 1) {
        fwrite(&DAT_08146b64,1,1,stdout);
      }
      idx = idx + 1;
      fwrite(__ptr,1,l,stdout);
      lua_settop(L,-2);
    } while (idx <= iVar1);
  }
  fwrite("\n",1,1,stdout);
  fflush(stdout);
  iVar1 = 0;
LAB_08127b9c:
  if (local_2c == __stack_chk_guard) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


