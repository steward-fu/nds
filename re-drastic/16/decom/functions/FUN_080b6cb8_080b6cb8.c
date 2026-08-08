/*
 * Ghidra decompilation
 *
 * Function : FUN_080b6cb8
 * Address  : 080b6cb8
 * Program  : drastic16
 */


void FUN_080b6cb8(void *param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  memset(param_1,0,0x125c0);
  *(undefined4 *)((int)param_1 + 0xc) = 0x2000000;
  *(undefined4 *)((int)param_1 + 0xc234) = 0;
  *(undefined4 *)((int)param_1 + 0xc238) = 3;
  *(undefined4 *)((int)param_1 + 0xc22c) = 0;
  *(undefined4 *)((int)param_1 + 0xc28c) = 0;
  *(undefined *)((int)param_1 + 0xc4a1) = 1;
  *(undefined4 *)((int)param_1 + 0xe594) = 4;
  uVar1 = SIMDExpandImmediate(1,6,0x80);
  *(undefined8 *)((int)param_1 + 0xc4b8) = uVar1;
  uVar1 = SIMDExpandImmediate(1,6,0x80);
  *(undefined8 *)((int)param_1 + 0xc4c0) = uVar1;
  *(undefined4 *)((int)param_1 + 0xc23c) = 2;
  uVar2 = FUN_080d64a0();
  *(undefined4 *)((int)param_1 + 0x105a0) = uVar2;
  *(undefined4 *)((int)param_1 + 0x4010) = 1;
  return;
}


