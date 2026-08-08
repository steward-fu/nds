/*
 * Ghidra decompilation
 *
 * Function : luaE_shrinkCI
 * Address  : 0811dd2c
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void luaE_shrinkCI(lua_State *L)

{
  CallInfo *pCVar1;
  CallInfo *pCVar2;
  CallInfo *block;
  CallInfo *next2;
  CallInfo *ci;
  
  block = L->ci->next;
  if (block != (CallInfo *)0x0) {
    pCVar1 = L->ci;
    pCVar2 = block->next;
    while (pCVar2 != (CallInfo *)0x0) {
      luaM_realloc_(L,block,0x24,0);
      pCVar1->next = pCVar2;
      block = pCVar2->next;
      pCVar2->previous = pCVar1;
      if (block == (CallInfo *)0x0) {
        return;
      }
      pCVar1 = pCVar2;
      pCVar2 = block->next;
    }
  }
  return;
}


