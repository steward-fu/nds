/*
 * Ghidra decompilation
 *
 * Function : luaF_newCclosure
 * Address  : 08115738
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */
/* Local variable o:GCObject *[r0:4] conflicts with parameter, skipped.
   Local variable c:CClosure *[r0:4] conflicts with parameter, skipped. */

CClosure * luaF_newCclosure(lua_State *L,int n)

{
  CClosure *pCVar1;
  
  pCVar1 = (CClosure *)luaC_newobj(L,0x26,n * 8 + 0x10);
  pCVar1->nupvalues = (lu_byte)n;
  return pCVar1;
}


