/*
 * Ghidra decompilation
 *
 * Function : luaE_extendCI
 * Address  : 0811dc9c
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */
/* Local variable ci:CallInfo *[r0:4] conflicts with parameter, skipped. */

CallInfo * luaE_extendCI(lua_State *L)

{
  CallInfo *pCVar1;
  CallInfo *pCVar2;
  
  pCVar1 = (CallInfo *)luaM_realloc_(L,(void *)0x0,0,0x24);
  pCVar2 = L->ci;
  pCVar2->next = pCVar1;
  pCVar1->previous = pCVar2;
  pCVar1->next = (CallInfo *)0x0;
  return pCVar1;
}


