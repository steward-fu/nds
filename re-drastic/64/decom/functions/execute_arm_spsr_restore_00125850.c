/*
 * Ghidra decompilation
 *
 * Function : execute_arm_spsr_restore
 * Address  : 00125850
 * Program  : drastic64
 */


void execute_arm_spsr_restore(long param_1)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  ulong uVar7;
  int iVar8;
  
  if ((*(uint *)(param_1 + 0x23c0) & 0x1f) == 0x10) {
    return;
  }
  uVar2 = *(uint *)(param_1 + 0x2104);
  uVar3 = *(uint *)(param_1 + (ulong)uVar2 * 4 + 0x20e8);
  *(uint *)(param_1 + 0x23c0) = uVar3;
  uVar5 = (uVar3 & 0x1f) - 0x10;
  if (uVar5 < 0x10) {
    uVar5 = *(uint *)(&CSWTCH_70 + (ulong)uVar5 * 4);
    uVar7 = (ulong)uVar5;
    if (uVar2 != uVar5) {
      if (uVar5 != 1) goto LAB_00125898;
      *(undefined8 *)(param_1 + 0x20c8) = *(undefined8 *)(param_1 + 0x2390);
      *(undefined8 *)(param_1 + 0x20d0) = *(undefined8 *)(param_1 + 0x2398);
      *(undefined8 *)(param_1 + 0x20d8) = *(undefined8 *)(param_1 + 0x23a0);
      *(undefined4 *)(param_1 + 0x20e0) = *(undefined4 *)(param_1 + 0x23a8);
      if (uVar2 != 1) goto LAB_001258b4;
LAB_001259c4:
      *(int *)(param_1 + 0x2104) = (int)uVar7;
      *(undefined8 *)(param_1 + 0x23a0) = *(undefined8 *)(param_1 + 0x20d8);
      *(undefined8 *)(param_1 + 0x2398) = *(undefined8 *)(param_1 + 0x20d0);
      *(undefined8 *)(param_1 + 0x2390) = *(undefined8 *)(param_1 + 0x20c8);
      *(undefined4 *)(param_1 + 0x23a8) = *(undefined4 *)(param_1 + 0x20e0);
    }
  }
  else {
    uVar7 = 6;
    if (uVar2 != 6) {
LAB_00125898:
      *(undefined8 *)(param_1 + ((ulong)uVar2 + 0x412) * 8) = *(undefined8 *)(param_1 + 0x23a4);
      if (uVar2 == 1) goto LAB_001259c4;
LAB_001258b4:
      lVar1 = uVar7 * 8 + 0x2090;
      *(undefined4 *)(param_1 + 0x23a4) = *(undefined4 *)(param_1 + lVar1);
      uVar4 = *(undefined4 *)(param_1 + lVar1 + 4);
      *(int *)(param_1 + 0x2104) = (int)uVar7;
      *(undefined4 *)(param_1 + 0x23a8) = uVar4;
    }
  }
  if (((uVar3 >> 7 & 1) != 0) || (*(int *)(param_1 + 0x2108) == 0)) {
    return;
  }
  uVar2 = *(uint *)(param_1 + 0x23bc);
  *(uint *)(param_1 + 0x22a8) = *(uint *)(param_1 + 0x22a8) | 8;
  iVar6 = (int)uVar7;
  if ((uVar2 & 1) == 0) {
    iVar8 = uVar2 + 4;
    if (iVar6 == 2) {
      *(int *)(param_1 + 0x23a8) = iVar8;
    }
    else {
LAB_00125908:
      *(undefined8 *)(param_1 + uVar7 * 8 + 0x2090) = *(undefined8 *)(param_1 + 0x23a4);
      if (iVar6 == 1) {
        *(undefined8 *)(param_1 + 0x23a0) = *(undefined8 *)(param_1 + 0x20d8);
        *(undefined8 *)(param_1 + 0x2398) = *(undefined8 *)(param_1 + 0x20d0);
        *(undefined8 *)(param_1 + 0x2390) = *(undefined8 *)(param_1 + 0x20c8);
      }
      else {
        *(undefined4 *)(param_1 + 0x23a4) = *(undefined4 *)(param_1 + 0x20a0);
      }
      *(undefined4 *)(param_1 + 0x2104) = 2;
      *(int *)(param_1 + 0x23a8) = iVar8;
      if ((uVar2 & 1) != 0) goto LAB_0012593c;
    }
    *(uint *)(param_1 + 0x20f0) = uVar3;
  }
  else {
    *(uint *)(param_1 + 0x23bc) = uVar2 & 0xfffffffe;
    iVar8 = (uVar2 & 0xfffffffe) + 4;
    if (iVar6 != 2) goto LAB_00125908;
    *(int *)(param_1 + 0x23a8) = iVar8;
LAB_0012593c:
    *(uint *)(param_1 + 0x20f0) = uVar3 | 0x20;
  }
  iVar6 = 0x18;
  if (*(int *)(param_1 + 0x210c) == 1) {
    iVar6 = *(int *)(*(long *)(param_1 + 0x2250) + 0x10) + 0x18;
  }
  *(int *)(param_1 + 0x23bc) = iVar6;
  *(uint *)(param_1 + 0x23c0) = uVar3 & 0xffffffc0 | 0x92;
  return;
}


