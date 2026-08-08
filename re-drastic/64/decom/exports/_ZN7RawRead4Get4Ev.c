/*
 * Ghidra decompilation
 *
 * Function : _ZN7RawRead4Get4Ev
 * Address  : 001c20d0
 * Program  : drastic64
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* RawRead::Get4() */

int RawRead::Get4(void)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  long *in_x0;
  long lVar5;
  long lVar6;
  
  lVar5 = in_x0[6];
  if ((ulong)in_x0[5] <= lVar5 + 3U) {
    return 0;
  }
  lVar6 = *in_x0;
  bVar3 = *(byte *)(lVar6 + lVar5);
  bVar4 = *(byte *)(lVar6 + lVar5 + 3U);
  bVar1 = *(byte *)(lVar6 + lVar5 + 1);
  bVar2 = *(byte *)(lVar6 + lVar5 + 2);
  in_x0[6] = lVar5 + 4;
  return (uint)bVar3 + (uint)bVar1 * 0x100 + (uint)bVar2 * 0x10000 + (uint)bVar4 * 0x1000000;
}


