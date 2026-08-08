/*
 * Ghidra decompilation
 *
 * Function : FUN_08032024
 * Address  : 08032024
 * Program  : drastic16
 */


void FUN_08032024(int *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  uVar5 = param_1[0x1c];
  bVar3 = (byte)((param_2 << 1) >> 0x1f);
  *(byte *)((int)param_1 + 0x11d) = bVar3;
  *(byte *)((int)param_1 + 0x1a5) = bVar3;
  *(byte *)((int)param_1 + 0x22d) = bVar3;
  *(byte *)((int)param_1 + 0x2b5) = bVar3;
  if (*(char *)((int)param_1 + 0x97) == '\0') {
    iVar1 = ((param_2 << 2) >> 0x1d) * 0x10000;
    iVar2 = ((param_2 << 5) >> 0x1d) * 0x10000;
    iVar6 = *(int *)(*param_1 + (((param_2 << 0xc) >> 0x1e) + 0x42c) * 4 + 8);
    param_1[0x91] = iVar1 + param_1[0x94];
    uVar4 = param_2 ^ uVar5;
    param_1[2] = iVar6;
    param_1[0x1d] = iVar1;
    param_1[0x2b] = iVar1 + param_1[0x2e];
    param_1[0x4d] = iVar1 + param_1[0x50];
    param_1[0x6f] = iVar1 + param_1[0x72];
    param_1[0x1e] = iVar2;
    param_1[0x2c] = iVar2 + param_1[0x2f];
    param_1[0x4e] = iVar2 + param_1[0x51];
    param_1[0x70] = iVar2 + param_1[0x73];
    param_1[0x92] = iVar2 + param_1[0x95];
    param_1[0x1c] = param_2;
  }
  else {
    param_2 = param_2 & 0xc0b1fff7;
    param_1[0x1c] = param_2;
    uVar4 = param_2 ^ uVar5;
  }
  if (((uVar4 & 7) != 0) && ((FUN_08031d2c(param_1), (param_2 & 7) == 6 || ((uVar5 & 7) == 6)))) {
    FUN_08031e6c(param_1,2,*(undefined2 *)(param_1 + 0x86));
  }
  if ((uVar4 & 0x1f08) != 0) {
    FUN_08031b14(param_1);
    return;
  }
  return;
}


