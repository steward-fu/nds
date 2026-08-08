/*
 * Ghidra decompilation
 *
 * Function : FUN_080120c4
 * Address  : 080120c4
 * Program  : drastic16
 */


void FUN_080120c4(int param_1)

{
  byte *pbVar1;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  byte *pbVar2;
  
  *(undefined *)(param_1 + 0x1d) = 0x20;
  *(undefined *)(param_1 + 0x20) = 0xc0;
  *(undefined4 *)(param_1 + 8) = 0x5043414d;
  *(undefined *)(param_1 + 0x21) = 0x7f;
  *(undefined *)(param_1 + 0x2c) = 0x38;
  *(undefined *)(param_1 + 0x39) = 3;
  *(undefined *)(param_1 + 0x3a) = 4;
  *(undefined *)(param_1 + 0x3b) = 5;
  *(undefined *)(param_1 + 0x3c) = 0xfe;
  *(undefined *)(param_1 + 0x3d) = 0x3f;
  *(undefined *)(param_1 + 0x41) = 0x18;
  *(undefined *)(param_1 + 0x42) = 0xc;
  *(undefined *)(param_1 + 0x162) = 0x19;
  *(undefined *)(param_1 + 0x38) = 2;
  *(undefined *)(param_1 + 0x2d) = 1;
  *(undefined *)(param_1 + 0x37) = 1;
  *(undefined *)(param_1 + 0x43) = 1;
  *(undefined *)(param_1 + 0x40) = 2;
  *(undefined *)(param_1 + 0x2e) = 0;
  *(undefined *)(param_1 + 0x2f) = 0;
  *(undefined *)(param_1 + 0x36) = 0;
  *(undefined *)(param_1 + 0x3e) = 0xff;
  *(undefined *)(param_1 + 0x3f) = 0xff;
  memset((void *)(param_1 + 0x163),0xff,0x9d);
  uVar5 = 0;
  pbVar2 = (byte *)(param_1 + 0x2c);
  do {
    pbVar1 = pbVar2 + 1;
    uVar4 = (uVar5 ^ *pbVar2) >> 1;
    uVar3 = uVar4 ^ 0x606080;
    if (((uVar5 ^ *pbVar2) & 1) == 0) {
      uVar3 = uVar4;
    }
    uVar5 = uVar3 >> 1;
    if ((uVar3 & 1) != 0) {
      uVar5 = uVar5 ^ 0x306040;
    }
    uVar4 = uVar5 >> 1 ^ 0x186020;
    if ((uVar5 & 1) == 0) {
      uVar4 = uVar5 >> 1;
    }
    uVar5 = uVar4 >> 1;
    if ((uVar4 & 1) != 0) {
      uVar5 = uVar5 ^ 0xc6010;
    }
    uVar4 = uVar5 >> 1;
    if ((uVar5 & 1) != 0) {
      uVar4 = uVar4 ^ 0x66008;
    }
    uVar5 = uVar4 >> 1;
    if ((uVar4 & 1) != 0) {
      uVar5 = uVar5 ^ 0x36004;
    }
    uVar4 = uVar5 >> 1;
    if ((uVar5 & 1) != 0) {
      uVar4 = uVar4 ^ 0x1e002;
    }
    uVar5 = uVar4 >> 1 ^ 0xa001;
    if ((uVar4 & 1) == 0) {
      uVar5 = uVar4 >> 1;
    }
    pbVar2 = pbVar1;
  } while (pbVar1 != (byte *)(param_1 + 0x164));
  *(short *)(param_1 + 0x2a) = (short)uVar5;
  return;
}


