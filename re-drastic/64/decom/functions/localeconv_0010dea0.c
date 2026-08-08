/*
 * Ghidra decompilation
 *
 * Function : localeconv
 * Address  : 0010dea0
 * Program  : drastic64
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

lconv * localeconv(void)

{
  lconv *plVar1;
  
  plVar1 = localeconv();
  return plVar1;
}


