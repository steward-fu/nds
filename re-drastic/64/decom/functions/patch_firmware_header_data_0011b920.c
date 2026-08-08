/*
 * Ghidra decompilation
 *
 * Function : patch_firmware_header_data
 * Address  : 0011b920
 * Program  : drastic64
 */


void patch_firmware_header_data(long param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  byte *pbVar4;
  byte *pbVar5;
  
  *(undefined4 *)(param_1 + 8) = 0x5043414d;
  *(undefined *)(param_1 + 0x1d) = 0x20;
  *(undefined2 *)(param_1 + 0x20) = 0x7fc0;
  *(undefined4 *)(param_1 + 0x2c) = 0x138;
  *(undefined8 *)(param_1 + 0x36) = 0x3ffe050403020100;
  *(undefined4 *)(param_1 + 0x3e) = 0x1802ffff;
  *(undefined2 *)(param_1 + 0x42) = 0x10c;
  *(undefined *)(param_1 + 0x162) = 0x19;
  *(undefined8 *)(param_1 + 0x163) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x16b) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x173) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x17b) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x183) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x18b) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x193) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x19b) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x1a3) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x1ab) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x1b3) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x1bb) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x1c3) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x1cb) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x1d3) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x1db) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x1e3) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x1eb) = 0xffffffffffffffff;
  uVar3 = 0;
  *(undefined8 *)(param_1 + 499) = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x1fb) = 0xffffffff;
  *(undefined *)(param_1 + 0x1ff) = 0xff;
  pbVar5 = (byte *)(param_1 + 0x2c);
  do {
    pbVar4 = pbVar5 + 1;
    uVar2 = (*pbVar5 ^ uVar3) >> 1;
    uVar1 = uVar2 ^ 0x606080;
    if (((*pbVar5 ^ uVar3) & 1) == 0) {
      uVar1 = uVar2;
    }
    uVar3 = uVar1 >> 1 ^ 0x306040;
    if ((uVar1 & 1) == 0) {
      uVar3 = uVar1 >> 1;
    }
    uVar1 = uVar3 >> 1 ^ 0x186020;
    if ((uVar3 & 1) == 0) {
      uVar1 = uVar3 >> 1;
    }
    uVar3 = uVar1 >> 1 ^ 0xc6010;
    if ((uVar1 & 1) == 0) {
      uVar3 = uVar1 >> 1;
    }
    uVar1 = uVar3 >> 1 ^ 0x66008;
    if ((uVar3 & 1) == 0) {
      uVar1 = uVar3 >> 1;
    }
    uVar3 = uVar1 >> 1 ^ 0x36004;
    if ((uVar1 & 1) == 0) {
      uVar3 = uVar1 >> 1;
    }
    uVar1 = uVar3 >> 1 ^ 0x1e002;
    if ((uVar3 & 1) == 0) {
      uVar1 = uVar3 >> 1;
    }
    uVar3 = uVar1 >> 1 ^ 0xa001;
    if ((uVar1 & 1) == 0) {
      uVar3 = uVar1 >> 1;
    }
    pbVar5 = pbVar4;
  } while ((byte *)(param_1 + 0x164) != pbVar4);
  *(short *)(param_1 + 0x2a) = (short)uVar3;
  return;
}


