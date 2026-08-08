/*
 * Ghidra decompilation
 *
 * Function : FUN_080c4a20
 * Address  : 080c4a20
 * Program  : drastic16
 */


void FUN_080c4a20(int param_1)

{
  short sVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  undefined *puVar5;
  int local_1c;
  int local_18;
  int local_14;
  
  memset((void *)(param_1 + 0x66c),0,0x100);
  FUN_080c4510(param_1 + 0x4a8c);
  uVar3 = *(uint *)(param_1 + 0x660);
  if (0xb < (int)uVar3) {
    uVar3 = 0xc;
  }
  *(uint *)(param_1 + 0x668) = ~uVar3;
  uVar2 = FUN_080d30a4(param_1 + 0x4a8c);
  *(undefined4 *)(param_1 + 0x64c) = uVar2;
  *(undefined4 *)(param_1 + 0x644) = *(undefined4 *)(param_1 + 0x64c);
  iVar4 = *(int *)(param_1 + 0x644);
  *(undefined *)(iVar4 + 8) = 0;
  *(undefined *)(iVar4 + 9) = 0;
  *(undefined *)(iVar4 + 10) = 0;
  *(undefined *)(iVar4 + 0xb) = 0;
  *(undefined4 *)(param_1 + 0x65c) = *(undefined4 *)(param_1 + 0x660);
  puVar5 = *(undefined **)(param_1 + 0x644);
  *puVar5 = 0;
  puVar5[1] = 1;
  iVar4 = *(int *)(param_1 + 0x644);
  *(undefined *)(iVar4 + 2) = 1;
  *(undefined *)(iVar4 + 3) = 1;
  iVar4 = *(int *)(param_1 + 0x644);
  uVar2 = FUN_080d2f90(param_1 + 0x4a8c,0x80);
  *(undefined4 *)(iVar4 + 4) = uVar2;
  *(undefined4 *)(param_1 + 0x650) = *(undefined4 *)(iVar4 + 4);
  *(undefined4 *)(param_1 + 0x664) = *(undefined4 *)(param_1 + 0x668);
  local_14 = 0;
  *(undefined *)(param_1 + 0xa6d) = 0;
  for (; local_14 < 0x100; local_14 = local_14 + 1) {
    *(char *)(*(int *)(*(int *)(param_1 + 0x644) + 4) + local_14 * 6) = (char)local_14;
    *(undefined *)(*(int *)(*(int *)(param_1 + 0x644) + 4) + local_14 * 6 + 1) = 1;
    iVar4 = *(int *)(*(int *)(param_1 + 0x644) + 4) + local_14 * 6;
    *(undefined *)(iVar4 + 2) = 0;
    *(undefined *)(iVar4 + 3) = 0;
    *(undefined *)(iVar4 + 4) = 0;
    *(undefined *)(iVar4 + 5) = 0;
  }
  for (local_14 = 0; local_14 < 0x80; local_14 = local_14 + 1) {
    for (local_18 = 0; local_18 < 8; local_18 = local_18 + 1) {
      for (local_1c = 0; local_1c < 0x40; local_1c = local_1c + 8) {
        sVar1 = __aeabi_idiv(*(undefined2 *)(&DAT_080ee5a0 + local_18 * 2),local_14 + 2);
        *(short *)(param_1 + (local_14 * 0x40 + local_18 + local_1c + 0x538) * 2) = 0x4000 - sVar1;
      }
    }
  }
  for (local_14 = 0; local_14 < 0x19; local_14 = local_14 + 1) {
    for (local_18 = 0; local_18 < 0x10; local_18 = local_18 + 1) {
      FUN_080d2638(param_1 + (local_14 * 0x10 + local_18) * 4,local_14 * 5 + 10);
    }
  }
  return;
}


