/*
 * Ghidra decompilation
 *
 * Function : f_call
 * Address  : 0810db24
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */
/* Local variable c:CallS *[r1:4] conflicts with parameter, skipped. */

void f_call(lua_State *L,void *ud)

{
                    /* WARNING: Load size is inaccurate */
  luaD_call(L,*ud,*(int *)((int)ud + 4),0);
  return;
}


