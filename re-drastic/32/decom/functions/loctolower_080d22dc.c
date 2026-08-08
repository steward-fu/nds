/*
 * Ghidra decompilation
 *
 * Function : loctolower
 * Address  : 080d22dc
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

uchar loctolower(uchar ch)

{
  int iVar1;
  
  iVar1 = tolower((uint)ch);
  return (uchar)iVar1;
}


