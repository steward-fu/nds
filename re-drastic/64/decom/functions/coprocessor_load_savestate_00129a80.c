/*
 * Ghidra decompilation
 *
 * Function : coprocessor_load_savestate
 * Address  : 00129a80
 * Program  : drastic64
 */


void coprocessor_load_savestate(long param_1,long param_2)

{
  bool bVar1;
  uint uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  
  uVar5 = **(uint **)(param_2 + 0x20);
  *(uint *)(param_1 + 0x14) = uVar5;
  uVar4 = uVar5 & 0x2000;
  lVar6 = *(long *)(param_2 + 0x20);
  *(long *)(param_2 + 0x20) = lVar6 + 4;
  uVar8 = NEON_ushl(CONCAT44(uVar5,uVar5),0xffffffeffffffff0,4);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(lVar6 + 4);
  uVar7 = NEON_ushl(CONCAT44(uVar5,uVar5),0xffffffedffffffee,4);
  lVar6 = *(long *)(param_2 + 0x20);
  if (uVar4 != 0) {
    uVar4 = 0xffff0000;
  }
  *(long *)(param_2 + 0x20) = lVar6 + 4;
  uVar2 = *(uint *)(lVar6 + 4);
  *(uint *)(param_1 + 0x1c) = uVar2;
  uVar5 = *(uint *)(param_1 + 0x10);
  *(long *)(param_2 + 0x20) = *(long *)(param_2 + 0x20) + 4;
  *(uint *)(param_1 + 0x10) = uVar4;
  *(ulong *)(param_1 + 0x24) = uVar8 & 0x100000001;
  *(ulong *)(param_1 + 0x30) = uVar7 & 0x100000001;
  if (uVar4 != uVar5) {
    __printf_chk(1,"Changing exception vector offset from %08x to %08x\n");
    uVar2 = *(uint *)(param_1 + 0x1c);
  }
  uVar4 = 0x200 << ((ulong)(uVar2 >> 1) & 0x1f);
  if (uVar4 < 0x1000) {
    uVar4 = 0x1000;
    *(undefined4 *)(param_1 + 0x38) = 0x1000;
  }
  else {
    *(uint *)(param_1 + 0x38) = uVar4;
  }
  remap_itcm(*(undefined8 *)(param_1 + 8),uVar4);
  uVar4 = *(uint *)(param_1 + 0x18) & 0xfffff000;
  *(uint *)(param_1 + 0x20) = uVar4;
  uVar5 = 0x200 << ((ulong)(*(uint *)(param_1 + 0x18) >> 1) & 0x1f);
  *(uint *)(param_1 + 0x2c) = uVar5;
  if (uVar5 < 0x1000) {
    uVar5 = 0x1000;
    *(undefined4 *)(param_1 + 0x2c) = 0x1000;
  }
  remap_dtcm(*(undefined8 *)(param_1 + 8),uVar4,uVar5);
  bVar1 = (uint)(*(int *)(param_1 + 0x20) + *(int *)(param_1 + 0x2c)) < 0x4000000;
  cVar3 = *(char *)(param_1 + 0x3c);
  *(bool *)(param_1 + 0x3c) = bVar1;
  if ((bool)cVar3 == bVar1) {
    return;
  }
  __printf_chk(1,"DTCM in mapped memory status changed (to %d)\n");
  return;
}


