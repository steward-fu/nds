/*
 * Ghidra decompilation
 *
 * Function : GetCRC50
 * Address  : 001c23d0
 * Program  : drastic64
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* RawRead::GetCRC50() */

uint RawRead::GetCRC50(void)

{
  uint uVar1;
  long *in_x0;
  
  if (4 < (ulong)in_x0[5]) {
    uVar1 = CRC32(0xffffffff,(void *)(*in_x0 + 4),in_x0[5] - 4);
    return ~uVar1;
  }
  return 0xffffffff;
}


