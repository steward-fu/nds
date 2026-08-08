/*
 * Ghidra decompilation
 *
 * Function : luaE_freeCI
 * Address  : 0811dcd8
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void luaE_freeCI(lua_State *L)

{
  CallInfo *block;
  CallInfo *next;
  CallInfo *ci;
  CallInfo *pCVar1;
  
  block = L->ci->next;
  L->ci->next = (CallInfo *)0x0;
  if (block != (CallInfo *)0x0) {
    do {
      pCVar1 = block->next;
      luaM_realloc_(L,block,0x24,0);
      block = pCVar1;
    } while (pCVar1 != (CallInfo *)0x0);
    return;
  }
  return;
}


