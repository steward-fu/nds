/*
 * Ghidra decompilation
 *
 * Function : lua_setallocf
 * Address  : 081114a0
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void lua_setallocf(lua_State *L,lua_Alloc f,void *ud)

{
  global_State *pgVar1;
  
  pgVar1 = L->l_G;
  pgVar1->frealloc = f;
  pgVar1->ud = ud;
  return;
}


