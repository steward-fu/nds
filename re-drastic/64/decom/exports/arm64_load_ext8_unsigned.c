/*
 * Ghidra decompilation
 *
 * Function : arm64_load_ext8_unsigned
 * Address  : 0018d0a4
 * Program  : drastic64
 */


undefined arm64_load_ext8_unsigned(ulong param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined uVar3;
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
  
  if (((uint)(param_1 >> 0x18) & 0xff) == 4) {
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
    uVar3 = load_io_register_arm9_8(*(undefined8 *)(unaff_x28 + 0x2260),(uint)param_1 & 0x7fffff);
    nzcv = (ulong)*(uint *)(unaff_x28 + 0x2354);
    return uVar3;
  }
  lVar1 = *(long *)(in_x9 + (param_1 >> 0xb & 0x1fffff) * 8) * 4;
  if (lVar1 != 0) {
    return *(undefined *)(lVar1 + (param_1 & 0xffffffff));
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
  uVar3 = extended_load8();
  nzcv = (ulong)*(uint *)(unaff_x28 + 0x2354);
  return uVar3;
}


