/*
 * Ghidra decompilation
 *
 * Function : loctoupper
 * Address  : 001b49e0
 * Program  : drastic64
 */


/* loctoupper(unsigned char) */

int loctoupper(uchar param_1)

{
  int iVar1;
  
  iVar1 = toupper((uint)param_1);
  return iVar1;
}


