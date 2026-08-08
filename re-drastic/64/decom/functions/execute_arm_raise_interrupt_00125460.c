/*
 * Ghidra decompilation
 *
 * Function : execute_arm_raise_interrupt
 * Address  : 00125460
 * Program  : drastic64
 */


void execute_arm_raise_interrupt(long param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = *(uint *)(param_1 + 0x23bc);
  uVar1 = *(uint *)(param_1 + 0x2104);
  if ((uVar3 & 1) == 0) {
    iVar2 = uVar3 + 4;
    if (uVar1 != 2) goto LAB_00125484;
    *(int *)(param_1 + 0x23a8) = iVar2;
LAB_00125508:
    uVar3 = *(uint *)(param_1 + 0x23c0);
    *(uint *)(param_1 + 0x20f0) = uVar3;
  }
  else {
    *(uint *)(param_1 + 0x23bc) = uVar3 & 0xfffffffe;
    iVar2 = (uVar3 & 0xfffffffe) + 4;
    if (uVar1 == 2) {
      *(int *)(param_1 + 0x23a8) = iVar2;
    }
    else {
LAB_00125484:
      *(undefined8 *)(param_1 + (ulong)uVar1 * 8 + 0x2090) = *(undefined8 *)(param_1 + 0x23a4);
      if (uVar1 == 1) {
        *(undefined8 *)(param_1 + 0x23a0) = *(undefined8 *)(param_1 + 0x20d8);
        *(undefined8 *)(param_1 + 0x2398) = *(undefined8 *)(param_1 + 0x20d0);
        *(undefined8 *)(param_1 + 0x2390) = *(undefined8 *)(param_1 + 0x20c8);
      }
      else {
        *(undefined4 *)(param_1 + 0x23a4) = *(undefined4 *)(param_1 + 0x20a0);
      }
      *(undefined4 *)(param_1 + 0x2104) = 2;
      *(int *)(param_1 + 0x23a8) = iVar2;
      if ((uVar3 & 1) == 0) goto LAB_00125508;
    }
    uVar3 = *(uint *)(param_1 + 0x23c0);
    *(uint *)(param_1 + 0x20f0) = uVar3 | 0x20;
  }
  iVar2 = 0x18;
  if (*(int *)(param_1 + 0x210c) == 1) {
    iVar2 = *(int *)(*(long *)(param_1 + 0x2250) + 0x10) + 0x18;
  }
  *(int *)(param_1 + 0x23bc) = iVar2;
  *(uint *)(param_1 + 0x23c0) = uVar3 & 0xffffffc0 | 0x92;
  return;
}


