/*
 * Ghidra decompilation
 *
 * Function : luaF_newproto
 * Address  : 0811599c
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */
/* Local variable o:GCObject *[r0:4] conflicts with parameter, skipped.
   Local variable f:Proto *[r0:4] conflicts with parameter, skipped. */

Proto * luaF_newproto(lua_State *L)

{
  Proto *pPVar1;
  
  pPVar1 = (Proto *)luaC_newobj(L,9,0x50);
  pPVar1->numparams = '\0';
  pPVar1->is_vararg = '\0';
  pPVar1->maxstacksize = '\0';
  pPVar1->sizeupvalues = 0;
  pPVar1->sizek = 0;
  pPVar1->sizecode = 0;
  pPVar1->sizelineinfo = 0;
  pPVar1->sizep = 0;
  pPVar1->sizelocvars = 0;
  pPVar1->linedefined = 0;
  pPVar1->lastlinedefined = 0;
  pPVar1->k = (TValue *)0x0;
  pPVar1->code = (Instruction *)0x0;
  pPVar1->p = (Proto **)0x0;
  pPVar1->lineinfo = (int *)0x0;
  pPVar1->locvars = (LocVar *)0x0;
  pPVar1->upvalues = (Upvaldesc *)0x0;
  pPVar1->cache = (LClosure *)0x0;
  pPVar1->source = (TString *)0x0;
  return pPVar1;
}


