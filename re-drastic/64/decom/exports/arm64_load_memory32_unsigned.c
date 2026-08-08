/*
 * Ghidra decompilation
 *
 * Function : arm64_load_memory32_unsigned
 * Address  : 0018cfe0
 * Program  : drastic64
 */


ulong arm64_load_memory32_unsigned(ulong param_1)

{
  long lVar1;
  uint uVar2;
  undefined8 uVar3;
  uint uVar4;
  ulong uVar5;
  long in_x9;
  undefined4 in_w12;
  undefined4 in_w13;
  undefined4 in_w14;
  undefined4 in_w15;
  undefined4 in_w16;
  undefined4 in_w17;
  undefined4 in_w18;
  undefined4 unaff_w19;
  long unaff_x28;
  undefined8 unaff_x30;
  
  uVar2 = (uint)param_1 & 3;
  if ((param_1 & 3) != 0) {
    *(undefined8 *)(unaff_x28 + 0x2330) = unaff_x30;
    *(undefined4 *)(unaff_x28 + 0x2338) = unaff_w19;
    uVar4 = arm64_load_memory32_unsigned((uint)param_1 & 0xfffffffc);
    return (ulong)(uVar4 >> uVar2 * 8 | uVar4 << uVar2 * -8 + 0x20);
  }
  lVar1 = *(long *)(in_x9 + (param_1 >> 0xb & 0x1fffff) * 8) * 4;
  if (lVar1 != 0) {
    return (ulong)*(uint *)(lVar1 + (param_1 & 0xffffffff));
  }
  *(undefined4 *)(in_x9 + -0xe0) = in_w12;
  *(undefined4 *)(in_x9 + -0xdc) = in_w13;
  *(undefined4 *)(in_x9 + -0xd8) = in_w14;
  *(undefined4 *)(in_x9 + -0xd4) = in_w15;
  *(undefined4 *)(in_x9 + -0xd0) = in_w16;
  *(undefined4 *)(in_x9 + -0xcc) = in_w17;
  *(undefined4 *)(unaff_x28 + 0x2308) = in_w18;
  *(undefined8 *)(unaff_x28 + 0x2368) = unaff_x30;
  uVar3 = nzcv;
  *(int *)(unaff_x28 + 0x2354) = (int)uVar3;
  *(undefined4 *)(unaff_x28 + 0x2290) = in_w12;
  uVar5 = extended_load32();
  nzcv = (ulong)*(uint *)(unaff_x28 + 0x2354);
  return uVar5;
}


