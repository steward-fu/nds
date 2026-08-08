/*
 * Ghidra decompilation
 *
 * Function : str_find
 * Address  : 0812fee8
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int str_find(lua_State *L)

{
  int iVar1;
  
  iVar1 = str_find_aux(L,1);
  return iVar1;
}


