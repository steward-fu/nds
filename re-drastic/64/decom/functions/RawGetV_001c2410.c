/*
 * Ghidra decompilation
 *
 * Function : RawGetV
 * Address  : 001c2410
 * Program  : drastic64
 */


/* RawGetV(unsigned char const*, unsigned int&, unsigned int, bool&) */

long RawGetV(uchar *param_1,uint *param_2,uint param_3,bool *param_4)

{
  byte bVar1;
  long lVar2;
  uint uVar3;
  byte *pbVar4;
  ulong uVar5;
  
  uVar3 = *param_2;
  *param_4 = false;
  if (uVar3 < param_3) {
    pbVar4 = param_1 + uVar3;
    uVar5 = 0;
    lVar2 = 0;
    do {
      uVar3 = uVar3 + 1;
      *param_2 = uVar3;
      bVar1 = *pbVar4;
      pbVar4 = pbVar4 + 1;
      lVar2 = lVar2 + (((ulong)bVar1 & 0x7f) << (uVar5 & 0x3f));
      if (-1 < (char)bVar1) {
        return lVar2;
      }
      uVar5 = (ulong)((int)uVar5 + 7);
    } while (param_3 != uVar3);
  }
  *param_4 = true;
  return 0;
}


