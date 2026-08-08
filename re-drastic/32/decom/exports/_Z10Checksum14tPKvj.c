/*
 * Ghidra decompilation
 *
 * Function : _Z10Checksum14tPKvj
 * Address  : 080e0a14
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

ushort Checksum14(ushort StartCRC,void *Addr,size_t Size)

{
  uint uVar1;
  byte *Data;
  byte *pbVar2;
  byte *pbVar3;
  
  uVar1 = (uint)StartCRC;
  if (Size != 0) {
    pbVar3 = (byte *)Addr;
    do {
      pbVar2 = pbVar3 + 1;
      uVar1 = (uVar1 + *pbVar3 & 0xffff) >> 0xf | (uVar1 + *pbVar3 & 0x7fff) << 1;
      StartCRC = (ushort)uVar1;
      pbVar3 = pbVar2;
    } while ((byte *)((int)Addr + Size) != pbVar2);
  }
  return StartCRC;
}


