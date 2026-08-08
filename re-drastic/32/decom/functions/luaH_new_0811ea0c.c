/*
 * Ghidra decompilation
 *
 * Function : luaH_new
 * Address  : 0811ea0c
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */
/* Local variable o:GCObject *[r0:4] conflicts with parameter, skipped.
   Local variable t:Table *[r0:4] conflicts with parameter, skipped. */

Table * luaH_new(lua_State *L)

{
  Table *pTVar1;
  
  pTVar1 = (Table *)luaC_newobj(L,5,0x20);
  pTVar1->flags = 0xff;
  pTVar1->lsizenode = '\0';
  pTVar1->sizearray = 0;
  pTVar1->array = (TValue *)0x0;
  pTVar1->node = &dummynode_;
  pTVar1->lastfree = &dummynode_;
  pTVar1->metatable = (Table *)0x0;
  return pTVar1;
}


