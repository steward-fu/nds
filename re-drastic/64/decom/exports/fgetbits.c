/*
 * Ghidra decompilation
 *
 * Function : fgetbits
 * Address  : 001ef390
 * Program  : drastic64
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* BitInput::fgetbits() */

uint BitInput::fgetbits(void)

{
  long lVar1;
  int *in_x0;
  
  lVar1 = *(long *)(in_x0 + 4) + (long)*in_x0;
  return ((uint)*(byte *)(lVar1 + 2) | (uint)*(byte *)(*(long *)(in_x0 + 4) + (long)*in_x0) << 0x10
         | (uint)*(byte *)(lVar1 + 1) << 8) >> (ulong)(8U - in_x0[1] & 0x1f) & 0xffff;
}


