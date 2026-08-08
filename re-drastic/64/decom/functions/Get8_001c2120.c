/*
 * Ghidra decompilation
 *
 * Function : Get8
 * Address  : 001c2120
 * Program  : drastic64
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* RawRead::Get8() */

ulong RawRead::Get8(void)

{
  uint uVar1;
  long lVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  long *in_x0;
  ulong uVar7;
  long lVar8;
  long lVar9;
  
  lVar8 = in_x0[6];
  if (lVar8 + 3U < (ulong)in_x0[5]) {
    lVar9 = *in_x0;
    lVar2 = lVar9 + lVar8;
    bVar5 = *(byte *)(lVar9 + lVar8);
    bVar6 = *(byte *)(lVar9 + lVar8 + 3U);
    bVar3 = *(byte *)(lVar2 + 1);
    bVar4 = *(byte *)(lVar2 + 2);
    in_x0[6] = lVar8 + 4;
    uVar1 = (uint)bVar5 + (uint)bVar3 * 0x100 + (uint)bVar4 * 0x10000 + (uint)bVar6 * 0x1000000;
    uVar7 = (ulong)uVar1;
    if (lVar8 + 7U < (ulong)in_x0[5]) {
      bVar3 = *(byte *)(lVar2 + 5);
      bVar5 = *(byte *)(lVar9 + lVar8 + 4);
      bVar4 = *(byte *)(lVar2 + 6);
      bVar6 = *(byte *)(lVar9 + lVar8 + 7U);
      in_x0[6] = lVar8 + 8;
      return CONCAT44((uint)bVar5 + (uint)bVar3 * 0x100 + (uint)bVar4 * 0x10000 +
                      (uint)bVar6 * 0x1000000,uVar1);
    }
  }
  else {
    uVar7 = 0;
  }
  return uVar7;
}


