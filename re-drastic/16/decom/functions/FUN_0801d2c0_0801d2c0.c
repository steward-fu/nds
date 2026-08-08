/*
 * Ghidra decompilation
 *
 * Function : FUN_0801d2c0
 * Address  : 0801d2c0
 * Program  : drastic16
 */


undefined4 FUN_0801d2c0(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = *(uint *)(param_1 + 0xc);
  uVar1 = *(uint *)(param_1 + 8);
  uVar2 = uVar3 & 0x2000;
  *(uint *)(param_1 + 0x1c) = (uVar3 << 0xf) >> 0x1f;
  if (uVar2 != 0) {
    uVar2 = 0xffff0000;
  }
  *(uint *)(param_1 + 0x20) = (uVar3 << 0xe) >> 0x1f;
  *(uint *)(param_1 + 0x28) = (uVar3 << 0xd) >> 0x1f;
  *(uint *)(param_1 + 0x2c) = (uVar3 << 0xc) >> 0x1f;
  *(uint *)(param_1 + 8) = uVar2;
  if (uVar1 != uVar2) {
    printf("Changing exception vector offset from %08x to %08x\n");
    return 1;
  }
  return 0;
}


