/*
 * Ghidra decompilation
 *
 * Function : toupperw
 * Address  : 080dd674
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int toupperw(int ch)

{
  wint_t wVar1;
  
  wVar1 = towupper(ch);
  return wVar1;
}


