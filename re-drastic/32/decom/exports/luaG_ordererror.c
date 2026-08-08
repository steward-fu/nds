/*
 * Ghidra decompilation
 *
 * Function : luaG_ordererror
 * Address  : 08112c88
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void luaG_ordererror(lua_State *L,TValue *p1,TValue *p2)

{
  char *t1;
  char *t2;
  
  if (luaT_typenames_[(p1->tt_ & 0xfU) + 1] != luaT_typenames_[(p2->tt_ & 0xfU) + 1]) {
                    /* WARNING: Subroutine does not return */
    luaG_runerror(L,"attempt to compare %s with %s");
  }
                    /* WARNING: Subroutine does not return */
  luaG_runerror(L,"attempt to compare two %s values");
}


