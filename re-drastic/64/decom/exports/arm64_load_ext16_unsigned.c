/*
 * Ghidra decompilation
 *
 * Function : arm64_load_ext16_unsigned
 * Address  : 0018d174
 * Program  : drastic64
 */


undefined2 arm64_load_ext16_unsigned(uint param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined2 uVar3;
  long in_x9;
  undefined4 in_w12;
  undefined4 in_w13;
  undefined4 in_w14;
  undefined4 in_w15;
  undefined4 in_w16;
  undefined4 in_w17;
  undefined4 in_w18;
  long unaff_x28;
  undefined8 unaff_x30;
  
  if (param_1 >> 0x18 != 4) {
    lVar1 = *(long *)(in_x9 + (ulong)(param_1 >> 0xb) * 8) * 4;
    if (lVar1 != 0) {
      return *(undefined2 *)(lVar1 + (ulong)(param_1 & 0xfffffffe));
    }
    *(undefined4 *)(in_x9 + -0xe0) = in_w12;
    *(undefined4 *)(in_x9 + -0xdc) = in_w13;
    *(undefined4 *)(in_x9 + -0xd8) = in_w14;
    *(undefined4 *)(in_x9 + -0xd4) = in_w15;
    *(undefined4 *)(in_x9 + -0xd0) = in_w16;
    *(undefined4 *)(in_x9 + -0xcc) = in_w17;
    *(undefined4 *)(unaff_x28 + 0x2308) = in_w18;
    *(undefined8 *)(unaff_x28 + 0x2368) = unaff_x30;
    uVar2 = nzcv;
    *(int *)(unaff_x28 + 0x2354) = (int)uVar2;
    *(undefined4 *)(unaff_x28 + 0x2290) = in_w12;
    uVar3 = extended_load16();
    nzcv = (ulong)*(uint *)(unaff_x28 + 0x2354);
    return uVar3;
  }
  if ((param_1 & 0x7f00) == 0) {
    return *(undefined2 *)(*(long *)(unaff_x28 + 0x2080) + (ulong)(param_1 & 0x7ffe));
  }
  *(undefined4 *)(in_x9 + -0xe0) = in_w12;
  *(undefined4 *)(in_x9 + -0xdc) = in_w13;
  *(undefined4 *)(in_x9 + -0xd8) = in_w14;
  *(undefined4 *)(in_x9 + -0xd4) = in_w15;
  *(undefined4 *)(in_x9 + -0xd0) = in_w16;
  *(undefined4 *)(in_x9 + -0xcc) = in_w17;
  *(undefined4 *)(unaff_x28 + 0x2308) = in_w18;
  *(undefined8 *)(unaff_x28 + 0x2368) = unaff_x30;
  uVar2 = nzcv;
  *(int *)(unaff_x28 + 0x2354) = (int)uVar2;
  *(undefined4 *)(unaff_x28 + 0x2290) = in_w12;
  uVar3 = load_io_register_arm9_16(*(undefined8 *)(unaff_x28 + 0x2260),param_1 & 0x7ffe);
  nzcv = (ulong)*(uint *)(unaff_x28 + 0x2354);
  return uVar3;
}


