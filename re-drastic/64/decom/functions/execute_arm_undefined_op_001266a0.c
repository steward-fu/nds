/*
 * Ghidra decompilation
 *
 * Function : execute_arm_undefined_op
 * Address  : 001266a0
 * Program  : drastic64
 */


void execute_arm_undefined_op(long param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  uVar2 = *(uint *)(param_1 + 0x23bc);
  uVar1 = *(uint *)(param_1 + 0x2104);
  uVar3 = uVar2 & 1;
  if ((uVar2 & 1) == 0) {
    if (uVar1 != 5) goto LAB_001266c0;
    *(uint *)(param_1 + 0x23a8) = uVar2;
LAB_00126740:
    uVar3 = *(uint *)(param_1 + 0x23c0);
    *(uint *)(param_1 + 0x20fc) = uVar3;
  }
  else {
    uVar2 = uVar2 & 0xfffffffe;
    *(uint *)(param_1 + 0x23bc) = uVar2;
    if (uVar1 == 5) {
      *(uint *)(param_1 + 0x23a8) = uVar2;
    }
    else {
LAB_001266c0:
      *(undefined8 *)(param_1 + (ulong)uVar1 * 8 + 0x2090) = *(undefined8 *)(param_1 + 0x23a4);
      if (uVar1 == 1) {
        *(undefined8 *)(param_1 + 0x23a0) = *(undefined8 *)(param_1 + 0x20d8);
        *(undefined8 *)(param_1 + 0x2398) = *(undefined8 *)(param_1 + 0x20d0);
        *(undefined8 *)(param_1 + 0x2390) = *(undefined8 *)(param_1 + 0x20c8);
      }
      else {
        *(undefined4 *)(param_1 + 0x23a4) = *(undefined4 *)(param_1 + 0x20b8);
      }
      *(undefined4 *)(param_1 + 0x2104) = 5;
      *(uint *)(param_1 + 0x23a8) = uVar2;
      if (uVar3 == 0) goto LAB_00126740;
    }
    uVar3 = *(uint *)(param_1 + 0x23c0);
    *(uint *)(param_1 + 0x20fc) = uVar3 | 0x20;
  }
  iVar4 = 4;
  if (*(int *)(param_1 + 0x210c) == 1) {
    iVar4 = *(int *)(*(long *)(param_1 + 0x2250) + 0x10) + 4;
  }
  *(int *)(param_1 + 0x23bc) = iVar4;
  *(uint *)(param_1 + 0x23c0) = uVar3 & 0xffffffc0 | 0x9b;
  return;
}


