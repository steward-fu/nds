/*
 * Ghidra decompilation
 *
 * Function : update_coprocessor_control
 * Address  : 001295b0
 * Program  : drastic64
 */


undefined8 update_coprocessor_control(long param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar2 = *(uint *)(param_1 + 0x14);
  uVar1 = uVar2 & 0x2000;
  if (uVar1 != 0) {
    uVar1 = 0xffff0000;
  }
  uVar3 = *(uint *)(param_1 + 0x10);
  uVar5 = NEON_ushl(CONCAT44(uVar2,uVar2),0xffffffeffffffff0,4);
  uVar4 = NEON_ushl(CONCAT44(uVar2,uVar2),0xffffffedffffffee,4);
  *(uint *)(param_1 + 0x10) = uVar1;
  *(ulong *)(param_1 + 0x24) = uVar5 & 0x100000001;
  *(ulong *)(param_1 + 0x30) = uVar4 & 0x100000001;
  if (uVar3 == uVar1) {
    return 0;
  }
  __printf_chk(1,"Changing exception vector offset from %08x to %08x\n");
  return 1;
}


