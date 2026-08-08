/*
 * Ghidra decompilation
 *
 * Function : LzmaProps_Decode
 * Address  : 080ced3c
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

SRes LzmaProps_Decode(CLzmaProps_conflict *p,Byte *data,uint size)

{
  Byte d;
  uint uVar1;
  UInt32 UVar2;
  
  if (4 < size) {
    UVar2 = *(UInt32 *)(data + 1);
    if (UVar2 < 0x1000) {
      UVar2 = 0x1000;
    }
    p->dicSize = UVar2;
    uVar1 = (uint)*data;
    if (uVar1 < 0xe1) {
      p->lc = uVar1 % 9;
      p->pb = ((uint)((ulonglong)uVar1 * 0x16c16c16d >> 0x21) << 0x13) >> 0x18;
      p->lp = (uVar1 / 9) % 5;
      return 0;
    }
  }
  return 4;
}


