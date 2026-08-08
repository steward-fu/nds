/*
 * Ghidra decompilation
 *
 * Function : ARM_Convert
 * Address  : 08106ec8
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

SizeT ARM_Convert(Byte *data,SizeT size,UInt32 ip,int encoding)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  UInt32 dest;
  uint uVar4;
  
  if (size < 4) {
    return 0;
  }
  uVar1 = size - 4;
  if (encoding == 0) {
    do {
      if (data[3] == 0xeb) {
        uVar4 = ((uint)data[2] << 0x10 | (uint)data[1] << 8 | (uint)*data) * 4 - (ip + 8 + encoding)
        ;
        *data = (byte)(uVar4 >> 2);
        data[1] = (byte)(uVar4 >> 10);
        data[2] = (byte)(uVar4 >> 0x12);
      }
      encoding = encoding + 4;
      data = data + 4;
    } while ((uint)encoding <= uVar1);
  }
  else {
    uVar4 = 0;
    do {
      while (data[3] == 0xeb) {
        iVar2 = ip + 8 + uVar4;
        uVar4 = uVar4 + 4;
        uVar3 = iVar2 + ((uint)data[1] << 8 | (uint)data[2] << 0x10 | (uint)*data) * 4;
        *data = (byte)(uVar3 >> 2);
        data[1] = (byte)(uVar3 >> 10);
        data[2] = (byte)(uVar3 >> 0x12);
        data = data + 4;
        if (uVar1 < uVar4) goto LAB_08106f54;
      }
      uVar4 = uVar4 + 4;
      data = data + 4;
    } while (uVar4 <= uVar1);
  }
LAB_08106f54:
  return (uVar1 & 0xfffffffc) + 4;
}


