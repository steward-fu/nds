/*
 * Ghidra decompilation
 *
 * Function : growstack
 * Address  : 0810db1c
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */
/* Local variable size:int *[r1:4] conflicts with parameter, skipped. */

void growstack(lua_State *L,void *ud)

{
                    /* WARNING: Load size is inaccurate */
  luaD_growstack(L,*ud);
  return;
}


