/*
 * Ghidra decompilation
 *
 * Function : arm64_load_block_extended
 * Address  : 0018dfa0
 * Program  : drastic64
 */


long arm64_load_block_extended(int param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  long in_x9;
  undefined4 in_w12;
  undefined4 in_w13;
  undefined4 in_w14;
  undefined4 in_w15;
  undefined4 in_w16;
  undefined4 in_w17;
  undefined4 in_w18;
  undefined4 unaff_w19;
  undefined8 unaff_x20;
  undefined4 *puVar3;
  int unaff_w21;
  long unaff_x28;
  undefined8 unaff_x30;
  
  *(undefined4 *)(unaff_x28 + 0x2290) = in_w12;
  *(undefined4 *)(unaff_x28 + 0x2334) = unaff_w19;
  *(undefined8 *)(unaff_x28 + 0x2338) = unaff_x20;
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
  puVar3 = (undefined4 *)(in_x9 + -0x120);
  do {
    uVar2 = extended_load32(unaff_x28 + 0x23d0,param_1);
    *puVar3 = uVar2;
    unaff_w21 = unaff_w21 + -1;
    puVar3 = puVar3 + 1;
    param_1 = param_1 + 4;
  } while (unaff_w21 != 0);
  nzcv = (ulong)*(uint *)(unaff_x28 + 0x2354);
  return unaff_x28 + 0x22b0;
}


