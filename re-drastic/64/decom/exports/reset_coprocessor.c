/*
 * Ghidra decompilation
 *
 * Function : reset_coprocessor
 * Address  : 001299c0
 * Program  : drastic64
 */


void reset_coprocessor(long param_1)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined *)(param_1 + 0x3c) = 1;
  *(undefined8 *)(param_1 + 0x18) = 0x20027e000a;
  *(undefined8 *)(param_1 + 0x10) = 0x12078ffff0000;
  *(undefined8 *)(param_1 + 0x28) = 0x400000000000;
  *(undefined8 *)(param_1 + 0x20) = 0x1027e0000;
  remap_dtcm(*(undefined8 *)(param_1 + 8),0x27e0000,0x4000);
  bVar1 = (uint)(*(int *)(param_1 + 0x20) + *(int *)(param_1 + 0x2c)) < 0x4000000;
  cVar2 = *(char *)(param_1 + 0x3c);
  *(bool *)(param_1 + 0x3c) = bVar1;
  if ((bool)cVar2 != bVar1) {
    __printf_chk(1,"DTCM in mapped memory status changed (to %d)\n");
  }
  uVar3 = 0x200 << ((ulong)(*(uint *)(param_1 + 0x1c) >> 1) & 0x1f);
  if (0xfff < uVar3) {
    *(uint *)(param_1 + 0x38) = uVar3;
    remap_itcm(*(undefined8 *)(param_1 + 8));
    return;
  }
  *(undefined4 *)(param_1 + 0x38) = 0x1000;
  remap_itcm(*(undefined8 *)(param_1 + 8),0x1000);
  return;
}


