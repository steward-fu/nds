/*
 * Ghidra decompilation
 *
 * Function : luaV_mod
 * Address  : 08121d40
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

lua_Integer luaV_mod(lua_State *L,lua_Integer m,lua_Integer n)

{
  int iVar1;
  int extraout_r1;
  lua_Integer r;
  
  if (n + 1U < 2) {
    if (n == 0) {
                    /* WARNING: Subroutine does not return */
      luaG_runerror(L,"attempt to perform \'n%%0\'");
    }
    iVar1 = 0;
  }
  else {
    __aeabi_idivmod(m,n);
    iVar1 = extraout_r1;
    if ((extraout_r1 != 0) && ((n ^ m) < 0)) {
      iVar1 = n + extraout_r1;
    }
  }
  return iVar1;
}


