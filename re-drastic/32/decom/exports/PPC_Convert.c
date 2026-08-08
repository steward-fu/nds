/*
 * Ghidra decompilation
 *
 * Function : PPC_Convert
 * Address  : 0810714c
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

SizeT PPC_Convert(Byte *data,SizeT size,UInt32 ip,int encoding)

{
  uint uVar1;
  UInt32 dest;
  int iVar2;
  uint uVar3;
  
  if (size < 4) {
    return 0;
  }
  uVar1 = size - 4;
  if (encoding == 0) {
    do {
      if ((*data >> 2 == 0x12) && ((data[3] & 3) == 1)) {
        iVar2 = ((uint)data[1] << 0x10 | (uint)data[2] << 8 | data[3] & 0xfffffffc |
                (*data & 3) << 0x18) - (ip + encoding);
        *data = (byte)((uint)(iVar2 * 0x40) >> 0x1e) | 0x48;
        data[1] = (byte)((uint)iVar2 >> 0x10);
        data[2] = (byte)((uint)iVar2 >> 8);
        data[3] = (byte)iVar2 | 1;
      }
      encoding = encoding + 4;
      data = data + 4;
    } while ((uint)encoding <= uVar1);
  }
  else {
    uVar3 = 0;
    do {
      while ((*data >> 2 == 0x12 && ((data[3] & 3) == 1))) {
        iVar2 = ip + uVar3;
        uVar3 = uVar3 + 4;
        iVar2 = ((uint)data[2] << 8 | (uint)data[1] << 0x10 | data[3] & 0xfffffffc |
                (*data & 3) << 0x18) + iVar2;
        *data = (byte)((uint)(iVar2 * 0x40) >> 0x1e) | 0x48;
        data[1] = (byte)((uint)iVar2 >> 0x10);
        data[2] = (byte)((uint)iVar2 >> 8);
        data[3] = (byte)iVar2 | 1;
        data = data + 4;
        if (uVar1 < uVar3) goto LAB_08107200;
      }
      uVar3 = uVar3 + 4;
      data = data + 4;
    } while (uVar3 <= uVar1);
  }
LAB_08107200:
  return (uVar1 & 0xfffffffc) + 4;
}


