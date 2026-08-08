/*
 * Ghidra decompilation
 *
 * Function : getS
 * Address  : 081247e4
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */
/* Local variable ls:LoadS *[r1:4] conflicts with parameter, skipped. */

char * getS(lua_State *L,void *ud,size_t *size)

{
  char *pcVar1;
  
  pcVar1 = *(char **)((int)ud + 4);
  if (pcVar1 != (char *)0x0) {
    *size = (size_t)pcVar1;
                    /* WARNING: Load size is inaccurate */
    pcVar1 = *ud;
    *(undefined4 *)((int)ud + 4) = 0;
  }
  return pcVar1;
}


