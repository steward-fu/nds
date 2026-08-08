/*
 * Ghidra decompilation
 *
 * Function : crc16_block
 * Address  : 0011b830
 * Program  : drastic64
 */


void crc16_block(uint param_1,byte *param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  byte *pbVar3;
  byte *pbVar4;
  
  if (param_3 != 0) {
    pbVar4 = param_2;
    do {
      pbVar3 = pbVar4 + 1;
      uVar1 = (*pbVar4 ^ param_1) >> 1;
      uVar2 = uVar1 ^ 0x606080;
      if (((*pbVar4 ^ param_1) & 1) == 0) {
        uVar2 = uVar1;
      }
      uVar1 = uVar2 >> 1 ^ 0x306040;
      if ((uVar2 & 1) == 0) {
        uVar1 = uVar2 >> 1;
      }
      uVar2 = uVar1 >> 1 ^ 0x186020;
      if ((uVar1 & 1) == 0) {
        uVar2 = uVar1 >> 1;
      }
      uVar1 = uVar2 >> 1 ^ 0xc6010;
      if ((uVar2 & 1) == 0) {
        uVar1 = uVar2 >> 1;
      }
      uVar2 = uVar1 >> 1 ^ 0x66008;
      if ((uVar1 & 1) == 0) {
        uVar2 = uVar1 >> 1;
      }
      uVar1 = uVar2 >> 1 ^ 0x36004;
      if ((uVar2 & 1) == 0) {
        uVar1 = uVar2 >> 1;
      }
      uVar2 = uVar1 >> 1 ^ 0x1e002;
      if ((uVar1 & 1) == 0) {
        uVar2 = uVar1 >> 1;
      }
      param_1 = uVar2 >> 1 ^ 0xa001;
      if ((uVar2 & 1) == 0) {
        param_1 = uVar2 >> 1;
      }
      pbVar4 = pbVar3;
    } while (param_2 + (ulong)(param_3 - 1) + 1 != pbVar3);
  }
  return;
}


