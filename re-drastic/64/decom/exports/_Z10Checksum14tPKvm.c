/*
 * Ghidra decompilation
 *
 * Function : _Z10Checksum14tPKvm
 * Address  : 001c1ce0
 * Program  : drastic64
 */


/* Checksum14(unsigned short, void const*, unsigned long) */

uint Checksum14(ushort param_1,void *param_2,ulong param_3)

{
  uint uVar1;
  byte *pbVar2;
  byte *pbVar3;
  
  uVar1 = (uint)param_1;
  if (param_3 != 0) {
    pbVar3 = (byte *)param_2;
    do {
      pbVar2 = pbVar3 + 1;
      uVar1 = uVar1 + *pbVar3 >> 0xf & 1 | (uVar1 + *pbVar3) * 2 & 0xffff;
      pbVar3 = pbVar2;
    } while ((byte *)((long)param_2 + param_3) != pbVar2);
  }
  return uVar1;
}


