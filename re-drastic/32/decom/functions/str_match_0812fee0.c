/*
 * Ghidra decompilation
 *
 * Function : str_match
 * Address  : 0812fee0
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int str_match(lua_State *L)

{
  int iVar1;
  
  iVar1 = str_find_aux(L,0);
  return iVar1;
}


