/*
 * Ghidra decompilation
 *
 * Function : FUN_0801d6f0
 * Address  : 0801d6f0
 * Program  : drastic16
 */


void FUN_0801d6f0(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  uint uVar6;
  
  uVar6 = *(uint *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0xc) = **(undefined4 **)(param_2 + 0x10);
  uVar4 = *(uint *)(param_1 + 0xc);
  puVar5 = (undefined4 *)(*(int *)(param_2 + 0x10) + 4);
  *(undefined4 **)(param_2 + 0x10) = puVar5;
  uVar3 = uVar4 & 0x2000;
  if (uVar3 != 0) {
    uVar3 = 0xffff0000;
  }
  *(undefined4 *)(param_1 + 0x10) = *puVar5;
  puVar5 = (undefined4 *)(*(int *)(param_2 + 0x10) + 4);
  *(undefined4 **)(param_2 + 0x10) = puVar5;
  *(undefined4 *)(param_1 + 0x14) = *puVar5;
  *(int *)(param_2 + 0x10) = *(int *)(param_2 + 0x10) + 4;
  *(uint *)(param_1 + 0x1c) = (uVar4 << 0xf) >> 0x1f;
  *(uint *)(param_1 + 0x20) = (uVar4 << 0xe) >> 0x1f;
  *(uint *)(param_1 + 0x28) = (uVar4 << 0xd) >> 0x1f;
  *(uint *)(param_1 + 0x2c) = (uVar4 << 0xc) >> 0x1f;
  *(uint *)(param_1 + 8) = uVar3;
  if (uVar6 != uVar3) {
    printf("Changing exception vector offset from %08x to %08x\n",uVar6);
  }
  uVar3 = 0x200 << ((uint)(*(int *)(param_1 + 0x14) << 0x1a) >> 0x1b);
  if (uVar3 < 0x1000) {
    uVar3 = 0x1000;
  }
  *(uint *)(param_1 + 0x30) = uVar3;
  FUN_0800cbc4(*(undefined4 *)(param_1 + 4));
  uVar3 = 0x200 << ((*(uint *)(param_1 + 0x10) << 0x1a) >> 0x1b);
  *(uint *)(param_1 + 0x24) = uVar3;
  *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x10) & 0xfffff000;
  if (uVar3 < 0x1000) {
    *(undefined4 *)(param_1 + 0x24) = 0x1000;
  }
  FUN_0800d114(*(undefined4 *)(param_1 + 4));
  bVar2 = *(byte *)(param_1 + 0x34);
  bVar1 = (uint)(*(int *)(param_1 + 0x24) + *(int *)(param_1 + 0x18)) < 0x4000000;
  uVar3 = (uint)bVar1;
  *(bool *)(param_1 + 0x34) = bVar1;
  if (uVar3 != bVar2) {
    printf("DTCM in mapped memory status changed (to %d)\n",uVar3,*(int *)(param_1 + 0x18),param_4);
    return;
  }
  return;
}


