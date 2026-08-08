/*
 * Ghidra decompilation
 *
 * Function : patch_firmware_header_data
 * Address  : 08015910
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void patch_firmware_header_data(u8 *firmware_data)

{
  byte *pbVar1;
  uint uVar3;
  uint uVar4;
  byte *pbVar2;
  
  *(undefined4 *)(firmware_data + 8) = 0x5043414d;
  firmware_data[0x1d] = ' ';
  firmware_data[0x20] = 0xc0;
  firmware_data[0x21] = '\x7f';
  firmware_data[0x2c] = '8';
  firmware_data[0x2d] = '\x01';
  firmware_data[0x39] = '\x03';
  firmware_data[0x2e] = '\0';
  firmware_data[0x2f] = '\0';
  firmware_data[0x36] = '\0';
  firmware_data[0x37] = '\x01';
  firmware_data[0x38] = '\x02';
  firmware_data[0x3a] = '\x04';
  firmware_data[0x3b] = '\x05';
  firmware_data[0x3c] = 0xfe;
  firmware_data[0x3d] = '?';
  firmware_data[0x3e] = 0xff;
  firmware_data[0x3f] = 0xff;
  firmware_data[0x40] = '\x02';
  firmware_data[0x41] = '\x18';
  firmware_data[0x42] = '\f';
  firmware_data[0x43] = '\x01';
  firmware_data[0x162] = '\x19';
  memset(firmware_data + 0x163,0xff,0x9d);
  uVar3 = 0;
  pbVar2 = firmware_data + 0x2c;
  do {
    pbVar1 = pbVar2 + 1;
    uVar4 = (uVar3 ^ *pbVar2) >> 1;
    if (((uVar3 ^ *pbVar2) & 1) != 0) {
      uVar4 = uVar4 ^ 0x606080;
    }
    uVar3 = uVar4 >> 1;
    if ((uVar4 & 1) != 0) {
      uVar3 = uVar4 >> 1 ^ 0x306040;
    }
    uVar4 = uVar3 >> 1;
    if ((uVar3 & 1) != 0) {
      uVar4 = uVar3 >> 1 ^ 0x186020;
    }
    uVar3 = uVar4 >> 1;
    if ((uVar4 & 1) != 0) {
      uVar3 = uVar4 >> 1 ^ 0xc6010;
    }
    uVar4 = uVar3 >> 1;
    if ((uVar3 & 1) != 0) {
      uVar4 = uVar3 >> 1 ^ 0x66008;
    }
    uVar3 = uVar4 >> 1;
    if ((uVar4 & 1) != 0) {
      uVar3 = uVar4 >> 1 ^ 0x36004;
    }
    uVar4 = uVar3 >> 1;
    if ((uVar3 & 1) != 0) {
      uVar4 = uVar3 >> 1 ^ 0x1e002;
    }
    uVar3 = uVar4 >> 1;
    if ((uVar4 & 1) != 0) {
      uVar3 = uVar4 >> 1 ^ 0xa001;
    }
    pbVar2 = pbVar1;
  } while (pbVar1 != firmware_data + 0x164);
  *(short *)(firmware_data + 0x2a) = (short)uVar3;
  return;
}


