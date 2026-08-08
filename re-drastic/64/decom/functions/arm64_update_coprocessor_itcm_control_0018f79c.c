/*
 * Ghidra decompilation
 *
 * Function : arm64_update_coprocessor_itcm_control
 * Address  : 0018f79c
 * Program  : drastic64
 */


ulong arm64_update_coprocessor_itcm_control(undefined8 param_1,uint param_2)

{
  undefined8 uVar1;
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
  
  *(undefined4 *)(in_x9 + -0xe0) = in_w12;
  *(undefined4 *)(in_x9 + -0xdc) = in_w13;
  *(undefined4 *)(in_x9 + -0xd8) = in_w14;
  *(undefined4 *)(in_x9 + -0xd4) = in_w15;
  *(undefined4 *)(in_x9 + -0xd0) = in_w16;
  *(undefined4 *)(in_x9 + -0xcc) = in_w17;
  *(undefined4 *)(unaff_x28 + 0x2308) = in_w18;
  *(undefined8 *)(unaff_x28 + 0x2368) = unaff_x30;
  uVar1 = nzcv;
  *(int *)(unaff_x28 + 0x2354) = (int)uVar1;
  *(uint *)(*(long *)(unaff_x28 + 0x2250) + 0x1c) = param_2 & 0x3e;
  update_coprocessor_itcm_control();
  nzcv = (ulong)*(uint *)(unaff_x28 + 0x2354);
  return (ulong)*(uint *)(unaff_x28 + 0x2354);
}


