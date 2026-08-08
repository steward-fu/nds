/*
 * Ghidra decompilation
 *
 * Function : str_sub
 * Address  : 0812c2f8
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int str_sub(lua_State *L)

{
  char *pcVar1;
  char *s;
  lua_Integer end;
  lua_Integer start;
  size_t l;
  int local_1c;
  
  local_1c = __stack_chk_guard;
  pcVar1 = luaL_checklstring(L,1,&l);
  start = luaL_checkinteger(L,2);
  if (start < 0) {
    if ((uint)-start <= l) {
      start = l + start + 1;
      goto LAB_0812c340;
    }
    end = luaL_optinteger(L,3,-1);
    if (-1 < end) {
      start = 1;
      goto LAB_0812c364;
    }
    start = 0;
LAB_0812c400:
    if ((uint)-end < l || -l == end) {
      end = l + end + 1;
    }
    else {
      end = 0;
    }
  }
  else {
LAB_0812c340:
    end = luaL_optinteger(L,3,-1);
    if (end < 0) goto LAB_0812c400;
  }
  if (start < 1) {
    start = 1;
  }
LAB_0812c364:
  if ((int)l <= end) {
    end = l;
  }
  if (end < start) {
    lua_pushlstring(L,"",0);
  }
  else {
    lua_pushlstring(L,pcVar1 + start + -1,(end - start) + 1);
  }
  if (local_1c == __stack_chk_guard) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


