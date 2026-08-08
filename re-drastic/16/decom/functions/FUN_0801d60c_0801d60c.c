/*
 * Ghidra decompilation
 *
 * Function : FUN_0801d60c
 * Address  : 0801d60c
 * Program  : drastic16
 */


void FUN_0801d60c(int param_1)

{
  bool bVar1;
  uint uVar2;
  char cVar3;
  
  *(undefined *)(param_1 + 0x34) = 1;
  *(undefined8 *)(param_1 + 8) = 0x12078ffff0000;
  *(undefined8 *)(param_1 + 0x10) = 0x20027e000a;
  *(undefined8 *)(param_1 + 0x18) = 0x1027e0000;
  *(undefined8 *)(param_1 + 0x20) = 0x400000000000;
  *(undefined8 *)(param_1 + 0x28) = 0;
  FUN_0800d114(*(undefined4 *)(param_1 + 4),0x27e0000,0x4000);
  cVar3 = *(char *)(param_1 + 0x34);
  bVar1 = (uint)(*(int *)(param_1 + 0x24) + *(int *)(param_1 + 0x18)) < 0x4000000;
  *(bool *)(param_1 + 0x34) = bVar1;
  if (bVar1 != (bool)cVar3) {
    printf("DTCM in mapped memory status changed (to %d)\n");
  }
  uVar2 = 0x200 << ((uint)(*(int *)(param_1 + 0x14) << 0x1a) >> 0x1b);
  *(uint *)(param_1 + 0x30) = uVar2;
  if (uVar2 < 0x1000) {
    *(undefined4 *)(param_1 + 0x30) = 0x1000;
  }
  FUN_0800cbc4(*(undefined4 *)(param_1 + 4));
  return;
}


