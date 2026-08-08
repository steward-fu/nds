/*
 * Ghidra decompilation
 *
 * Function : update_coprocessor_dtcm_control
 * Address  : 00129630
 * Program  : drastic64
 */


byte update_coprocessor_dtcm_control(long param_1)

{
  bool bVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  
  uVar2 = *(uint *)(param_1 + 0x18) & 0xfffff000;
  *(uint *)(param_1 + 0x20) = uVar2;
  uVar4 = 0x200 << ((ulong)(*(uint *)(param_1 + 0x18) >> 1) & 0x1f);
  *(uint *)(param_1 + 0x2c) = uVar4;
  if (uVar4 < 0x1000) {
    uVar4 = 0x1000;
    *(undefined4 *)(param_1 + 0x2c) = 0x1000;
  }
  remap_dtcm(*(undefined8 *)(param_1 + 8),uVar2,uVar4);
  bVar1 = (uint)(*(int *)(param_1 + 0x20) + *(int *)(param_1 + 0x2c)) < 0x4000000;
  bVar3 = *(byte *)(param_1 + 0x3c);
  *(bool *)(param_1 + 0x3c) = bVar1;
  if ((bool)bVar3 != bVar1) {
    __printf_chk(1,"DTCM in mapped memory status changed (to %d)\n");
  }
  return bVar3 ^ bVar1;
}


