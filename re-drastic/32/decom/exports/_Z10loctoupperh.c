/*
 * Ghidra decompilation
 *
 * Function : _Z10loctoupperh
 * Address  : 080d22f8
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

uchar loctoupper(uchar ch)

{
  int iVar1;
  
  iVar1 = toupper((uint)ch);
  return (uchar)iVar1;
}


