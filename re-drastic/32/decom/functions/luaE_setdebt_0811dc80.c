/*
 * Ghidra decompilation
 *
 * Function : luaE_setdebt
 * Address  : 0811dc80
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void luaE_setdebt(global_State *g,l_mem debt)

{
  int iVar1;
  
  iVar1 = g->GCdebt;
  g->GCdebt = debt;
  g->totalbytes = g->totalbytes - (debt - iVar1);
  return;
}


