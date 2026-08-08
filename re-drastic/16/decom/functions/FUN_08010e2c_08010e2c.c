/*
 * Ghidra decompilation
 *
 * Function : FUN_08010e2c
 * Address  : 08010e2c
 * Program  : drastic16
 */


void FUN_08010e2c(int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  if (*(void **)(param_1 + 0xfba00) != (void *)0x0) {
    free(*(void **)(param_1 + 0xfba00));
  }
  if (*(void **)(param_1 + 0xaf140) != (void *)0x0) {
    free(*(void **)(param_1 + 0xaf140));
  }
  if (*(void **)(param_1 + 0xef17c) != (void *)0x0) {
    free(*(void **)(param_1 + 0xef17c));
  }
  uVar3 = 0x8000000;
  *(undefined4 *)(param_1 + 0xfba14) = 0;
  *(undefined4 *)(param_1 + 0xfba00) = 0;
  *(undefined4 *)(param_1 + 0xaf140) = 0;
  *(undefined4 *)(param_1 + 0xef17c) = 0;
  do {
    uVar1 = uVar3 >> 0x17;
    uVar3 = uVar3 + 0x800000;
    *(undefined4 *)(param_1 + 0xfba34 + uVar1 * 0x30) = 0x7fffff;
    iVar4 = param_1 + 0xfba34 + uVar1 * 0x30;
    iVar2 = param_1 + 0xfc034 + uVar1 * 0x30;
    *(undefined *)(iVar4 + 0x2c) = 2;
    *(undefined **)(iVar4 + 4) = &LAB_0800667c;
    *(undefined **)(iVar4 + 8) = &LAB_0800669c;
    *(undefined **)(iVar4 + 0xc) = &LAB_080066bc;
    *(undefined4 *)(iVar4 + 0x1c) = 0;
    *(undefined *)(iVar4 + 0x2d) = 3;
    *(undefined4 *)(iVar4 + 0x20) = 0;
    *(undefined **)(iVar4 + 0x24) = &LAB_08006888;
    *(undefined **)(iVar4 + 0x28) = &LAB_08006888;
    *(undefined4 *)(param_1 + 0xfc034 + uVar1 * 0x30) = 0x7fffff;
    *(undefined *)(iVar2 + 0x2c) = 2;
    *(undefined *)(iVar2 + 0x2d) = 3;
    *(undefined4 *)(iVar2 + 0x1c) = 0;
    *(undefined4 *)(iVar2 + 0x20) = 0;
    *(undefined **)(iVar2 + 0x24) = &LAB_08006888;
    *(undefined **)(iVar2 + 0x28) = &LAB_08006888;
    *(undefined **)(iVar2 + 4) = &LAB_080066d8;
    *(undefined **)(iVar2 + 8) = &LAB_080066f0;
    *(undefined **)(iVar2 + 0xc) = &LAB_08006708;
  } while (uVar3 != 0xb000000);
  return;
}


