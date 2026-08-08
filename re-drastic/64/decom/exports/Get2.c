/*
 * Ghidra decompilation
 *
 * Function : Get2
 * Address  : 001c2090
 * Program  : drastic64
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* RawRead::Get2() */

short RawRead::Get2(void)

{
  byte bVar1;
  byte bVar2;
  long *in_x0;
  long lVar3;
  
  lVar3 = in_x0[6];
  if ((ulong)in_x0[5] <= lVar3 + 1U) {
    return 0;
  }
  bVar1 = *(byte *)(*in_x0 + lVar3 + 1U);
  bVar2 = *(byte *)(*in_x0 + lVar3);
  in_x0[6] = lVar3 + 2;
  return (ushort)bVar1 * 0x100 + (ushort)bVar2;
}


