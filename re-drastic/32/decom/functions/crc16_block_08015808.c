/*
 * Ghidra decompilation
 *
 * Function : crc16_block
 * Address  : 08015808
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

u16 crc16_block(u32 crc,u8 *data,u32 length)

{
  uint uVar1;
  byte *pbVar2;
  uint uVar4;
  byte *pbVar3;
  
  if (length != 0) {
    pbVar3 = data;
    do {
      pbVar2 = pbVar3 + 1;
      uVar4 = (crc ^ *pbVar3) >> 1;
      if (((crc ^ *pbVar3) & 1) != 0) {
        uVar4 = uVar4 ^ 0x606080;
      }
      uVar1 = uVar4 >> 1;
      if ((uVar4 & 1) != 0) {
        uVar1 = uVar4 >> 1 ^ 0x306040;
      }
      uVar4 = uVar1 >> 1;
      if ((uVar1 & 1) != 0) {
        uVar4 = uVar1 >> 1 ^ 0x186020;
      }
      uVar1 = uVar4 >> 1;
      if ((uVar4 & 1) != 0) {
        uVar1 = uVar4 >> 1 ^ 0xc6010;
      }
      uVar4 = uVar1 >> 1;
      if ((uVar1 & 1) != 0) {
        uVar4 = uVar1 >> 1 ^ 0x66008;
      }
      uVar1 = uVar4 >> 1;
      if ((uVar4 & 1) != 0) {
        uVar1 = uVar4 >> 1 ^ 0x36004;
      }
      uVar4 = uVar1 >> 1;
      if ((uVar1 & 1) != 0) {
        uVar4 = uVar1 >> 1 ^ 0x1e002;
      }
      crc = uVar4 >> 1;
      if ((uVar4 & 1) != 0) {
        crc = uVar4 >> 1 ^ 0xa001;
      }
      pbVar3 = pbVar2;
    } while (pbVar2 != data + length);
    return (u16)crc;
  }
  return (u16)crc;
}


