/*
 * Ghidra decompilation
 *
 * Function : FUN_0807be30
 * Address  : 0807be30
 * Program  : drastic16
 */


uint FUN_0807be30(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 unaff_r4;
  undefined4 unaff_r10;
  int unaff_r11;
  undefined4 in_r12;
  undefined4 in_lr;
  bool in_OV;
  
  if ((param_1 & 3) != 0) {
    *(undefined4 *)(unaff_r11 + -0x134) = unaff_r4;
    *(undefined4 *)(unaff_r11 + -0xd4) = in_lr;
    uVar3 = FUN_0807be30(param_1 & 0xfffffffc);
    if ((param_1 & 2) != 0) {
      uVar3 = uVar3 >> 0x10 | uVar3 << 0x10;
    }
    if ((param_1 & 1) != 0) {
      uVar3 = uVar3 >> 8 | uVar3 << 0x18;
    }
    return uVar3;
  }
  iVar1 = *(int *)(unaff_r11 + (param_1 >> 0xb) * 4) * 4;
  if (iVar1 == 0) {
    if (in_OV) {
      uVar2 = 0x10000000;
    }
    else {
      uVar2 = 0;
    }
    *(undefined4 *)(unaff_r11 + -0xc4) = uVar2;
    *(undefined4 *)(unaff_r11 + -0x140) = param_3;
    *(undefined4 *)(unaff_r11 + -0x13c) = param_4;
    *(undefined4 *)(unaff_r11 + -0x138) = in_r12;
    *(undefined4 *)(unaff_r11 + -0x14) = unaff_r10;
    *(undefined4 *)(unaff_r11 + -200) = in_lr;
    *(BADSPACEBASE **)(unaff_r11 + -0xd0) = register0x00000054;
    uVar3 = FUN_0800f31c();
    return uVar3;
  }
  return *(uint *)(param_1 + iVar1);
}


