/*
 * Ghidra decompilation
 *
 * Function : _Z8etoupperh
 * Address  : 080d2314
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

uchar etoupper(uchar ch)

{
  int iVar1;
  
  if (ch != 0x69) {
    iVar1 = toupper((uint)ch);
    return (uchar)iVar1;
  }
  return 'I';
}


