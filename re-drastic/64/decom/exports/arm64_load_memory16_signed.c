/*
 * Ghidra decompilation
 *
 * Function : arm64_load_memory16_signed
 * Address  : 0018cf68
 * Program  : drastic64
 */


ulong arm64_load_memory16_signed(ulong param_1)

{
  long lVar1;
  undefined8 uVar2;
  short sVar3;
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
  
  lVar1 = *(long *)(in_x9 + (param_1 >> 0xb & 0x1fffff) * 8) * 4;
  if (lVar1 != 0) {
    return (long)*(short *)(lVar1 + (ulong)((uint)param_1 & 0xfffffffe));
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
  sVar3 = extended_load16();
  nzcv = (ulong)*(uint *)(unaff_x28 + 0x2354);
  return (ulong)(uint)(int)sVar3;
}


