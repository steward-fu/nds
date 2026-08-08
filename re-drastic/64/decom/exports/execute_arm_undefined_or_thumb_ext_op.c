/*
 * Ghidra decompilation
 *
 * Function : execute_arm_undefined_or_thumb_ext_op
 * Address  : 00127200
 * Program  : drastic64
 */


void execute_arm_undefined_or_thumb_ext_op(long param_1,ulong param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  
  uVar1 = *(uint *)(param_1 + 0x23c0);
  if ((uVar1 >> 5 & 1) != 0) {
    uVar6 = param_2 >> 5 & 0x7ffffff;
    if (((uint)param_2 >> 0x10 & 1) != 0) {
      uVar5 = ((uint)uVar6 & 0x7ff) * 2 + *(int *)(param_1 + 0x23a8);
      if (((uint)param_2 >> 0x11 & 1) == 0) {
        uVar5 = uVar5 & 0xfffffffc;
        *(uint *)(param_1 + 0x23c0) = uVar1 & 0xffffffdf;
      }
      uVar1 = *(uint *)(param_1 + 0x23bc);
      *(uint *)(param_1 + 0x23bc) = uVar5;
      *(uint *)(param_1 + 0x23a8) = uVar1 | 1;
      return;
    }
    *(int *)(param_1 + 0x23a8) =
         *(int *)(param_1 + 0x23ac) + (int)((long)(uVar6 << 0x35) >> 0x35) * 0x1000;
    return;
  }
  uVar3 = *(uint *)(param_1 + 0x23bc);
  uVar2 = *(uint *)(param_1 + 0x2104);
  uVar5 = uVar3 & 1;
  if ((uVar3 & 1) == 0) {
    if (uVar2 == 5) {
      *(uint *)(param_1 + 0x23a8) = uVar3;
    }
    else {
LAB_0012726c:
      *(undefined8 *)(param_1 + (ulong)uVar2 * 8 + 0x2090) = *(undefined8 *)(param_1 + 0x23a4);
      if (uVar2 == 1) {
        *(undefined8 *)(param_1 + 0x23a0) = *(undefined8 *)(param_1 + 0x20d8);
        *(undefined8 *)(param_1 + 0x2398) = *(undefined8 *)(param_1 + 0x20d0);
        *(undefined8 *)(param_1 + 0x2390) = *(undefined8 *)(param_1 + 0x20c8);
      }
      else {
        *(undefined4 *)(param_1 + 0x23a4) = *(undefined4 *)(param_1 + 0x20b8);
      }
      *(undefined4 *)(param_1 + 0x2104) = 5;
      *(uint *)(param_1 + 0x23a8) = uVar3;
      if (uVar5 != 0) goto LAB_001272a0;
    }
    *(uint *)(param_1 + 0x20fc) = uVar1;
  }
  else {
    uVar3 = uVar3 & 0xfffffffe;
    *(uint *)(param_1 + 0x23bc) = uVar3;
    if (uVar2 != 5) goto LAB_0012726c;
    *(uint *)(param_1 + 0x23a8) = uVar3;
LAB_001272a0:
    *(uint *)(param_1 + 0x20fc) = uVar1 | 0x20;
  }
  iVar4 = 4;
  if (*(int *)(param_1 + 0x210c) == 1) {
    iVar4 = *(int *)(*(long *)(param_1 + 0x2250) + 0x10) + 4;
  }
  *(int *)(param_1 + 0x23bc) = iVar4;
  *(uint *)(param_1 + 0x23c0) = uVar1 & 0xffffffc0 | 0x9b;
  return;
}


