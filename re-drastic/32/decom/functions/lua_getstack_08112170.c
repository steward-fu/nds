/*
 * Ghidra decompilation
 *
 * Function : lua_getstack
 * Address  : 08112170
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int lua_getstack(lua_State *L,int level,lua_Debug *ar)

{
  CallInfo *pCVar1;
  CallInfo *ci;
  
  if (-1 < level) {
    pCVar1 = L->ci;
    if (level != 0) {
      do {
        if (pCVar1 == &L->base_ci) {
          return 0;
        }
        level = level + -1;
        pCVar1 = pCVar1->previous;
      } while (level != 0);
    }
    if (&L->base_ci != pCVar1) {
      ar->i_ci = pCVar1;
      return 1;
    }
  }
  return 0;
}


