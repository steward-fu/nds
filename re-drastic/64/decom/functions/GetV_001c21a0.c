/*
 * Ghidra decompilation
 *
 * Function : GetV
 * Address  : 001c21a0
 * Program  : drastic64
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* RawRead::GetV() */

long RawRead::GetV(void)

{
  byte bVar1;
  long *in_x0;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar3 = in_x0[6];
  if (uVar3 < (ulong)in_x0[5]) {
    uVar4 = 0;
    lVar2 = 0;
    do {
      uVar3 = uVar3 + 1;
      in_x0[6] = uVar3;
      bVar1 = *(byte *)(*in_x0 + -1 + uVar3);
      lVar2 = lVar2 + (((ulong)bVar1 & 0x7f) << (uVar4 & 0x3f));
      if (-1 < (char)bVar1) {
        return lVar2;
      }
      uVar4 = (ulong)((int)uVar4 + 7);
    } while (uVar3 != in_x0[5]);
  }
  return 0;
}


