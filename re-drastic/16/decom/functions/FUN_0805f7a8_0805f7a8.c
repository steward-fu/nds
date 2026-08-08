/*
 * Ghidra decompilation
 *
 * Function : FUN_0805f7a8
 * Address  : 0805f7a8
 * Program  : drastic16
 */


uint FUN_0805f7a8(byte *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  byte *pbVar2;
  int iVar4;
  uint uVar5;
  byte *pbVar6;
  byte *pbVar3;
  
  iVar4 = 1 << (0x1fU - LZCOUNT(param_2) & 0xff);
  if (param_2 == 0) {
    uVar5 = 0xffffffff;
  }
  else {
    pbVar6 = param_1 + param_2;
    uVar5 = 0xffffffff;
    pbVar3 = param_1;
    do {
      pbVar2 = pbVar3 + 1;
      uVar5 = *(uint *)(&DAT_080e7b70 + ((*pbVar3 ^ uVar5) & 0xff) * 4) ^ uVar5 >> 8;
      pbVar3 = pbVar2;
      param_1 = pbVar6;
    } while (pbVar2 != pbVar6);
  }
  if (param_2 != iVar4) {
    bVar1 = param_1[-1];
    iVar4 = iVar4 * 2;
    printf("Rounding up file CRC from %x to %x bytes, repeating with %x.\n",param_2,iVar4,
           (uint)bVar1,param_4);
    for (iVar4 = iVar4 - param_2; iVar4 != 0; iVar4 = iVar4 + -1) {
      uVar5 = *(uint *)(&DAT_080e7b70 + ((uVar5 ^ bVar1) & 0xff) * 4) ^ uVar5 >> 8;
    }
  }
  return ~uVar5;
}


