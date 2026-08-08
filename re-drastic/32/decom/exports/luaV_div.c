/*
 * Ghidra decompilation
 *
 * Function : luaV_div
 * Address  : 08121cc0
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

lua_Integer luaV_div(lua_State *L,lua_Integer m,lua_Integer n)

{
  int iVar1;
  lua_Integer q;
  int extraout_r1;
  
  if (n + 1U < 2) {
    if (n == 0) {
                    /* WARNING: Subroutine does not return */
      luaG_runerror(L,"attempt to divide by zero");
    }
    iVar1 = -m;
  }
  else {
    iVar1 = __aeabi_idiv(m,n);
    if (((n ^ m) < 0) && (__aeabi_idivmod(m,n), extraout_r1 != 0)) {
      iVar1 = iVar1 + -1;
    }
  }
  return iVar1;
}


