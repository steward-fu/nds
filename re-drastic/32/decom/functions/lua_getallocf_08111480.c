/*
 * Ghidra decompilation
 *
 * Function : lua_getallocf
 * Address  : 08111480
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

lua_Alloc lua_getallocf(lua_State *L,void **ud)

{
  if (ud != (void **)0x0) {
    *ud = L->l_G->ud;
  }
  return L->l_G->frealloc;
}


