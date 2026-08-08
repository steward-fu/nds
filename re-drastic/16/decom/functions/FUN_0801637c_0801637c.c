/*
 * Ghidra decompilation
 *
 * Function : FUN_0801637c
 * Address  : 0801637c
 * Program  : drastic16
 */


int FUN_0801637c(undefined4 *param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  
  uVar1 = *(int *)(param_2 + 0x10) + param_3 * 0x200;
  uVar5 = *(uint *)(param_2 + 0x18);
  if (uVar1 < 0x10000000) {
    uVar3 = (uVar1 >> 0x17) * 0x30;
  }
  else {
    uVar3 = 0;
    uVar1 = uVar3;
  }
  iVar6 = param_1[1] + uVar3;
  if (*(char *)(iVar6 + 0x2c) == '\0') {
    iVar6 = *(int *)(iVar6 + 4) + (uVar1 & *(uint *)(param_1[1] + uVar3));
  }
  else if (*(char *)(iVar6 + 0x2c) == '\x01') {
    iVar6 = (**(code **)(iVar6 + 4))(*param_1);
  }
  else {
    iVar6 = 0;
  }
  if ((uVar5 & 0x2000000) == 0) {
    uVar5 = uVar5 & 0x7fffffff;
    *(uint *)(param_2 + 0x18) = uVar5;
    *(uint *)(*(int *)(param_2 + 0xc) + 8) = uVar5;
  }
  if ((uVar5 & 0x40000000) != 0) {
    iVar2 = *(int *)(*(int *)(param_2 + 8) + 0x2080);
    uVar1 = *(uint *)(iVar2 + 0x214) | 0x100 << *(sbyte *)(param_2 + 0x1d);
    *(uint *)(iVar2 + 0x214) = uVar1;
    iVar4 = *(int *)(param_2 + 8);
    if ((*(byte *)(iVar4 + 0x2105) & 6) == 0) {
      uVar1 = -*(int *)(iVar2 + 0x208) & *(uint *)(iVar2 + 0x210) & uVar1;
      *(uint *)(iVar4 + 0x2100) = uVar1;
    }
    else {
      uVar1 = *(uint *)(iVar4 + 0x2100);
    }
    if (uVar1 != 0) {
      *(uint *)(iVar4 + 0x237c) = *(uint *)(iVar4 + 0x237c) | 2;
    }
    return iVar6;
  }
  return iVar6;
}


