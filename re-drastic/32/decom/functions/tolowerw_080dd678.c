/*
 * Ghidra decompilation
 *
 * Function : tolowerw
 * Address  : 080dd678
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int tolowerw(int ch)

{
  wint_t wVar1;
  
  wVar1 = towlower(ch);
  return wVar1;
}


