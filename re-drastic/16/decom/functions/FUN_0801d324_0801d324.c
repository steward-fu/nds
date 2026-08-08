/*
 * Ghidra decompilation
 *
 * Function : FUN_0801d324
 * Address  : 0801d324
 * Program  : drastic16
 */


byte FUN_0801d324(int param_1)

{
  byte bVar1;
  uint uVar2;
  bool bVar3;
  
  uVar2 = 0x200 << ((*(uint *)(param_1 + 0x10) << 0x1a) >> 0x1b);
  bVar3 = uVar2 < 0x1000;
  *(uint *)(param_1 + 0x24) = uVar2;
  if (bVar3) {
    uVar2 = 0x1000;
  }
  *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x10) & 0xfffff000;
  if (bVar3) {
    *(uint *)(param_1 + 0x24) = uVar2;
  }
  FUN_0800d114(*(undefined4 *)(param_1 + 4));
  bVar1 = *(byte *)(param_1 + 0x34);
  bVar3 = (uint)(*(int *)(param_1 + 0x24) + *(int *)(param_1 + 0x18)) < 0x4000000;
  *(bool *)(param_1 + 0x34) = bVar3;
  bVar1 = bVar3 ^ bVar1;
  if (bVar1 != 0) {
    printf("DTCM in mapped memory status changed (to %d)\n");
  }
  return bVar1;
}


