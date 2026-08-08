/*
 * Ghidra decompilation
 *
 * Function : str_len
 * Address  : 0812badc
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int str_len(lua_State *L)

{
  size_t l;
  int local_14;
  
  local_14 = __stack_chk_guard;
  luaL_checklstring(L,1,&l);
  lua_pushinteger(L,l);
  if (local_14 == __stack_chk_guard) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


