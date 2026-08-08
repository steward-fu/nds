/*
 * Ghidra decompilation
 *
 * Function : SPARC_Convert
 * Address  : 081072a0
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

SizeT SPARC_Convert(Byte *data,SizeT size,UInt32 ip,int encoding)

{
  UInt32 UVar1;
  byte *pbVar2;
  uint uVar3;
  uint uVar4;
  UInt32 src;
  int iVar5;
  UInt32 dest;
  uint uVar6;
  
  if (size < 4) {
    return 0;
  }
  pbVar2 = data + 1;
  uVar6 = 0;
  do {
    uVar4 = (uint)pbVar2[-1];
    if (uVar4 == 0x40) {
      uVar3 = (uint)*pbVar2;
      if ((*pbVar2 & 0xc0) == 0) {
LAB_081072f8:
        UVar1 = ip;
        if (encoding == 0) {
          UVar1 = -ip;
        }
        iVar5 = (uVar4 << 0x18 | (uint)pbVar2[1] << 8 | (uint)pbVar2[2] | uVar3 << 0x10) * 4 + UVar1
        ;
        uVar4 = (uint)(iVar5 * 0x100) >> 10;
        uVar3 = uVar4 | 0x40000000 | iVar5 * 0x80 >> 9 & 0x3fc00000U;
        pbVar2[2] = (byte)uVar4;
        pbVar2[-1] = (byte)(uVar3 >> 0x18);
        *pbVar2 = (byte)(uVar3 >> 0x10);
        pbVar2[1] = (byte)(uVar4 >> 8);
      }
    }
    else if ((uVar4 == 0x7f) && (uVar3 = (uint)*pbVar2, (uVar3 & 0xc0) == 0xc0)) goto LAB_081072f8;
    uVar6 = uVar6 + 4;
    ip = ip + 4;
    pbVar2 = pbVar2 + 4;
    if (size - 4 < uVar6) {
      return (size - 4 & 0xfffffffc) + 4;
    }
  } while( true );
}


