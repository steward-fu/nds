/*
 * Ghidra decompilation
 *
 * Function : ARMT_Convert
 * Address  : 08106fc8
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

SizeT ARMT_Convert(Byte *data,SizeT size,UInt32 ip,int encoding)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  UInt32 dest;
  uint uVar6;
  
  if (size < 4) {
    return 0;
  }
  uVar1 = size - 4;
  if (encoding == 0) {
    uVar2 = 0;
    do {
      while( true ) {
        if ((data[uVar2 + 1] & 0xf8) != 0xf0) break;
        iVar3 = uVar2 + 3;
        if ((data[iVar3] & 0xf8) != 0xf8) break;
        iVar4 = uVar2 + 2;
        uVar5 = ((uint)data[iVar4] | (uint)data[uVar2] << 0xb | (data[uVar2 + 1] & 7) << 0x13 |
                (data[iVar3] & 7) << 8) * 2 - (ip + 4 + uVar2);
        data[uVar2 + 1] = (byte)(uVar5 * 0x200 >> 0x1d) | 0xf0;
        data[uVar2] = (Byte)(uVar5 >> 0xc);
        uVar2 = uVar2 + 4;
        data[iVar3] = (byte)(uVar5 >> 9) | 0xf8;
        data[iVar4] = (Byte)(uVar5 >> 1);
        if (uVar1 < uVar2) {
          return uVar2;
        }
      }
      uVar2 = uVar2 + 2;
    } while (uVar2 <= uVar1);
  }
  else {
    uVar2 = 0;
    do {
      uVar5 = uVar2;
      if ((data[uVar2 + 1] & 0xf8) == 0xf0) {
        if ((data[uVar2 + 3] & 0xf8) == 0xf8) {
          uVar5 = uVar2 + 2;
          uVar6 = ip + 4 + uVar2 +
                  ((uint)data[uVar5] | (uint)data[uVar2] << 0xb | (data[uVar2 + 1] & 7) << 0x13 |
                  (data[uVar2 + 3] & 7) << 8) * 2;
          data[uVar2 + 1] = (byte)(uVar6 * 0x200 >> 0x1d) | 0xf0;
          data[uVar2] = (Byte)(uVar6 >> 0xc);
          data[uVar2 + 3] = (byte)(uVar6 >> 9) | 0xf8;
          data[uVar5] = (Byte)(uVar6 >> 1);
        }
      }
      uVar2 = uVar5 + 2;
    } while (uVar2 <= uVar1);
  }
  return uVar2;
}


