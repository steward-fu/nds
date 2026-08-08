/*
 * Ghidra decompilation
 *
 * Function : FUN_0800d88c
 * Address  : 0800d88c
 * Program  : drastic16
 */


void FUN_0800d88c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  ushort uVar1;
  undefined4 extraout_r1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  
  uVar1 = *(ushort *)(param_1 + 0x1b2c0);
  *(undefined *)(param_1 + 0xfc81c) = 1;
  if ((uVar1 & 3) == 1) {
    iVar4 = *(int *)(param_1 + 0x1b2d8);
    uVar6 = *(undefined4 *)(param_1 + 0x1b2d0);
    uVar7 = *(undefined4 *)(param_1 + 0x1b2d4);
    if (iVar4 != 0) {
      iVar2 = iVar4 >> 0x1f;
      uVar8 = __aeabi_ldivmod(uVar6,uVar7,iVar4,iVar2,param_4);
      *(undefined8 *)(param_1 + 0x1b2e0) = uVar8;
      __aeabi_ldivmod(uVar6,uVar7);
      *(int *)(param_1 + 0x1b2e8) = iVar4;
      *(int *)(param_1 + 0x1b2ec) = iVar2;
      return;
    }
  }
  else if ((uVar1 & 3) == 0) {
    iVar4 = *(int *)(param_1 + 0x1b2d8);
    uVar6 = *(undefined4 *)(param_1 + 0x1b2d0);
    if (iVar4 != 0) {
      uVar7 = __aeabi_idiv(uVar6,iVar4);
      uVar8 = VectorShiftRight(CONCAT44(uVar7,uVar7),0x20);
      *(undefined8 *)(param_1 + 0x1b2e0) = uVar8;
      __aeabi_idivmod(uVar6,iVar4);
      uVar8 = VectorShiftRight(CONCAT44(extraout_r1,extraout_r1),0x20);
      *(undefined8 *)(param_1 + 0x1b2e8) = uVar8;
      return;
    }
  }
  else {
    uVar3 = *(uint *)(param_1 + 0x1b2d8);
    uVar5 = *(uint *)(param_1 + 0x1b2dc);
    uVar6 = *(undefined4 *)(param_1 + 0x1b2d0);
    uVar7 = *(undefined4 *)(param_1 + 0x1b2d4);
    if ((uVar3 | uVar5) != 0) {
      uVar8 = __aeabi_ldivmod(uVar6,uVar7,uVar3,uVar5,param_4);
      *(undefined8 *)(param_1 + 0x1b2e0) = uVar8;
      __aeabi_ldivmod(uVar6,uVar7);
      *(uint *)(param_1 + 0x1b2e8) = uVar3;
      *(uint *)(param_1 + 0x1b2ec) = uVar5;
      return;
    }
  }
  if ((uVar1 & 0x4000) != 0) {
    *(undefined8 *)(param_1 + 0x1b2e0) = 0;
    return;
  }
  uVar8 = SIMDExpandImmediate(0,0xe,0xff);
  *(undefined8 *)(param_1 + 0x1b2e0) = uVar8;
  return;
}


