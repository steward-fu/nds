/*
 * Ghidra decompilation
 *
 * Function : luaG_concaterror
 * Address  : 08112b90
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void luaG_concaterror(lua_State *L,TValue *p1,TValue *p2)

{
  if ((p1->tt_ & 0xfU) - 3 < 2) {
    p1 = p2;
  }
                    /* WARNING: Subroutine does not return */
  luaG_typeerror(L,p1,"concatenate");
}


