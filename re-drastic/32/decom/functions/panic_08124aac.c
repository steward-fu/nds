/*
 * Ghidra decompilation
 *
 * Function : panic
 * Address  : 08124aac
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */
/* DWARF original prototype: int panic(lua_State * L) */

int panic(lua_State *L)

{
  FILE *pFVar1;
  char *pcVar2;
  
  pFVar1 = stderr;
  pcVar2 = lua_tolstring(L,-1,(size_t *)0x0);
  __fprintf_chk(pFVar1,1,"PANIC: unprotected error in call to Lua API (%s)\n",pcVar2);
  fflush(stderr);
  return 0;
}


